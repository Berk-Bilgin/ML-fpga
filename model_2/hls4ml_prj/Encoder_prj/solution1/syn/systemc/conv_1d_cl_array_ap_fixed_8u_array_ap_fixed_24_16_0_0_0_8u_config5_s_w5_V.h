// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_8u_config5_s_w5_V_H__
#define __conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_8u_config5_s_w5_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_8u_config5_s_w5_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 1277;
  static const unsigned AddressRange = 2;
  static const unsigned AddressWidth = 1;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_8u_config5_s_w5_V_ram) {
        ram[0] = "0b10110110010010000001000011011000001010010010100000000110010001111111111111011111000011111100100010000111010100000100111110001000001110010011111110100111101100000101111011101111101110001110000000001000111101100111010101101001000010010000111010100111111111110100111010110010001101100001100001110111111011111111000001111000000011111101011101000000001000001111100000110000101111101011011001110111001100000100000010111000001010010010011100010000011110001100011100101000011000001111000010101111100111111100100001111111001011101111100010100111010000000011011100101111111111110101100001111001001100011100100111011000000111101010000000000000111001111001011111100000110010001111111100110111100011110100011001011001100101101111100001111111110101101011111110111000001111111111011110111110110110100000000001010111000010000111111101001110110101110001100000001111101111111001011110100000011000010100100011010001000110001001111111101000100100000101111110110001010001110111000010001001001110001110111111111000101101111010111101100111111001110001100000010110011001100111100010000000010001101110111010011111101001100101011111101111100100000010111111101111111000000010000010011111110101101011100001001111100011111110100111111111111101100101000100100111101010001011000101111111101111110010111011101";
        ram[1] = "0b01010001000001110110100001000000111011101100111011001111000100011010100100110001000010001000100011011000101101111000001000011111011001111111000100001110100001111110111111000000111101101010011101100000001101110011000000010001101001110010000011001001010101110011111111111000010100010111011100101111111001110011000000001000111011110001011011100000100010001001111001000000100110001001000011111000001000000100111111101110100111110110100100000000000000001101011100011111111001111011000011100111011001100001100011010111111100000110100000100000011010001010111111111111101101110010000000010110110110000010111011100111000100011001011110101000010011111011000110100111101110001110011100111000010100010100111111011110100001100101000001100111010111101010011111000000110011111100001001011000010111111010111111110000001101111111111101101000010000000111011111001111001001111001001000001111110000000010111100011111100001111000111011110000110011111100000010000000000100010111111111111000001000000000000101011101101101111110000101100000101001111001011100110001000110000001011110001110100010001000000000011000100100010111111110101001001100000110000000001110111110001100000001001000101100001000111011010001111011101100011101001000010111111000100011111111100100000011011011010111001110000110000010000";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_8u_config5_s_w5_V) {


static const unsigned DataWidth = 1277;
static const unsigned AddressRange = 2;
static const unsigned AddressWidth = 1;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_8u_config5_s_w5_V_ram* meminst;


SC_CTOR(conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_8u_config5_s_w5_V) {
meminst = new conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_8u_config5_s_w5_V_ram("conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_8u_config5_s_w5_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_8u_config5_s_w5_V() {
    delete meminst;
}


};//endmodule
#endif
