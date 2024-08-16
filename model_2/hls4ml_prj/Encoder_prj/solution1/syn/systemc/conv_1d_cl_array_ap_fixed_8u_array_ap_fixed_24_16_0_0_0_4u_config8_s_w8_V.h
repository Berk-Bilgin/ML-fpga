// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s_w8_V_H__
#define __conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s_w8_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s_w8_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 639;
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


   SC_CTOR(conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s_w8_V_ram) {
        ram[0] = "0b001000011100101000101001110101011100000000111110000100000011001000101101110110000001110111111011110111100000001111001001111001000000111000001101111010000000101111100101111110111111000001011001110101100001110000100111101011001000010110111101111000100010010101111000010111100000101000100010001101011101001000100001111000011110000000000101110011100000110000101011111100100001110111111101110001000001101000001001111101000010010111011101111100100001010111111111111111000110100111011101111011000000100000001010001001100001100111111111111001111101100000011001111000000010101000001001111001000010110000001010001000000001010111110000010010011110111";
        ram[1] = "0b101111111011100111011000001011000000111110001001101101111100010001010111111111111111110111111100000111000001010000000110000111100100011111110100011000100000011000100010001001011011101110111101110000100010100001000100001000100000101000000000000110000100011001010000000010011111110000010110001010011101111110101101111011100011100000000001110011100000010110111100010010011101100111110000000100111010100000000101110110000001100000110001111111000001101111101101111111000100011000111110001101111011101000000111111010100010000111000110001010000010101000000100000100011111101111010011110110100010010111010111111110011101111001010001111001100010000";


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


SC_MODULE(conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s_w8_V) {


static const unsigned DataWidth = 639;
static const unsigned AddressRange = 2;
static const unsigned AddressWidth = 1;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s_w8_V_ram* meminst;


SC_CTOR(conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s_w8_V) {
meminst = new conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s_w8_V_ram("conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s_w8_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s_w8_V() {
    delete meminst;
}


};//endmodule
#endif
