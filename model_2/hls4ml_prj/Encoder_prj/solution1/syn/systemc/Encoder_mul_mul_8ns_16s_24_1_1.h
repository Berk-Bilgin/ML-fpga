// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __Encoder_mul_mul_8ns_16s_24_1_1__HH__
#define __Encoder_mul_mul_8ns_16s_24_1_1__HH__
#include "ACMP_smul_us.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int dout_WIDTH>
SC_MODULE(Encoder_mul_mul_8ns_16s_24_1_1) {
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_smul_us<ID, 1, din0_WIDTH, din1_WIDTH, dout_WIDTH> ACMP_smul_us_U;

    SC_CTOR(Encoder_mul_mul_8ns_16s_24_1_1):  ACMP_smul_us_U ("ACMP_smul_us_U") {
        ACMP_smul_us_U.din0(din0);
        ACMP_smul_us_U.din1(din1);
        ACMP_smul_us_U.dout(dout);

    }

};

#endif //
