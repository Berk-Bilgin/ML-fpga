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
                    !(esl_seteq<1,1,1>(and_ln360_reg_11948.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op1864.read())) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln64_fu_11502_p2.read()))) {
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
         !(esl_seteq<1,1,1>(and_ln360_reg_11948.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op1864.read())) && 
         esl_seteq<1,1,1>(icmp_ln64_fu_11502_p2.read(), ap_const_lv1_0))) {
        i_iw_0_i14_reg_467 = i_iw_reg_11916.read();
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
        in_index13_reg_542 = in_index_reg_11957.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_fu_868_p2.read()))) {
        in_index13_reg_542 = ap_const_lv1_0;
    }
    if (esl_seteq<1,1,1>(ap_condition_690.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln384_fu_11461_p2.read())) {
            pX_3 = ap_const_lv32_0;
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln384_fu_11461_p2.read())) {
            pX_3 = add_ln389_fu_11466_p2.read();
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
        tmp_data_0_V_1711_reg_554 = tmp_data_0_V_20_fu_5425_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_fu_868_p2.read()))) {
        tmp_data_0_V_1711_reg_554 = ap_const_lv24_FFFFFA;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(in_index13_reg_542_pp1_iter2_reg.read(), ap_const_lv1_0))) {
        tmp_data_1_V_149_reg_565 = tmp_data_1_V_19_fu_7433_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_fu_868_p2.read()))) {
        tmp_data_1_V_149_reg_565 = ap_const_lv24_12;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(in_index13_reg_542_pp1_iter2_reg.read(), ap_const_lv1_0))) {
        tmp_data_2_V_147_reg_576 = tmp_data_2_V_19_fu_9441_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_fu_868_p2.read()))) {
        tmp_data_2_V_147_reg_576 = ap_const_lv24_A;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(in_index13_reg_542_pp1_iter2_reg.read(), ap_const_lv1_0))) {
        tmp_data_3_V_145_reg_587 = tmp_data_3_V_19_fu_11453_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_fu_868_p2.read()))) {
        tmp_data_3_V_145_reg_587 = ap_const_lv24_FFFFFC;
    }
    if (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) {
        add_ln415_765_reg_12185 = add_ln415_765_fu_1523_p2.read();
        add_ln415_775_reg_12457 = add_ln415_775_fu_2125_p2.read();
        add_ln415_785_reg_12729 = add_ln415_785_fu_2627_p2.read();
        add_ln415_795_reg_13001 = add_ln415_795_fu_3129_p2.read();
        and_ln416_750_reg_12191 = and_ln416_750_fu_1543_p2.read();
        and_ln416_760_reg_12463 = and_ln416_760_fu_2145_p2.read();
        and_ln416_770_reg_12735 = and_ln416_770_fu_2647_p2.read();
        and_ln416_780_reg_13007 = and_ln416_780_fu_3149_p2.read();
        in_index13_reg_542_pp1_iter2_reg = in_index13_reg_542_pp1_iter1_reg.read();
        mul_ln1118_758_reg_12212 = mul_ln1118_758_fu_11528_p2.read();
        mul_ln1118_759_reg_12241 = mul_ln1118_759_fu_11537_p2.read();
        mul_ln1118_760_reg_12270 = mul_ln1118_760_fu_11546_p2.read();
        mul_ln1118_761_reg_12299 = mul_ln1118_761_fu_11555_p2.read();
        mul_ln1118_762_reg_12328 = mul_ln1118_762_fu_11564_p2.read();
        mul_ln1118_763_reg_12357 = mul_ln1118_763_fu_11573_p2.read();
        mul_ln1118_764_reg_12386 = mul_ln1118_764_fu_11582_p2.read();
        mul_ln1118_765_reg_12415 = mul_ln1118_765_fu_11591_p2.read();
        mul_ln1118_768_reg_12484 = mul_ln1118_768_fu_11620_p2.read();
        mul_ln1118_769_reg_12513 = mul_ln1118_769_fu_11629_p2.read();
        mul_ln1118_770_reg_12542 = mul_ln1118_770_fu_11638_p2.read();
        mul_ln1118_771_reg_12571 = mul_ln1118_771_fu_11647_p2.read();
        mul_ln1118_772_reg_12600 = mul_ln1118_772_fu_11656_p2.read();
        mul_ln1118_773_reg_12629 = mul_ln1118_773_fu_11665_p2.read();
        mul_ln1118_774_reg_12658 = mul_ln1118_774_fu_11674_p2.read();
        mul_ln1118_775_reg_12687 = mul_ln1118_775_fu_11683_p2.read();
        mul_ln1118_778_reg_12756 = mul_ln1118_778_fu_11712_p2.read();
        mul_ln1118_779_reg_12785 = mul_ln1118_779_fu_11721_p2.read();
        mul_ln1118_780_reg_12814 = mul_ln1118_780_fu_11730_p2.read();
        mul_ln1118_781_reg_12843 = mul_ln1118_781_fu_11739_p2.read();
        mul_ln1118_782_reg_12872 = mul_ln1118_782_fu_11748_p2.read();
        mul_ln1118_783_reg_12901 = mul_ln1118_783_fu_11757_p2.read();
        mul_ln1118_784_reg_12930 = mul_ln1118_784_fu_11766_p2.read();
        mul_ln1118_785_reg_12959 = mul_ln1118_785_fu_11775_p2.read();
        mul_ln1118_788_reg_13028 = mul_ln1118_788_fu_11804_p2.read();
        mul_ln1118_789_reg_13057 = mul_ln1118_789_fu_11813_p2.read();
        mul_ln1118_790_reg_13086 = mul_ln1118_790_fu_11822_p2.read();
        mul_ln1118_791_reg_13115 = mul_ln1118_791_fu_11831_p2.read();
        mul_ln1118_792_reg_13144 = mul_ln1118_792_fu_11840_p2.read();
        mul_ln1118_793_reg_13173 = mul_ln1118_793_fu_11849_p2.read();
        mul_ln1118_794_reg_13202 = mul_ln1118_794_fu_11858_p2.read();
        mul_ln1118_795_reg_13231 = mul_ln1118_795_fu_11867_p2.read();
        select_ln340_2544_reg_12172 = select_ln340_2544_fu_1475_p3.read();
        select_ln340_2564_reg_12444 = select_ln340_2564_fu_2080_p3.read();
        select_ln340_2584_reg_12716 = select_ln340_2584_fu_2582_p3.read();
        select_ln340_2604_reg_12988 = select_ln340_2604_fu_3084_p3.read();
        tmp_5827_reg_12178 = mul_ln1118_757_fu_11518_p2.read().range(31, 31);
        tmp_5831_reg_12199 = add_ln415_765_fu_1523_p2.read().range(23, 23);
        tmp_5834_reg_12217 = mul_ln1118_758_fu_11528_p2.read().range(31, 31);
        tmp_5836_reg_12229 = mul_ln1118_758_fu_11528_p2.read().range(6, 6);
        tmp_5841_reg_12246 = mul_ln1118_759_fu_11537_p2.read().range(31, 31);
        tmp_5843_reg_12258 = mul_ln1118_759_fu_11537_p2.read().range(6, 6);
        tmp_5848_reg_12275 = mul_ln1118_760_fu_11546_p2.read().range(31, 31);
        tmp_5850_reg_12287 = mul_ln1118_760_fu_11546_p2.read().range(6, 6);
        tmp_5855_reg_12304 = mul_ln1118_761_fu_11555_p2.read().range(31, 31);
        tmp_5857_reg_12316 = mul_ln1118_761_fu_11555_p2.read().range(6, 6);
        tmp_5862_reg_12333 = mul_ln1118_762_fu_11564_p2.read().range(31, 31);
        tmp_5864_reg_12345 = mul_ln1118_762_fu_11564_p2.read().range(6, 6);
        tmp_5869_reg_12362 = mul_ln1118_763_fu_11573_p2.read().range(31, 31);
        tmp_5871_reg_12374 = mul_ln1118_763_fu_11573_p2.read().range(6, 6);
        tmp_5876_reg_12391 = mul_ln1118_764_fu_11582_p2.read().range(31, 31);
        tmp_5878_reg_12403 = mul_ln1118_764_fu_11582_p2.read().range(6, 6);
        tmp_5883_reg_12420 = mul_ln1118_765_fu_11591_p2.read().range(31, 31);
        tmp_5885_reg_12432 = mul_ln1118_765_fu_11591_p2.read().range(6, 6);
        tmp_5897_reg_12450 = mul_ln1118_767_fu_11610_p2.read().range(31, 31);
        tmp_5901_reg_12471 = add_ln415_775_fu_2125_p2.read().range(23, 23);
        tmp_5904_reg_12489 = mul_ln1118_768_fu_11620_p2.read().range(31, 31);
        tmp_5906_reg_12501 = mul_ln1118_768_fu_11620_p2.read().range(6, 6);
        tmp_5911_reg_12518 = mul_ln1118_769_fu_11629_p2.read().range(31, 31);
        tmp_5913_reg_12530 = mul_ln1118_769_fu_11629_p2.read().range(6, 6);
        tmp_5918_reg_12547 = mul_ln1118_770_fu_11638_p2.read().range(31, 31);
        tmp_5920_reg_12559 = mul_ln1118_770_fu_11638_p2.read().range(6, 6);
        tmp_5925_reg_12576 = mul_ln1118_771_fu_11647_p2.read().range(31, 31);
        tmp_5927_reg_12588 = mul_ln1118_771_fu_11647_p2.read().range(6, 6);
        tmp_5932_reg_12605 = mul_ln1118_772_fu_11656_p2.read().range(31, 31);
        tmp_5934_reg_12617 = mul_ln1118_772_fu_11656_p2.read().range(6, 6);
        tmp_5939_reg_12634 = mul_ln1118_773_fu_11665_p2.read().range(31, 31);
        tmp_5941_reg_12646 = mul_ln1118_773_fu_11665_p2.read().range(6, 6);
        tmp_5946_reg_12663 = mul_ln1118_774_fu_11674_p2.read().range(31, 31);
        tmp_5948_reg_12675 = mul_ln1118_774_fu_11674_p2.read().range(6, 6);
        tmp_5953_reg_12692 = mul_ln1118_775_fu_11683_p2.read().range(31, 31);
        tmp_5955_reg_12704 = mul_ln1118_775_fu_11683_p2.read().range(6, 6);
        tmp_5967_reg_12722 = mul_ln1118_777_fu_11702_p2.read().range(31, 31);
        tmp_5971_reg_12743 = add_ln415_785_fu_2627_p2.read().range(23, 23);
        tmp_5974_reg_12761 = mul_ln1118_778_fu_11712_p2.read().range(31, 31);
        tmp_5976_reg_12773 = mul_ln1118_778_fu_11712_p2.read().range(6, 6);
        tmp_5981_reg_12790 = mul_ln1118_779_fu_11721_p2.read().range(31, 31);
        tmp_5983_reg_12802 = mul_ln1118_779_fu_11721_p2.read().range(6, 6);
        tmp_5988_reg_12819 = mul_ln1118_780_fu_11730_p2.read().range(31, 31);
        tmp_5990_reg_12831 = mul_ln1118_780_fu_11730_p2.read().range(6, 6);
        tmp_5995_reg_12848 = mul_ln1118_781_fu_11739_p2.read().range(31, 31);
        tmp_5997_reg_12860 = mul_ln1118_781_fu_11739_p2.read().range(6, 6);
        tmp_6002_reg_12877 = mul_ln1118_782_fu_11748_p2.read().range(31, 31);
        tmp_6004_reg_12889 = mul_ln1118_782_fu_11748_p2.read().range(6, 6);
        tmp_6009_reg_12906 = mul_ln1118_783_fu_11757_p2.read().range(31, 31);
        tmp_6011_reg_12918 = mul_ln1118_783_fu_11757_p2.read().range(6, 6);
        tmp_6016_reg_12935 = mul_ln1118_784_fu_11766_p2.read().range(31, 31);
        tmp_6018_reg_12947 = mul_ln1118_784_fu_11766_p2.read().range(6, 6);
        tmp_6023_reg_12964 = mul_ln1118_785_fu_11775_p2.read().range(31, 31);
        tmp_6025_reg_12976 = mul_ln1118_785_fu_11775_p2.read().range(6, 6);
        tmp_6037_reg_12994 = mul_ln1118_787_fu_11794_p2.read().range(31, 31);
        tmp_6041_reg_13015 = add_ln415_795_fu_3129_p2.read().range(23, 23);
        tmp_6044_reg_13033 = mul_ln1118_788_fu_11804_p2.read().range(31, 31);
        tmp_6046_reg_13045 = mul_ln1118_788_fu_11804_p2.read().range(6, 6);
        tmp_6051_reg_13062 = mul_ln1118_789_fu_11813_p2.read().range(31, 31);
        tmp_6053_reg_13074 = mul_ln1118_789_fu_11813_p2.read().range(6, 6);
        tmp_6058_reg_13091 = mul_ln1118_790_fu_11822_p2.read().range(31, 31);
        tmp_6060_reg_13103 = mul_ln1118_790_fu_11822_p2.read().range(6, 6);
        tmp_6065_reg_13120 = mul_ln1118_791_fu_11831_p2.read().range(31, 31);
        tmp_6067_reg_13132 = mul_ln1118_791_fu_11831_p2.read().range(6, 6);
        tmp_6072_reg_13149 = mul_ln1118_792_fu_11840_p2.read().range(31, 31);
        tmp_6074_reg_13161 = mul_ln1118_792_fu_11840_p2.read().range(6, 6);
        tmp_6079_reg_13178 = mul_ln1118_793_fu_11849_p2.read().range(31, 31);
        tmp_6081_reg_13190 = mul_ln1118_793_fu_11849_p2.read().range(6, 6);
        tmp_6086_reg_13207 = mul_ln1118_794_fu_11858_p2.read().range(31, 31);
        tmp_6088_reg_13219 = mul_ln1118_794_fu_11858_p2.read().range(6, 6);
        tmp_6093_reg_13236 = mul_ln1118_795_fu_11867_p2.read().range(29, 29);
        tmp_6095_reg_13248 = mul_ln1118_795_fu_11867_p2.read().range(6, 6);
        trunc_ln708_761_reg_12224 = mul_ln1118_758_fu_11528_p2.read().range(30, 7);
        trunc_ln708_762_reg_12253 = mul_ln1118_759_fu_11537_p2.read().range(30, 7);
        trunc_ln708_763_reg_12282 = mul_ln1118_760_fu_11546_p2.read().range(30, 7);
        trunc_ln708_764_reg_12311 = mul_ln1118_761_fu_11555_p2.read().range(30, 7);
        trunc_ln708_765_reg_12340 = mul_ln1118_762_fu_11564_p2.read().range(30, 7);
        trunc_ln708_766_reg_12369 = mul_ln1118_763_fu_11573_p2.read().range(30, 7);
        trunc_ln708_767_reg_12398 = mul_ln1118_764_fu_11582_p2.read().range(30, 7);
        trunc_ln708_768_reg_12427 = mul_ln1118_765_fu_11591_p2.read().range(30, 7);
        trunc_ln708_771_reg_12496 = mul_ln1118_768_fu_11620_p2.read().range(30, 7);
        trunc_ln708_772_reg_12525 = mul_ln1118_769_fu_11629_p2.read().range(30, 7);
        trunc_ln708_773_reg_12554 = mul_ln1118_770_fu_11638_p2.read().range(30, 7);
        trunc_ln708_774_reg_12583 = mul_ln1118_771_fu_11647_p2.read().range(30, 7);
        trunc_ln708_775_reg_12612 = mul_ln1118_772_fu_11656_p2.read().range(30, 7);
        trunc_ln708_776_reg_12641 = mul_ln1118_773_fu_11665_p2.read().range(30, 7);
        trunc_ln708_777_reg_12670 = mul_ln1118_774_fu_11674_p2.read().range(30, 7);
        trunc_ln708_778_reg_12699 = mul_ln1118_775_fu_11683_p2.read().range(30, 7);
        trunc_ln708_781_reg_12768 = mul_ln1118_778_fu_11712_p2.read().range(30, 7);
        trunc_ln708_782_reg_12797 = mul_ln1118_779_fu_11721_p2.read().range(30, 7);
        trunc_ln708_783_reg_12826 = mul_ln1118_780_fu_11730_p2.read().range(30, 7);
        trunc_ln708_784_reg_12855 = mul_ln1118_781_fu_11739_p2.read().range(30, 7);
        trunc_ln708_785_reg_12884 = mul_ln1118_782_fu_11748_p2.read().range(30, 7);
        trunc_ln708_786_reg_12913 = mul_ln1118_783_fu_11757_p2.read().range(30, 7);
        trunc_ln708_787_reg_12942 = mul_ln1118_784_fu_11766_p2.read().range(30, 7);
        trunc_ln708_788_reg_12971 = mul_ln1118_785_fu_11775_p2.read().range(30, 7);
        trunc_ln708_791_reg_13040 = mul_ln1118_788_fu_11804_p2.read().range(30, 7);
        trunc_ln708_792_reg_13069 = mul_ln1118_789_fu_11813_p2.read().range(30, 7);
        trunc_ln708_793_reg_13098 = mul_ln1118_790_fu_11822_p2.read().range(30, 7);
        trunc_ln708_794_reg_13127 = mul_ln1118_791_fu_11831_p2.read().range(30, 7);
        trunc_ln708_795_reg_13156 = mul_ln1118_792_fu_11840_p2.read().range(30, 7);
        trunc_ln708_796_reg_13185 = mul_ln1118_793_fu_11849_p2.read().range(30, 7);
        trunc_ln708_797_reg_13214 = mul_ln1118_794_fu_11858_p2.read().range(30, 7);
        trunc_ln708_798_reg_13243 = mul_ln1118_795_fu_11867_p2.read().range(29, 7);
        xor_ln779_11_reg_12477 = xor_ln779_11_fu_2159_p2.read();
        xor_ln779_12_reg_12506 = xor_ln779_12_fu_2191_p2.read();
        xor_ln779_13_reg_12535 = xor_ln779_13_fu_2223_p2.read();
        xor_ln779_14_reg_12564 = xor_ln779_14_fu_2255_p2.read();
        xor_ln779_15_reg_12593 = xor_ln779_15_fu_2287_p2.read();
        xor_ln779_16_reg_12622 = xor_ln779_16_fu_2319_p2.read();
        xor_ln779_17_reg_12651 = xor_ln779_17_fu_2351_p2.read();
        xor_ln779_18_reg_12680 = xor_ln779_18_fu_2383_p2.read();
        xor_ln779_19_reg_12709 = xor_ln779_19_fu_2415_p2.read();
        xor_ln779_1_reg_12205 = xor_ln779_1_fu_1557_p2.read();
        xor_ln779_21_reg_12749 = xor_ln779_21_fu_2661_p2.read();
        xor_ln779_22_reg_12778 = xor_ln779_22_fu_2693_p2.read();
        xor_ln779_23_reg_12807 = xor_ln779_23_fu_2725_p2.read();
        xor_ln779_24_reg_12836 = xor_ln779_24_fu_2757_p2.read();
        xor_ln779_25_reg_12865 = xor_ln779_25_fu_2789_p2.read();
        xor_ln779_26_reg_12894 = xor_ln779_26_fu_2821_p2.read();
        xor_ln779_27_reg_12923 = xor_ln779_27_fu_2853_p2.read();
        xor_ln779_28_reg_12952 = xor_ln779_28_fu_2885_p2.read();
        xor_ln779_29_reg_12981 = xor_ln779_29_fu_2917_p2.read();
        xor_ln779_2_reg_12234 = xor_ln779_2_fu_1601_p2.read();
        xor_ln779_31_reg_13021 = xor_ln779_31_fu_3163_p2.read();
        xor_ln779_32_reg_13050 = xor_ln779_32_fu_3195_p2.read();
        xor_ln779_33_reg_13079 = xor_ln779_33_fu_3227_p2.read();
        xor_ln779_34_reg_13108 = xor_ln779_34_fu_3259_p2.read();
        xor_ln779_35_reg_13137 = xor_ln779_35_fu_3291_p2.read();
        xor_ln779_36_reg_13166 = xor_ln779_36_fu_3323_p2.read();
        xor_ln779_37_reg_13195 = xor_ln779_37_fu_3355_p2.read();
        xor_ln779_38_reg_13224 = xor_ln779_38_fu_3387_p2.read();
        xor_ln779_39_reg_13253 = xor_ln779_39_fu_3419_p2.read();
        xor_ln779_3_reg_12263 = xor_ln779_3_fu_1645_p2.read();
        xor_ln779_4_reg_12292 = xor_ln779_4_fu_1689_p2.read();
        xor_ln779_5_reg_12321 = xor_ln779_5_fu_1733_p2.read();
        xor_ln779_6_reg_12350 = xor_ln779_6_fu_1777_p2.read();
        xor_ln779_7_reg_12379 = xor_ln779_7_fu_1821_p2.read();
        xor_ln779_8_reg_12408 = xor_ln779_8_fu_1865_p2.read();
        xor_ln779_9_reg_12437 = xor_ln779_9_fu_1913_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        and_ln360_reg_11948 = and_ln360_fu_868_p2.read();
        icmp_ln360_reg_11937 = icmp_ln360_fu_842_p2.read();
        kernel_data_V_16 = tmp_data_0_V_reg_11876.read();
        kernel_data_V_17 = tmp_data_1_V_reg_11881.read();
        kernel_data_V_18 = tmp_data_2_V_reg_11886.read();
        kernel_data_V_19 = tmp_data_3_V_reg_11891.read();
        pX_3_load_reg_11942 = pX_3.read();
        sX_3_load_reg_11932 = sX_3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(io_acc_block_signal_op23.read(), ap_const_logic_1))) {
        i_iw_reg_11916 = i_iw_fu_700_p2.read();
        kernel_data_V_16_load_reg_11896 = kernel_data_V_16.read();
        kernel_data_V_17_load_reg_11901 = kernel_data_V_17.read();
        kernel_data_V_18_load_reg_11906 = kernel_data_V_18.read();
        kernel_data_V_19_load_reg_11911 = kernel_data_V_19.read();
        tmp_data_0_V_reg_11876 = data_V_data_0_V_dout.read();
        tmp_data_1_V_reg_11881 = data_V_data_1_V_dout.read();
        tmp_data_2_V_reg_11886 = data_V_data_2_V_dout.read();
        tmp_data_3_V_reg_11891 = data_V_data_3_V_dout.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        in_index13_reg_542_pp1_iter1_reg = in_index13_reg_542.read();
        select_ln56_39_reg_11972 = select_ln56_39_fu_913_p3.read();
        select_ln56_reg_11962 = select_ln56_fu_893_p3.read();
        tmp_764_reg_11977 = w11_V_q0.read().range(15, 8);
        tmp_765_reg_11982 = w11_V_q0.read().range(23, 16);
        tmp_766_reg_11987 = w11_V_q0.read().range(31, 24);
        tmp_767_reg_11992 = w11_V_q0.read().range(39, 32);
        tmp_768_reg_11997 = w11_V_q0.read().range(47, 40);
        tmp_769_reg_12002 = w11_V_q0.read().range(55, 48);
        tmp_770_reg_12007 = w11_V_q0.read().range(63, 56);
        tmp_771_reg_12012 = w11_V_q0.read().range(71, 64);
        tmp_772_reg_12017 = w11_V_q0.read().range(79, 72);
        tmp_773_reg_12022 = w11_V_q0.read().range(87, 80);
        tmp_774_reg_12027 = w11_V_q0.read().range(95, 88);
        tmp_775_reg_12032 = w11_V_q0.read().range(103, 96);
        tmp_776_reg_12037 = w11_V_q0.read().range(111, 104);
        tmp_777_reg_12042 = w11_V_q0.read().range(119, 112);
        tmp_778_reg_12047 = w11_V_q0.read().range(127, 120);
        tmp_779_reg_12052 = w11_V_q0.read().range(135, 128);
        tmp_780_reg_12057 = w11_V_q0.read().range(143, 136);
        tmp_781_reg_12062 = w11_V_q0.read().range(151, 144);
        tmp_782_reg_12067 = w11_V_q0.read().range(159, 152);
        tmp_783_reg_12072 = w11_V_q0.read().range(167, 160);
        tmp_784_reg_12077 = w11_V_q0.read().range(175, 168);
        tmp_785_reg_12082 = w11_V_q0.read().range(183, 176);
        tmp_786_reg_12087 = w11_V_q0.read().range(191, 184);
        tmp_787_reg_12092 = w11_V_q0.read().range(199, 192);
        tmp_788_reg_12097 = w11_V_q0.read().range(207, 200);
        tmp_789_reg_12102 = w11_V_q0.read().range(215, 208);
        tmp_790_reg_12107 = w11_V_q0.read().range(223, 216);
        tmp_791_reg_12112 = w11_V_q0.read().range(231, 224);
        tmp_792_reg_12117 = w11_V_q0.read().range(239, 232);
        tmp_793_reg_12122 = w11_V_q0.read().range(247, 240);
        tmp_794_reg_12127 = w11_V_q0.read().range(255, 248);
        tmp_795_reg_12132 = w11_V_q0.read().range(263, 256);
        tmp_796_reg_12137 = w11_V_q0.read().range(271, 264);
        tmp_797_reg_12142 = w11_V_q0.read().range(279, 272);
        tmp_798_reg_12147 = w11_V_q0.read().range(287, 280);
        tmp_799_reg_12152 = w11_V_q0.read().range(295, 288);
        tmp_800_reg_12157 = w11_V_q0.read().range(303, 296);
        tmp_801_reg_12162 = w11_V_q0.read().range(311, 304);
        tmp_802_reg_12167 = w11_V_q0.read().range(317, 312);
        trunc_ln56_reg_11967 = trunc_ln56_fu_901_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        in_index_reg_11957 = in_index_fu_879_p2.read();
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
        kernel_data_V_1155 = ap_phi_mux_phi_ln203_15_phi_fu_506_p8.read();
        kernel_data_V_2156 = ap_phi_mux_phi_ln203_16_phi_fu_519_p8.read();
        kernel_data_V_3157 = ap_phi_mux_phi_ln203_17_phi_fu_532_p8.read();
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && !(esl_seteq<1,1,1>(and_ln360_reg_11948.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op1864.read())))) {
        sX_3 = ap_phi_mux_storemerge_i_i_phi_fu_601_p4.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        tmp_data_0_V_20_reg_13260 = tmp_data_0_V_20_fu_5425_p3.read();
        tmp_data_1_V_19_reg_13266 = tmp_data_1_V_19_fu_7433_p3.read();
        tmp_data_2_V_19_reg_13272 = tmp_data_2_V_19_fu_9441_p3.read();
        tmp_data_3_V_19_reg_13278 = tmp_data_3_V_19_fu_11453_p3.read();
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
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && !(esl_seteq<1,1,1>(and_ln360_reg_11948.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op1864.read())) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln64_fu_11502_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && !(esl_seteq<1,1,1>(and_ln360_reg_11948.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op1864.read())) && esl_seteq<1,1,1>(icmp_ln64_fu_11502_p2.read(), ap_const_lv1_0))) {
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

