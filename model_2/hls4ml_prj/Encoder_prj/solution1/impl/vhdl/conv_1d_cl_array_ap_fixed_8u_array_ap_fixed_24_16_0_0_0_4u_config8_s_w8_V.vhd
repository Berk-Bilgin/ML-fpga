-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s_w8_V_rom is 
    generic(
             DWIDTH     : integer := 639; 
             AWIDTH     : integer := 1; 
             MEM_SIZE    : integer := 2
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s_w8_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "001000011100101000101001110101011100000000111110000100000011001000101101110110000001110111111011110111100000001111001001111001000000111000001101111010000000101111100101111110111111000001011001110101100001110000100111101011001000010110111101111000100010010101111000010111100000101000100010001101011101001000100001111000011110000000000101110011100000110000101011111100100001110111111101110001000001101000001001111101000010010111011101111100100001010111111111111111000110100111011101111011000000100000001010001001100001100111111111111001111101100000011001111000000010101000001001111001000010110000001010001000000001010111110000010010011110111", 
    1 => "101111111011100111011000001011000000111110001001101101111100010001010111111111111111110111111100000111000001010000000110000111100100011111110100011000100000011000100010001001011011101110111101110000100010100001000100001000100000101000000000000110000100011001010000000010011111110000010110001010011101111110101101111011100011100000000001110011100000010110111100010010011101100111110000000100111010100000000101110110000001100000110001111111000001101111101101111111000100011000111110001101111011101000000111111010100010000111000110001010000010101000000100000100011111101111010011110110100010010111010111111110011101111001010001111001100010000" );


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

entity conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s_w8_V is
    generic (
        DataWidth : INTEGER := 639;
        AddressRange : INTEGER := 2;
        AddressWidth : INTEGER := 1);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s_w8_V is
    component conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s_w8_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s_w8_V_rom_U :  component conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s_w8_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


