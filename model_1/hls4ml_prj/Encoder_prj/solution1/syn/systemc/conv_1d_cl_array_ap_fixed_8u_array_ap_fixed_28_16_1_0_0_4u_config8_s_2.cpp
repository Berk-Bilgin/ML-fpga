#include "conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_ap_clk_no_reset_() {
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
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
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
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter5 = ap_enable_reg_pp0_iter4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter6 = ap_enable_reg_pp0_iter5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter7 = ap_enable_reg_pp0_iter6.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            ap_enable_reg_pp0_iter7 = ap_const_logic_0;
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_198.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_fu_57118_p2.read()) && 
             esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln384_fu_62615_p2.read()))) {
            ap_phi_reg_pp0_iter1_storemerge_i_i_reg_763 = ap_const_lv32_0;
        } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_fu_57118_p2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln384_fu_62615_p2.read()))) {
            ap_phi_reg_pp0_iter1_storemerge_i_i_reg_763 = select_ln391_fu_62639_p3.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter1_storemerge_i_i_reg_763 = ap_phi_reg_pp0_iter0_storemerge_i_i_reg_763.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_fu_57118_p2.read()))) {
        i_iw_0_i_reg_752 = i_iw_fu_57124_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        i_iw_0_i_reg_752 = ap_const_lv7_0;
    }
    if (esl_seteq<1,1,1>(ap_condition_741.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln384_fu_62615_p2.read())) {
            pX_2 = ap_const_lv32_0;
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln384_fu_62615_p2.read())) {
            pX_2 = add_ln389_fu_62621_p2.read();
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
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_reg_103889_pp0_iter1_reg.read()))) {
        acc_0_V_110_reg_104509 = acc_0_V_110_fu_75624_p2.read();
        acc_1_V_110_reg_104529 = acc_1_V_110_fu_75660_p2.read();
        acc_2_V_110_reg_104549 = acc_2_V_110_fu_75696_p2.read();
        acc_3_V_110_reg_104569 = acc_3_V_110_fu_75732_p2.read();
        add_ln415_1413_reg_104444 = add_ln415_1413_fu_73186_p2.read();
        add_ln415_1416_reg_104483 = add_ln415_1416_fu_73680_p2.read();
        and_ln416_1398_reg_104449 = and_ln416_1398_fu_73206_p2.read();
        and_ln416_1401_reg_104488 = and_ln416_1401_fu_73700_p2.read();
        select_ln340_4825_reg_104388 = select_ln340_4825_fu_71710_p3.read();
        select_ln340_4826_reg_104394 = select_ln340_4826_fu_71906_p3.read();
        select_ln340_4827_reg_104400 = select_ln340_4827_fu_72098_p3.read();
        select_ln340_4828_reg_104406 = select_ln340_4828_fu_72294_p3.read();
        select_ln340_4829_reg_104412 = select_ln340_4829_fu_72506_p3.read();
        select_ln340_4830_reg_104418 = select_ln340_4830_fu_72706_p3.read();
        select_ln340_4831_reg_104424 = select_ln340_4831_fu_72898_p3.read();
        select_ln340_4832_reg_104430 = select_ln340_4832_fu_73098_p3.read();
        select_ln340_4834_reg_104463 = select_ln340_4834_fu_73412_p3.read();
        select_ln340_4835_reg_104469 = select_ln340_4835_fu_73608_p3.read();
        tmp_10439_reg_104502 = add_ln1192_1417_fu_75610_p2.read().range(28, 28);
        tmp_10440_reg_104515 = acc_0_V_110_fu_75624_p2.read().range(27, 27);
        tmp_10441_reg_104522 = add_ln1192_1418_fu_75646_p2.read().range(28, 28);
        tmp_10442_reg_104535 = acc_1_V_110_fu_75660_p2.read().range(27, 27);
        tmp_10443_reg_104542 = add_ln1192_1419_fu_75682_p2.read().range(28, 28);
        tmp_10444_reg_104555 = acc_2_V_110_fu_75696_p2.read().range(27, 27);
        tmp_10445_reg_104562 = add_ln1192_1420_fu_75718_p2.read().range(28, 28);
        tmp_10446_reg_104575 = acc_3_V_110_fu_75732_p2.read().range(27, 27);
        tmp_9860_reg_104436 = mul_ln1118_1225_fu_849_p2.read().range(33, 33);
        tmp_9864_reg_104457 = add_ln415_1413_fu_73186_p2.read().range(24, 24);
        tmp_9875_reg_104475 = mul_ln1118_1228_fu_841_p2.read().range(33, 33);
        tmp_9879_reg_104496 = add_ln415_1416_fu_73680_p2.read().range(24, 24);
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_reg_103889_pp0_iter3_reg.read()))) {
        acc_0_V_132_reg_104940 = acc_0_V_132_fu_88662_p2.read();
        acc_0_V_133_reg_104951 = acc_0_V_133_fu_88688_p3.read();
        acc_1_V_132_reg_104963 = acc_1_V_132_fu_88718_p2.read();
        acc_2_V_132_reg_104983 = acc_2_V_132_fu_88754_p2.read();
        acc_3_V_132_reg_105003 = acc_3_V_132_fu_88790_p2.read();
        select_ln340_4869_reg_104868 = select_ln340_4869_fu_84861_p3.read();
        select_ln340_4870_reg_104874 = select_ln340_4870_fu_85078_p3.read();
        select_ln340_4871_reg_104880 = select_ln340_4871_fu_85274_p3.read();
        select_ln340_4872_reg_104886 = select_ln340_4872_fu_85470_p3.read();
        select_ln340_4873_reg_104892 = select_ln340_4873_fu_85683_p3.read();
        select_ln340_4874_reg_104898 = select_ln340_4874_fu_85883_p3.read();
        select_ln340_4875_reg_104904 = select_ln340_4875_fu_86079_p3.read();
        select_ln340_4876_reg_104910 = select_ln340_4876_fu_86279_p3.read();
        select_ln340_4877_reg_104916 = select_ln340_4877_fu_86484_p3.read();
        select_ln340_4879_reg_104922 = select_ln340_4879_fu_86676_p3.read();
        select_ln340_4880_reg_104928 = select_ln340_4880_fu_86868_p3.read();
        tmp_10527_reg_104934 = add_ln1192_1461_fu_88648_p2.read().range(28, 28);
        tmp_10528_reg_104945 = acc_0_V_132_fu_88662_p2.read().range(27, 27);
        tmp_10529_reg_104956 = add_ln1192_1462_fu_88704_p2.read().range(28, 28);
        tmp_10530_reg_104969 = acc_1_V_132_fu_88718_p2.read().range(27, 27);
        tmp_10531_reg_104976 = add_ln1192_1463_fu_88740_p2.read().range(28, 28);
        tmp_10532_reg_104989 = acc_2_V_132_fu_88754_p2.read().range(27, 27);
        tmp_10533_reg_104996 = add_ln1192_1464_fu_88776_p2.read().range(28, 28);
        tmp_10534_reg_105009 = acc_3_V_132_fu_88790_p2.read().range(27, 27);
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_reg_103889_pp0_iter4_reg.read()))) {
        acc_0_V_144_reg_105152 = acc_0_V_144_fu_95754_p2.read();
        add_ln415_1482_reg_105096 = add_ln415_1482_fu_93366_p2.read();
        and_ln416_1467_reg_105101 = and_ln416_1467_fu_93386_p2.read();
        select_ln340_4890_reg_105016 = select_ln340_4890_fu_91068_p3.read();
        select_ln340_4891_reg_105022 = select_ln340_4891_fu_91264_p3.read();
        select_ln340_4892_reg_105028 = select_ln340_4892_fu_91460_p3.read();
        select_ln340_4893_reg_105034 = select_ln340_4893_fu_91669_p3.read();
        select_ln340_4894_reg_105040 = select_ln340_4894_fu_91861_p3.read();
        select_ln340_4895_reg_105046 = select_ln340_4895_fu_92057_p3.read();
        select_ln340_4896_reg_105052 = select_ln340_4896_fu_92257_p3.read();
        select_ln340_4897_reg_105058 = select_ln340_4897_fu_92466_p3.read();
        select_ln340_4898_reg_105064 = select_ln340_4898_fu_92666_p3.read();
        select_ln340_4899_reg_105070 = select_ln340_4899_fu_92858_p3.read();
        select_ln340_4900_reg_105076 = select_ln340_4900_fu_93054_p3.read();
        select_ln340_4901_reg_105082 = select_ln340_4901_fu_93266_p3.read();
        select_ln340_4903_reg_105115 = select_ln340_4903_fu_93584_p3.read();
        select_ln340_4904_reg_105121 = select_ln340_4904_fu_93780_p3.read();
        select_ln340_5045_reg_105127 = select_ln340_5045_fu_95544_p3.read();
        select_ln340_5046_reg_105133 = select_ln340_5046_fu_95634_p3.read();
        select_ln340_5047_reg_105139 = select_ln340_5047_fu_95724_p3.read();
        tmp_10205_reg_105088 = sub_ln1118_193_fu_93296_p2.read().range(33, 33);
        tmp_10209_reg_105109 = add_ln415_1482_fu_93366_p2.read().range(23, 23);
        tmp_10575_reg_105145 = add_ln1192_1485_fu_95740_p2.read().range(28, 28);
        tmp_10576_reg_105158 = acc_0_V_144_fu_95754_p2.read().range(27, 27);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(and_ln360_reg_103889.read(), ap_const_lv1_1))) {
        acc_0_V_98_reg_104265 = acc_0_V_98_fu_69224_p2.read();
        acc_0_V_99_reg_104276 = acc_0_V_99_fu_69250_p3.read();
        acc_1_V_98_reg_104287 = acc_1_V_98_fu_69280_p2.read();
        acc_1_V_99_reg_104298 = acc_1_V_99_fu_69306_p3.read();
        acc_2_V_98_reg_104309 = acc_2_V_98_fu_69336_p2.read();
        acc_2_V_99_reg_104320 = acc_2_V_99_fu_69362_p3.read();
        acc_3_V_98_reg_104331 = acc_3_V_98_fu_69392_p2.read();
        acc_3_V_99_reg_104342 = acc_3_V_99_fu_69418_p3.read();
        add_ln415_1385_reg_104111 = add_ln415_1385_fu_65473_p2.read();
        add_ln415_1394_reg_104186 = add_ln415_1394_fu_67208_p2.read();
        add_ln415_1395_reg_104213 = add_ln415_1395_fu_67306_p2.read();
        add_ln415_1396_reg_104240 = add_ln415_1396_fu_67404_p2.read();
        and_ln416_1370_reg_104116 = and_ln416_1370_fu_65493_p2.read();
        and_ln416_1379_reg_104191 = and_ln416_1379_fu_67228_p2.read();
        and_ln416_1380_reg_104218 = and_ln416_1380_fu_67326_p2.read();
        and_ln416_1381_reg_104245 = and_ln416_1381_fu_67424_p2.read();
        select_ln340_4801_reg_104079 = select_ln340_4801_fu_64762_p3.read();
        select_ln340_4802_reg_104085 = select_ln340_4802_fu_64962_p3.read();
        select_ln340_4803_reg_104091 = select_ln340_4803_fu_65158_p3.read();
        select_ln340_4804_reg_104097 = select_ln340_4804_fu_65358_p3.read();
        select_ln340_4806_reg_104130 = select_ln340_4806_fu_65699_p3.read();
        select_ln340_4807_reg_104136 = select_ln340_4807_fu_65899_p3.read();
        select_ln340_4808_reg_104142 = select_ln340_4808_fu_66099_p3.read();
        select_ln340_4809_reg_104148 = select_ln340_4809_fu_66311_p3.read();
        select_ln340_4810_reg_104154 = select_ln340_4810_fu_66511_p3.read();
        select_ln340_4811_reg_104160 = select_ln340_4811_fu_66711_p3.read();
        select_ln340_4812_reg_104166 = select_ln340_4812_fu_66907_p3.read();
        select_ln340_4813_reg_104172 = select_ln340_4813_fu_67118_p3.read();
        tmp_10391_reg_104259 = add_ln1192_1393_fu_69210_p2.read().range(28, 28);
        tmp_10392_reg_104270 = acc_0_V_98_fu_69224_p2.read().range(27, 27);
        tmp_10393_reg_104281 = add_ln1192_1394_fu_69266_p2.read().range(28, 28);
        tmp_10394_reg_104292 = acc_1_V_98_fu_69280_p2.read().range(27, 27);
        tmp_10395_reg_104303 = add_ln1192_1395_fu_69322_p2.read().range(28, 28);
        tmp_10396_reg_104314 = acc_2_V_98_fu_69336_p2.read().range(27, 27);
        tmp_10397_reg_104325 = add_ln1192_1396_fu_69378_p2.read().range(28, 28);
        tmp_10398_reg_104336 = acc_3_V_98_fu_69392_p2.read().range(27, 27);
        tmp_9720_reg_104103 = sub_ln1118_178_fu_65403_p2.read().range(34, 34);
        tmp_9724_reg_104124 = add_ln415_1385_fu_65473_p2.read().range(24, 24);
        tmp_9765_reg_104178 = sub_ln1118_179_fu_67138_p2.read().range(33, 33);
        tmp_9769_reg_104199 = add_ln415_1394_fu_67208_p2.read().range(23, 23);
        tmp_9770_reg_104205 = mul_ln1118_1208_fu_922_p2.read().range(32, 32);
        tmp_9774_reg_104226 = add_ln415_1395_fu_67306_p2.read().range(23, 23);
        tmp_9775_reg_104232 = mul_ln1118_1209_fu_837_p2.read().range(33, 33);
        tmp_9779_reg_104253 = add_ln415_1396_fu_67404_p2.read().range(24, 24);
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_reg_103889_pp0_iter5_reg.read()))) {
        acc_1_V_154_reg_105307 = acc_1_V_154_fu_101257_p2.read();
        acc_2_V_154_reg_105327 = acc_2_V_154_fu_101293_p2.read();
        acc_3_V_154_reg_105347 = acc_3_V_154_fu_101329_p2.read();
        add_ln415_1493_reg_105173 = add_ln415_1493_fu_97553_p2.read();
        add_ln415_1494_reg_105200 = add_ln415_1494_fu_97700_p2.read();
        add_ln415_1495_reg_105227 = add_ln415_1495_fu_97798_p2.read();
        and_ln416_1478_reg_105178 = and_ln416_1478_fu_97573_p2.read();
        and_ln416_1479_reg_105205 = and_ln416_1479_fu_97720_p2.read();
        and_ln416_1480_reg_105232 = and_ln416_1480_fu_97818_p2.read();
        select_ln340_4916_reg_105246 = select_ln340_4916_fu_98020_p3.read();
        select_ln340_4917_reg_105252 = select_ln340_4917_fu_98221_p3.read();
        select_ln340_4918_reg_105258 = select_ln340_4918_fu_98417_p3.read();
        select_ln340_4919_reg_105264 = select_ln340_4919_fu_98609_p3.read();
        select_ln340_4920_reg_105270 = select_ln340_4920_fu_98819_p3.read();
        select_ln340_4921_reg_105276 = select_ln340_4921_fu_99019_p3.read();
        select_ln340_4922_reg_105282 = select_ln340_4922_fu_99219_p3.read();
        select_ln340_4923_reg_105288 = select_ln340_4923_fu_99415_p3.read();
        select_ln340_5068_reg_105294 = select_ln340_5068_fu_101227_p3.read();
        tmp_10260_reg_105165 = mul_ln1118_1294_fu_853_p2.read().range(33, 33);
        tmp_10264_reg_105186 = add_ln415_1493_fu_97553_p2.read().range(24, 24);
        tmp_10265_reg_105192 = add_ln1118_fu_97624_p2.read().range(33, 33);
        tmp_10269_reg_105213 = add_ln415_1494_fu_97700_p2.read().range(23, 23);
        tmp_10270_reg_105219 = mul_ln1118_1295_fu_898_p2.read().range(33, 33);
        tmp_10274_reg_105240 = add_ln415_1495_fu_97798_p2.read().range(24, 24);
        tmp_10617_reg_105300 = add_ln1192_1506_fu_101243_p2.read().range(28, 28);
        tmp_10618_reg_105313 = acc_1_V_154_fu_101257_p2.read().range(27, 27);
        tmp_10619_reg_105320 = add_ln1192_1507_fu_101279_p2.read().range(28, 28);
        tmp_10620_reg_105333 = acc_2_V_154_fu_101293_p2.read().range(27, 27);
        tmp_10621_reg_105340 = add_ln1192_1508_fu_101315_p2.read().range(28, 28);
        tmp_10622_reg_105353 = acc_3_V_154_fu_101329_p2.read().range(27, 27);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_fu_57118_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_fu_57184_p2.read()))) {
        add_ln415_1366_reg_103955 = add_ln415_1366_fu_60775_p2.read();
        add_ln415_1370_reg_104000 = add_ln415_1370_fu_61481_p2.read();
        and_ln416_1351_reg_103960 = and_ln416_1351_fu_60795_p2.read();
        and_ln416_1355_reg_104005 = and_ln416_1355_fu_61501_p2.read();
        select_ln340_4777_reg_103893 = select_ln340_4777_fu_59060_p3.read();
        select_ln340_4778_reg_103899 = select_ln340_4778_fu_59252_p3.read();
        select_ln340_4779_reg_103905 = select_ln340_4779_fu_59448_p3.read();
        select_ln340_4780_reg_103911 = select_ln340_4780_fu_59648_p3.read();
        select_ln340_4781_reg_103917 = select_ln340_4781_fu_59860_p3.read();
        select_ln340_4782_reg_103923 = select_ln340_4782_fu_60052_p3.read();
        select_ln340_4783_reg_103929 = select_ln340_4783_fu_60244_p3.read();
        select_ln340_4784_reg_103935 = select_ln340_4784_fu_60436_p3.read();
        select_ln340_4785_reg_103941 = select_ln340_4785_fu_60703_p3.read();
        select_ln340_4787_reg_103974 = select_ln340_4787_fu_60997_p3.read();
        select_ln340_4788_reg_103980 = select_ln340_4788_fu_61197_p3.read();
        select_ln340_4789_reg_103986 = select_ln340_4789_fu_61409_p3.read();
        select_ln340_4791_reg_104019 = select_ln340_4791_fu_61703_p3.read();
        select_ln340_4792_reg_104025 = select_ln340_4792_fu_61903_p3.read();
        select_ln340_4932_reg_104031 = select_ln340_4932_fu_62337_p3.read();
        select_ln340_4933_reg_104037 = select_ln340_4933_fu_62427_p3.read();
        select_ln340_4934_reg_104043 = select_ln340_4934_fu_62517_p3.read();
        select_ln340_4935_reg_104049 = select_ln340_4935_fu_62607_p3.read();
        tmp_9625_reg_103947 = mul_ln1118_1182_fu_823_p2.read().range(32, 32);
        tmp_9629_reg_103968 = add_ln415_1366_fu_60775_p2.read().range(23, 23);
        tmp_9645_reg_103992 = mul_ln1118_1186_fu_792_p2.read().range(33, 33);
        tmp_9649_reg_104013 = add_ln415_1370_fu_61481_p2.read().range(24, 24);
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_reg_103889_pp0_iter2_reg.read()))) {
        add_ln415_1435_reg_104704 = add_ln415_1435_fu_79836_p2.read();
        add_ln415_1436_reg_104731 = add_ln415_1436_fu_79946_p2.read();
        and_ln416_1420_reg_104709 = and_ln416_1420_fu_79856_p2.read();
        and_ln416_1421_reg_104736 = and_ln416_1421_fu_79966_p2.read();
        select_ln340_4845_reg_104636 = select_ln340_4845_fu_77897_p3.read();
        select_ln340_4846_reg_104642 = select_ln340_4846_fu_78125_p3.read();
        select_ln340_4847_reg_104648 = select_ln340_4847_fu_78325_p3.read();
        select_ln340_4848_reg_104654 = select_ln340_4848_fu_78525_p3.read();
        select_ln340_4849_reg_104660 = select_ln340_4849_fu_78734_p3.read();
        select_ln340_4850_reg_104666 = select_ln340_4850_fu_78934_p3.read();
        select_ln340_4851_reg_104672 = select_ln340_4851_fu_79126_p3.read();
        select_ln340_4852_reg_104678 = select_ln340_4852_fu_79322_p3.read();
        select_ln340_4853_reg_104684 = select_ln340_4853_fu_79530_p3.read();
        select_ln340_4854_reg_104690 = select_ln340_4854_fu_79722_p3.read();
        select_ln340_4857_reg_104750 = select_ln340_4857_fu_80188_p3.read();
        select_ln340_4858_reg_104756 = select_ln340_4858_fu_80384_p3.read();
        select_ln340_4859_reg_104762 = select_ln340_4859_fu_80576_p3.read();
        select_ln340_4860_reg_104768 = select_ln340_4860_fu_80772_p3.read();
        select_ln340_5000_reg_104774 = select_ln340_5000_fu_82466_p3.read();
        select_ln340_5001_reg_104780 = select_ln340_5001_fu_82556_p3.read();
        select_ln340_5002_reg_104786 = select_ln340_5002_fu_82646_p3.read();
        select_ln340_5003_reg_104792 = select_ln340_5003_fu_82736_p3.read();
        tmp_9970_reg_104696 = sub_ln1118_185_fu_79760_p2.read().range(31, 31);
        tmp_9974_reg_104717 = add_ln415_1435_fu_79836_p2.read().range(21, 21);
        tmp_9975_reg_104723 = sub_ln1118_187_fu_79876_p2.read().range(31, 31);
        tmp_9979_reg_104744 = add_ln415_1436_fu_79946_p2.read().range(21, 21);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_fu_57118_p2.read()))) {
        and_ln360_reg_103889 = and_ln360_fu_57184_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        and_ln360_reg_103889_pp0_iter1_reg = and_ln360_reg_103889.read();
        icmp_ln64_reg_103880 = icmp_ln64_fu_57118_p2.read();
        icmp_ln64_reg_103880_pp0_iter1_reg = icmp_ln64_reg_103880.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        and_ln360_reg_103889_pp0_iter2_reg = and_ln360_reg_103889_pp0_iter1_reg.read();
        and_ln360_reg_103889_pp0_iter3_reg = and_ln360_reg_103889_pp0_iter2_reg.read();
        and_ln360_reg_103889_pp0_iter4_reg = and_ln360_reg_103889_pp0_iter3_reg.read();
        and_ln360_reg_103889_pp0_iter5_reg = and_ln360_reg_103889_pp0_iter4_reg.read();
        and_ln360_reg_103889_pp0_iter6_reg = and_ln360_reg_103889_pp0_iter5_reg.read();
        icmp_ln64_reg_103880_pp0_iter2_reg = icmp_ln64_reg_103880_pp0_iter1_reg.read();
        icmp_ln64_reg_103880_pp0_iter3_reg = icmp_ln64_reg_103880_pp0_iter2_reg.read();
        kernel_data_V_1_35_load_reg_104613_pp0_iter4_reg = kernel_data_V_1_35_load_reg_104613.read();
        kernel_data_V_1_36_load_reg_104621_pp0_iter4_reg = kernel_data_V_1_36_load_reg_104621.read();
        kernel_data_V_1_37_load_reg_104630_pp0_iter4_reg = kernel_data_V_1_37_load_reg_104630.read();
        tmp_data_V_17_2_reg_104814_pp0_iter5_reg = tmp_data_V_17_2_reg_104814.read();
        tmp_data_V_17_3_reg_104821_pp0_iter5_reg = tmp_data_V_17_3_reg_104821.read();
        tmp_data_V_17_4_reg_104828_pp0_iter5_reg = tmp_data_V_17_4_reg_104828.read();
        tmp_data_V_17_5_reg_104837_pp0_iter5_reg = tmp_data_V_17_5_reg_104837.read();
        tmp_data_V_17_6_reg_104843_pp0_iter5_reg = tmp_data_V_17_6_reg_104843.read();
        tmp_data_V_17_7_reg_104849_pp0_iter5_reg = tmp_data_V_17_7_reg_104849.read();
        tmp_data_V_17_7_reg_104849_pp0_iter6_reg = tmp_data_V_17_7_reg_104849_pp0_iter5_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln64_reg_103880.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        kernel_data_V_1_10 = ap_sig_allocacmp_kernel_data_V_1_18_load.read();
        kernel_data_V_1_11 = ap_sig_allocacmp_kernel_data_V_1_19_load.read();
        kernel_data_V_1_12 = ap_sig_allocacmp_kernel_data_V_1_20_load.read();
        kernel_data_V_1_13 = ap_sig_allocacmp_kernel_data_V_1_21_load.read();
        kernel_data_V_1_8 = ap_sig_allocacmp_kernel_data_V_1_16_load.read();
        kernel_data_V_1_9 = ap_sig_allocacmp_kernel_data_V_1_17_load.read();
        sX_2 = ap_phi_reg_pp0_iter1_storemerge_i_i_reg_763.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_reg_103880_pp0_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        kernel_data_V_1_14 = ap_sig_allocacmp_kernel_data_V_1_22_load.read();
        kernel_data_V_1_15 = ap_sig_allocacmp_kernel_data_V_1_23_load.read();
        kernel_data_V_1_16 = ap_sig_allocacmp_kernel_data_V_1_24_load.read();
        kernel_data_V_1_17 = ap_sig_allocacmp_kernel_data_V_1_25_load.read();
        kernel_data_V_1_18 = ap_sig_allocacmp_kernel_data_V_1_26_load.read();
        kernel_data_V_1_19 = ap_sig_allocacmp_kernel_data_V_1_27_load.read();
        kernel_data_V_1_20 = ap_sig_allocacmp_kernel_data_V_1_28_load.read();
        kernel_data_V_1_21 = ap_sig_allocacmp_kernel_data_V_1_29_load.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln64_reg_103880.read(), ap_const_lv1_0))) {
        kernel_data_V_1_20_load_reg_104064 = ap_sig_allocacmp_kernel_data_V_1_20_load.read();
        kernel_data_V_1_21_load_reg_104072 = ap_sig_allocacmp_kernel_data_V_1_21_load.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_reg_103880_pp0_iter2_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        kernel_data_V_1_22 = ap_sig_allocacmp_kernel_data_V_1_30_load.read();
        kernel_data_V_1_23 = ap_sig_allocacmp_kernel_data_V_1_31_load.read();
        kernel_data_V_1_24 = ap_sig_allocacmp_kernel_data_V_1_32_load.read();
        kernel_data_V_1_25 = ap_sig_allocacmp_kernel_data_V_1_33_load.read();
        kernel_data_V_1_26 = ap_sig_allocacmp_kernel_data_V_1_34_load.read();
        kernel_data_V_1_27 = ap_sig_allocacmp_kernel_data_V_1_35_load.read();
        kernel_data_V_1_28 = ap_sig_allocacmp_kernel_data_V_1_36_load.read();
        kernel_data_V_1_29 = ap_sig_allocacmp_kernel_data_V_1_37_load.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_reg_103880_pp0_iter1_reg.read()))) {
        kernel_data_V_1_25_load_reg_104347 = ap_sig_allocacmp_kernel_data_V_1_25_load.read();
        kernel_data_V_1_26_load_reg_104358 = ap_sig_allocacmp_kernel_data_V_1_26_load.read();
        kernel_data_V_1_27_load_reg_104365 = ap_sig_allocacmp_kernel_data_V_1_27_load.read();
        kernel_data_V_1_28_load_reg_104373 = ap_sig_allocacmp_kernel_data_V_1_28_load.read();
        kernel_data_V_1_29_load_reg_104380 = ap_sig_allocacmp_kernel_data_V_1_29_load.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && esl_seteq<1,1,1>(icmp_ln64_reg_103880_pp0_iter3_reg.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        kernel_data_V_1_30 = kernel_data_V_1_38.read();
        kernel_data_V_1_31 = kernel_data_V_1_39.read();
        kernel_data_V_1_32 = data_V_data_0_V_dout.read();
        kernel_data_V_1_33 = data_V_data_1_V_dout.read();
        kernel_data_V_1_34 = data_V_data_2_V_dout.read();
        kernel_data_V_1_35 = data_V_data_3_V_dout.read();
        kernel_data_V_1_36 = data_V_data_4_V_dout.read();
        kernel_data_V_1_37 = data_V_data_5_V_dout.read();
        kernel_data_V_1_38 = data_V_data_6_V_dout.read();
        kernel_data_V_1_39 = data_V_data_7_V_dout.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_reg_103880_pp0_iter2_reg.read()))) {
        kernel_data_V_1_31_load_reg_104582 = ap_sig_allocacmp_kernel_data_V_1_31_load.read();
        kernel_data_V_1_32_load_reg_104590 = ap_sig_allocacmp_kernel_data_V_1_32_load.read();
        kernel_data_V_1_33_load_reg_104600 = ap_sig_allocacmp_kernel_data_V_1_33_load.read();
        kernel_data_V_1_34_load_reg_104606 = ap_sig_allocacmp_kernel_data_V_1_34_load.read();
        kernel_data_V_1_35_load_reg_104613 = ap_sig_allocacmp_kernel_data_V_1_35_load.read();
        kernel_data_V_1_36_load_reg_104621 = ap_sig_allocacmp_kernel_data_V_1_36_load.read();
        kernel_data_V_1_37_load_reg_104630 = ap_sig_allocacmp_kernel_data_V_1_37_load.read();
    }
    if ((esl_seteq<1,1,1>(icmp_ln64_reg_103880_pp0_iter3_reg.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        kernel_data_V_1_38_load_reg_104855 = kernel_data_V_1_38.read();
        kernel_data_V_1_39_load_reg_104861 = kernel_data_V_1_39.read();
        tmp_data_V_17_0_reg_104798 = data_V_data_0_V_dout.read();
        tmp_data_V_17_1_reg_104805 = data_V_data_1_V_dout.read();
        tmp_data_V_17_2_reg_104814 = data_V_data_2_V_dout.read();
        tmp_data_V_17_3_reg_104821 = data_V_data_3_V_dout.read();
        tmp_data_V_17_4_reg_104828 = data_V_data_4_V_dout.read();
        tmp_data_V_17_5_reg_104837 = data_V_data_5_V_dout.read();
        tmp_data_V_17_6_reg_104843 = data_V_data_6_V_dout.read();
        tmp_data_V_17_7_reg_104849 = data_V_data_7_V_dout.read();
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter6.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln64_fu_57118_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter6.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln64_fu_57118_p2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state10;
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

