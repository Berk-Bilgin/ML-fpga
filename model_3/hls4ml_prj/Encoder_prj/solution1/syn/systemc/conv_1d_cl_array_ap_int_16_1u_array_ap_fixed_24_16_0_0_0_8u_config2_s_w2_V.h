// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv_1d_cl_array_ap_int_16_1u_array_ap_fixed_24_16_0_0_0_8u_config2_s_w2_V_H__
#define __conv_1d_cl_array_ap_int_16_1u_array_ap_fixed_24_16_0_0_0_8u_config2_s_w2_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_1d_cl_array_ap_int_16_1u_array_ap_fixed_24_16_0_0_0_8u_config2_s_w2_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 63;
  static const unsigned AddressRange = 3;
  static const unsigned AddressWidth = 2;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(conv_1d_cl_array_ap_int_16_1u_array_ap_fixed_24_16_0_0_0_8u_config2_s_w2_V_ram) {
        ram[0] = "0b111100000010001001011100011110111000111111010000010000111110000";
        ram[1] = "0b110100111100111010101100000111011110001000011111010010011101011";
        ram[2] = "0b010001000001110000010111011010100110011000000010100000111111000";


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


SC_MODULE(conv_1d_cl_array_ap_int_16_1u_array_ap_fixed_24_16_0_0_0_8u_config2_s_w2_V) {


static const unsigned DataWidth = 63;
static const unsigned AddressRange = 3;
static const unsigned AddressWidth = 2;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_1d_cl_array_ap_int_16_1u_array_ap_fixed_24_16_0_0_0_8u_config2_s_w2_V_ram* meminst;


SC_CTOR(conv_1d_cl_array_ap_int_16_1u_array_ap_fixed_24_16_0_0_0_8u_config2_s_w2_V) {
meminst = new conv_1d_cl_array_ap_int_16_1u_array_ap_fixed_24_16_0_0_0_8u_config2_s_w2_V_ram("conv_1d_cl_array_ap_int_16_1u_array_ap_fixed_24_16_0_0_0_8u_config2_s_w2_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_1d_cl_array_ap_int_16_1u_array_ap_fixed_24_16_0_0_0_8u_config2_s_w2_V() {
    delete meminst;
}


};//endmodule
#endif
