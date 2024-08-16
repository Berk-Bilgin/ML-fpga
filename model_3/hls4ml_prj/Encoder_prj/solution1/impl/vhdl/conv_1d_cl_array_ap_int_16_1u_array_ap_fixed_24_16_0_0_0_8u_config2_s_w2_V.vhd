-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv_1d_cl_array_ap_int_16_1u_array_ap_fixed_24_16_0_0_0_8u_config2_s_w2_V_rom is 
    generic(
             DWIDTH     : integer := 63; 
             AWIDTH     : integer := 2; 
             MEM_SIZE    : integer := 3
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of conv_1d_cl_array_ap_int_16_1u_array_ap_fixed_24_16_0_0_0_8u_config2_s_w2_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "111100000010001001011100011110111000111111010000010000111110000", 
    1 => "110100111100111010101100000111011110001000011111010010011101011", 
    2 => "010001000001110000010111011010100110011000000010100000111111000" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity conv_1d_cl_array_ap_int_16_1u_array_ap_fixed_24_16_0_0_0_8u_config2_s_w2_V is
    generic (
        DataWidth : INTEGER := 63;
        AddressRange : INTEGER := 3;
        AddressWidth : INTEGER := 2);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of conv_1d_cl_array_ap_int_16_1u_array_ap_fixed_24_16_0_0_0_8u_config2_s_w2_V is
    component conv_1d_cl_array_ap_int_16_1u_array_ap_fixed_24_16_0_0_0_8u_config2_s_w2_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv_1d_cl_array_ap_int_16_1u_array_ap_fixed_24_16_0_0_0_8u_config2_s_w2_V_rom_U :  component conv_1d_cl_array_ap_int_16_1u_array_ap_fixed_24_16_0_0_0_8u_config2_s_w2_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


