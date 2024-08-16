#include "conv_1d_cl_array_ap_fixed_4u_array_ap_fixed_24_16_0_0_0_4u_config11_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void conv_1d_cl_array_ap_fixed_4u_array_ap_fixed_24_16_0_0_0_4u_config11_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
                    !(esl_seteq<1,1,1>(and_ln360_reg_11982.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op1864.read())) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln64_fu_11544_p2.read()))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_in_index13_phi_fu_546_p4.read()))) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_fu_868_p2.read()))) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter1 = ap_enable_reg_pp1_iter0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter2 = ap_enable_reg_pp1_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter3 = ap_enable_reg_pp1_iter2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_fu_868_p2.read()))) {
            ap_enable_reg_pp1_iter3 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
         !(esl_seteq<1,1,1>(and_ln360_reg_11982.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op1864.read())) && 
         esl_seteq<1,1,1>(icmp_ln64_fu_11544_p2.read(), ap_const_lv1_0))) {
        i_iw_0_i14_reg_467 = i_iw_reg_11950.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        i_iw_0_i14_reg_467 = ap_const_lv6_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln166_fu_706_p2.read()))) {
        i_iw_0_i_i_i_reg_479 = i_iw_4_fu_712_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(io_acc_block_signal_op23.read(), ap_const_logic_1))) {
        i_iw_0_i_i_i_reg_479 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(in_index13_reg_542.read(), ap_const_lv1_0))) {
        in_index13_reg_542 = in_index_reg_11991.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_fu_868_p2.read()))) {
        in_index13_reg_542 = ap_const_lv1_0;
    }
    if (esl_seteq<1,1,1>(ap_condition_638.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln384_fu_11503_p2.read())) {
            pX_3 = ap_const_lv32_0;
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln384_fu_11503_p2.read())) {
            pX_3 = add_ln389_fu_11508_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        start_once_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_0, internal_ap_ready.read()))) {
            start_once_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, internal_ap_ready.read())) {
            start_once_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(in_index13_reg_542_pp1_iter2_reg.read(), ap_const_lv1_0))) {
        tmp_data_0_V_1711_reg_554 = tmp_data_0_V_20_fu_8855_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_fu_868_p2.read()))) {
        tmp_data_0_V_1711_reg_554 = ap_const_lv24_FFFFFA;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(in_index13_reg_542_pp1_iter2_reg.read(), ap_const_lv1_0))) {
        tmp_data_1_V_149_reg_565 = tmp_data_1_V_19_fu_9735_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_fu_868_p2.read()))) {
        tmp_data_1_V_149_reg_565 = ap_const_lv24_12;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(in_index13_reg_542_pp1_iter2_reg.read(), ap_const_lv1_0))) {
        tmp_data_2_V_147_reg_576 = tmp_data_2_V_19_fu_10615_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_fu_868_p2.read()))) {
        tmp_data_2_V_147_reg_576 = ap_const_lv24_A;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(in_index13_reg_542_pp1_iter2_reg.read(), ap_const_lv1_0))) {
        tmp_data_3_V_145_reg_587 = tmp_data_3_V_19_fu_11495_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_fu_868_p2.read()))) {
        tmp_data_3_V_145_reg_587 = ap_const_lv24_FFFFFC;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        and_ln360_reg_11982 = and_ln360_fu_868_p2.read();
        icmp_ln360_reg_11971 = icmp_ln360_fu_842_p2.read();
        kernel_data_V_16 = tmp_data_0_V_reg_11910.read();
        kernel_data_V_17 = tmp_data_1_V_reg_11915.read();
        kernel_data_V_18 = tmp_data_2_V_reg_11920.read();
        kernel_data_V_19 = tmp_data_3_V_reg_11925.read();
        pX_3_load_reg_11976 = pX_3.read();
        sX_3_load_reg_11966 = sX_3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(io_acc_block_signal_op23.read(), ap_const_logic_1))) {
        i_iw_reg_11950 = i_iw_fu_700_p2.read();
        kernel_data_V_16_load_reg_11930 = kernel_data_V_16.read();
        kernel_data_V_17_load_reg_11935 = kernel_data_V_17.read();
        kernel_data_V_18_load_reg_11940 = kernel_data_V_18.read();
        kernel_data_V_19_load_reg_11945 = kernel_data_V_19.read();
        tmp_data_0_V_reg_11910 = data_V_data_0_V_dout.read();
        tmp_data_1_V_reg_11915 = data_V_data_1_V_dout.read();
        tmp_data_2_V_reg_11920 = data_V_data_2_V_dout.read();
        tmp_data_3_V_reg_11925 = data_V_data_3_V_dout.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        in_index13_reg_542_pp1_iter1_reg = in_index13_reg_542.read();
        mul_ln1118_760_reg_12019 = mul_ln1118_760_fu_11559_p2.read();
        mul_ln1118_761_reg_12042 = mul_ln1118_761_fu_11568_p2.read();
        mul_ln1118_762_reg_12065 = mul_ln1118_762_fu_11577_p2.read();
        mul_ln1118_763_reg_12088 = mul_ln1118_763_fu_11586_p2.read();
        mul_ln1118_764_reg_12111 = mul_ln1118_764_fu_11595_p2.read();
        mul_ln1118_765_reg_12134 = mul_ln1118_765_fu_11604_p2.read();
        mul_ln1118_766_reg_12157 = mul_ln1118_766_fu_11613_p2.read();
        mul_ln1118_767_reg_12180 = mul_ln1118_767_fu_11622_p2.read();
        mul_ln1118_768_reg_12203 = mul_ln1118_768_fu_11631_p2.read();
        mul_ln1118_769_reg_12226 = mul_ln1118_769_fu_11640_p2.read();
        mul_ln1118_770_reg_12249 = mul_ln1118_770_fu_11649_p2.read();
        mul_ln1118_771_reg_12272 = mul_ln1118_771_fu_11658_p2.read();
        mul_ln1118_772_reg_12295 = mul_ln1118_772_fu_11667_p2.read();
        mul_ln1118_773_reg_12318 = mul_ln1118_773_fu_11676_p2.read();
        mul_ln1118_774_reg_12341 = mul_ln1118_774_fu_11685_p2.read();
        mul_ln1118_775_reg_12364 = mul_ln1118_775_fu_11694_p2.read();
        mul_ln1118_776_reg_12387 = mul_ln1118_776_fu_11703_p2.read();
        mul_ln1118_777_reg_12410 = mul_ln1118_777_fu_11712_p2.read();
        mul_ln1118_778_reg_12433 = mul_ln1118_778_fu_11721_p2.read();
        mul_ln1118_779_reg_12456 = mul_ln1118_779_fu_11730_p2.read();
        mul_ln1118_780_reg_12479 = mul_ln1118_780_fu_11739_p2.read();
        mul_ln1118_781_reg_12502 = mul_ln1118_781_fu_11748_p2.read();
        mul_ln1118_782_reg_12525 = mul_ln1118_782_fu_11757_p2.read();
        mul_ln1118_783_reg_12548 = mul_ln1118_783_fu_11766_p2.read();
        mul_ln1118_784_reg_12571 = mul_ln1118_784_fu_11775_p2.read();
        mul_ln1118_785_reg_12594 = mul_ln1118_785_fu_11784_p2.read();
        mul_ln1118_786_reg_12617 = mul_ln1118_786_fu_11793_p2.read();
        mul_ln1118_787_reg_12640 = mul_ln1118_787_fu_11802_p2.read();
        mul_ln1118_788_reg_12663 = mul_ln1118_788_fu_11811_p2.read();
        mul_ln1118_789_reg_12686 = mul_ln1118_789_fu_11820_p2.read();
        mul_ln1118_790_reg_12709 = mul_ln1118_790_fu_11829_p2.read();
        mul_ln1118_791_reg_12732 = mul_ln1118_791_fu_11838_p2.read();
        mul_ln1118_792_reg_12755 = mul_ln1118_792_fu_11847_p2.read();
        mul_ln1118_793_reg_12778 = mul_ln1118_793_fu_11856_p2.read();
        mul_ln1118_794_reg_12801 = mul_ln1118_794_fu_11865_p2.read();
        mul_ln1118_795_reg_12824 = mul_ln1118_795_fu_11874_p2.read();
        mul_ln1118_796_reg_12847 = mul_ln1118_796_fu_11883_p2.read();
        mul_ln1118_797_reg_12870 = mul_ln1118_797_fu_11892_p2.read();
        mul_ln1118_798_reg_12893 = mul_ln1118_798_fu_11901_p2.read();
        mul_ln1118_reg_11996 = mul_ln1118_fu_11550_p2.read();
        tmp_5900_reg_12001 = mul_ln1118_fu_11550_p2.read().range(31, 31);
        tmp_5902_reg_12014 = mul_ln1118_fu_11550_p2.read().range(6, 6);
        tmp_5907_reg_12024 = mul_ln1118_760_fu_11559_p2.read().range(31, 31);
        tmp_5909_reg_12037 = mul_ln1118_760_fu_11559_p2.read().range(6, 6);
        tmp_5914_reg_12047 = mul_ln1118_761_fu_11568_p2.read().range(31, 31);
        tmp_5916_reg_12060 = mul_ln1118_761_fu_11568_p2.read().range(6, 6);
        tmp_5921_reg_12070 = mul_ln1118_762_fu_11577_p2.read().range(31, 31);
        tmp_5923_reg_12083 = mul_ln1118_762_fu_11577_p2.read().range(6, 6);
        tmp_5928_reg_12093 = mul_ln1118_763_fu_11586_p2.read().range(31, 31);
        tmp_5930_reg_12106 = mul_ln1118_763_fu_11586_p2.read().range(6, 6);
        tmp_5935_reg_12116 = mul_ln1118_764_fu_11595_p2.read().range(31, 31);
        tmp_5937_reg_12129 = mul_ln1118_764_fu_11595_p2.read().range(6, 6);
        tmp_5942_reg_12139 = mul_ln1118_765_fu_11604_p2.read().range(31, 31);
        tmp_5944_reg_12152 = mul_ln1118_765_fu_11604_p2.read().range(6, 6);
        tmp_5949_reg_12162 = mul_ln1118_766_fu_11613_p2.read().range(31, 31);
        tmp_5951_reg_12175 = mul_ln1118_766_fu_11613_p2.read().range(6, 6);
        tmp_5956_reg_12185 = mul_ln1118_767_fu_11622_p2.read().range(31, 31);
        tmp_5958_reg_12198 = mul_ln1118_767_fu_11622_p2.read().range(6, 6);
        tmp_5963_reg_12208 = mul_ln1118_768_fu_11631_p2.read().range(31, 31);
        tmp_5965_reg_12221 = mul_ln1118_768_fu_11631_p2.read().range(6, 6);
        tmp_5970_reg_12231 = mul_ln1118_769_fu_11640_p2.read().range(31, 31);
        tmp_5972_reg_12244 = mul_ln1118_769_fu_11640_p2.read().range(6, 6);
        tmp_5977_reg_12254 = mul_ln1118_770_fu_11649_p2.read().range(31, 31);
        tmp_5979_reg_12267 = mul_ln1118_770_fu_11649_p2.read().range(6, 6);
        tmp_5984_reg_12277 = mul_ln1118_771_fu_11658_p2.read().range(31, 31);
        tmp_5986_reg_12290 = mul_ln1118_771_fu_11658_p2.read().range(6, 6);
        tmp_5991_reg_12300 = mul_ln1118_772_fu_11667_p2.read().range(31, 31);
        tmp_5993_reg_12313 = mul_ln1118_772_fu_11667_p2.read().range(6, 6);
        tmp_5998_reg_12323 = mul_ln1118_773_fu_11676_p2.read().range(31, 31);
        tmp_6000_reg_12336 = mul_ln1118_773_fu_11676_p2.read().range(6, 6);
        tmp_6005_reg_12346 = mul_ln1118_774_fu_11685_p2.read().range(31, 31);
        tmp_6007_reg_12359 = mul_ln1118_774_fu_11685_p2.read().range(6, 6);
        tmp_6012_reg_12369 = mul_ln1118_775_fu_11694_p2.read().range(31, 31);
        tmp_6014_reg_12382 = mul_ln1118_775_fu_11694_p2.read().range(6, 6);
        tmp_6019_reg_12392 = mul_ln1118_776_fu_11703_p2.read().range(31, 31);
        tmp_6021_reg_12405 = mul_ln1118_776_fu_11703_p2.read().range(6, 6);
        tmp_6026_reg_12415 = mul_ln1118_777_fu_11712_p2.read().range(31, 31);
        tmp_6028_reg_12428 = mul_ln1118_777_fu_11712_p2.read().range(6, 6);
        tmp_6033_reg_12438 = mul_ln1118_778_fu_11721_p2.read().range(31, 31);
        tmp_6035_reg_12451 = mul_ln1118_778_fu_11721_p2.read().range(6, 6);
        tmp_6040_reg_12461 = mul_ln1118_779_fu_11730_p2.read().range(31, 31);
        tmp_6042_reg_12474 = mul_ln1118_779_fu_11730_p2.read().range(6, 6);
        tmp_6047_reg_12484 = mul_ln1118_780_fu_11739_p2.read().range(31, 31);
        tmp_6049_reg_12497 = mul_ln1118_780_fu_11739_p2.read().range(6, 6);
        tmp_6054_reg_12507 = mul_ln1118_781_fu_11748_p2.read().range(31, 31);
        tmp_6056_reg_12520 = mul_ln1118_781_fu_11748_p2.read().range(6, 6);
        tmp_6061_reg_12530 = mul_ln1118_782_fu_11757_p2.read().range(31, 31);
        tmp_6063_reg_12543 = mul_ln1118_782_fu_11757_p2.read().range(6, 6);
        tmp_6068_reg_12553 = mul_ln1118_783_fu_11766_p2.read().range(31, 31);
        tmp_6070_reg_12566 = mul_ln1118_783_fu_11766_p2.read().range(6, 6);
        tmp_6075_reg_12576 = mul_ln1118_784_fu_11775_p2.read().range(31, 31);
        tmp_6077_reg_12589 = mul_ln1118_784_fu_11775_p2.read().range(6, 6);
        tmp_6082_reg_12599 = mul_ln1118_785_fu_11784_p2.read().range(31, 31);
        tmp_6084_reg_12612 = mul_ln1118_785_fu_11784_p2.read().range(6, 6);
        tmp_6089_reg_12622 = mul_ln1118_786_fu_11793_p2.read().range(31, 31);
        tmp_6091_reg_12635 = mul_ln1118_786_fu_11793_p2.read().range(6, 6);
        tmp_6096_reg_12645 = mul_ln1118_787_fu_11802_p2.read().range(31, 31);
        tmp_6098_reg_12658 = mul_ln1118_787_fu_11802_p2.read().range(6, 6);
        tmp_6103_reg_12668 = mul_ln1118_788_fu_11811_p2.read().range(31, 31);
        tmp_6105_reg_12681 = mul_ln1118_788_fu_11811_p2.read().range(6, 6);
        tmp_6110_reg_12691 = mul_ln1118_789_fu_11820_p2.read().range(31, 31);
        tmp_6112_reg_12704 = mul_ln1118_789_fu_11820_p2.read().range(6, 6);
        tmp_6117_reg_12714 = mul_ln1118_790_fu_11829_p2.read().range(31, 31);
        tmp_6119_reg_12727 = mul_ln1118_790_fu_11829_p2.read().range(6, 6);
        tmp_6124_reg_12737 = mul_ln1118_791_fu_11838_p2.read().range(31, 31);
        tmp_6126_reg_12750 = mul_ln1118_791_fu_11838_p2.read().range(6, 6);
        tmp_6131_reg_12760 = mul_ln1118_792_fu_11847_p2.read().range(31, 31);
        tmp_6133_reg_12773 = mul_ln1118_792_fu_11847_p2.read().range(6, 6);
        tmp_6138_reg_12783 = mul_ln1118_793_fu_11856_p2.read().range(31, 31);
        tmp_6140_reg_12796 = mul_ln1118_793_fu_11856_p2.read().range(6, 6);
        tmp_6145_reg_12806 = mul_ln1118_794_fu_11865_p2.read().range(31, 31);
        tmp_6147_reg_12819 = mul_ln1118_794_fu_11865_p2.read().range(6, 6);
        tmp_6152_reg_12829 = mul_ln1118_795_fu_11874_p2.read().range(31, 31);
        tmp_6154_reg_12842 = mul_ln1118_795_fu_11874_p2.read().range(6, 6);
        tmp_6159_reg_12852 = mul_ln1118_796_fu_11883_p2.read().range(31, 31);
        tmp_6161_reg_12865 = mul_ln1118_796_fu_11883_p2.read().range(6, 6);
        tmp_6166_reg_12875 = mul_ln1118_797_fu_11892_p2.read().range(31, 31);
        tmp_6168_reg_12888 = mul_ln1118_797_fu_11892_p2.read().range(6, 6);
        tmp_6173_reg_12898 = mul_ln1118_798_fu_11901_p2.read().range(29, 29);
        tmp_6175_reg_12911 = mul_ln1118_798_fu_11901_p2.read().range(6, 6);
        trunc_ln708_761_reg_12055 = mul_ln1118_761_fu_11568_p2.read().range(30, 7);
        trunc_ln708_762_reg_12078 = mul_ln1118_762_fu_11577_p2.read().range(30, 7);
        trunc_ln708_763_reg_12101 = mul_ln1118_763_fu_11586_p2.read().range(30, 7);
        trunc_ln708_764_reg_12124 = mul_ln1118_764_fu_11595_p2.read().range(30, 7);
        trunc_ln708_765_reg_12147 = mul_ln1118_765_fu_11604_p2.read().range(30, 7);
        trunc_ln708_766_reg_12170 = mul_ln1118_766_fu_11613_p2.read().range(30, 7);
        trunc_ln708_767_reg_12193 = mul_ln1118_767_fu_11622_p2.read().range(30, 7);
        trunc_ln708_768_reg_12216 = mul_ln1118_768_fu_11631_p2.read().range(30, 7);
        trunc_ln708_769_reg_12239 = mul_ln1118_769_fu_11640_p2.read().range(30, 7);
        trunc_ln708_770_reg_12262 = mul_ln1118_770_fu_11649_p2.read().range(30, 7);
        trunc_ln708_771_reg_12285 = mul_ln1118_771_fu_11658_p2.read().range(30, 7);
        trunc_ln708_772_reg_12308 = mul_ln1118_772_fu_11667_p2.read().range(30, 7);
        trunc_ln708_773_reg_12331 = mul_ln1118_773_fu_11676_p2.read().range(30, 7);
        trunc_ln708_774_reg_12354 = mul_ln1118_774_fu_11685_p2.read().range(30, 7);
        trunc_ln708_775_reg_12377 = mul_ln1118_775_fu_11694_p2.read().range(30, 7);
        trunc_ln708_776_reg_12400 = mul_ln1118_776_fu_11703_p2.read().range(30, 7);
        trunc_ln708_777_reg_12423 = mul_ln1118_777_fu_11712_p2.read().range(30, 7);
        trunc_ln708_778_reg_12446 = mul_ln1118_778_fu_11721_p2.read().range(30, 7);
        trunc_ln708_779_reg_12469 = mul_ln1118_779_fu_11730_p2.read().range(30, 7);
        trunc_ln708_780_reg_12492 = mul_ln1118_780_fu_11739_p2.read().range(30, 7);
        trunc_ln708_781_reg_12515 = mul_ln1118_781_fu_11748_p2.read().range(30, 7);
        trunc_ln708_782_reg_12538 = mul_ln1118_782_fu_11757_p2.read().range(30, 7);
        trunc_ln708_783_reg_12561 = mul_ln1118_783_fu_11766_p2.read().range(30, 7);
        trunc_ln708_784_reg_12584 = mul_ln1118_784_fu_11775_p2.read().range(30, 7);
        trunc_ln708_785_reg_12607 = mul_ln1118_785_fu_11784_p2.read().range(30, 7);
        trunc_ln708_786_reg_12630 = mul_ln1118_786_fu_11793_p2.read().range(30, 7);
        trunc_ln708_787_reg_12653 = mul_ln1118_787_fu_11802_p2.read().range(30, 7);
        trunc_ln708_788_reg_12676 = mul_ln1118_788_fu_11811_p2.read().range(30, 7);
        trunc_ln708_789_reg_12699 = mul_ln1118_789_fu_11820_p2.read().range(30, 7);
        trunc_ln708_790_reg_12722 = mul_ln1118_790_fu_11829_p2.read().range(30, 7);
        trunc_ln708_791_reg_12745 = mul_ln1118_791_fu_11838_p2.read().range(30, 7);
        trunc_ln708_792_reg_12768 = mul_ln1118_792_fu_11847_p2.read().range(30, 7);
        trunc_ln708_793_reg_12791 = mul_ln1118_793_fu_11856_p2.read().range(30, 7);
        trunc_ln708_794_reg_12814 = mul_ln1118_794_fu_11865_p2.read().range(30, 7);
        trunc_ln708_795_reg_12837 = mul_ln1118_795_fu_11874_p2.read().range(30, 7);
        trunc_ln708_796_reg_12860 = mul_ln1118_796_fu_11883_p2.read().range(30, 7);
        trunc_ln708_797_reg_12883 = mul_ln1118_797_fu_11892_p2.read().range(30, 7);
        trunc_ln708_798_reg_12906 = mul_ln1118_798_fu_11901_p2.read().range(29, 7);
        trunc_ln708_s_reg_12032 = mul_ln1118_760_fu_11559_p2.read().range(30, 7);
        trunc_ln_reg_12009 = mul_ln1118_fu_11550_p2.read().range(30, 7);
    }
    if (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) {
        in_index13_reg_542_pp1_iter2_reg = in_index13_reg_542_pp1_iter1_reg.read();
        select_ln340_2576_reg_12916 = select_ln340_2576_fu_2628_p3.read();
        select_ln340_2578_reg_12922 = select_ln340_2578_fu_2765_p3.read();
        select_ln340_2580_reg_12928 = select_ln340_2580_fu_2902_p3.read();
        select_ln340_2582_reg_12934 = select_ln340_2582_fu_3039_p3.read();
        select_ln340_2584_reg_12940 = select_ln340_2584_fu_3176_p3.read();
        select_ln340_2586_reg_12946 = select_ln340_2586_fu_3313_p3.read();
        select_ln340_2588_reg_12952 = select_ln340_2588_fu_3450_p3.read();
        select_ln340_2590_reg_12958 = select_ln340_2590_fu_3587_p3.read();
        select_ln340_2592_reg_12964 = select_ln340_2592_fu_3724_p3.read();
        select_ln340_2594_reg_12970 = select_ln340_2594_fu_3861_p3.read();
        select_ln340_2596_reg_12976 = select_ln340_2596_fu_3998_p3.read();
        select_ln340_2598_reg_12982 = select_ln340_2598_fu_4135_p3.read();
        select_ln340_2600_reg_12988 = select_ln340_2600_fu_4272_p3.read();
        select_ln340_2602_reg_12994 = select_ln340_2602_fu_4409_p3.read();
        select_ln340_2604_reg_13000 = select_ln340_2604_fu_4546_p3.read();
        select_ln340_2606_reg_13006 = select_ln340_2606_fu_4683_p3.read();
        select_ln340_2608_reg_13012 = select_ln340_2608_fu_4820_p3.read();
        select_ln340_2610_reg_13018 = select_ln340_2610_fu_4957_p3.read();
        select_ln340_2612_reg_13024 = select_ln340_2612_fu_5094_p3.read();
        select_ln340_2614_reg_13030 = select_ln340_2614_fu_5231_p3.read();
        select_ln340_2616_reg_13036 = select_ln340_2616_fu_5368_p3.read();
        select_ln340_2618_reg_13042 = select_ln340_2618_fu_5505_p3.read();
        select_ln340_2620_reg_13048 = select_ln340_2620_fu_5642_p3.read();
        select_ln340_2622_reg_13054 = select_ln340_2622_fu_5779_p3.read();
        select_ln340_2624_reg_13060 = select_ln340_2624_fu_5916_p3.read();
        select_ln340_2626_reg_13066 = select_ln340_2626_fu_6053_p3.read();
        select_ln340_2628_reg_13072 = select_ln340_2628_fu_6190_p3.read();
        select_ln340_2630_reg_13078 = select_ln340_2630_fu_6327_p3.read();
        select_ln340_2632_reg_13084 = select_ln340_2632_fu_6464_p3.read();
        select_ln340_2634_reg_13090 = select_ln340_2634_fu_6601_p3.read();
        select_ln340_2636_reg_13096 = select_ln340_2636_fu_6738_p3.read();
        select_ln340_2638_reg_13102 = select_ln340_2638_fu_6875_p3.read();
        select_ln340_2640_reg_13108 = select_ln340_2640_fu_7012_p3.read();
        select_ln340_2642_reg_13114 = select_ln340_2642_fu_7149_p3.read();
        select_ln340_2644_reg_13120 = select_ln340_2644_fu_7286_p3.read();
        select_ln340_2646_reg_13126 = select_ln340_2646_fu_7423_p3.read();
        select_ln340_2648_reg_13132 = select_ln340_2648_fu_7560_p3.read();
        select_ln340_2650_reg_13138 = select_ln340_2650_fu_7697_p3.read();
        select_ln340_2652_reg_13144 = select_ln340_2652_fu_7834_p3.read();
        select_ln340_2654_reg_13150 = select_ln340_2654_fu_7975_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        in_index_reg_11991 = in_index_fu_879_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln166_fu_706_p2.read()) && esl_seteq<1,2,2>(trunc_ln203_fu_718_p1.read(), ap_const_lv2_0))) {
        kernel_data_V_0 = ap_phi_mux_phi_ln203_phi_fu_493_p8.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln166_fu_706_p2.read()) && esl_seteq<1,3,3>(ap_phi_mux_i_iw_0_i_i_i_phi_fu_483_p4.read(), ap_const_lv3_2))) {
        kernel_data_V_10 = ap_phi_mux_phi_ln203_16_phi_fu_519_p8.read();
        kernel_data_V_11 = ap_phi_mux_phi_ln203_17_phi_fu_532_p8.read();
        kernel_data_V_9 = ap_phi_mux_phi_ln203_15_phi_fu_506_p8.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln166_fu_706_p2.read()) && esl_seteq<1,3,3>(ap_const_lv3_0, ap_phi_mux_i_iw_0_i_i_i_phi_fu_483_p4.read()))) {
        kernel_data_V_1156 = ap_phi_mux_phi_ln203_15_phi_fu_506_p8.read();
        kernel_data_V_2157 = ap_phi_mux_phi_ln203_16_phi_fu_519_p8.read();
        kernel_data_V_3158 = ap_phi_mux_phi_ln203_17_phi_fu_532_p8.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln166_fu_706_p2.read()) && esl_seteq<1,2,2>(trunc_ln203_fu_718_p1.read(), ap_const_lv2_3))) {
        kernel_data_V_12 = ap_phi_mux_phi_ln203_phi_fu_493_p8.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln166_fu_706_p2.read()) && !esl_seteq<1,3,3>(ap_const_lv3_0, ap_phi_mux_i_iw_0_i_i_i_phi_fu_483_p4.read()) && !esl_seteq<1,3,3>(ap_phi_mux_i_iw_0_i_i_i_phi_fu_483_p4.read(), ap_const_lv3_1) && !esl_seteq<1,3,3>(ap_phi_mux_i_iw_0_i_i_i_phi_fu_483_p4.read(), ap_const_lv3_2))) {
        kernel_data_V_13 = ap_phi_mux_phi_ln203_15_phi_fu_506_p8.read();
        kernel_data_V_14 = ap_phi_mux_phi_ln203_16_phi_fu_519_p8.read();
        kernel_data_V_15 = ap_phi_mux_phi_ln203_17_phi_fu_532_p8.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln166_fu_706_p2.read()) && esl_seteq<1,2,2>(trunc_ln203_fu_718_p1.read(), ap_const_lv2_1))) {
        kernel_data_V_4 = ap_phi_mux_phi_ln203_phi_fu_493_p8.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln166_fu_706_p2.read()) && esl_seteq<1,3,3>(ap_phi_mux_i_iw_0_i_i_i_phi_fu_483_p4.read(), ap_const_lv3_1))) {
        kernel_data_V_5 = ap_phi_mux_phi_ln203_15_phi_fu_506_p8.read();
        kernel_data_V_6 = ap_phi_mux_phi_ln203_16_phi_fu_519_p8.read();
        kernel_data_V_7 = ap_phi_mux_phi_ln203_17_phi_fu_532_p8.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln166_fu_706_p2.read()) && esl_seteq<1,2,2>(trunc_ln203_fu_718_p1.read(), ap_const_lv2_2))) {
        kernel_data_V_8 = ap_phi_mux_phi_ln203_phi_fu_493_p8.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && !(esl_seteq<1,1,1>(and_ln360_reg_11982.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op1864.read())))) {
        sX_3 = ap_phi_mux_storemerge_i_i_phi_fu_601_p4.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        tmp_data_0_V_20_reg_13156 = tmp_data_0_V_20_fu_8855_p3.read();
        tmp_data_1_V_19_reg_13162 = tmp_data_1_V_19_fu_9735_p3.read();
        tmp_data_2_V_19_reg_13168 = tmp_data_2_V_19_fu_10615_p3.read();
        tmp_data_3_V_19_reg_13174 = tmp_data_3_V_19_fu_11495_p3.read();
    }
}

void conv_1d_cl_array_ap_fixed_4u_array_ap_fixed_24_16_0_0_0_4u_config11_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(io_acc_block_signal_op23.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln166_fu_706_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_fu_868_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state9;
            }
            break;
        case 16 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter2.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter2.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_state9;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            }
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && !(esl_seteq<1,1,1>(and_ln360_reg_11982.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op1864.read())) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln64_fu_11544_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && !(esl_seteq<1,1,1>(and_ln360_reg_11982.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op1864.read())) && esl_seteq<1,1,1>(icmp_ln64_fu_11544_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state9;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<6>) ("XXXXXX");
            break;
    }
}

}

