#include "conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_8u_config5_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_8u_config5_s::thread_ap_clk_no_reset_() {
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
    if (esl_seteq<1,1,1>(ap_condition_218.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_fu_226625_p2.read()) && 
             esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln384_fu_237164_p2.read()))) {
            ap_phi_reg_pp0_iter1_storemerge_i_i_reg_1149 = ap_const_lv32_0;
        } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_fu_226625_p2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln384_fu_237164_p2.read()))) {
            ap_phi_reg_pp0_iter1_storemerge_i_i_reg_1149 = select_ln391_fu_237188_p3.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter1_storemerge_i_i_reg_1149 = ap_phi_reg_pp0_iter0_storemerge_i_i_reg_1149.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_fu_226625_p2.read()))) {
        i_iw_0_i_reg_1138 = i_iw_fu_226631_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        i_iw_0_i_reg_1138 = ap_const_lv7_0;
    }
    if (esl_seteq<1,1,1>(ap_condition_1170.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln384_fu_237164_p2.read())) {
            pX_1 = ap_const_lv32_0;
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln384_fu_237164_p2.read())) {
            pX_1 = add_ln389_fu_237170_p2.read();
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(and_ln360_reg_319740.read(), ap_const_lv1_1))) {
        acc_0_V_19_reg_320369 = acc_0_V_19_fu_249626_p2.read();
        acc_1_V_19_reg_320388 = acc_1_V_19_fu_249662_p2.read();
        acc_1_V_20_reg_320399 = acc_1_V_20_fu_249688_p3.read();
        acc_2_V_19_reg_320410 = acc_2_V_19_fu_249718_p2.read();
        acc_2_V_20_reg_320421 = acc_2_V_20_fu_249744_p3.read();
        acc_3_V_19_reg_320433 = acc_3_V_19_fu_249774_p2.read();
        acc_4_V_19_reg_320452 = acc_4_V_19_fu_249810_p2.read();
        acc_4_V_20_reg_320463 = acc_4_V_20_fu_249836_p3.read();
        acc_5_V_19_reg_320474 = acc_5_V_19_fu_249866_p2.read();
        acc_5_V_20_reg_320485 = acc_5_V_20_fu_249892_p3.read();
        acc_6_V_19_reg_320497 = acc_6_V_19_fu_249922_p2.read();
        acc_7_V_19_reg_320517 = acc_7_V_19_fu_249958_p2.read();
        add_ln415_1098_reg_320148 = add_ln415_1098_fu_241882_p2.read();
        add_ln415_1104_reg_320205 = add_ln415_1104_fu_242990_p2.read();
        add_ln415_1108_reg_320250 = add_ln415_1108_fu_243750_p2.read();
        add_ln415_1113_reg_320301 = add_ln415_1113_fu_244656_p2.read();
        and_ln416_1083_reg_320153 = and_ln416_1083_fu_241902_p2.read();
        and_ln416_1089_reg_320210 = and_ln416_1089_fu_243010_p2.read();
        and_ln416_1093_reg_320255 = and_ln416_1093_fu_243770_p2.read();
        and_ln416_1098_reg_320306 = and_ln416_1098_fu_244676_p2.read();
        select_ln340_4194_reg_320122 = select_ln340_4194_fu_241370_p3.read();
        select_ln340_4195_reg_320128 = select_ln340_4195_fu_241562_p3.read();
        select_ln340_4196_reg_320134 = select_ln340_4196_fu_241758_p3.read();
        select_ln340_4198_reg_320167 = select_ln340_4198_fu_242100_p3.read();
        select_ln340_4199_reg_320173 = select_ln340_4199_fu_242300_p3.read();
        select_ln340_4200_reg_320179 = select_ln340_4200_fu_242492_p3.read();
        select_ln340_4201_reg_320185 = select_ln340_4201_fu_242692_p3.read();
        select_ln340_4202_reg_320191 = select_ln340_4202_fu_242918_p3.read();
        select_ln340_4204_reg_320224 = select_ln340_4204_fu_243212_p3.read();
        select_ln340_4205_reg_320230 = select_ln340_4205_fu_243468_p3.read();
        select_ln340_4206_reg_320236 = select_ln340_4206_fu_243660_p3.read();
        select_ln340_4208_reg_320269 = select_ln340_4208_fu_243968_p3.read();
        select_ln340_4209_reg_320275 = select_ln340_4209_fu_244160_p3.read();
        select_ln340_4210_reg_320281 = select_ln340_4210_fu_244392_p3.read();
        select_ln340_4211_reg_320287 = select_ln340_4211_fu_244584_p3.read();
        select_ln340_4213_reg_320320 = select_ln340_4213_fu_244882_p3.read();
        select_ln340_4214_reg_320326 = select_ln340_4214_fu_245074_p3.read();
        select_ln340_4215_reg_320332 = select_ln340_4215_fu_245270_p3.read();
        select_ln340_4216_reg_320338 = select_ln340_4216_fu_245462_p3.read();
        select_ln340_4217_reg_320344 = select_ln340_4217_fu_245662_p3.read();
        select_ln340_4220_reg_320350 = select_ln340_4220_fu_245864_p3.read();
        select_ln340_4222_reg_320356 = select_ln340_4222_fu_246064_p3.read();
        tmp_7639_reg_320140 = sub_ln1118_143_fu_241806_p2.read().range(33, 33);
        tmp_7643_reg_320161 = add_ln415_1098_fu_241882_p2.read().range(23, 23);
        tmp_7669_reg_320197 = mul_ln1118_953_fu_1216_p2.read().range(33, 33);
        tmp_7673_reg_320218 = add_ln415_1104_fu_242990_p2.read().range(24, 24);
        tmp_7689_reg_320242 = sub_ln1118_145_fu_243680_p2.read().range(31, 31);
        tmp_7693_reg_320263 = add_ln415_1108_fu_243750_p2.read().range(21, 21);
        tmp_7714_reg_320293 = mul_ln1118_960_fu_1176_p2.read().range(33, 33);
        tmp_7718_reg_320314 = add_ln415_1113_fu_244656_p2.read().range(24, 24);
        tmp_9011_reg_320362 = add_ln1192_1102_fu_249612_p2.read().range(28, 28);
        tmp_9012_reg_320375 = acc_0_V_19_fu_249626_p2.read().range(27, 27);
        tmp_9013_reg_320382 = add_ln1192_1103_fu_249648_p2.read().range(28, 28);
        tmp_9014_reg_320393 = acc_1_V_19_fu_249662_p2.read().range(27, 27);
        tmp_9015_reg_320404 = add_ln1192_1104_fu_249704_p2.read().range(28, 28);
        tmp_9016_reg_320415 = acc_2_V_19_fu_249718_p2.read().range(27, 27);
        tmp_9017_reg_320426 = add_ln1192_1105_fu_249760_p2.read().range(28, 28);
        tmp_9018_reg_320439 = acc_3_V_19_fu_249774_p2.read().range(27, 27);
        tmp_9019_reg_320446 = add_ln1192_1106_fu_249796_p2.read().range(28, 28);
        tmp_9020_reg_320457 = acc_4_V_19_fu_249810_p2.read().range(27, 27);
        tmp_9021_reg_320468 = add_ln1192_1107_fu_249852_p2.read().range(28, 28);
        tmp_9022_reg_320479 = acc_5_V_19_fu_249866_p2.read().range(27, 27);
        tmp_9023_reg_320490 = add_ln1192_1108_fu_249908_p2.read().range(28, 28);
        tmp_9024_reg_320503 = acc_6_V_19_fu_249922_p2.read().range(27, 27);
        tmp_9025_reg_320510 = add_ln1192_1109_fu_249944_p2.read().range(28, 28);
        tmp_9026_reg_320523 = acc_7_V_19_fu_249958_p2.read().range(27, 27);
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_reg_319740_pp0_iter2_reg.read()))) {
        acc_0_V_41_reg_321316 = acc_0_V_41_fu_276426_p2.read();
        acc_0_V_42_reg_321327 = acc_0_V_42_fu_276452_p3.read();
        acc_3_V_41_reg_321350 = acc_3_V_41_fu_276662_p2.read();
        acc_3_V_42_reg_321361 = acc_3_V_42_fu_276688_p3.read();
        acc_6_V_41_reg_321384 = acc_6_V_41_fu_276898_p2.read();
        acc_6_V_42_reg_321395 = acc_6_V_42_fu_276924_p3.read();
        acc_7_V_41_reg_321406 = acc_7_V_41_fu_276954_p2.read();
        acc_7_V_42_reg_321417 = acc_7_V_42_fu_276980_p3.read();
        add_ln415_1191_reg_321069 = add_ln415_1191_fu_268781_p2.read();
        add_ln415_1192_reg_321096 = add_ln415_1192_fu_268907_p2.read();
        add_ln415_1203_reg_321183 = add_ln415_1203_fu_271018_p2.read();
        add_ln415_1204_reg_321210 = add_ln415_1204_fu_271116_p2.read();
        add_ln415_1214_reg_321291 = add_ln415_1214_fu_273002_p2.read();
        and_ln416_1176_reg_321074 = and_ln416_1176_fu_268801_p2.read();
        and_ln416_1177_reg_321101 = and_ln416_1177_fu_268927_p2.read();
        and_ln416_1188_reg_321188 = and_ln416_1188_fu_271038_p2.read();
        and_ln416_1189_reg_321215 = and_ln416_1189_fu_271136_p2.read();
        and_ln416_1199_reg_321296 = and_ln416_1199_fu_273022_p2.read();
        select_ln340_4282_reg_321013 = select_ln340_4282_fu_267307_p3.read();
        select_ln340_4283_reg_321019 = select_ln340_4283_fu_267499_p3.read();
        select_ln340_4284_reg_321025 = select_ln340_4284_fu_267699_p3.read();
        select_ln340_4285_reg_321031 = select_ln340_4285_fu_267899_p3.read();
        select_ln340_4286_reg_321037 = select_ln340_4286_fu_268099_p3.read();
        select_ln340_4287_reg_321043 = select_ln340_4287_fu_268299_p3.read();
        select_ln340_4288_reg_321049 = select_ln340_4288_fu_268495_p3.read();
        select_ln340_4289_reg_321055 = select_ln340_4289_fu_268687_p3.read();
        select_ln340_4292_reg_321115 = select_ln340_4292_fu_269133_p3.read();
        select_ln340_4293_reg_321121 = select_ln340_4293_fu_269325_p3.read();
        select_ln340_4294_reg_321127 = select_ln340_4294_fu_269521_p3.read();
        select_ln340_4295_reg_321133 = select_ln340_4295_fu_269717_p3.read();
        select_ln340_4296_reg_321139 = select_ln340_4296_fu_269909_p3.read();
        select_ln340_4297_reg_321145 = select_ln340_4297_fu_270109_p3.read();
        select_ln340_4298_reg_321151 = select_ln340_4298_fu_270320_p3.read();
        select_ln340_4299_reg_321157 = select_ln340_4299_fu_270516_p3.read();
        select_ln340_4300_reg_321163 = select_ln340_4300_fu_270716_p3.read();
        select_ln340_4301_reg_321169 = select_ln340_4301_fu_270908_p3.read();
        select_ln340_4304_reg_321229 = select_ln340_4304_fu_271338_p3.read();
        select_ln340_4305_reg_321235 = select_ln340_4305_fu_271530_p3.read();
        select_ln340_4306_reg_321241 = select_ln340_4306_fu_271758_p3.read();
        select_ln340_4307_reg_321247 = select_ln340_4307_fu_271954_p3.read();
        select_ln340_4308_reg_321253 = select_ln340_4308_fu_272154_p3.read();
        select_ln340_4309_reg_321259 = select_ln340_4309_fu_272346_p3.read();
        select_ln340_4310_reg_321265 = select_ln340_4310_fu_272546_p3.read();
        select_ln340_4311_reg_321271 = select_ln340_4311_fu_272738_p3.read();
        select_ln340_4312_reg_321277 = select_ln340_4312_fu_272930_p3.read();
        select_ln340_4594_reg_321332 = select_ln340_4594_fu_276542_p3.read();
        select_ln340_4595_reg_321338 = select_ln340_4595_fu_276632_p3.read();
        select_ln340_4597_reg_321366 = select_ln340_4597_fu_276778_p3.read();
        select_ln340_4598_reg_321372 = select_ln340_4598_fu_276868_p3.read();
        tmp_8104_reg_321061 = mul_ln1118_1029_fu_1362_p2.read().range(33, 33);
        tmp_8108_reg_321082 = add_ln415_1191_fu_268781_p2.read().range(24, 24);
        tmp_8109_reg_321088 = sub_ln1118_152_fu_268837_p2.read().range(33, 33);
        tmp_8113_reg_321109 = add_ln415_1192_fu_268907_p2.read().range(23, 23);
        tmp_8164_reg_321175 = sub_ln1118_153_fu_270942_p2.read().range(32, 32);
        tmp_8168_reg_321196 = add_ln415_1203_fu_271018_p2.read().range(22, 22);
        tmp_8169_reg_321202 = mul_ln1118_1040_fu_1249_p2.read().range(33, 33);
        tmp_8173_reg_321223 = add_ln415_1204_fu_271116_p2.read().range(24, 24);
        tmp_8219_reg_321283 = mul_ln1118_1050_fu_1373_p2.read().range(32, 32);
        tmp_8223_reg_321304 = add_ln415_1214_fu_273002_p2.read().range(23, 23);
        tmp_9187_reg_321310 = add_ln1192_1190_fu_276412_p2.read().range(28, 28);
        tmp_9188_reg_321321 = acc_0_V_41_fu_276426_p2.read().range(27, 27);
        tmp_9193_reg_321344 = add_ln1192_1193_fu_276648_p2.read().range(28, 28);
        tmp_9194_reg_321355 = acc_3_V_41_fu_276662_p2.read().range(27, 27);
        tmp_9199_reg_321378 = add_ln1192_1196_fu_276884_p2.read().range(28, 28);
        tmp_9200_reg_321389 = acc_6_V_41_fu_276898_p2.read().range(27, 27);
        tmp_9201_reg_321400 = add_ln1192_1197_fu_276940_p2.read().range(28, 28);
        tmp_9202_reg_321411 = acc_7_V_41_fu_276954_p2.read().range(27, 27);
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_reg_319740_pp0_iter3_reg.read()))) {
        acc_0_V_53_reg_321735 = acc_0_V_53_fu_289059_p2.read();
        acc_1_V_53_reg_321755 = acc_1_V_53_fu_289095_p2.read();
        acc_2_V_53_reg_321775 = acc_2_V_53_fu_289131_p2.read();
        acc_3_V_53_reg_321795 = acc_3_V_53_fu_289167_p2.read();
        acc_4_V_53_reg_321814 = acc_4_V_53_fu_289203_p2.read();
        acc_4_V_54_reg_321825 = acc_4_V_54_fu_289229_p3.read();
        acc_5_V_53_reg_321837 = acc_5_V_53_fu_289259_p2.read();
        acc_6_V_53_reg_321857 = acc_6_V_53_fu_289295_p2.read();
        acc_7_V_53_reg_321877 = acc_7_V_53_fu_289331_p2.read();
        add_ln415_1234_reg_321547 = add_ln415_1234_fu_281473_p2.read();
        add_ln415_1237_reg_321586 = add_ln415_1237_fu_282031_p2.read();
        add_ln415_1246_reg_321661 = add_ln415_1246_fu_283776_p2.read();
        and_ln416_1219_reg_321552 = and_ln416_1219_fu_281493_p2.read();
        and_ln416_1222_reg_321591 = and_ln416_1222_fu_282051_p2.read();
        and_ln416_1231_reg_321666 = and_ln416_1231_fu_283796_p2.read();
        select_ln340_4330_reg_321521 = select_ln340_4330_fu_280971_p3.read();
        select_ln340_4331_reg_321527 = select_ln340_4331_fu_281167_p3.read();
        select_ln340_4332_reg_321533 = select_ln340_4332_fu_281367_p3.read();
        select_ln340_4334_reg_321566 = select_ln340_4334_fu_281699_p3.read();
        select_ln340_4335_reg_321572 = select_ln340_4335_fu_281959_p3.read();
        select_ln340_4337_reg_321605 = select_ln340_4337_fu_282287_p3.read();
        select_ln340_4338_reg_321611 = select_ln340_4338_fu_282498_p3.read();
        select_ln340_4339_reg_321617 = select_ln340_4339_fu_282694_p3.read();
        select_ln340_4340_reg_321623 = select_ln340_4340_fu_282894_p3.read();
        select_ln340_4341_reg_321629 = select_ln340_4341_fu_283090_p3.read();
        select_ln340_4342_reg_321635 = select_ln340_4342_fu_283286_p3.read();
        select_ln340_4343_reg_321641 = select_ln340_4343_fu_283482_p3.read();
        select_ln340_4344_reg_321647 = select_ln340_4344_fu_283674_p3.read();
        select_ln340_4346_reg_321680 = select_ln340_4346_fu_284015_p3.read();
        select_ln340_4347_reg_321686 = select_ln340_4347_fu_284207_p3.read();
        select_ln340_4348_reg_321692 = select_ln340_4348_fu_284403_p3.read();
        select_ln340_4349_reg_321698 = select_ln340_4349_fu_284595_p3.read();
        select_ln340_4350_reg_321704 = select_ln340_4350_fu_284795_p3.read();
        select_ln340_4351_reg_321710 = select_ln340_4351_fu_284991_p3.read();
        select_ln340_4352_reg_321716 = select_ln340_4352_fu_285187_p3.read();
        select_ln340_4353_reg_321722 = select_ln340_4353_fu_285379_p3.read();
        tmp_8319_reg_321539 = sub_ln1118_157_fu_281403_p2.read().range(34, 34);
        tmp_8323_reg_321560 = add_ln415_1234_fu_281473_p2.read().range(24, 24);
        tmp_8334_reg_321578 = mul_ln1118_1069_fu_1223_p2.read().range(32, 32);
        tmp_8338_reg_321599 = add_ln415_1237_fu_282031_p2.read().range(23, 23);
        tmp_8379_reg_321653 = add_ln1118_34_fu_283700_p2.read().range(30, 30);
        tmp_8383_reg_321674 = add_ln415_1246_fu_283776_p2.read().range(20, 20);
        tmp_9283_reg_321728 = add_ln1192_1238_fu_289045_p2.read().range(28, 28);
        tmp_9284_reg_321741 = acc_0_V_53_fu_289059_p2.read().range(27, 27);
        tmp_9285_reg_321748 = add_ln1192_1239_fu_289081_p2.read().range(28, 28);
        tmp_9286_reg_321761 = acc_1_V_53_fu_289095_p2.read().range(27, 27);
        tmp_9287_reg_321768 = add_ln1192_1240_fu_289117_p2.read().range(28, 28);
        tmp_9288_reg_321781 = acc_2_V_53_fu_289131_p2.read().range(27, 27);
        tmp_9289_reg_321788 = add_ln1192_1241_fu_289153_p2.read().range(28, 28);
        tmp_9290_reg_321801 = acc_3_V_53_fu_289167_p2.read().range(27, 27);
        tmp_9291_reg_321808 = add_ln1192_1242_fu_289189_p2.read().range(28, 28);
        tmp_9292_reg_321819 = acc_4_V_53_fu_289203_p2.read().range(27, 27);
        tmp_9293_reg_321830 = add_ln1192_1243_fu_289245_p2.read().range(28, 28);
        tmp_9294_reg_321843 = acc_5_V_53_fu_289259_p2.read().range(27, 27);
        tmp_9295_reg_321850 = add_ln1192_1244_fu_289281_p2.read().range(28, 28);
        tmp_9296_reg_321863 = acc_6_V_53_fu_289295_p2.read().range(27, 27);
        tmp_9297_reg_321870 = add_ln1192_1245_fu_289317_p2.read().range(28, 28);
        tmp_9298_reg_321883 = acc_7_V_53_fu_289331_p2.read().range(27, 27);
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_reg_319740_pp0_iter5_reg.read()))) {
        acc_0_V_75_reg_322424 = acc_0_V_75_fu_313889_p2.read();
        acc_1_V_75_reg_322444 = acc_1_V_75_fu_313925_p2.read();
        acc_2_V_75_reg_322464 = acc_2_V_75_fu_313961_p2.read();
        acc_3_V_75_reg_322484 = acc_3_V_75_fu_313997_p2.read();
        acc_5_V_75_reg_322510 = acc_5_V_75_fu_314123_p2.read();
        acc_6_V_75_reg_322530 = acc_6_V_75_fu_314159_p2.read();
        acc_7_V_75_reg_322550 = acc_7_V_75_fu_314191_p2.read();
        add_ln415_1318_reg_322230 = add_ln415_1318_fu_306374_p2.read();
        add_ln415_1326_reg_322299 = add_ln415_1326_fu_307868_p2.read();
        add_ln415_1328_reg_322332 = add_ln415_1328_fu_308166_p2.read();
        and_ln416_1303_reg_322235 = and_ln416_1303_fu_306394_p2.read();
        and_ln416_1311_reg_322304 = and_ln416_1311_fu_307888_p2.read();
        and_ln416_1313_reg_322337 = and_ln416_1313_fu_308186_p2.read();
        select_ln340_4418_reg_322249 = select_ln340_4418_fu_306592_p3.read();
        select_ln340_4419_reg_322255 = select_ln340_4419_fu_306792_p3.read();
        select_ln340_4420_reg_322261 = select_ln340_4420_fu_306992_p3.read();
        select_ln340_4421_reg_322267 = select_ln340_4421_fu_307192_p3.read();
        select_ln340_4422_reg_322273 = select_ln340_4422_fu_307392_p3.read();
        select_ln340_4423_reg_322279 = select_ln340_4423_fu_307584_p3.read();
        select_ln340_4424_reg_322285 = select_ln340_4424_fu_307776_p3.read();
        select_ln340_4426_reg_322318 = select_ln340_4426_fu_308094_p3.read();
        select_ln340_4428_reg_322351 = select_ln340_4428_fu_308384_p3.read();
        select_ln340_4429_reg_322357 = select_ln340_4429_fu_308580_p3.read();
        select_ln340_4430_reg_322363 = select_ln340_4430_fu_308776_p3.read();
        select_ln340_4431_reg_322369 = select_ln340_4431_fu_308976_p3.read();
        select_ln340_4432_reg_322375 = select_ln340_4432_fu_309168_p3.read();
        select_ln340_4433_reg_322381 = select_ln340_4433_fu_309383_p3.read();
        select_ln340_4434_reg_322387 = select_ln340_4434_fu_309579_p3.read();
        select_ln340_4435_reg_322393 = select_ln340_4435_fu_309775_p3.read();
        select_ln340_4436_reg_322399 = select_ln340_4436_fu_309975_p3.read();
        select_ln340_4437_reg_322405 = select_ln340_4437_fu_310171_p3.read();
        select_ln340_4439_reg_322411 = select_ln340_4439_fu_310371_p3.read();
        select_ln340_4733_reg_322497 = select_ln340_4733_fu_314093_p3.read();
        tmp_8739_reg_322222 = mul_ln1118_1140_fu_1324_p2.read().range(33, 33);
        tmp_8743_reg_322243 = add_ln415_1318_fu_306374_p2.read().range(24, 24);
        tmp_8779_reg_322291 = mul_ln1118_1148_fu_1164_p2.read().range(32, 32);
        tmp_8783_reg_322312 = add_ln415_1326_fu_307868_p2.read().range(23, 23);
        tmp_8789_reg_322324 = mul_ln1118_1150_fu_1279_p2.read().range(32, 32);
        tmp_8793_reg_322345 = add_ln415_1328_fu_308166_p2.read().range(23, 23);
        tmp_9459_reg_322417 = add_ln1192_1326_fu_313875_p2.read().range(28, 28);
        tmp_9460_reg_322430 = acc_0_V_75_fu_313889_p2.read().range(27, 27);
        tmp_9461_reg_322437 = add_ln1192_1327_fu_313911_p2.read().range(28, 28);
        tmp_9462_reg_322450 = acc_1_V_75_fu_313925_p2.read().range(27, 27);
        tmp_9463_reg_322457 = add_ln1192_1328_fu_313947_p2.read().range(28, 28);
        tmp_9464_reg_322470 = acc_2_V_75_fu_313961_p2.read().range(27, 27);
        tmp_9465_reg_322477 = add_ln1192_1329_fu_313983_p2.read().range(28, 28);
        tmp_9466_reg_322490 = acc_3_V_75_fu_313997_p2.read().range(27, 27);
        tmp_9469_reg_322503 = add_ln1192_1331_fu_314109_p2.read().range(28, 28);
        tmp_9470_reg_322516 = acc_5_V_75_fu_314123_p2.read().range(27, 27);
        tmp_9471_reg_322523 = add_ln1192_1332_fu_314145_p2.read().range(28, 28);
        tmp_9472_reg_322536 = acc_6_V_75_fu_314159_p2.read().range(27, 27);
        tmp_9473_reg_322543 = add_ln1192_1333_fu_314177_p2.read().range(28, 28);
        tmp_9474_reg_322556 = acc_7_V_75_fu_314191_p2.read().range(27, 27);
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_reg_319740_pp0_iter1_reg.read()))) {
        acc_1_V_31_reg_320864 = acc_1_V_31_fu_263257_p2.read();
        acc_2_V_31_reg_320884 = acc_2_V_31_fu_263293_p2.read();
        acc_4_V_31_reg_320904 = acc_4_V_31_fu_263329_p2.read();
        acc_5_V_31_reg_320924 = acc_5_V_31_fu_263365_p2.read();
        add_ln415_1148_reg_320643 = add_ln415_1148_fu_256046_p2.read();
        add_ln415_1155_reg_320706 = add_ln415_1155_fu_257348_p2.read();
        add_ln415_1159_reg_320751 = add_ln415_1159_fu_258053_p2.read();
        add_ln415_1165_reg_320808 = add_ln415_1165_fu_259149_p2.read();
        and_ln416_1133_reg_320648 = and_ln416_1133_fu_256066_p2.read();
        and_ln416_1140_reg_320711 = and_ln416_1140_fu_257368_p2.read();
        and_ln416_1144_reg_320756 = and_ln416_1144_fu_258073_p2.read();
        and_ln416_1150_reg_320813 = and_ln416_1150_fu_259169_p2.read();
        select_ln340_4234_reg_320581 = select_ln340_4234_fu_253480_p3.read();
        select_ln340_4237_reg_320587 = select_ln340_4237_fu_254117_p3.read();
        select_ln340_4240_reg_320593 = select_ln340_4240_fu_254728_p3.read();
        select_ln340_4241_reg_320599 = select_ln340_4241_fu_254924_p3.read();
        select_ln340_4242_reg_320605 = select_ln340_4242_fu_255134_p3.read();
        select_ln340_4243_reg_320611 = select_ln340_4243_fu_255342_p3.read();
        select_ln340_4244_reg_320617 = select_ln340_4244_fu_255534_p3.read();
        select_ln340_4245_reg_320623 = select_ln340_4245_fu_255726_p3.read();
        select_ln340_4246_reg_320629 = select_ln340_4246_fu_255926_p3.read();
        select_ln340_4248_reg_320662 = select_ln340_4248_fu_256268_p3.read();
        select_ln340_4249_reg_320668 = select_ln340_4249_fu_256464_p3.read();
        select_ln340_4250_reg_320674 = select_ln340_4250_fu_256688_p3.read();
        select_ln340_4251_reg_320680 = select_ln340_4251_fu_256888_p3.read();
        select_ln340_4252_reg_320686 = select_ln340_4252_fu_257084_p3.read();
        select_ln340_4253_reg_320692 = select_ln340_4253_fu_257276_p3.read();
        select_ln340_4255_reg_320725 = select_ln340_4255_fu_257566_p3.read();
        select_ln340_4256_reg_320731 = select_ln340_4256_fu_257762_p3.read();
        select_ln340_4257_reg_320737 = select_ln340_4257_fu_257958_p3.read();
        select_ln340_4259_reg_320770 = select_ln340_4259_fu_258271_p3.read();
        select_ln340_4260_reg_320776 = select_ln340_4260_fu_258467_p3.read();
        select_ln340_4261_reg_320782 = select_ln340_4261_fu_258667_p3.read();
        select_ln340_4262_reg_320788 = select_ln340_4262_fu_258863_p3.read();
        select_ln340_4263_reg_320794 = select_ln340_4263_fu_259059_p3.read();
        select_ln340_4265_reg_320827 = select_ln340_4265_fu_259375_p3.read();
        select_ln340_4545_reg_320833 = select_ln340_4545_fu_262597_p3.read();
        select_ln340_4548_reg_320839 = select_ln340_4548_fu_262867_p3.read();
        select_ln340_4551_reg_320845 = select_ln340_4551_fu_263137_p3.read();
        select_ln340_4552_reg_320851 = select_ln340_4552_fu_263227_p3.read();
        tmp_7889_reg_320635 = add_ln1118_31_fu_255970_p2.read().range(34, 34);
        tmp_7893_reg_320656 = add_ln415_1148_fu_256046_p2.read().range(24, 24);
        tmp_7924_reg_320698 = mul_ln1118_996_fu_1412_p2.read().range(32, 32);
        tmp_7928_reg_320719 = add_ln415_1155_fu_257348_p2.read().range(23, 23);
        tmp_7944_reg_320743 = mul_ln1118_1000_fu_1411_p2.read().range(32, 32);
        tmp_7948_reg_320764 = add_ln415_1159_fu_258053_p2.read().range(23, 23);
        tmp_7974_reg_320800 = sub_ln1118_150_fu_259079_p2.read().range(32, 32);
        tmp_7978_reg_320821 = add_ln415_1165_fu_259149_p2.read().range(22, 22);
        tmp_9109_reg_320857 = add_ln1192_1151_fu_263243_p2.read().range(28, 28);
        tmp_9110_reg_320870 = acc_1_V_31_fu_263257_p2.read().range(27, 27);
        tmp_9111_reg_320877 = add_ln1192_1152_fu_263279_p2.read().range(28, 28);
        tmp_9112_reg_320890 = acc_2_V_31_fu_263293_p2.read().range(27, 27);
        tmp_9115_reg_320897 = add_ln1192_1154_fu_263315_p2.read().range(28, 28);
        tmp_9116_reg_320910 = acc_4_V_31_fu_263329_p2.read().range(27, 27);
        tmp_9117_reg_320917 = add_ln1192_1155_fu_263351_p2.read().range(28, 28);
        tmp_9118_reg_320930 = acc_5_V_31_fu_263365_p2.read().range(27, 27);
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_reg_319740_pp0_iter4_reg.read()))) {
        acc_4_V_65_reg_322209 = acc_4_V_65_fu_302862_p2.read();
        add_ln415_1283_reg_321964 = add_ln415_1283_fu_295387_p2.read();
        add_ln415_1287_reg_322009 = add_ln415_1287_fu_296134_p2.read();
        add_ln415_1288_reg_322036 = add_ln415_1288_fu_296232_p2.read();
        add_ln415_1292_reg_322081 = add_ln415_1292_fu_296918_p2.read();
        and_ln416_1268_reg_321969 = and_ln416_1268_fu_295407_p2.read();
        and_ln416_1272_reg_322014 = and_ln416_1272_fu_296154_p2.read();
        and_ln416_1273_reg_322041 = and_ln416_1273_fu_296252_p2.read();
        and_ln416_1277_reg_322086 = and_ln416_1277_fu_296938_p2.read();
        select_ln340_4370_reg_321890 = select_ln340_4370_fu_293106_p3.read();
        select_ln340_4371_reg_321896 = select_ln340_4371_fu_293302_p3.read();
        select_ln340_4372_reg_321902 = select_ln340_4372_fu_293498_p3.read();
        select_ln340_4373_reg_321908 = select_ln340_4373_fu_293694_p3.read();
        select_ln340_4375_reg_321914 = select_ln340_4375_fu_294086_p3.read();
        select_ln340_4376_reg_321920 = select_ln340_4376_fu_294286_p3.read();
        select_ln340_4377_reg_321926 = select_ln340_4377_fu_294486_p3.read();
        select_ln340_4378_reg_321932 = select_ln340_4378_fu_294704_p3.read();
        select_ln340_4379_reg_321938 = select_ln340_4379_fu_294896_p3.read();
        select_ln340_4380_reg_321944 = select_ln340_4380_fu_295096_p3.read();
        select_ln340_4381_reg_321950 = select_ln340_4381_fu_295292_p3.read();
        select_ln340_4383_reg_321983 = select_ln340_4383_fu_295609_p3.read();
        select_ln340_4384_reg_321989 = select_ln340_4384_fu_295843_p3.read();
        select_ln340_4385_reg_321995 = select_ln340_4385_fu_296039_p3.read();
        select_ln340_4388_reg_322055 = select_ln340_4388_fu_296450_p3.read();
        select_ln340_4389_reg_322061 = select_ln340_4389_fu_296646_p3.read();
        select_ln340_4390_reg_322067 = select_ln340_4390_fu_296846_p3.read();
        select_ln340_4392_reg_322100 = select_ln340_4392_fu_297140_p3.read();
        select_ln340_4393_reg_322106 = select_ln340_4393_fu_297336_p3.read();
        select_ln340_4394_reg_322112 = select_ln340_4394_fu_297552_p3.read();
        select_ln340_4395_reg_322118 = select_ln340_4395_fu_297744_p3.read();
        select_ln340_4396_reg_322124 = select_ln340_4396_fu_297944_p3.read();
        select_ln340_4397_reg_322130 = select_ln340_4397_fu_298140_p3.read();
        select_ln340_4398_reg_322136 = select_ln340_4398_fu_298336_p3.read();
        select_ln340_4399_reg_322142 = select_ln340_4399_fu_298532_p3.read();
        select_ln340_4400_reg_322148 = select_ln340_4400_fu_298724_p3.read();
        select_ln340_4401_reg_322154 = select_ln340_4401_fu_298924_p3.read();
        select_ln340_4681_reg_322160 = select_ln340_4681_fu_302202_p3.read();
        select_ln340_4682_reg_322166 = select_ln340_4682_fu_302292_p3.read();
        select_ln340_4683_reg_322172 = select_ln340_4683_fu_302382_p3.read();
        select_ln340_4684_reg_322178 = select_ln340_4684_fu_302472_p3.read();
        select_ln340_4686_reg_322184 = select_ln340_4686_fu_302652_p3.read();
        select_ln340_4687_reg_322190 = select_ln340_4687_fu_302742_p3.read();
        select_ln340_4688_reg_322196 = select_ln340_4688_fu_302832_p3.read();
        tmp_8564_reg_321956 = sub_ln1118_164_fu_295317_p2.read().range(33, 33);
        tmp_8568_reg_321977 = add_ln415_1283_fu_295387_p2.read().range(23, 23);
        tmp_8584_reg_322001 = mul_ln1118_1112_fu_1320_p2.read().range(33, 33);
        tmp_8588_reg_322022 = add_ln415_1287_fu_296134_p2.read().range(24, 24);
        tmp_8589_reg_322028 = mul_ln1118_1113_fu_1272_p2.read().range(31, 31);
        tmp_8593_reg_322049 = add_ln415_1288_fu_296232_p2.read().range(22, 22);
        tmp_8609_reg_322073 = mul_ln1118_1117_fu_1314_p2.read().range(33, 33);
        tmp_8613_reg_322094 = add_ln415_1292_fu_296918_p2.read().range(24, 24);
        tmp_9387_reg_322202 = add_ln1192_1290_fu_302848_p2.read().range(28, 28);
        tmp_9388_reg_322215 = acc_4_V_65_fu_302862_p2.read().range(27, 27);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_fu_226625_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln360_fu_226691_p2.read()))) {
        add_ln415_1057_reg_319812 = add_ln415_1057_fu_232080_p2.read();
        add_ln415_1060_reg_319851 = add_ln415_1060_fu_232630_p2.read();
        add_ln415_1069_reg_319926 = add_ln415_1069_fu_234312_p2.read();
        add_ln415_1077_reg_319989 = add_ln415_1077_fu_235624_p2.read();
        add_ln415_1078_reg_320016 = add_ln415_1078_fu_235722_p2.read();
        and_ln416_1042_reg_319817 = and_ln416_1042_fu_232100_p2.read();
        and_ln416_1045_reg_319856 = and_ln416_1045_fu_232650_p2.read();
        and_ln416_1054_reg_319931 = and_ln416_1054_fu_234332_p2.read();
        and_ln416_1062_reg_319994 = and_ln416_1062_fu_235644_p2.read();
        and_ln416_1063_reg_320021 = and_ln416_1063_fu_235742_p2.read();
        select_ln340_4146_reg_319744 = select_ln340_4146_fu_230135_p3.read();
        select_ln340_4147_reg_319750 = select_ln340_4147_fu_230335_p3.read();
        select_ln340_4148_reg_319756 = select_ln340_4148_fu_230527_p3.read();
        select_ln340_4149_reg_319762 = select_ln340_4149_fu_230753_p3.read();
        select_ln340_4150_reg_319768 = select_ln340_4150_fu_230985_p3.read();
        select_ln340_4151_reg_319774 = select_ln340_4151_fu_231185_p3.read();
        select_ln340_4152_reg_319780 = select_ln340_4152_fu_231385_p3.read();
        select_ln340_4153_reg_319786 = select_ln340_4153_fu_231585_p3.read();
        select_ln340_4154_reg_319792 = select_ln340_4154_fu_231808_p3.read();
        select_ln340_4155_reg_319798 = select_ln340_4155_fu_232008_p3.read();
        select_ln340_4157_reg_319831 = select_ln340_4157_fu_232306_p3.read();
        select_ln340_4158_reg_319837 = select_ln340_4158_fu_232506_p3.read();
        select_ln340_4160_reg_319870 = select_ln340_4160_fu_232852_p3.read();
        select_ln340_4161_reg_319876 = select_ln340_4161_fu_233044_p3.read();
        select_ln340_4162_reg_319882 = select_ln340_4162_fu_233268_p3.read();
        select_ln340_4163_reg_319888 = select_ln340_4163_fu_233460_p3.read();
        select_ln340_4164_reg_319894 = select_ln340_4164_fu_233660_p3.read();
        select_ln340_4165_reg_319900 = select_ln340_4165_fu_233852_p3.read();
        select_ln340_4166_reg_319906 = select_ln340_4166_fu_234044_p3.read();
        select_ln340_4167_reg_319912 = select_ln340_4167_fu_234240_p3.read();
        select_ln340_4169_reg_319945 = select_ln340_4169_fu_234530_p3.read();
        select_ln340_4170_reg_319951 = select_ln340_4170_fu_234748_p3.read();
        select_ln340_4171_reg_319957 = select_ln340_4171_fu_234940_p3.read();
        select_ln340_4173_reg_319963 = select_ln340_4173_fu_235140_p3.read();
        select_ln340_4174_reg_319969 = select_ln340_4174_fu_235332_p3.read();
        select_ln340_4175_reg_319975 = select_ln340_4175_fu_235528_p3.read();
        select_ln340_4457_reg_320035 = select_ln340_4457_fu_236526_p3.read();
        select_ln340_4458_reg_320041 = select_ln340_4458_fu_236616_p3.read();
        select_ln340_4459_reg_320047 = select_ln340_4459_fu_236706_p3.read();
        select_ln340_4460_reg_320053 = select_ln340_4460_fu_236796_p3.read();
        select_ln340_4461_reg_320059 = select_ln340_4461_fu_236886_p3.read();
        select_ln340_4462_reg_320065 = select_ln340_4462_fu_236976_p3.read();
        select_ln340_4463_reg_320071 = select_ln340_4463_fu_237066_p3.read();
        select_ln340_4464_reg_320077 = select_ln340_4464_fu_237156_p3.read();
        tmp_7434_reg_319804 = mul_ln1118_911_fu_1358_p2.read().range(32, 32);
        tmp_7438_reg_319825 = add_ln415_1057_fu_232080_p2.read().range(23, 23);
        tmp_7449_reg_319843 = sub_ln1118_138_fu_232554_p2.read().range(34, 34);
        tmp_7453_reg_319864 = add_ln415_1060_fu_232630_p2.read().range(24, 24);
        tmp_7494_reg_319918 = mul_ln1118_922_fu_1238_p2.read().range(33, 33);
        tmp_7498_reg_319939 = add_ln415_1069_fu_234312_p2.read().range(24, 24);
        tmp_7534_reg_319981 = sub_ln1118_140_fu_235554_p2.read().range(34, 34);
        tmp_7538_reg_320002 = add_ln415_1077_fu_235624_p2.read().range(24, 24);
        tmp_7539_reg_320008 = mul_ln1118_929_fu_1383_p2.read().range(33, 33);
        tmp_7543_reg_320029 = add_ln415_1078_fu_235722_p2.read().range(24, 24);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_fu_226625_p2.read()))) {
        and_ln360_reg_319740 = and_ln360_fu_226691_p2.read();
        kernel_data_V_2_13_load_reg_319731 = ap_sig_allocacmp_kernel_data_V_2_13_load.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        and_ln360_reg_319740_pp0_iter1_reg = and_ln360_reg_319740.read();
        icmp_ln64_reg_319722 = icmp_ln64_fu_226625_p2.read();
        icmp_ln64_reg_319722_pp0_iter1_reg = icmp_ln64_reg_319722.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        and_ln360_reg_319740_pp0_iter2_reg = and_ln360_reg_319740_pp0_iter1_reg.read();
        and_ln360_reg_319740_pp0_iter3_reg = and_ln360_reg_319740_pp0_iter2_reg.read();
        and_ln360_reg_319740_pp0_iter4_reg = and_ln360_reg_319740_pp0_iter3_reg.read();
        and_ln360_reg_319740_pp0_iter5_reg = and_ln360_reg_319740_pp0_iter4_reg.read();
        and_ln360_reg_319740_pp0_iter6_reg = and_ln360_reg_319740_pp0_iter5_reg.read();
        icmp_ln64_reg_319722_pp0_iter2_reg = icmp_ln64_reg_319722_pp0_iter1_reg.read();
        icmp_ln64_reg_319722_pp0_iter3_reg = icmp_ln64_reg_319722_pp0_iter2_reg.read();
        kernel_data_V_2_36_load_reg_320991_pp0_iter4_reg = kernel_data_V_2_36_load_reg_320991.read();
        kernel_data_V_2_37_load_reg_321002_pp0_iter4_reg = kernel_data_V_2_37_load_reg_321002.read();
        tmp_data_V_16_2_reg_321439_pp0_iter5_reg = tmp_data_V_16_2_reg_321439.read();
        tmp_data_V_16_3_reg_321451_pp0_iter5_reg = tmp_data_V_16_3_reg_321451.read();
        tmp_data_V_16_4_reg_321463_pp0_iter5_reg = tmp_data_V_16_4_reg_321463.read();
        tmp_data_V_16_5_reg_321471_pp0_iter5_reg = tmp_data_V_16_5_reg_321471.read();
        tmp_data_V_16_6_reg_321479_pp0_iter5_reg = tmp_data_V_16_6_reg_321479.read();
        tmp_data_V_16_6_reg_321479_pp0_iter6_reg = tmp_data_V_16_6_reg_321479_pp0_iter5_reg.read();
        tmp_data_V_16_7_reg_321493_pp0_iter5_reg = tmp_data_V_16_7_reg_321493.read();
        tmp_data_V_16_7_reg_321493_pp0_iter6_reg = tmp_data_V_16_7_reg_321493_pp0_iter5_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln64_reg_319722.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        kernel_data_V_2_10 = ap_sig_allocacmp_kernel_data_V_2_18_load.read();
        kernel_data_V_2_11 = ap_sig_allocacmp_kernel_data_V_2_19_load.read();
        kernel_data_V_2_12 = ap_sig_allocacmp_kernel_data_V_2_20_load.read();
        kernel_data_V_2_13 = ap_sig_allocacmp_kernel_data_V_2_21_load.read();
        kernel_data_V_2_8 = ap_sig_allocacmp_kernel_data_V_2_16_load.read();
        kernel_data_V_2_9 = ap_sig_allocacmp_kernel_data_V_2_17_load.read();
        sX_1 = ap_phi_reg_pp0_iter1_storemerge_i_i_reg_1149.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_reg_319722_pp0_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        kernel_data_V_2_14 = ap_sig_allocacmp_kernel_data_V_2_22_load.read();
        kernel_data_V_2_15 = ap_sig_allocacmp_kernel_data_V_2_23_load.read();
        kernel_data_V_2_16 = ap_sig_allocacmp_kernel_data_V_2_24_load.read();
        kernel_data_V_2_17 = ap_sig_allocacmp_kernel_data_V_2_25_load.read();
        kernel_data_V_2_18 = ap_sig_allocacmp_kernel_data_V_2_26_load.read();
        kernel_data_V_2_19 = ap_sig_allocacmp_kernel_data_V_2_27_load.read();
        kernel_data_V_2_20 = ap_sig_allocacmp_kernel_data_V_2_28_load.read();
        kernel_data_V_2_21 = ap_sig_allocacmp_kernel_data_V_2_29_load.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln64_reg_319722.read(), ap_const_lv1_0))) {
        kernel_data_V_2_19_load_reg_320092 = ap_sig_allocacmp_kernel_data_V_2_19_load.read();
        kernel_data_V_2_20_load_reg_320102 = ap_sig_allocacmp_kernel_data_V_2_20_load.read();
        kernel_data_V_2_21_load_reg_320110 = ap_sig_allocacmp_kernel_data_V_2_21_load.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_reg_319722_pp0_iter2_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        kernel_data_V_2_22 = ap_sig_allocacmp_kernel_data_V_2_30_load.read();
        kernel_data_V_2_23 = ap_sig_allocacmp_kernel_data_V_2_31_load.read();
        kernel_data_V_2_24 = ap_sig_allocacmp_kernel_data_V_2_32_load.read();
        kernel_data_V_2_25 = ap_sig_allocacmp_kernel_data_V_2_33_load.read();
        kernel_data_V_2_26 = ap_sig_allocacmp_kernel_data_V_2_34_load.read();
        kernel_data_V_2_27 = ap_sig_allocacmp_kernel_data_V_2_35_load.read();
        kernel_data_V_2_28 = ap_sig_allocacmp_kernel_data_V_2_36_load.read();
        kernel_data_V_2_29 = ap_sig_allocacmp_kernel_data_V_2_37_load.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_reg_319722_pp0_iter1_reg.read()))) {
        kernel_data_V_2_25_load_reg_320530 = ap_sig_allocacmp_kernel_data_V_2_25_load.read();
        kernel_data_V_2_26_load_reg_320544 = ap_sig_allocacmp_kernel_data_V_2_26_load.read();
        kernel_data_V_2_27_load_reg_320552 = ap_sig_allocacmp_kernel_data_V_2_27_load.read();
        kernel_data_V_2_28_load_reg_320560 = ap_sig_allocacmp_kernel_data_V_2_28_load.read();
        kernel_data_V_2_29_load_reg_320571 = ap_sig_allocacmp_kernel_data_V_2_29_load.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && esl_seteq<1,1,1>(icmp_ln64_reg_319722_pp0_iter3_reg.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        kernel_data_V_2_30 = kernel_data_V_2_38.read();
        kernel_data_V_2_31 = kernel_data_V_2_39.read();
        kernel_data_V_2_32 = data_V_data_0_V_dout.read();
        kernel_data_V_2_33 = data_V_data_1_V_dout.read();
        kernel_data_V_2_34 = data_V_data_2_V_dout.read();
        kernel_data_V_2_35 = data_V_data_3_V_dout.read();
        kernel_data_V_2_36 = data_V_data_4_V_dout.read();
        kernel_data_V_2_37 = data_V_data_5_V_dout.read();
        kernel_data_V_2_38 = data_V_data_6_V_dout.read();
        kernel_data_V_2_39 = data_V_data_7_V_dout.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln64_reg_319722_pp0_iter2_reg.read()))) {
        kernel_data_V_2_31_load_reg_320937 = ap_sig_allocacmp_kernel_data_V_2_31_load.read();
        kernel_data_V_2_32_load_reg_320945 = ap_sig_allocacmp_kernel_data_V_2_32_load.read();
        kernel_data_V_2_33_load_reg_320958 = ap_sig_allocacmp_kernel_data_V_2_33_load.read();
        kernel_data_V_2_34_load_reg_320974 = ap_sig_allocacmp_kernel_data_V_2_34_load.read();
        kernel_data_V_2_35_load_reg_320984 = ap_sig_allocacmp_kernel_data_V_2_35_load.read();
        kernel_data_V_2_36_load_reg_320991 = ap_sig_allocacmp_kernel_data_V_2_36_load.read();
        kernel_data_V_2_37_load_reg_321002 = ap_sig_allocacmp_kernel_data_V_2_37_load.read();
    }
    if ((esl_seteq<1,1,1>(icmp_ln64_reg_319722_pp0_iter3_reg.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        kernel_data_V_2_38_load_reg_321503 = kernel_data_V_2_38.read();
        kernel_data_V_2_39_load_reg_321510 = kernel_data_V_2_39.read();
        tmp_data_V_16_0_reg_321422 = data_V_data_0_V_dout.read();
        tmp_data_V_16_1_reg_321431 = data_V_data_1_V_dout.read();
        tmp_data_V_16_2_reg_321439 = data_V_data_2_V_dout.read();
        tmp_data_V_16_3_reg_321451 = data_V_data_3_V_dout.read();
        tmp_data_V_16_4_reg_321463 = data_V_data_4_V_dout.read();
        tmp_data_V_16_5_reg_321471 = data_V_data_5_V_dout.read();
        tmp_data_V_16_6_reg_321479 = data_V_data_6_V_dout.read();
        tmp_data_V_16_7_reg_321493 = data_V_data_7_V_dout.read();
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_8u_config5_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter6.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln64_fu_226625_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter6.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln64_fu_226625_p2.read()) && 
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

