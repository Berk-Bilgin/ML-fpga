----------------------------------------------------------------------
----------
-- Company:
-- Engineer:
--
-- Create Date: 18:02:17 08/21/2012
-- Design Name:
-- Module Name: D:/Xilinx/test1/test1_tb.vhd
-- Project Name: test1
-- Target Device:
-- Tool versions:
-- Description:
--
-- VHDL Test Bench Created by ISE for module: test1
--
-- Dependencies:
--
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes:
-- This testbench has been automatically generated using types
std_logic and
-- std_logic_vector for the ports of the unit under test. Xilinx
recommends
-- that these types always be used for the top-level I/O of a design
in order
-- to guarantee that the testbench will bind correctly to the postimplementation
-- simulation model.
----------------------------------------------------------------------
----------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
ENTITY test1_tb IS
END test1_tb;
ARCHITECTURE behavior OF test1_tb IS
-- Component Declaration for the Unit Under Test (UUT)
COMPONENT test1
NASA USRP – Internship Final Report
32 Spring 2013 Session
PORT(
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
-- Connect P1(could not use connector P2 due to it being lvds diff
pair)
OUTRESET : OUT std_logic; -- G11 pin 8
OUTWRITE : OUT std_logic; -- H11 pin 12
OUTREAD : OUT std_logic; -- G12 pin 16
OUTERASE : OUT std_logic; -- D16 pin 22
OUTSTATE : OUT std_logic_vector(3 downto 0) -- E15 pin 24, N5 pin
26, K4 pin 28, K6 pin 30
);
END COMPONENT;
--Inputs
signal CLK : std_logic := '0';
signal SW : std_logic_vector(9 downto 0) := (others => '0');
signal RESB: std_logic := '1';
signal PORB: std_logic := '1';
signal SDO : std_logic_vector(4 downto 1) := (others => '0');
signal NF_RB : std_logic := '0';
--Outputs
signal LED : std_logic_vector(9 downto 0);
signal SCLK : std_logic;
NASA USRP – Internship Final Report
33 Spring 2013 Session
signal CNVRT : std_logic;
signal NF_WP : std_logic;
signal NF_WE : std_logic;
signal NF_ALE: std_logic;
signal NF_CLE: std_logic;
signal NF_CE : std_logic;
signal NF_RE : std_logic;
signal OUTRESET : std_logic;
signal OUTWRITE : std_logic;
signal OUTREAD : std_logic;
signal OUTERASE : std_logic;
signal OUTSTATE : std_logic_vector(3 downto 0);
--In/Out
signal NF_D : std_logic_vector(15 downto 0) :=(others => 'Z');
-- internal signals and constants
constant CLK_period : time := 25 ns; -- clock period
definition 40 MHz
-- flash memory model signals
signal tWB: std_logic_vector(11 downto 0) := (others => '0'); --
reset delay signal
signal tRST: std_logic_vector(11 downto 0) := (others => '0'); --
reset delay signal
signal tADL: std_logic_vector(11 downto 0) := (others => '0'); --
write delay signal
signal tWC: std_logic_vector(11 downto 0) := (others => '0'); --
write delay signal
signal tBERS: std_logic_vector(11 downto 0) := (others => '0'); --
erase delay signal ********
alias BUS8: std_logic_vector(7 downto 0) is NF_D(7 downto 0);
signal WElast: std_logic := '0';
signal RElast: std_logic := '0'; -- track rising edge
of WE
type Flashpage is array (1055 downto 0) of std_logic_vector(15
downto 0);
type Flashmem8 is array (3 downto 0) of Flashpage; -- matches
Pageadr
signal FMEM : Flashmem8 := (others =>(others => x"00FF")); -- Flash
address
signal Wordadr : integer range 0 to 1055 := 0;
signal Pageadr : integer range 0 to 3 := 0;
signal Adrbyte : integer range 1 to 6 := 1;
signal Badpage : boolean := false; -- page address out of range,
will return bad block
type Functiontyp is (write, read, readID, readStatus, erase, error);
signal FUNC : Functiontyp := error;
BEGIN
NASA USRP – Internship Final Report
34 Spring 2013 Session
-- Instantiate the Unit Under Test (UUT)
uut: Test1 PORT MAP (
CLK => CLK,
RESB => RESB,
PORB => PORB,
SW => SW,
LED => LED,
CNVRT => CNVRT,
SDO => SDO,
SCLK => SCLK,
NF_D => NF_D,
NF_RB => NF_RB,
NF_WP => NF_WP,
NF_WE => NF_WE,
NF_ALE=> NF_ALE,
NF_CLE=> NF_CLE,
NF_CE => NF_CE,
NF_RE => NF_RE,
OUTRESET => OUTRESET,
OUTWRITE => OUTWRITE,
OUTREAD => OUTREAD,
OUTERASE => OUTERASE,
OUTSTATE => OUTSTATE
);
-- Clock process definitions
CLK_process :process
begin
CLK <= '0';
wait for CLK_period/2;
CLK <= '1';
wait for CLK_period/2;
end process;
--Memory process definitions
rst :process begin
--set only in signals
RESB <= '0';
PORB <= '0';
SDO <= "1000";
SW <= "0000000000";
wait for CLK_period*10;
RESB <= '1';
PORB <= '1';
wait for 1000 ns;
-- simulate noise switch to trigger write block
SW(9) <= '1';
wait for 55 ns;
SW(9) <= '0';
wait for 55 ns;
SW(9) <= '1'; -- some operation
NASA USRP – Internship Final Report
35 Spring 2013 Session
SW(8) <= '1'; -- write page
wait for 8500 ns;
SW(8) <= '0';
SW(9) <= '0';
wait for 500 ns; -- wait for debounce
SW(9) <= '1'; -- some operation (read)
SW(0) <= '1';
SW(1) <= '0';
wait for 8500 ns;
SW(9) <= '0';
wait for 500 ns;
SW(9) <= '1';
SW(7) <= '1'; -- erase
wait for 1000 ns;
SW(9) <= '0';
SW(7) <= '0';
wait for 1000 ns;
SW(9) <= '1';
SW(8) <= '1';
SW(7) <= '1';
wait for 500 ns;
SW(9) <= '0';
wait;
end process rst;
fmemp: process(CLK, NF_WE) begin
if falling_edge(CLK) then
if RESB = '0' or PORB = '0' then NF_RB <= '1'; end if; -- reset
NF_RB
WElast <= NF_WE; -- look for rising edge of
WE
RElast <= NF_RE; -- look for rising edge of
RE
if NF_CLE = '1' then -- set's bus to z's when
command is set
NF_D <= "ZZZZZZZZZZZZZZZZ";
end if;
-- PROCESS INFORMATION ON BUS FROM FPGA
-- WE rising edge strobes all data from FPGA to memory
if NF_WE = '0' and WElast = '1' then -- FPGA is
presenting data on bus, we should latch something
-- (note: we assume WE will come
up immediately, so we do not have to copy everything)
-- (if we WAIT for WE to come up,
we'd have to have copied all signals on bus)
WElast <= '1'; -- if we had a rising edge
of WE, then use first half cycle WE=1 state, not end cycle state
if NF_CLE = '1' then -- IT IS A COMMAND ----
----------------------------------------------
if BUS8 = x"FF" then -- RESET
NASA USRP – Internship Final Report
36 Spring 2013 Session
tWB <= x"001"; -- start tWB counter
to time RB response
elsif BUS8 = x"10" then -- END OF DATA
tWB <= x"001"; -- use same mechanism
to do RB response
FUNC <= error; -- finished with write
Adrbyte <= 1;--****
Wordadr <= 0; --*****
elsif BUS8 = x"80" then -- PROGRAM PAGE
Adrbyte <= 1;
Pageadr <= 0;
Wordadr <= 0;
Badpage <= false;
FUNC <= write;
elsif BUS8 = x"85" or BUS8 = x"05" then -- CHANGE
WRITE or READ COLUMN
Wordadr <= 0;
Adrbyte <= 1;
elsif BUS8 = x"00" then -- READ OPERATION
Adrbyte <= 1;
Pageadr <= 0;
Wordadr <= 0;
Badpage <= false;
FUNC <= read;
elsif BUS8 = x"30" then
tWB <= x"001"; -- use same mechanism
to do RB response
Badpage <= false;
FUNC <= read; -- finished with write
elsif BUS8 = x"60" then -- ERASE (not erasing
anything)
Adrbyte <= 3;
Pageadr <= 0;
Wordadr <= 0;
Badpage <= false;
FUNC <= erase;
elsif BUS8 = x"D0" then
tWB <= x"001";
elsif BUS8 = x"70" then
tWB <= x"001";
Badpage <= false;
FUNC <= readStatus;
end if;
elsif NF_ALE = '1' then -- IT IS AN ADDRESS
BYTE ------------------------------
if Adrbyte = 2 and BUS8(0)= '1' then
Wordadr <= 512;
elsif Adrbyte = 3 then
if BUS8(6) = '1' then
Pageadr <= 1;
end if;
if (BUS8 and "10111111") /= "00000000" then
NASA USRP – Internship Final Report
37 Spring 2013 Session
Badpage <= true;
end if;
end if;
if Adrbyte > 3 then
if BUS8 /= "00000000" then
Badpage <= true;
end if;
end if;
Adrbyte <= Adrbyte + 1;
else -- IT IS A DATA WORD (16 bits)
---------------------------
case FUNC is
when write =>
if Badpage = false then
FMEM(Pageadr)(Wordadr) <= NF_D;
if Wordadr < 1055 then Wordadr <= Wordadr + 1; end
if;
end if;
when others =>
Assert TRUE Report "invalid function for data
operation" Severity Error;
end case;
end if;
end if; -- WE RISING EDGE
-- PUT READ DATA ON BUS TO FPGA (in response to rising edge of
RE which is set by FPGA)
if NF_RE = '0' and RElast = '1' then -- FPGA is
requestion data, we should put something on bus
RElast <= '1'; -- if we had a rising edge
of RE, then use first half cycle RE=1 state, not end cycle state
if FUNC = readStatus then
NF_D <= x"0010"; -- dummy status
elsif NF_ALE = '0' and NF_CLE = '0' then
case FUNC is
when read =>
--Assert Badpage Report "attempt to read from invalid
page" Severity Error;
if Badpage = false then
NF_D <= FMEM(Pageadr)(Wordadr);
if Wordadr < 1055 then Wordadr <= Wordadr + 1; end
if;
end if;
when others =>
Assert TRUE Report "invalid function for data
operation" Severity Error;
end case;
end if;
end if; -- RE RISING EDGE
-- PROCESS MY OWN STATE TRANSITIONS AND RESPONSES
NASA USRP – Internship Final Report
38 Spring 2013 Session
if tWB > 0 then -- IF DOING NF_RB delay
after WE for RESET command:
if tWB >= 5 then -- wait 5 clocks (approx
100 ns)
tWB <= x"000"; -- terminate the after-WE
delay
NF_RB <= '0'; -- drop RB to match timing
diagram
tRST <= x"001"; -- start a new ctr to
time RB low duration
else
tWB <= tWB + 1; -- perform RB delay
end if;
end if;
if tRST > 0 then -- IF DOING NF_RB DURATION
delay after RESET command
if tRST >= 15 then -- wait 15 clocks (real
delay would be much larger)
tRST <= x"000"; -- terminate counter
NF_RB <= '1'; -- terminate RB
else
tRST <= tRST + 1; -- perform RB duration
delay
end if;
end if;
end if;
end process fmemp;
END;