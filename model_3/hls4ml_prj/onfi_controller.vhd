----------------------------------------------------------------------
----------
-- Company: NASA Johnson Space Center / Avionic Systems Division
-- File: test1.vhd
-- Description: Main test module (top level) for FPGA/DAC/FLASH
project
-- Targeted device: <Family::IGLOO> <Die::M1AGL1000V2> <Package::484
FBGA>
-- Author: Robert Shuler / EV5 / x35258 / robert.l.shuler@nasa.gov
-- and April Gonzalez / intern
----------------------------------------------------------------------
----------
--
**********************************************************************
******************************
-- ********** NOTE: BE SURE TO CHANGE DBCTR COMPARE BETWEEN BOARD AND 
SIMULATION VERSIONS *************
--**********************************************************************
******************************
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
entity test1 is port (
-- dev kit signals
CLK : IN std_logic; -- E4
RESB : IN std_logic; -- T9
PORB : IN std_logic; -- V7
SW : IN std_logic_vector(9 downto 0); --
D18,D17,E17,F16,D15,G14,E14,F14,G13,D14 (0 .. 9 order)
LED : OUT std_logic_vector(9 downto 0); --
E10,F10,U8,W5,U7,V6,U5,U4,V4,V5 (0 .. 9 order)
-- ADC/NAND FLASH board
SDO : IN std_logic_vector(4 downto 1); -- R16,T16,T1,U1 (1 .. 4
order)
CNVRT : OUT std_logic; -- M3
SCLK : OUT std_logic; -- W2
NF_WP : OUT std_logic; -- AB13 write protect active low
(WPB)
NF_WE : OUT std_logic; -- AB6 write enable (WEB) host ->
flash when 0
NF_ALE: OUT std_logic; -- AB12 address latch enable
NF_CLE: OUT std_logic; -- AA7 command latch enable
NF_CE : OUT std_logic; -- AA16 chip enable active low
(CEB)
NF_RE : OUT std_logic; -- AA6 read enable active low
(REB) - flash -> host when 0 (opposite of WE)
NF_RB : IN std_logic; -- Y2 ready/busy active low 0 =>
ready
NF_D : INOUT std_logic_vector(15 downto 0); --
A17,A11,B13,B6,B17,B10,AB9,AB17,A7,A16,A10,B16,B7,AB8,AB16,AB7 (0 ..
15 order)
--Connector P1(could not use connector P2 due to it being lvds diff
pair)
OUTRESET : OUT std_logic; -- G11 pin 8
OUTWRITE : OUT std_logic; -- H11 pin 12
OUTREAD : OUT std_logic; -- G12 pin 16
OUTERASE : OUT std_logic; -- D16 pin 22
OUTSTATE : OUT std_logic_vector(3 downto 0) -- E15 pin 24, N5 pin
26, K4 pin 28, K6 pin 30
); end test1;
architecture behavior of test1 is
**********************************************************************
******************************************
signal SIMULATION : boolean := TRUE; -- set to TRUE only if
running Modelsim, else FALSE (controls debounce)
constant RWAIT : integer := 5; -- use 5 for sim, 500 for
synthesis
--
**********************************************************************
******************************************
component CLKINT port(
A : in std_logic;
Y : out std_logic
); end component;
-- internal signals for top module
signal RESET : std_logic; -- detect reset condition from
external lines
signal DORESET : std_logic_vector(3 downto 0) := x"0"; -- FLASH
memory reset sequence state variable
signal DOSTATUS : std_logic_vector(3 downto 0) :=x"0"; -- Read
status
signal NFSTATUS : std_logic_vector(7 downto 0) := x"00"; -- status
byte
signal WAITRESET : integer range 0 to 1023 := 0; -- to create delay
between board and chip reset functions, see below more info
signal DOWE : std_logic := '0'; -- send NF_WE(b) negative
pulse in 1st half of clock cycle
signal DORE : std_logic := '0';
signal NFBUSY : std_logic := '0'; -- set to 1 when an operation
in progress on nand flash, or waiting NF_RB
signal NF_RB_LAST : std_logic := '1'; -- NF_RB from last clock
cycle (used to find when goes high after going low)
signal SW_DB : std_logic_vector(9 downto 0) :=(others => '0'); --
Debounce switches
signal DBCTR: std_logic_vector(19 downto 0):=(others => '0'); --
Counter for debounce
signal SB9LAST : std_logic := '0'; -- transition 0->1 on SW9
initiates WRITE operation
signal SB0LAST : std_logic := '0'; -- any transition reset
nfbusy
signal DOWRITE : std_logic_vector(3 downto 0) := x"0"; -- state
variable for PROGRAM PAGE
signal DOERASE : std_logic_vector(3 downto 0) := x"0"; -- state
variable for ERASE BLOCK
signal DONEALE : boolean := false; -- termination condition for
sending address bytes subroutine
signal DOREAD : std_logic_vector(3 downto 0) := x"0"; -- state
variable for READ operation
signal NFALE : std_logic := '0'; -- internal version of NF_ALE
so we can read it
signal NFCLE : std_logic := '0'; -- internal version of NF_CLE
so we can read it
signal tADL : integer range 0 to 3 := 0; -- counter for 3 clocks of
post address delay
signal tWHR : integer range 0 to 4 := 0; -- counter for 4 clocks of
post read status command
type BYTEARRAY5 is array (5 downto 1) of std_logic_vector(7 downto
0);
signal NFADR : BYTEARRAY5 := (x"00",x"00",x"00",x"00",x"00"); --
Flash address
alias NFCMD : std_logic_vector(7 downto 0) is NF_D(7 downto 0); --
command byte
signal iadr : integer range 1 to 6 := 1; -- index for 5 bytes of
address info (has to be integer to be an array index)
signal FDATA : std_logic_vector(15 downto 0):=(others => '0'); --
Flash data
type WORDARRAY255 is array (255 downto 0) of std_logic_vector(15
downto 0);--*****************
signal FDATAIN : WORDARRAY255; -- buffer for read
data**************
signal Fstartwrite : BOOLEAN := false; -- flag this as a write
cycle (address states shared with read/write/erase cycle)
signal FI : integer range 0 to 255 := 0; -- index to FDATAIN
signal FI_MAX : integer range 0 to 255 := 255; -- max requested
input words
signal Fstarterase : boolean := false; -- flag this as a erase
cycle
signal CLK2A : std_logic := '0'; -- half speed clock toggles
on leading edge of CLK (for delay compensation of WE)
signal CLK2B : std_logic := '0'; -- half speed clock toggles
on falling edge of CLK
signal CLKINV: std_logic := '0'; -- invert clk
begin
-- COMPONENT INSTANCES
CLKINT_0: CLKINT port map (A=>CLK, Y=>SCLK); -- (for ACTEL)
-- SCLK <= CLK; -- (for XILINX)
-- ASYNCHRONOUS LOGIC
RESET <= '1' when PORB = '0' or RESB = '0' else '0';
NF_CE <= '0'; -- permanently select our one flash
chip
NF_WP <= '1'; -- never write protected
NF_ALE <= NFALE; -- copy internal version to port
NF_CLE <= NFCLE; -- copy internal version to port
DONEALE <= NFALE = '0' and tADL = 0; -- termination (return) from
address bytes subroutine
OUTRESET <= '0' when DORESET = x"0" else '1';-- debug flag set if
RESET states active - pin 8

OUTWRITE <= DOWRITE(0); -- copy internal version to port -
pin 12
OUTREAD <= DOREAD(0); -- copy internal version to port -
pin 16
OUTERASE <= DOERASE(0); -- copy internal version to port -
pin 22
OUTSTATE <= DOWRITE when DOWRITE /= x"0"
else DOREAD when DOREAD /= x"0"
else DOERASE when DOERASE /= x"0";
-- the trouble with these is a trailing glitch since the DO signals
are later than the CLOCK
--NF_WE <= CLK nand DOWE; -- generate write to flash
clock during 1st half of clock cycle
--NF_RE <= CLK nand DORE; -- generate read from flash
clock the same way
-- try to fix by creating an approximately equally delayed clock as
the xor of 2 half speed clocks
NF_WE <= (CLK2A xor CLK2B) nand DOWE; -- generate write to flash
clock during 1st half of clock cycle
NF_RE <= (CLK2A xor CLK2B) nand DORE; -- generate read from flash
clock the same way
CLKINV <= not CLK; -- invert clk
-- CLOCKED LOGIC (SYNCHRONOUS) (sometimes called "sequential" which
is misleading)
process (CLKINV) begin if rising_edge(CLKINV) then
if RESET = '1' then
CLK2B <= '0';
else
if CLK2A = '1' then -- half speed clock on falling edge
for WE delay compensation
CLK2B <= '1';
else
CLK2B <= '0';
end if;
end if;
end if; end process;
process (CLK) begin if rising_edge(CLK) then -- INTERNAL CLK
CLOCK DOMAIN
if RESET = '1' then
LED <= SW;
NF_D <= x"0000";
NFBUSY <= '0';
NFCLE <= '0';
NFALE <= '0';
CLK2A <= '0';
DOERASE <= x"0";
DOSTATUS <= x"0";

DOWRITE <= x"0";
DOREAD <= x"0";
DORESET <= x"1";
DOWE <= '0';
DORE <= '0';
else
CLK2A <= not CLK2A; -- half speed clock for WE delay
compensation
NF_RB_LAST <= NF_RB; -- track NF_RB last value for
detection of end of a low pulse
DOWE <= '0'; -- write pulse is set to NONE unless
otherwise determined
DORE <= '0';
LED <= NFBUSY & '0' & FDATAIN(0)(7 downto 0); -- display
internal state var and data read on LED's
if SW(0) = '1' then LED(7 downto 0) <= FDATAIN(0)(15 downto 8);
end if; -- use SW0 to display upper byte of data read
if SW(1) = '1' then LED(7 downto 0) <= FDATAIN(1)(7 downto 0);
end if; -- use SW1 to display lower byte of 2nd data word read
if SW(1 downto 0) = "11" then LED(7 downto 0) <= NFSTATUS; end
if; -- SW0 & 1 set to display STATUS
if (SDO = "0000") then
CNVRT <= '0';
else
CNVRT <= '1';
end if;
-- FLASH MEMORY TEST ROUTINES
-- RESET:
if DORESET = x"1" then
WAITRESET <= WAITRESET + 1; -- wait 1000 clocks after board
reset before resetting chip
if WAITRESET >= RWAIT then -- (reason is, flash board is
pulling WE down to about 1/2 Vdd, wait for recovery)
DORESET <= DORESET + 1;
WAITRESET <= 0;
end if;
elsif DORESET = x"2" then
NFCLE <= '1'; -- put FLASH in COMMAND mode (one cycle
early just for insurance)
DORESET <= DORESET + 1;
elsif DORESET = x"3" then
NFBUSY <= '1'; -- declare NF is busy
NFCMD <= x"FF"; -- set command to be sent
DOWE <= '1'; -- enable write pulse for command
DORESET <= DORESET + 1;
-- before resetting NFBUSY
elsif DORESET = x"4" then
NFCLE <= '0';
DORESET <= x"0"; -- reset is done, BUT we are still
waiting on NF_RB


end if;
-- Wait for NF_RB for all Flash operations
if NF_RB_LAST = '0' and NF_RB = '1' then -- wait for NF_RB to go
low and then high again
NFBUSY <= '0'; --
end if;
-- Switch Debounce logic
DBCTR <= DBCTR + 1;
if SIMULATION then
if DBCTR(3 downto 0) = "0000" then SW_DB <= SW; end if; --
simulation version
else
if DBCTR(19 downto 0) = x"00000" then SW_DB <= SW; end if; --
real board version
end if;
-- MANUALLY ALLOW FORCE NFBUSY TO ZERO (since NF_RB not working
on flash board)
SB0LAST <= SW_DB(0);
if SB0LAST /= SW_DB(0) then
NFBUSY <= '0';
end if;
-- WRITE / READ PAGE INITIATION: (should be a whole block, but
whatever for now ... TEST PURPOSES)
SB9LAST <= SW_DB(9); -- look for state change on switch
9 to initiate WRITE or READ
if (SB9LAST = '0' and SW_DB(9) = '1') then
-- DO A WRITE (sw8=1) or READ (sw8=0) or ERASE sw7=1 operation
or READ_STATUS sw78=11****
DOWRITE <= x"1"; -- (address logic is same for
either)
NFADR(1) <= x"00"; -- Words 0 to 255
NFADR(2) <= "00000" & SW(3) & '0' & SW(2); -- subpage
within page , SW3=CA10=main/spare, SW7=CA8 = 0 or 256
NFADR(3) <= '0' & SW(6) & "00000" & SW(4); -- plane select
BA6, alternate page within block PA0
NFADR(4) <= "000000" & SW(5) & '0'; -- ignore(do
nothing), ignored blocks are bad, BA9
NFADR(5) <= "00000000";
-- SWITCH DEBUG COMMAND DECODE
Fstartwrite <= false; -- default SW_DB(8 downto
7)= "00" is READ
Fstarterase <= false;
if SW_DB(8 downto 7) = "10" then
Fstartwrite <= true;
elsif SW_DB(8 downto 7) = "01" then
Fstarterase <= true;
elsif SW_DB(8 downto 7) = "11" then
DOWRITE <= x"0";


DOSTATUS <= x"1";
end if;
end if;
-- COMBINED START CODE FOR WRITE / READ PAGE
if DOWRITE = x"1" then
NFCLE <= '1'; -- set CLE high one cycle
early so test bench can set bus to z's
DOWRITE <= DOWRITE + 1;
end if;
if DOWRITE = x"2" and NFBUSY = '0' then
NFCLE <= '1';
DOWE<= '1';
NFBUSY <= '1';
NFALE <= '0';
NFCMD <= x"00"; -- load the READ command in
data register
if Fstartwrite then -- CHECK FOR WRITE PAGE
COMMAND NEEDED
NFCMD <= x"80";
elsif Fstarterase then -- CHECK FOR ERASE PAGE
COMMAND NEEDED*****
-- (set proper command and iadr<=3)
NFCMD <= x"60";
iadr <= 3;
end if;
DOWRITE <= DOWRITE + 1;
end if;
if DOWRITE = x"3" then
NFALE <= '1'; -- NFALE=1 goes to address
subroutine (see below)
NFCLE <= '0';
DOWRITE <= DOWRITE + 1;
end if;
if DOWRITE = x"4" then -- delay tWC for memory
to recognize ALE
if DONEALE then -- if done sending address
bytes . . .
if Fstartwrite then -- if WRITE go to put data
words routine
DOWRITE <= x"9";
elsif Fstarterase then -- if ERASE, send D0 cmd,
etc. *************
-- (send D0 command [fix test bench to set tWC], set
DOERASE ... then at DOERASE reset DOWE and quit)
NFCMD <= x"D0";
NFALE <= '0';
NFCLE <= '1';
DOWE <= '1';
DORE <= '0';
FI<= 0;
DOWRITE <= x"0";

DOERASE <= x"1"; -- switch to erase mode
Fstarterase <= false;
else -- default is read
NFCMD <= x"30";
NFALE <= '0';
NFCLE <= '1';
DOWE <= '1';
DOWRITE <= x"0";
DOREAD <= x"1"; -- switch to read mode
FI <= 0; -- initialize buffer index
end if;
end if;
end if;
if DOWRITE = x"9" then -- put data words on bus
DOWE <= '1'; -- send the latch data command
NFCMD <= SW(1) & SW(0) & FDATA(5 downto 0); -- send a data
byte
FDATA <= FDATA + 1; -- make some test data!
if FDATA >= 255 then DOWRITE <= DOWRITE + 1; end if;
NFCLE <= '0';
end if;
-- need to send 85h command, adjust the colum address and send 2
bytes, then send 3 words of data (zeroes?) ****
if DOWRITE = x"A" then
NFCLE <= '1'; -- send command to FLASH
NFCMD <= x"10"; -- set command to be sent
DOWE <= '1'; -- enable write pulse for command
DOWRITE <= DOWRITE + 1;
elsif DOWRITE = x"B" then
NFCLE <= '0';
if NFBUSY = '0' then -- wait for RB to go low then high again
DOWRITE <= x"0";
-- send 70h to read status, wait tWHR, capture status word
on BUS ****
end if;
end if;
-- READ PAGE COMMAND (use a general read random command)
if DOREAD = x"1" then
NFCLE <= '0';
NF_D <= "ZZZZZZZZZZZZZZZZ";
DOWE <= '0';
if NFBUSY = '0' then
-- NFCLE <= '1'; -- send command to FLASH
-- NFCMD <= x"05"; -- set command to READ RANDOM
-- DOWE <= '1'; -- enable write pulse for command
DOREAD <= DOREAD + 1;
end if;
DOREAD <= DOREAD + 1;
end if;
if DOREAD = x"2" then
NFBUSY <= '1';

DORE <= '1'; -- triggers NFRE pulse to read data on
next clock cycle
DOREAD <= DOREAD + 1;
end if;
if DOREAD = x"3" then
DORE <= '1';
FDATAIN(FI) <= NF_D; -- capture data word
if FI >= FI_MAX then
DORE <= '0';
FI <= 0;
DOREAD <= x"0"; -- terminate read operation
else
FI <= FI + 1;
end if;
end if;
-- ERASE Block COMMAND
if DOERASE = x"1" then
NFBUSY <= '1';
NFCLE <= '1';
DOERASE <= DOERASE + 1;
end if;
if DOERASE = x"2" then
NFCMD <= x"60";
DOWE <= '1';
DOERASE <= DOERASE + 1;
end if;
if DOERASE = x"3" then
NFCLE <= '0';
NFALE <= '1';
DOERASE <= DOERASE + 1;
end if;
if DOERASE = x"4" then
NFALE <= '1';
NFCMD <= NFADR(2); -- send row address 1
DOERASE <= DOERASE + 1;
end if;
if DOERASE = x"5" then
NFALE <= '1';
NFCMD <= NFADR(3); -- send row address 2
DOERASE <= DOERASE + 1;
end if;
if DOERASE = x"6" then
NFALE <= '1';
NFCMD <= NFADR(4); -- send row address 3
DOERASE <= DOERASE + 1;
end if;
if DOERASE = x"7" then
NFALE <= '0';
NFCLE <= '1';
DOERASE <= DOERASE + 1;

end if;
if DOERASE = x"8" then
NFCMD <= x"D0";
DOERASE <= DOERASE + 1;
end if;
if DOERASE = x"9" then
NFCLE <= '0';
if NFBUSY = '0' then
DOERASE <= x"0";
end if;
end if;
-- READ STATUS
if DOSTATUS = x"1" then
NFBUSY <= '1';
NFCLE <= '1';
DOSTATUS <= DOSTATUS + 1;
end if;
if DOSTATUS = x"2" then
NFCMD <= x"70";
DOWE <= '1';
DOSTATUS <= DOSTATUS + 1;
end if;
if DOSTATUS = x"3" then
NFCLE <= '0';
DOWE <= '0';
tWHR <= 0;
NF_D <= "ZZZZZZZZZZZZZZZZ";
DOSTATUS <= DOSTATUS + 1;
end if;
if DOSTATUS = x"4" then
if tWHR < 4 then
tWHR <= tWHR + 1; -- wait for at least 80 ns
else
DORE <= '1';
DOSTATUS <= DOSTATUS + 1;
end if;
end if;
if DOSTATUS = x"5" then
NFSTATUS <= NF_D(7 downto 0); -- capture status byte
DORE <= '0';
DOSTATUS <= DOSTATUS + 1;
end if;
if DOSTATUS = x"6" then
DOSTATUS <= x"0";
end if;
-- READ BAD BLOCK INFO (use a general read random command)
-- SUBROUTINES
-- SEND 5 ADDRESS BYTES (triggered by setting NFALE <= '1' ...
MUST be used)

if NFALE = '1' then -- caller must send NF_ALE and NOT
any data or command to implement tWC delay
NF_D(15 downto 8) <= x"00"; -- LOW on upper bus bits
NF_D(7 downto 0) <= NFADR(iadr);-- put next address byte on
bus
-- (SHOULD STAY 1 UNTIL WE CHANGE IT) NF_ALE <= '1';
-- send ALE
DOWE <= '1'; -- send WE
if (DOWE = '1') then
iadr <= iadr + 1; -- increment address byte index (after
iadr=0 has been sent)
end if;
if iadr >= 5 then -- if have sent all address bytes ...
--(WE DON'T KNOW CALLER) DOWRITE <= DOWRITE + 1; -- old
termination condition for inline version
DOWE <= '0'; -- on NEXT cycle, we will not be sending
anything
NFALE <= '0'; -- finished with address bytes
(termination condition for subroutine is caller must check NF_ALE='0'
and tADL=0)
iadr <= 1 ; -- reset iadr for next time
tADL <= tADL + 1; -- increment counter to start tADL
delay
end if;
end if; -- NFALE = '1'
if tADL > 0 then -- implement 3 cycle tADL delay
following address bytes
tADL <= tADL + 1;
if tADL >= 2 then
tADL <= 0; -- finished with tADL (termination
condition for subroutine is caller must check NF_ALE='0' and tADL=0)
end if;
end if; -- tADL > 0
-- end of SEND ADDRESS BYTES (including tADL delay)
end if;
end if; end process;
end behavior;