#include "conv_1d_cl_array_ap_fixed_4u_array_ap_fixed_28_16_1_0_0_4u_config11_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void conv_1d_cl_array_ap_fixed_4u_array_ap_fixed_28_16_1_0_0_4u_config11_s::thread_ap_clk_no_reset_() {
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
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read())) {
                ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state2.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
            }
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter4 = ap_enable_reg_pp0_iter3.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            ap_enable_reg_pp0_iter4 = ap_const_logic_0;
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_156.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_fu_16141_p2.read()) && 
             esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln384_fu_19807_p2.read()))) {
            ap_phi_reg_pp0_iter1_storemerge_i_i_reg_525 = ap_const_lv32_0;
        } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_fu_16141_p2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln384_fu_19807_p2.read()))) {
            ap_phi_reg_pp0_iter1_storemerge_i_i_reg_525 = select_ln391_fu_19831_p3.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter1_storemerge_i_i_reg_525 = ap_phi_reg_pp0_iter0_storemerge_i_i_reg_525.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_fu_16141_p2.read()))) {
        i_iw_0_i_reg_514 = i_iw_fu_16147_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        i_iw_0_i_reg_514 = ap_const_lv6_0;
    }
    if (esl_seteq<1,1,1>(ap_condition_357.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln384_fu_19807_p2.read())) {
            pX_3 = ap_const_lv32_0;
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln384_fu_19807_p2.read())) {
            pX_3 = add_ln389_fu_19813_p2.read();
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
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_reg_39747_pp0_iter2_reg.read()))) {
        acc_0_V_195_reg_40226 = acc_0_V_195_fu_37380_p2.read();
        add_ln415_1572_reg_40101 = add_ln415_1572_fu_33698_p2.read();
        add_ln415_1582_reg_40182 = add_ln415_1582_fu_35592_p2.read();
        and_ln416_1557_reg_40106 = and_ln416_1557_fu_33718_p2.read();
        and_ln416_1567_reg_40187 = and_ln416_1567_fu_35612_p2.read();
        select_ln340_5153_reg_40120 = select_ln340_5153_fu_33924_p3.read();
        select_ln340_5154_reg_40126 = select_ln340_5154_fu_34116_p3.read();
        select_ln340_5155_reg_40132 = select_ln340_5155_fu_34324_p3.read();
        select_ln340_5156_reg_40138 = select_ln340_5156_fu_34524_p3.read();
        select_ln340_5157_reg_40144 = select_ln340_5157_fu_34724_p3.read();
        select_ln340_5158_reg_40150 = select_ln340_5158_fu_34920_p3.read();
        select_ln340_5159_reg_40156 = select_ln340_5159_fu_35128_p3.read();
        select_ln340_5160_reg_40162 = select_ln340_5160_fu_35324_p3.read();
        select_ln340_5161_reg_40168 = select_ln340_5161_fu_35520_p3.read();
        select_ln340_5228_reg_40201 = select_ln340_5228_fu_37170_p3.read();
        select_ln340_5229_reg_40207 = select_ln340_5229_fu_37260_p3.read();
        select_ln340_5230_reg_40213 = select_ln340_5230_fu_37350_p3.read();
        tmp_10979_reg_40093 = sub_ln1118_204_fu_33628_p2.read().range(30, 30);
        tmp_10983_reg_40114 = add_ln415_1572_fu_33698_p2.read().range(20, 20);
        tmp_11029_reg_40174 = mul_ln1118_1374_fu_590_p2.read().range(33, 33);
        tmp_11033_reg_40195 = add_ln415_1582_fu_35592_p2.read().range(24, 24);
        tmp_11182_reg_40219 = add_ln1192_1587_fu_37366_p2.read().range(28, 28);
        tmp_11183_reg_40232 = acc_0_V_195_fu_37380_p2.read().range(27, 27);
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_reg_39747_pp0_iter1_reg.read()))) {
        acc_1_V_183_reg_40074 = acc_1_V_183_fu_31153_p2.read();
        select_ln340_5131_reg_39995 = select_ln340_5131_fu_27669_p3.read();
        select_ln340_5133_reg_40001 = select_ln340_5133_fu_28053_p3.read();
        select_ln340_5134_reg_40007 = select_ln340_5134_fu_28245_p3.read();
        select_ln340_5135_reg_40013 = select_ln340_5135_fu_28453_p3.read();
        select_ln340_5136_reg_40019 = select_ln340_5136_fu_28649_p3.read();
        select_ln340_5137_reg_40025 = select_ln340_5137_fu_28845_p3.read();
        select_ln340_5138_reg_40031 = select_ln340_5138_fu_29037_p3.read();
        select_ln340_5139_reg_40037 = select_ln340_5139_fu_29243_p3.read();
        select_ln340_5142_reg_40043 = select_ln340_5142_fu_29443_p3.read();
        select_ln340_5207_reg_40049 = select_ln340_5207_fu_30853_p3.read();
        select_ln340_5209_reg_40055 = select_ln340_5209_fu_31033_p3.read();
        select_ln340_5210_reg_40061 = select_ln340_5210_fu_31123_p3.read();
        tmp_11144_reg_40067 = add_ln1192_1568_fu_31139_p2.read().range(28, 28);
        tmp_11145_reg_40080 = acc_1_V_183_fu_31153_p2.read().range(27, 27);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_fu_16141_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_fu_16199_p2.read()))) {
        add_ln415_1516_reg_39765 = add_ln415_1516_fu_18069_p2.read();
        add_ln415_1519_reg_39804 = add_ln415_1519_fu_18575_p2.read();
        add_ln415_1521_reg_39837 = add_ln415_1521_fu_18873_p2.read();
        and_ln416_1501_reg_39770 = and_ln416_1501_fu_18089_p2.read();
        and_ln416_1504_reg_39809 = and_ln416_1504_fu_18595_p2.read();
        and_ln416_1506_reg_39842 = and_ln416_1506_fu_18893_p2.read();
        select_ln340_5095_reg_39751 = select_ln340_5095_fu_17997_p3.read();
        select_ln340_5097_reg_39784 = select_ln340_5097_fu_18287_p3.read();
        select_ln340_5098_reg_39790 = select_ln340_5098_fu_18487_p3.read();
        select_ln340_5100_reg_39823 = select_ln340_5100_fu_18801_p3.read();
        select_ln340_5102_reg_39856 = select_ln340_5102_fu_19095_p3.read();
        select_ln340_5171_reg_39862 = select_ln340_5171_fu_19529_p3.read();
        select_ln340_5172_reg_39868 = select_ln340_5172_fu_19619_p3.read();
        select_ln340_5173_reg_39874 = select_ln340_5173_fu_19709_p3.read();
        select_ln340_5174_reg_39880 = select_ln340_5174_fu_19799_p3.read();
        tmp_10699_reg_39757 = mul_ln1118_1316_fu_560_p2.read().range(33, 33);
        tmp_10703_reg_39778 = add_ln415_1516_fu_18069_p2.read().range(24, 24);
        tmp_10714_reg_39796 = mul_ln1118_1319_fu_600_p2.read().range(33, 33);
        tmp_10718_reg_39817 = add_ln415_1519_fu_18575_p2.read().range(24, 24);
        tmp_10724_reg_39829 = mul_ln1118_1321_fu_598_p2.read().range(33, 33);
        tmp_10728_reg_39850 = add_ln415_1521_fu_18873_p2.read().range(24, 24);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_fu_16141_p2.read()))) {
        and_ln360_reg_39747 = and_ln360_fu_16199_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        and_ln360_reg_39747_pp0_iter1_reg = and_ln360_reg_39747.read();
        icmp_ln64_reg_39738 = icmp_ln64_fu_16141_p2.read();
        icmp_ln64_reg_39738_pp0_iter1_reg = icmp_ln64_reg_39738.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        and_ln360_reg_39747_pp0_iter2_reg = and_ln360_reg_39747_pp0_iter1_reg.read();
        and_ln360_reg_39747_pp0_iter3_reg = and_ln360_reg_39747_pp0_iter2_reg.read();
        icmp_ln64_reg_39738_pp0_iter2_reg = icmp_ln64_reg_39738_pp0_iter1_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_reg_39738_pp0_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        kernel_data_V_10 = ap_sig_allocacmp_kernel_data_V_14_load.read();
        kernel_data_V_11 = ap_sig_allocacmp_kernel_data_V_15_load.read();
        kernel_data_V_12 = ap_sig_allocacmp_kernel_data_V_16_load.read();
        kernel_data_V_13 = ap_sig_allocacmp_kernel_data_V_17_load.read();
        kernel_data_V_9 = kernel_data_V_13.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && esl_seteq<1,1,1>(icmp_ln64_reg_39738_pp0_iter2_reg.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        kernel_data_V_14 = kernel_data_V_18.read();
        kernel_data_V_15 = kernel_data_V_19.read();
        kernel_data_V_16 = data_V_data_0_V_dout.read();
        kernel_data_V_17 = data_V_data_1_V_dout.read();
        kernel_data_V_18 = data_V_data_2_V_dout.read();
        kernel_data_V_19 = data_V_data_3_V_dout.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_reg_39738_pp0_iter1_reg.read()))) {
        kernel_data_V_17_load_reg_39985 = ap_sig_allocacmp_kernel_data_V_17_load.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(icmp_ln64_reg_39738.read(), ap_const_lv1_0))) {
        kernel_data_V_4 = kernel_data_V_8.read();
        kernel_data_V_5 = ap_sig_allocacmp_kernel_data_V_9_load.read();
        kernel_data_V_6 = ap_sig_allocacmp_kernel_data_V_10_load.read();
        kernel_data_V_7 = ap_sig_allocacmp_kernel_data_V_11_load.read();
        kernel_data_V_8 = ap_sig_allocacmp_kernel_data_V_12_load.read();
        sX_3 = ap_phi_reg_pp0_iter1_storemerge_i_i_reg_525.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(and_ln360_reg_39747.read(), ap_const_lv1_1))) {
        select_ln340_5111_reg_39895 = select_ln340_5111_fu_22078_p3.read();
        select_ln340_5112_reg_39901 = select_ln340_5112_fu_22278_p3.read();
        select_ln340_5113_reg_39907 = select_ln340_5113_fu_22478_p3.read();
        select_ln340_5115_reg_39913 = select_ln340_5115_fu_22878_p3.read();
        select_ln340_5116_reg_39919 = select_ln340_5116_fu_23074_p3.read();
        select_ln340_5117_reg_39925 = select_ln340_5117_fu_23266_p3.read();
        select_ln340_5118_reg_39931 = select_ln340_5118_fu_23462_p3.read();
        select_ln340_5119_reg_39937 = select_ln340_5119_fu_23670_p3.read();
        select_ln340_5120_reg_39943 = select_ln340_5120_fu_23866_p3.read();
        select_ln340_5121_reg_39949 = select_ln340_5121_fu_24058_p3.read();
        select_ln340_5122_reg_39955 = select_ln340_5122_fu_24254_p3.read();
        select_ln340_5187_reg_39961 = select_ln340_5187_fu_25406_p3.read();
        select_ln340_5188_reg_39967 = select_ln340_5188_fu_25496_p3.read();
        select_ln340_5189_reg_39973 = select_ln340_5189_fu_25586_p3.read();
        select_ln340_5194_reg_39979 = select_ln340_5194_fu_25766_p3.read();
    }
    if ((esl_seteq<1,1,1>(icmp_ln64_reg_39738_pp0_iter2_reg.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        tmp_data_3_V_reg_40087 = data_V_data_3_V_dout.read();
    }
}

void conv_1d_cl_array_ap_fixed_4u_array_ap_fixed_28_16_1_0_0_4u_config11_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln64_fu_16141_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln64_fu_16141_p2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state7;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}

