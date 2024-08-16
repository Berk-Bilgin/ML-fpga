-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv_1d_cl_array_ap_fixed_4u_array_ap_fixed_24_16_0_0_0_4u_config11_s_w11_V_rom is 
    generic(
             DWIDTH     : integer := 318; 
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


architecture rtl of conv_1d_cl_array_ap_fixed_4u_array_ap_fixed_24_16_0_0_0_4u_config11_s_w11_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "111101110111000000110101000000111101110001011100010001111111000000011000100010111010011111101111100110000101110010100000110111111101001111001000110001110110101110011100000000111110011110111100100010000101011111110100110101000000111101100100011111111110011111100011101001001001001110101100100010000001100001100011001010", 
    1 => "100111111000101110110100000110001010101101100011100010111110010001001011011011001000110000101011000011000010000010100111110011110100101111100000000100111111010001001100001010000001111111010000101101111111100001010100000011000011111110110100100111001101001111111011101111000011111111000111010100000001100000001011111011" );

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

entity conv_1d_cl_array_ap_fixed_4u_array_ap_fixed_24_16_0_0_0_4u_config11_s_w11_V is
    generic (
        DataWidth : INTEGER := 318;
        AddressRange : INTEGER := 2;
        AddressWidth : INTEGER := 1);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of conv_1d_cl_array_ap_fixed_4u_array_ap_fixed_24_16_0_0_0_4u_config11_s_w11_V is
    component conv_1d_cl_array_ap_fixed_4u_array_ap_fixed_24_16_0_0_0_4u_config11_s_w11_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv_1d_cl_array_ap_fixed_4u_array_ap_fixed_24_16_0_0_0_4u_config11_s_w11_V_rom_U :  component conv_1d_cl_array_ap_fixed_4u_array_ap_fixed_24_16_0_0_0_4u_config11_s_w11_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


