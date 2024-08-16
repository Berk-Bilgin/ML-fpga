// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv_1d_cl_array_ap_fixed_4u_array_ap_fixed_24_16_0_0_0_4u_config11_s_w11_V_H__
#define __conv_1d_cl_array_ap_fixed_4u_array_ap_fixed_24_16_0_0_0_4u_config11_s_w11_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_1d_cl_array_ap_fixed_4u_array_ap_fixed_24_16_0_0_0_4u_config11_s_w11_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 318;
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


   SC_CTOR(conv_1d_cl_array_ap_fixed_4u_array_ap_fixed_24_16_0_0_0_4u_config11_s_w11_V_ram) {
        ram[0] = "0b111101110111000000110101000000111101110001011100010001111111000000011000100010111010011111101111100110000101110010100000110111111101001111001000110001110110101110011100000000111110011110111100100010000101011111110100110101000000111101100100011111111110011111100011101001001001001110101100100010000001100001100011001010";
        ram[1] = "0b100111111000101110110100000110001010101101100011100010111110010001001011011011001000110000101011000011000010000010100111110011110100101111100000000100111111010001001100001010000001111111010000101101111111100001010100000011000011111110110100100111001101001111111011101111000011111111000111010100000001100000001011111011";


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


SC_MODULE(conv_1d_cl_array_ap_fixed_4u_array_ap_fixed_24_16_0_0_0_4u_config11_s_w11_V) {


static const unsigned DataWidth = 318;
static const unsigned AddressRange = 2;
static const unsigned AddressWidth = 1;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_1d_cl_array_ap_fixed_4u_array_ap_fixed_24_16_0_0_0_4u_config11_s_w11_V_ram* meminst;


SC_CTOR(conv_1d_cl_array_ap_fixed_4u_array_ap_fixed_24_16_0_0_0_4u_config11_s_w11_V) {
meminst = new conv_1d_cl_array_ap_fixed_4u_array_ap_fixed_24_16_0_0_0_4u_config11_s_w11_V_ram("conv_1d_cl_array_ap_fixed_4u_array_ap_fixed_24_16_0_0_0_4u_config11_s_w11_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_1d_cl_array_ap_fixed_4u_array_ap_fixed_24_16_0_0_0_4u_config11_s_w11_V() {
    delete meminst;
}


};//endmodule
#endif
