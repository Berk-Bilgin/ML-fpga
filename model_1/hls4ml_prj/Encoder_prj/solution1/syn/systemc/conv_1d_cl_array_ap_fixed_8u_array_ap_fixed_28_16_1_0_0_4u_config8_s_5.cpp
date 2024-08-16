#include "conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1252_fu_858_p1() {
    mul_ln1118_1252_fu_858_p1 =  (sc_lv<28>) (sext_ln1118_835_fu_83838_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1252_fu_858_p2() {
    mul_ln1118_1252_fu_858_p2 = (!ap_const_lv38_3FFFFFFEC7.is_01() || !mul_ln1118_1252_fu_858_p1.read().is_01())? sc_lv<38>(): sc_bigint<38>(ap_const_lv38_3FFFFFFEC7) * sc_bigint<28>(mul_ln1118_1252_fu_858_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1253_fu_902_p1() {
    mul_ln1118_1253_fu_902_p1 = kernel_data_V_1_32_load_reg_104590.read();
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1253_fu_902_p2() {
    mul_ln1118_1253_fu_902_p2 = (!ap_const_lv39_7FFFFFFD61.is_01() || !mul_ln1118_1253_fu_902_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ap_const_lv39_7FFFFFFD61) * sc_bigint<28>(mul_ln1118_1253_fu_902_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1254_fu_877_p1() {
    mul_ln1118_1254_fu_877_p1 =  (sc_lv<28>) (sext_ln1118_835_fu_83838_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1254_fu_877_p2() {
    mul_ln1118_1254_fu_877_p2 = (!ap_const_lv38_196.is_01() || !mul_ln1118_1254_fu_877_p1.read().is_01())? sc_lv<38>(): sc_biguint<38>(ap_const_lv38_196) * sc_bigint<28>(mul_ln1118_1254_fu_877_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1255_fu_924_p1() {
    mul_ln1118_1255_fu_924_p1 =  (sc_lv<28>) (sext_ln1118_838_fu_84667_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1255_fu_924_p2() {
    mul_ln1118_1255_fu_924_p2 = (!ap_const_lv38_158.is_01() || !mul_ln1118_1255_fu_924_p1.read().is_01())? sc_lv<38>(): sc_biguint<38>(ap_const_lv38_158) * sc_bigint<28>(mul_ln1118_1255_fu_924_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1256_fu_886_p1() {
    mul_ln1118_1256_fu_886_p1 =  (sc_lv<28>) (sext_ln1118_838_fu_84667_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1256_fu_886_p2() {
    mul_ln1118_1256_fu_886_p2 = (!ap_const_lv38_115.is_01() || !mul_ln1118_1256_fu_886_p1.read().is_01())? sc_lv<38>(): sc_biguint<38>(ap_const_lv38_115) * sc_bigint<28>(mul_ln1118_1256_fu_886_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1257_fu_850_p1() {
    mul_ln1118_1257_fu_850_p1 =  (sc_lv<28>) (sext_ln1118_838_fu_84667_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1257_fu_850_p2() {
    mul_ln1118_1257_fu_850_p2 = (!ap_const_lv38_3FFFFFFE28.is_01() || !mul_ln1118_1257_fu_850_p1.read().is_01())? sc_lv<38>(): sc_bigint<38>(ap_const_lv38_3FFFFFFE28) * sc_bigint<28>(mul_ln1118_1257_fu_850_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1258_fu_899_p1() {
    mul_ln1118_1258_fu_899_p1 =  (sc_lv<28>) (sext_ln1118_842_fu_85486_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1258_fu_899_p2() {
    mul_ln1118_1258_fu_899_p2 = (!ap_const_lv37_1FFFFFFF30.is_01() || !mul_ln1118_1258_fu_899_p1.read().is_01())? sc_lv<37>(): sc_bigint<37>(ap_const_lv37_1FFFFFFF30) * sc_bigint<28>(mul_ln1118_1258_fu_899_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1259_fu_777_p1() {
    mul_ln1118_1259_fu_777_p1 =  (sc_lv<28>) (sext_ln1118_842_fu_85486_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1259_fu_777_p2() {
    mul_ln1118_1259_fu_777_p2 = (!ap_const_lv37_DB.is_01() || !mul_ln1118_1259_fu_777_p1.read().is_01())? sc_lv<37>(): sc_biguint<37>(ap_const_lv37_DB) * sc_bigint<28>(mul_ln1118_1259_fu_777_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1260_fu_820_p1() {
    mul_ln1118_1260_fu_820_p1 = kernel_data_V_1_34_load_reg_104606.read();
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1260_fu_820_p2() {
    mul_ln1118_1260_fu_820_p2 = (!ap_const_lv38_12B.is_01() || !mul_ln1118_1260_fu_820_p1.read().is_01())? sc_lv<38>(): sc_biguint<38>(ap_const_lv38_12B) * sc_bigint<28>(mul_ln1118_1260_fu_820_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1261_fu_845_p1() {
    mul_ln1118_1261_fu_845_p1 = kernel_data_V_1_34_load_reg_104606.read();
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1261_fu_845_p2() {
    mul_ln1118_1261_fu_845_p2 = (!ap_const_lv36_7D.is_01() || !mul_ln1118_1261_fu_845_p1.read().is_01())? sc_lv<36>(): sc_biguint<36>(ap_const_lv36_7D) * sc_bigint<28>(mul_ln1118_1261_fu_845_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1262_fu_921_p1() {
    mul_ln1118_1262_fu_921_p1 = kernel_data_V_1_35_load_reg_104613.read();
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1262_fu_921_p2() {
    mul_ln1118_1262_fu_921_p2 = (!ap_const_lv38_143.is_01() || !mul_ln1118_1262_fu_921_p1.read().is_01())? sc_lv<38>(): sc_biguint<38>(ap_const_lv38_143) * sc_bigint<28>(mul_ln1118_1262_fu_921_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1263_fu_794_p1() {
    mul_ln1118_1263_fu_794_p1 =  (sc_lv<28>) (sext_ln1118_843_fu_86287_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1263_fu_794_p2() {
    mul_ln1118_1263_fu_794_p2 = (!ap_const_lv39_227.is_01() || !mul_ln1118_1263_fu_794_p1.read().is_01())? sc_lv<39>(): sc_biguint<39>(ap_const_lv39_227) * sc_bigint<28>(mul_ln1118_1263_fu_794_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1264_fu_843_p1() {
    mul_ln1118_1264_fu_843_p1 =  (sc_lv<28>) (sext_ln1118_843_fu_86287_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1264_fu_843_p2() {
    mul_ln1118_1264_fu_843_p2 = (!ap_const_lv39_7FFFFFFDB8.is_01() || !mul_ln1118_1264_fu_843_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ap_const_lv39_7FFFFFFDB8) * sc_bigint<28>(mul_ln1118_1264_fu_843_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1265_fu_804_p1() {
    mul_ln1118_1265_fu_804_p1 = kernel_data_V_1_36_load_reg_104621_pp0_iter4_reg.read();
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1265_fu_804_p2() {
    mul_ln1118_1265_fu_804_p2 = (!ap_const_lv36_FFFFFFF97.is_01() || !mul_ln1118_1265_fu_804_p1.read().is_01())? sc_lv<36>(): sc_bigint<36>(ap_const_lv36_FFFFFFF97) * sc_bigint<28>(mul_ln1118_1265_fu_804_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1266_fu_917_p1() {
    mul_ln1118_1266_fu_917_p1 = kernel_data_V_1_36_load_reg_104621_pp0_iter4_reg.read();
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1266_fu_917_p2() {
    mul_ln1118_1266_fu_917_p2 = (!ap_const_lv37_DD.is_01() || !mul_ln1118_1266_fu_917_p1.read().is_01())? sc_lv<37>(): sc_biguint<37>(ap_const_lv37_DD) * sc_bigint<28>(mul_ln1118_1266_fu_917_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1267_fu_874_p1() {
    mul_ln1118_1267_fu_874_p1 = kernel_data_V_1_36_load_reg_104621_pp0_iter4_reg.read();
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1267_fu_874_p2() {
    mul_ln1118_1267_fu_874_p2 = (!ap_const_lv38_1F2.is_01() || !mul_ln1118_1267_fu_874_p1.read().is_01())? sc_lv<38>(): sc_biguint<38>(ap_const_lv38_1F2) * sc_bigint<28>(mul_ln1118_1267_fu_874_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1268_fu_806_p1() {
    mul_ln1118_1268_fu_806_p1 =  (sc_lv<28>) (sext_ln1118_853_fu_89889_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1268_fu_806_p2() {
    mul_ln1118_1268_fu_806_p2 = (!ap_const_lv38_3FFFFFFE2C.is_01() || !mul_ln1118_1268_fu_806_p1.read().is_01())? sc_lv<38>(): sc_bigint<38>(ap_const_lv38_3FFFFFFE2C) * sc_bigint<28>(mul_ln1118_1268_fu_806_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1269_fu_855_p1() {
    mul_ln1118_1269_fu_855_p1 =  (sc_lv<28>) (sext_ln1118_852_fu_89884_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1269_fu_855_p2() {
    mul_ln1118_1269_fu_855_p2 = (!ap_const_lv39_241.is_01() || !mul_ln1118_1269_fu_855_p1.read().is_01())? sc_lv<39>(): sc_biguint<39>(ap_const_lv39_241) * sc_bigint<28>(mul_ln1118_1269_fu_855_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1270_fu_796_p1() {
    mul_ln1118_1270_fu_796_p1 =  (sc_lv<28>) (sext_ln1118_853_fu_89889_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1270_fu_796_p2() {
    mul_ln1118_1270_fu_796_p2 = (!ap_const_lv38_144.is_01() || !mul_ln1118_1270_fu_796_p1.read().is_01())? sc_lv<38>(): sc_biguint<38>(ap_const_lv38_144) * sc_bigint<28>(mul_ln1118_1270_fu_796_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1271_fu_778_p1() {
    mul_ln1118_1271_fu_778_p1 =  (sc_lv<28>) (sext_ln1118_852_fu_89884_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1271_fu_778_p2() {
    mul_ln1118_1271_fu_778_p2 = (!ap_const_lv39_7FFFFFFC45.is_01() || !mul_ln1118_1271_fu_778_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ap_const_lv39_7FFFFFFC45) * sc_bigint<28>(mul_ln1118_1271_fu_778_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1272_fu_784_p1() {
    mul_ln1118_1272_fu_784_p1 = kernel_data_V_1_38_load_reg_104855.read();
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1272_fu_784_p2() {
    mul_ln1118_1272_fu_784_p2 = (!ap_const_lv37_C6.is_01() || !mul_ln1118_1272_fu_784_p1.read().is_01())? sc_lv<37>(): sc_biguint<37>(ap_const_lv37_C6) * sc_bigint<28>(mul_ln1118_1272_fu_784_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1273_fu_901_p1() {
    mul_ln1118_1273_fu_901_p1 =  (sc_lv<28>) (sext_ln1118_854_fu_90670_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1273_fu_901_p2() {
    mul_ln1118_1273_fu_901_p2 = (!ap_const_lv38_14F.is_01() || !mul_ln1118_1273_fu_901_p1.read().is_01())? sc_lv<38>(): sc_biguint<38>(ap_const_lv38_14F) * sc_bigint<28>(mul_ln1118_1273_fu_901_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1274_fu_787_p1() {
    mul_ln1118_1274_fu_787_p1 =  (sc_lv<28>) (sext_ln1118_854_fu_90670_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1274_fu_787_p2() {
    mul_ln1118_1274_fu_787_p2 = (!ap_const_lv38_3FFFFFFEB3.is_01() || !mul_ln1118_1274_fu_787_p1.read().is_01())? sc_lv<38>(): sc_bigint<38>(ap_const_lv38_3FFFFFFEB3) * sc_bigint<28>(mul_ln1118_1274_fu_787_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1275_fu_839_p1() {
    mul_ln1118_1275_fu_839_p1 =  (sc_lv<28>) (sext_ln1118_854_fu_90670_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1275_fu_839_p2() {
    mul_ln1118_1275_fu_839_p2 = (!ap_const_lv38_3FFFFFFE05.is_01() || !mul_ln1118_1275_fu_839_p1.read().is_01())? sc_lv<38>(): sc_bigint<38>(ap_const_lv38_3FFFFFFE05) * sc_bigint<28>(mul_ln1118_1275_fu_839_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1276_fu_779_p1() {
    mul_ln1118_1276_fu_779_p1 =  (sc_lv<28>) (sext_ln1118_858_fu_91476_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1276_fu_779_p2() {
    mul_ln1118_1276_fu_779_p2 = (!ap_const_lv38_106.is_01() || !mul_ln1118_1276_fu_779_p1.read().is_01())? sc_lv<38>(): sc_biguint<38>(ap_const_lv38_106) * sc_bigint<28>(mul_ln1118_1276_fu_779_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1277_fu_813_p1() {
    mul_ln1118_1277_fu_813_p1 = kernel_data_V_1_39_load_reg_104861.read();
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1277_fu_813_p2() {
    mul_ln1118_1277_fu_813_p2 = (!ap_const_lv39_7FFFFFFDE2.is_01() || !mul_ln1118_1277_fu_813_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ap_const_lv39_7FFFFFFDE2) * sc_bigint<28>(mul_ln1118_1277_fu_813_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1278_fu_828_p1() {
    mul_ln1118_1278_fu_828_p1 =  (sc_lv<28>) (sext_ln1118_858_fu_91476_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1278_fu_828_p2() {
    mul_ln1118_1278_fu_828_p2 = (!ap_const_lv38_3FFFFFFE0D.is_01() || !mul_ln1118_1278_fu_828_p1.read().is_01())? sc_lv<38>(): sc_bigint<38>(ap_const_lv38_3FFFFFFE0D) * sc_bigint<28>(mul_ln1118_1278_fu_828_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1279_fu_925_p1() {
    mul_ln1118_1279_fu_925_p1 = kernel_data_V_1_39_load_reg_104861.read();
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1279_fu_925_p2() {
    mul_ln1118_1279_fu_925_p2 = (!ap_const_lv36_6A.is_01() || !mul_ln1118_1279_fu_925_p1.read().is_01())? sc_lv<36>(): sc_biguint<36>(ap_const_lv36_6A) * sc_bigint<28>(mul_ln1118_1279_fu_925_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1280_fu_928_p1() {
    mul_ln1118_1280_fu_928_p1 =  (sc_lv<28>) (sext_ln1118_861_fu_92273_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1280_fu_928_p2() {
    mul_ln1118_1280_fu_928_p2 = (!ap_const_lv38_138.is_01() || !mul_ln1118_1280_fu_928_p1.read().is_01())? sc_lv<38>(): sc_biguint<38>(ap_const_lv38_138) * sc_bigint<28>(mul_ln1118_1280_fu_928_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1281_fu_803_p1() {
    mul_ln1118_1281_fu_803_p1 = tmp_data_V_17_0_reg_104798.read();
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1281_fu_803_p2() {
    mul_ln1118_1281_fu_803_p2 = (!ap_const_lv36_5D.is_01() || !mul_ln1118_1281_fu_803_p1.read().is_01())? sc_lv<36>(): sc_biguint<36>(ap_const_lv36_5D) * sc_bigint<28>(mul_ln1118_1281_fu_803_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1282_fu_815_p1() {
    mul_ln1118_1282_fu_815_p1 = tmp_data_V_17_0_reg_104798.read();
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1282_fu_815_p2() {
    mul_ln1118_1282_fu_815_p2 = (!ap_const_lv39_2BA.is_01() || !mul_ln1118_1282_fu_815_p1.read().is_01())? sc_lv<39>(): sc_biguint<39>(ap_const_lv39_2BA) * sc_bigint<28>(mul_ln1118_1282_fu_815_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1283_fu_844_p1() {
    mul_ln1118_1283_fu_844_p1 =  (sc_lv<28>) (sext_ln1118_861_fu_92273_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1283_fu_844_p2() {
    mul_ln1118_1283_fu_844_p2 = (!ap_const_lv38_3FFFFFFEA5.is_01() || !mul_ln1118_1283_fu_844_p1.read().is_01())? sc_lv<38>(): sc_bigint<38>(ap_const_lv38_3FFFFFFEA5) * sc_bigint<28>(mul_ln1118_1283_fu_844_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1284_fu_884_p1() {
    mul_ln1118_1284_fu_884_p1 = tmp_data_V_17_1_reg_104805.read();
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1284_fu_884_p2() {
    mul_ln1118_1284_fu_884_p2 = (!ap_const_lv37_1FFFFFFF4E.is_01() || !mul_ln1118_1284_fu_884_p1.read().is_01())? sc_lv<37>(): sc_bigint<37>(ap_const_lv37_1FFFFFFF4E) * sc_bigint<28>(mul_ln1118_1284_fu_884_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1285_fu_791_p1() {
    mul_ln1118_1285_fu_791_p1 = tmp_data_V_17_1_reg_104805.read();
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1285_fu_791_p2() {
    mul_ln1118_1285_fu_791_p2 = (!ap_const_lv39_7FFFFFFDDE.is_01() || !mul_ln1118_1285_fu_791_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ap_const_lv39_7FFFFFFDDE) * sc_bigint<28>(mul_ln1118_1285_fu_791_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1286_fu_900_p1() {
    mul_ln1118_1286_fu_900_p1 = tmp_data_V_17_1_reg_104805.read();
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1286_fu_900_p2() {
    mul_ln1118_1286_fu_900_p2 = (!ap_const_lv38_15E.is_01() || !mul_ln1118_1286_fu_900_p1.read().is_01())? sc_lv<38>(): sc_biguint<38>(ap_const_lv38_15E) * sc_bigint<28>(mul_ln1118_1286_fu_900_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1287_fu_907_p1() {
    mul_ln1118_1287_fu_907_p1 =  (sc_lv<28>) (sext_ln1118_868_fu_95864_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1287_fu_907_p2() {
    mul_ln1118_1287_fu_907_p2 = (!ap_const_lv36_55.is_01() || !mul_ln1118_1287_fu_907_p1.read().is_01())? sc_lv<36>(): sc_biguint<36>(ap_const_lv36_55) * sc_bigint<28>(mul_ln1118_1287_fu_907_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1288_fu_808_p1() {
    mul_ln1118_1288_fu_808_p1 =  (sc_lv<28>) (sext_ln1118_867_fu_95859_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1288_fu_808_p2() {
    mul_ln1118_1288_fu_808_p2 = (!ap_const_lv38_3FFFFFFE6B.is_01() || !mul_ln1118_1288_fu_808_p1.read().is_01())? sc_lv<38>(): sc_bigint<38>(ap_const_lv38_3FFFFFFE6B) * sc_bigint<28>(mul_ln1118_1288_fu_808_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1289_fu_818_p1() {
    mul_ln1118_1289_fu_818_p1 =  (sc_lv<28>) (sext_ln1118_867_fu_95859_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1289_fu_818_p2() {
    mul_ln1118_1289_fu_818_p2 = (!ap_const_lv38_144.is_01() || !mul_ln1118_1289_fu_818_p1.read().is_01())? sc_lv<38>(): sc_biguint<38>(ap_const_lv38_144) * sc_bigint<28>(mul_ln1118_1289_fu_818_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1290_fu_868_p1() {
    mul_ln1118_1290_fu_868_p1 = tmp_data_V_17_3_reg_104821_pp0_iter5_reg.read();
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1290_fu_868_p2() {
    mul_ln1118_1290_fu_868_p2 = (!ap_const_lv35_2F.is_01() || !mul_ln1118_1290_fu_868_p1.read().is_01())? sc_lv<35>(): sc_biguint<35>(ap_const_lv35_2F) * sc_bigint<28>(mul_ln1118_1290_fu_868_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1291_fu_889_p1() {
    mul_ln1118_1291_fu_889_p1 =  (sc_lv<28>) (sext_ln1118_871_fu_96687_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1291_fu_889_p2() {
    mul_ln1118_1291_fu_889_p2 = (!ap_const_lv38_3FFFFFFE79.is_01() || !mul_ln1118_1291_fu_889_p1.read().is_01())? sc_lv<38>(): sc_bigint<38>(ap_const_lv38_3FFFFFFE79) * sc_bigint<28>(mul_ln1118_1291_fu_889_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1292_fu_875_p1() {
    mul_ln1118_1292_fu_875_p1 = tmp_data_V_17_3_reg_104821_pp0_iter5_reg.read();
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1292_fu_875_p2() {
    mul_ln1118_1292_fu_875_p2 = (!ap_const_lv39_7FFFFFFDD5.is_01() || !mul_ln1118_1292_fu_875_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ap_const_lv39_7FFFFFFDD5) * sc_bigint<28>(mul_ln1118_1292_fu_875_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1293_fu_865_p1() {
    mul_ln1118_1293_fu_865_p1 =  (sc_lv<28>) (sext_ln1118_871_fu_96687_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1293_fu_865_p2() {
    mul_ln1118_1293_fu_865_p2 = (!ap_const_lv38_3FFFFFFEB9.is_01() || !mul_ln1118_1293_fu_865_p1.read().is_01())? sc_lv<38>(): sc_bigint<38>(ap_const_lv38_3FFFFFFEB9) * sc_bigint<28>(mul_ln1118_1293_fu_865_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1294_fu_853_p1() {
    mul_ln1118_1294_fu_853_p1 =  (sc_lv<28>) (sext_ln1118_874_fu_97484_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1294_fu_853_p2() {
    mul_ln1118_1294_fu_853_p2 = (!ap_const_lv35_3B.is_01() || !mul_ln1118_1294_fu_853_p1.read().is_01())? sc_lv<35>(): sc_biguint<35>(ap_const_lv35_3B) * sc_bigint<28>(mul_ln1118_1294_fu_853_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1295_fu_898_p1() {
    mul_ln1118_1295_fu_898_p1 =  (sc_lv<28>) (sext_ln1118_874_fu_97484_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1295_fu_898_p2() {
    mul_ln1118_1295_fu_898_p2 = (!ap_const_lv35_7FFFFFFD2.is_01() || !mul_ln1118_1295_fu_898_p1.read().is_01())? sc_lv<35>(): sc_bigint<35>(ap_const_lv35_7FFFFFFD2) * sc_bigint<28>(mul_ln1118_1295_fu_898_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1296_fu_881_p1() {
    mul_ln1118_1296_fu_881_p1 = tmp_data_V_17_4_reg_104828_pp0_iter5_reg.read();
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1296_fu_881_p2() {
    mul_ln1118_1296_fu_881_p2 = (!ap_const_lv38_3FFFFFFE4E.is_01() || !mul_ln1118_1296_fu_881_p1.read().is_01())? sc_lv<38>(): sc_bigint<38>(ap_const_lv38_3FFFFFFE4E) * sc_bigint<28>(mul_ln1118_1296_fu_881_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1297_fu_799_p1() {
    mul_ln1118_1297_fu_799_p1 =  (sc_lv<28>) (sext_ln1118_878_fu_98032_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1297_fu_799_p2() {
    mul_ln1118_1297_fu_799_p2 = (!ap_const_lv39_7FFFFFFDD4.is_01() || !mul_ln1118_1297_fu_799_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ap_const_lv39_7FFFFFFDD4) * sc_bigint<28>(mul_ln1118_1297_fu_799_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1298_fu_810_p1() {
    mul_ln1118_1298_fu_810_p1 = tmp_data_V_17_5_reg_104837_pp0_iter5_reg.read();
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1298_fu_810_p2() {
    mul_ln1118_1298_fu_810_p2 = (!ap_const_lv38_119.is_01() || !mul_ln1118_1298_fu_810_p1.read().is_01())? sc_lv<38>(): sc_biguint<38>(ap_const_lv38_119) * sc_bigint<28>(mul_ln1118_1298_fu_810_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1299_fu_891_p1() {
    mul_ln1118_1299_fu_891_p1 =  (sc_lv<28>) (sext_ln1118_878_fu_98032_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1299_fu_891_p2() {
    mul_ln1118_1299_fu_891_p2 = (!ap_const_lv39_7FFFFFFDBB.is_01() || !mul_ln1118_1299_fu_891_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ap_const_lv39_7FFFFFFDBB) * sc_bigint<28>(mul_ln1118_1299_fu_891_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1300_fu_869_p1() {
    mul_ln1118_1300_fu_869_p1 =  (sc_lv<28>) (sext_ln1118_880_fu_98621_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1300_fu_869_p2() {
    mul_ln1118_1300_fu_869_p2 = (!ap_const_lv37_1FFFFFFF59.is_01() || !mul_ln1118_1300_fu_869_p1.read().is_01())? sc_lv<37>(): sc_bigint<37>(ap_const_lv37_1FFFFFFF59) * sc_bigint<28>(mul_ln1118_1300_fu_869_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1301_fu_776_p1() {
    mul_ln1118_1301_fu_776_p1 =  (sc_lv<28>) (sext_ln1118_880_fu_98621_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1301_fu_776_p2() {
    mul_ln1118_1301_fu_776_p2 = (!ap_const_lv37_1FFFFFFF09.is_01() || !mul_ln1118_1301_fu_776_p1.read().is_01())? sc_lv<37>(): sc_bigint<37>(ap_const_lv37_1FFFFFFF09) * sc_bigint<28>(mul_ln1118_1301_fu_776_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1302_fu_880_p1() {
    mul_ln1118_1302_fu_880_p1 =  (sc_lv<28>) (sext_ln1118_880_fu_98621_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1302_fu_880_p2() {
    mul_ln1118_1302_fu_880_p2 = (!ap_const_lv37_1FFFFFFF19.is_01() || !mul_ln1118_1302_fu_880_p1.read().is_01())? sc_lv<37>(): sc_bigint<37>(ap_const_lv37_1FFFFFFF19) * sc_bigint<28>(mul_ln1118_1302_fu_880_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1303_fu_870_p1() {
    mul_ln1118_1303_fu_870_p1 = tmp_data_V_17_6_reg_104843_pp0_iter5_reg.read();
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1303_fu_870_p2() {
    mul_ln1118_1303_fu_870_p2 = (!ap_const_lv38_103.is_01() || !mul_ln1118_1303_fu_870_p1.read().is_01())? sc_lv<38>(): sc_biguint<38>(ap_const_lv38_103) * sc_bigint<28>(mul_ln1118_1303_fu_870_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1304_fu_915_p1() {
    mul_ln1118_1304_fu_915_p1 =  (sc_lv<28>) (sext_ln1118_882_fu_101620_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1304_fu_915_p2() {
    mul_ln1118_1304_fu_915_p2 = (!ap_const_lv38_1B3.is_01() || !mul_ln1118_1304_fu_915_p1.read().is_01())? sc_lv<38>(): sc_biguint<38>(ap_const_lv38_1B3) * sc_bigint<28>(mul_ln1118_1304_fu_915_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1305_fu_789_p1() {
    mul_ln1118_1305_fu_789_p1 =  (sc_lv<28>) (sext_ln1118_882_fu_101620_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1305_fu_789_p2() {
    mul_ln1118_1305_fu_789_p2 = (!ap_const_lv38_1C1.is_01() || !mul_ln1118_1305_fu_789_p1.read().is_01())? sc_lv<38>(): sc_biguint<38>(ap_const_lv38_1C1) * sc_bigint<28>(mul_ln1118_1305_fu_789_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1306_fu_790_p1() {
    mul_ln1118_1306_fu_790_p1 =  (sc_lv<28>) (sext_ln1118_882_fu_101620_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1306_fu_790_p2() {
    mul_ln1118_1306_fu_790_p2 = (!ap_const_lv38_112.is_01() || !mul_ln1118_1306_fu_790_p1.read().is_01())? sc_lv<38>(): sc_biguint<38>(ap_const_lv38_112) * sc_bigint<28>(mul_ln1118_1306_fu_790_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1307_fu_822_p1() {
    mul_ln1118_1307_fu_822_p1 = tmp_data_V_17_7_reg_104849_pp0_iter6_reg.read();
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_1307_fu_822_p2() {
    mul_ln1118_1307_fu_822_p2 = (!ap_const_lv39_7FFFFFFDF7.is_01() || !mul_ln1118_1307_fu_822_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ap_const_lv39_7FFFFFFDF7) * sc_bigint<28>(mul_ln1118_1307_fu_822_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_fu_835_p1() {
    mul_ln1118_fu_835_p1 =  (sc_lv<28>) (sext_ln1118_752_fu_57200_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_mul_ln1118_fu_835_p2() {
    mul_ln1118_fu_835_p2 = (!ap_const_lv37_1FFFFFFF71.is_01() || !mul_ln1118_fu_835_p1.read().is_01())? sc_lv<37>(): sc_bigint<37>(ap_const_lv37_1FFFFFFF71) * sc_bigint<28>(mul_ln1118_fu_835_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5422_fu_57370_p2() {
    or_ln340_5422_fu_57370_p2 = (and_ln786_fu_57340_p2.read() | xor_ln779_fu_57308_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5423_fu_57376_p2() {
    or_ln340_5423_fu_57376_p2 = (or_ln340_5422_fu_57370_p2.read() | and_ln416_fu_57294_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5424_fu_57560_p2() {
    or_ln340_5424_fu_57560_p2 = (and_ln786_4088_fu_57554_p2.read() | and_ln785_1335_fu_57530_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5425_fu_57566_p2() {
    or_ln340_5425_fu_57566_p2 = (and_ln786_4087_fu_57536_p2.read() | xor_ln779_1335_fu_57504_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5426_fu_57572_p2() {
    or_ln340_5426_fu_57572_p2 = (or_ln340_5425_fu_57566_p2.read() | and_ln416_1335_fu_57490_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5427_fu_57760_p2() {
    or_ln340_5427_fu_57760_p2 = (and_ln786_4090_fu_57754_p2.read() | and_ln785_1336_fu_57730_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5428_fu_57766_p2() {
    or_ln340_5428_fu_57766_p2 = (and_ln786_4089_fu_57736_p2.read() | xor_ln779_1336_fu_57704_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5429_fu_57772_p2() {
    or_ln340_5429_fu_57772_p2 = (or_ln340_5428_fu_57766_p2.read() | and_ln416_1336_fu_57690_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5430_fu_57960_p2() {
    or_ln340_5430_fu_57960_p2 = (and_ln786_4092_fu_57954_p2.read() | and_ln785_1337_fu_57930_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5431_fu_57966_p2() {
    or_ln340_5431_fu_57966_p2 = (and_ln786_4091_fu_57936_p2.read() | xor_ln779_1337_fu_57904_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5432_fu_57972_p2() {
    or_ln340_5432_fu_57972_p2 = (or_ln340_5431_fu_57966_p2.read() | and_ln416_1337_fu_57890_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5433_fu_58204_p2() {
    or_ln340_5433_fu_58204_p2 = (and_ln786_4094_fu_58198_p2.read() | and_ln785_1338_fu_58174_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5434_fu_58210_p2() {
    or_ln340_5434_fu_58210_p2 = (and_ln786_4093_fu_58180_p2.read() | xor_ln779_1338_fu_58148_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5435_fu_58216_p2() {
    or_ln340_5435_fu_58216_p2 = (or_ln340_5434_fu_58210_p2.read() | and_ln416_1338_fu_58134_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5436_fu_58400_p2() {
    or_ln340_5436_fu_58400_p2 = (and_ln786_4096_fu_58394_p2.read() | and_ln785_1339_fu_58370_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5437_fu_58406_p2() {
    or_ln340_5437_fu_58406_p2 = (and_ln786_4095_fu_58376_p2.read() | xor_ln779_1339_fu_58344_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5438_fu_58412_p2() {
    or_ln340_5438_fu_58412_p2 = (or_ln340_5437_fu_58406_p2.read() | and_ln416_1339_fu_58330_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5439_fu_58600_p2() {
    or_ln340_5439_fu_58600_p2 = (and_ln786_4098_fu_58594_p2.read() | and_ln785_1340_fu_58570_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5440_fu_58606_p2() {
    or_ln340_5440_fu_58606_p2 = (and_ln786_4097_fu_58576_p2.read() | xor_ln779_1340_fu_58544_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5441_fu_58612_p2() {
    or_ln340_5441_fu_58612_p2 = (or_ln340_5440_fu_58606_p2.read() | and_ln416_1340_fu_58530_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5442_fu_58818_p2() {
    or_ln340_5442_fu_58818_p2 = (and_ln786_4100_fu_58812_p2.read() | and_ln785_1341_fu_58788_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5443_fu_58824_p2() {
    or_ln340_5443_fu_58824_p2 = (and_ln786_4099_fu_58794_p2.read() | xor_ln779_1341_fu_58762_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5444_fu_58830_p2() {
    or_ln340_5444_fu_58830_p2 = (or_ln340_5443_fu_58824_p2.read() | and_ln416_1341_fu_58748_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5445_fu_59026_p2() {
    or_ln340_5445_fu_59026_p2 = (and_ln786_4102_fu_59020_p2.read() | and_ln785_1342_fu_58996_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5446_fu_59032_p2() {
    or_ln340_5446_fu_59032_p2 = (and_ln786_4101_fu_59002_p2.read() | xor_ln779_1342_fu_58970_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5447_fu_59038_p2() {
    or_ln340_5447_fu_59038_p2 = (or_ln340_5446_fu_59032_p2.read() | and_ln416_1342_fu_58956_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5448_fu_59218_p2() {
    or_ln340_5448_fu_59218_p2 = (and_ln786_4104_fu_59212_p2.read() | and_ln785_1343_fu_59188_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5449_fu_59224_p2() {
    or_ln340_5449_fu_59224_p2 = (and_ln786_4103_fu_59194_p2.read() | xor_ln779_1343_fu_59162_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5450_fu_59230_p2() {
    or_ln340_5450_fu_59230_p2 = (or_ln340_5449_fu_59224_p2.read() | and_ln416_1343_fu_59148_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5451_fu_59414_p2() {
    or_ln340_5451_fu_59414_p2 = (and_ln786_4106_fu_59408_p2.read() | and_ln785_1344_fu_59384_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5452_fu_59420_p2() {
    or_ln340_5452_fu_59420_p2 = (and_ln786_4105_fu_59390_p2.read() | xor_ln779_1344_fu_59358_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5453_fu_59426_p2() {
    or_ln340_5453_fu_59426_p2 = (or_ln340_5452_fu_59420_p2.read() | and_ln416_1344_fu_59344_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5454_fu_59614_p2() {
    or_ln340_5454_fu_59614_p2 = (and_ln786_4108_fu_59608_p2.read() | and_ln785_1345_fu_59584_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5455_fu_59620_p2() {
    or_ln340_5455_fu_59620_p2 = (and_ln786_4107_fu_59590_p2.read() | xor_ln779_1345_fu_59558_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5456_fu_59626_p2() {
    or_ln340_5456_fu_59626_p2 = (or_ln340_5455_fu_59620_p2.read() | and_ln416_1345_fu_59544_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5457_fu_59826_p2() {
    or_ln340_5457_fu_59826_p2 = (and_ln786_4110_fu_59820_p2.read() | and_ln785_1346_fu_59796_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5458_fu_59832_p2() {
    or_ln340_5458_fu_59832_p2 = (and_ln786_4109_fu_59802_p2.read() | xor_ln779_1346_fu_59770_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5459_fu_59838_p2() {
    or_ln340_5459_fu_59838_p2 = (or_ln340_5458_fu_59832_p2.read() | and_ln416_1346_fu_59756_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5460_fu_60018_p2() {
    or_ln340_5460_fu_60018_p2 = (and_ln786_4112_fu_60012_p2.read() | and_ln785_1347_fu_59988_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5461_fu_60024_p2() {
    or_ln340_5461_fu_60024_p2 = (and_ln786_4111_fu_59994_p2.read() | xor_ln779_1347_fu_59962_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5462_fu_60030_p2() {
    or_ln340_5462_fu_60030_p2 = (or_ln340_5461_fu_60024_p2.read() | and_ln416_1347_fu_59948_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5463_fu_60210_p2() {
    or_ln340_5463_fu_60210_p2 = (and_ln786_4114_fu_60204_p2.read() | and_ln785_1348_fu_60180_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5464_fu_60216_p2() {
    or_ln340_5464_fu_60216_p2 = (and_ln786_4113_fu_60186_p2.read() | xor_ln779_1348_fu_60154_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5465_fu_60222_p2() {
    or_ln340_5465_fu_60222_p2 = (or_ln340_5464_fu_60216_p2.read() | and_ln416_1348_fu_60140_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5466_fu_60402_p2() {
    or_ln340_5466_fu_60402_p2 = (and_ln786_4116_fu_60396_p2.read() | and_ln785_1349_fu_60372_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5467_fu_60408_p2() {
    or_ln340_5467_fu_60408_p2 = (and_ln786_4115_fu_60378_p2.read() | xor_ln779_1349_fu_60346_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5468_fu_60414_p2() {
    or_ln340_5468_fu_60414_p2 = (or_ln340_5467_fu_60408_p2.read() | and_ln416_1349_fu_60332_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5469_fu_60669_p2() {
    or_ln340_5469_fu_60669_p2 = (and_ln786_4118_fu_60663_p2.read() | and_ln785_1350_fu_60639_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5470_fu_60675_p2() {
    or_ln340_5470_fu_60675_p2 = (and_ln786_4117_fu_60645_p2.read() | xor_ln779_1350_fu_60613_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5471_fu_60681_p2() {
    or_ln340_5471_fu_60681_p2 = (or_ln340_5470_fu_60675_p2.read() | and_ln416_1350_fu_60599_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5472_fu_62771_p2() {
    or_ln340_5472_fu_62771_p2 = (and_ln786_4120_fu_62766_p2.read() | and_ln785_1351_fu_62744_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5473_fu_62777_p2() {
    or_ln340_5473_fu_62777_p2 = (and_ln786_4119_fu_62750_p2.read() | xor_ln779_1351_fu_62724_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5474_fu_62783_p2() {
    or_ln340_5474_fu_62783_p2 = (or_ln340_5473_fu_62777_p2.read() | and_ln416_1351_reg_103960.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5475_fu_60963_p2() {
    or_ln340_5475_fu_60963_p2 = (and_ln786_4122_fu_60957_p2.read() | and_ln785_1352_fu_60933_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5476_fu_60969_p2() {
    or_ln340_5476_fu_60969_p2 = (and_ln786_4121_fu_60939_p2.read() | xor_ln779_1352_fu_60907_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5477_fu_60975_p2() {
    or_ln340_5477_fu_60975_p2 = (or_ln340_5476_fu_60969_p2.read() | and_ln416_1352_fu_60893_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5478_fu_61163_p2() {
    or_ln340_5478_fu_61163_p2 = (and_ln786_4124_fu_61157_p2.read() | and_ln785_1353_fu_61133_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5479_fu_61169_p2() {
    or_ln340_5479_fu_61169_p2 = (and_ln786_4123_fu_61139_p2.read() | xor_ln779_1353_fu_61107_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5480_fu_61175_p2() {
    or_ln340_5480_fu_61175_p2 = (or_ln340_5479_fu_61169_p2.read() | and_ln416_1353_fu_61093_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5481_fu_61375_p2() {
    or_ln340_5481_fu_61375_p2 = (and_ln786_4126_fu_61369_p2.read() | and_ln785_1354_fu_61345_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5482_fu_61381_p2() {
    or_ln340_5482_fu_61381_p2 = (and_ln786_4125_fu_61351_p2.read() | xor_ln779_1354_fu_61319_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5483_fu_61387_p2() {
    or_ln340_5483_fu_61387_p2 = (or_ln340_5482_fu_61381_p2.read() | and_ln416_1354_fu_61305_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5484_fu_62862_p2() {
    or_ln340_5484_fu_62862_p2 = (and_ln786_4128_fu_62857_p2.read() | and_ln785_1355_fu_62835_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5485_fu_62868_p2() {
    or_ln340_5485_fu_62868_p2 = (and_ln786_4127_fu_62841_p2.read() | xor_ln779_1355_fu_62815_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5486_fu_62874_p2() {
    or_ln340_5486_fu_62874_p2 = (or_ln340_5485_fu_62868_p2.read() | and_ln416_1355_reg_104005.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5487_fu_61669_p2() {
    or_ln340_5487_fu_61669_p2 = (and_ln786_4130_fu_61663_p2.read() | and_ln785_1356_fu_61639_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5488_fu_61675_p2() {
    or_ln340_5488_fu_61675_p2 = (and_ln786_4129_fu_61645_p2.read() | xor_ln779_1356_fu_61613_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5489_fu_61681_p2() {
    or_ln340_5489_fu_61681_p2 = (or_ln340_5488_fu_61675_p2.read() | and_ln416_1356_fu_61599_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5490_fu_61869_p2() {
    or_ln340_5490_fu_61869_p2 = (and_ln786_4132_fu_61863_p2.read() | and_ln785_1357_fu_61839_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5491_fu_61875_p2() {
    or_ln340_5491_fu_61875_p2 = (and_ln786_4131_fu_61845_p2.read() | xor_ln779_1357_fu_61813_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5492_fu_61881_p2() {
    or_ln340_5492_fu_61881_p2 = (or_ln340_5491_fu_61875_p2.read() | and_ln416_1357_fu_61799_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5493_fu_63081_p2() {
    or_ln340_5493_fu_63081_p2 = (and_ln786_4134_fu_63075_p2.read() | and_ln785_1358_fu_63051_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5494_fu_63087_p2() {
    or_ln340_5494_fu_63087_p2 = (and_ln786_4133_fu_63057_p2.read() | xor_ln779_1358_fu_63025_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5495_fu_63093_p2() {
    or_ln340_5495_fu_63093_p2 = (or_ln340_5494_fu_63087_p2.read() | and_ln416_1358_fu_63011_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5496_fu_63281_p2() {
    or_ln340_5496_fu_63281_p2 = (and_ln786_4136_fu_63275_p2.read() | and_ln785_1359_fu_63251_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5497_fu_63287_p2() {
    or_ln340_5497_fu_63287_p2 = (and_ln786_4135_fu_63257_p2.read() | xor_ln779_1359_fu_63225_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5498_fu_63293_p2() {
    or_ln340_5498_fu_63293_p2 = (or_ln340_5497_fu_63287_p2.read() | and_ln416_1359_fu_63211_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5499_fu_63477_p2() {
    or_ln340_5499_fu_63477_p2 = (and_ln786_4138_fu_63471_p2.read() | and_ln785_1360_fu_63447_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5500_fu_63483_p2() {
    or_ln340_5500_fu_63483_p2 = (and_ln786_4137_fu_63453_p2.read() | xor_ln779_1360_fu_63421_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5501_fu_63489_p2() {
    or_ln340_5501_fu_63489_p2 = (or_ln340_5500_fu_63483_p2.read() | and_ln416_1360_fu_63407_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5502_fu_63677_p2() {
    or_ln340_5502_fu_63677_p2 = (and_ln786_4140_fu_63671_p2.read() | and_ln785_1361_fu_63647_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5503_fu_63683_p2() {
    or_ln340_5503_fu_63683_p2 = (and_ln786_4139_fu_63653_p2.read() | xor_ln779_1361_fu_63621_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5504_fu_63689_p2() {
    or_ln340_5504_fu_63689_p2 = (or_ln340_5503_fu_63683_p2.read() | and_ln416_1361_fu_63607_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5505_fu_63928_p2() {
    or_ln340_5505_fu_63928_p2 = (and_ln786_4142_fu_63922_p2.read() | and_ln785_1362_fu_63898_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5506_fu_63934_p2() {
    or_ln340_5506_fu_63934_p2 = (and_ln786_4141_fu_63904_p2.read() | xor_ln779_1362_fu_63872_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5507_fu_63940_p2() {
    or_ln340_5507_fu_63940_p2 = (or_ln340_5506_fu_63934_p2.read() | and_ln416_1362_fu_63858_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5508_fu_64128_p2() {
    or_ln340_5508_fu_64128_p2 = (and_ln786_4144_fu_64122_p2.read() | and_ln785_1363_fu_64098_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5509_fu_64134_p2() {
    or_ln340_5509_fu_64134_p2 = (and_ln786_4143_fu_64104_p2.read() | xor_ln779_1363_fu_64072_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5510_fu_64140_p2() {
    or_ln340_5510_fu_64140_p2 = (or_ln340_5509_fu_64134_p2.read() | and_ln416_1363_fu_64058_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5511_fu_64324_p2() {
    or_ln340_5511_fu_64324_p2 = (and_ln786_4146_fu_64318_p2.read() | and_ln785_1364_fu_64294_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5512_fu_64330_p2() {
    or_ln340_5512_fu_64330_p2 = (and_ln786_4145_fu_64300_p2.read() | xor_ln779_1364_fu_64268_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5513_fu_64336_p2() {
    or_ln340_5513_fu_64336_p2 = (or_ln340_5512_fu_64330_p2.read() | and_ln416_1364_fu_64254_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5514_fu_64516_p2() {
    or_ln340_5514_fu_64516_p2 = (and_ln786_4148_fu_64510_p2.read() | and_ln785_1365_fu_64486_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5515_fu_64522_p2() {
    or_ln340_5515_fu_64522_p2 = (and_ln786_4147_fu_64492_p2.read() | xor_ln779_1365_fu_64460_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5516_fu_64528_p2() {
    or_ln340_5516_fu_64528_p2 = (or_ln340_5515_fu_64522_p2.read() | and_ln416_1365_fu_64446_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5517_fu_64728_p2() {
    or_ln340_5517_fu_64728_p2 = (and_ln786_4150_fu_64722_p2.read() | and_ln785_1366_fu_64698_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5518_fu_64734_p2() {
    or_ln340_5518_fu_64734_p2 = (and_ln786_4149_fu_64704_p2.read() | xor_ln779_1366_fu_64672_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5519_fu_64740_p2() {
    or_ln340_5519_fu_64740_p2 = (or_ln340_5518_fu_64734_p2.read() | and_ln416_1366_fu_64658_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5520_fu_64928_p2() {
    or_ln340_5520_fu_64928_p2 = (and_ln786_4152_fu_64922_p2.read() | and_ln785_1367_fu_64898_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5521_fu_64934_p2() {
    or_ln340_5521_fu_64934_p2 = (and_ln786_4151_fu_64904_p2.read() | xor_ln779_1367_fu_64872_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5522_fu_64940_p2() {
    or_ln340_5522_fu_64940_p2 = (or_ln340_5521_fu_64934_p2.read() | and_ln416_1367_fu_64858_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5523_fu_65124_p2() {
    or_ln340_5523_fu_65124_p2 = (and_ln786_4154_fu_65118_p2.read() | and_ln785_1368_fu_65094_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5524_fu_65130_p2() {
    or_ln340_5524_fu_65130_p2 = (and_ln786_4153_fu_65100_p2.read() | xor_ln779_1368_fu_65068_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5525_fu_65136_p2() {
    or_ln340_5525_fu_65136_p2 = (or_ln340_5524_fu_65130_p2.read() | and_ln416_1368_fu_65054_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5526_fu_65324_p2() {
    or_ln340_5526_fu_65324_p2 = (and_ln786_4156_fu_65318_p2.read() | and_ln785_1369_fu_65294_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5527_fu_65330_p2() {
    or_ln340_5527_fu_65330_p2 = (and_ln786_4155_fu_65300_p2.read() | xor_ln779_1369_fu_65268_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5528_fu_65336_p2() {
    or_ln340_5528_fu_65336_p2 = (or_ln340_5527_fu_65330_p2.read() | and_ln416_1369_fu_65254_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5529_fu_69562_p2() {
    or_ln340_5529_fu_69562_p2 = (and_ln786_4158_fu_69557_p2.read() | and_ln785_1370_fu_69535_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5530_fu_69568_p2() {
    or_ln340_5530_fu_69568_p2 = (and_ln786_4157_fu_69541_p2.read() | xor_ln779_1370_fu_69515_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5531_fu_69574_p2() {
    or_ln340_5531_fu_69574_p2 = (or_ln340_5530_fu_69568_p2.read() | and_ln416_1370_reg_104116.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5532_fu_65665_p2() {
    or_ln340_5532_fu_65665_p2 = (and_ln786_4160_fu_65659_p2.read() | and_ln785_1371_fu_65635_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5533_fu_65671_p2() {
    or_ln340_5533_fu_65671_p2 = (and_ln786_4159_fu_65641_p2.read() | xor_ln779_1371_fu_65609_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5534_fu_65677_p2() {
    or_ln340_5534_fu_65677_p2 = (or_ln340_5533_fu_65671_p2.read() | and_ln416_1371_fu_65595_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5535_fu_65865_p2() {
    or_ln340_5535_fu_65865_p2 = (and_ln786_4162_fu_65859_p2.read() | and_ln785_1372_fu_65835_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5536_fu_65871_p2() {
    or_ln340_5536_fu_65871_p2 = (and_ln786_4161_fu_65841_p2.read() | xor_ln779_1372_fu_65809_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5537_fu_65877_p2() {
    or_ln340_5537_fu_65877_p2 = (or_ln340_5536_fu_65871_p2.read() | and_ln416_1372_fu_65795_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5538_fu_66065_p2() {
    or_ln340_5538_fu_66065_p2 = (and_ln786_4164_fu_66059_p2.read() | and_ln785_1373_fu_66035_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5539_fu_66071_p2() {
    or_ln340_5539_fu_66071_p2 = (and_ln786_4163_fu_66041_p2.read() | xor_ln779_1373_fu_66009_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5540_fu_66077_p2() {
    or_ln340_5540_fu_66077_p2 = (or_ln340_5539_fu_66071_p2.read() | and_ln416_1373_fu_65995_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5541_fu_66277_p2() {
    or_ln340_5541_fu_66277_p2 = (and_ln786_4166_fu_66271_p2.read() | and_ln785_1374_fu_66247_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5542_fu_66283_p2() {
    or_ln340_5542_fu_66283_p2 = (and_ln786_4165_fu_66253_p2.read() | xor_ln779_1374_fu_66221_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5543_fu_66289_p2() {
    or_ln340_5543_fu_66289_p2 = (or_ln340_5542_fu_66283_p2.read() | and_ln416_1374_fu_66207_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5544_fu_66477_p2() {
    or_ln340_5544_fu_66477_p2 = (and_ln786_4168_fu_66471_p2.read() | and_ln785_1375_fu_66447_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5545_fu_66483_p2() {
    or_ln340_5545_fu_66483_p2 = (and_ln786_4167_fu_66453_p2.read() | xor_ln779_1375_fu_66421_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5546_fu_66489_p2() {
    or_ln340_5546_fu_66489_p2 = (or_ln340_5545_fu_66483_p2.read() | and_ln416_1375_fu_66407_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5547_fu_66677_p2() {
    or_ln340_5547_fu_66677_p2 = (and_ln786_4170_fu_66671_p2.read() | and_ln785_1376_fu_66647_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5548_fu_66683_p2() {
    or_ln340_5548_fu_66683_p2 = (and_ln786_4169_fu_66653_p2.read() | xor_ln779_1376_fu_66621_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5549_fu_66689_p2() {
    or_ln340_5549_fu_66689_p2 = (or_ln340_5548_fu_66683_p2.read() | and_ln416_1376_fu_66607_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5550_fu_66873_p2() {
    or_ln340_5550_fu_66873_p2 = (and_ln786_4172_fu_66867_p2.read() | and_ln785_1377_fu_66843_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5551_fu_66879_p2() {
    or_ln340_5551_fu_66879_p2 = (and_ln786_4171_fu_66849_p2.read() | xor_ln779_1377_fu_66817_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5552_fu_66885_p2() {
    or_ln340_5552_fu_66885_p2 = (or_ln340_5551_fu_66879_p2.read() | and_ln416_1377_fu_66803_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5553_fu_67084_p2() {
    or_ln340_5553_fu_67084_p2 = (and_ln786_4174_fu_67078_p2.read() | and_ln785_1378_fu_67054_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5554_fu_67090_p2() {
    or_ln340_5554_fu_67090_p2 = (and_ln786_4173_fu_67060_p2.read() | xor_ln779_1378_fu_67028_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5555_fu_67096_p2() {
    or_ln340_5555_fu_67096_p2 = (or_ln340_5554_fu_67090_p2.read() | and_ln416_1378_fu_67014_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5556_fu_69653_p2() {
    or_ln340_5556_fu_69653_p2 = (and_ln786_4176_fu_69648_p2.read() | and_ln785_1379_fu_69626_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5557_fu_69659_p2() {
    or_ln340_5557_fu_69659_p2 = (and_ln786_4175_fu_69632_p2.read() | xor_ln779_1379_fu_69606_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5558_fu_69665_p2() {
    or_ln340_5558_fu_69665_p2 = (or_ln340_5557_fu_69659_p2.read() | and_ln416_1379_reg_104191.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5559_fu_69744_p2() {
    or_ln340_5559_fu_69744_p2 = (and_ln786_4178_fu_69739_p2.read() | and_ln785_1380_fu_69717_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5560_fu_69750_p2() {
    or_ln340_5560_fu_69750_p2 = (and_ln786_4177_fu_69723_p2.read() | xor_ln779_1380_fu_69697_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5561_fu_69756_p2() {
    or_ln340_5561_fu_69756_p2 = (or_ln340_5560_fu_69750_p2.read() | and_ln416_1380_reg_104218.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5562_fu_69835_p2() {
    or_ln340_5562_fu_69835_p2 = (and_ln786_4180_fu_69830_p2.read() | and_ln785_1381_fu_69808_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5563_fu_69841_p2() {
    or_ln340_5563_fu_69841_p2 = (and_ln786_4179_fu_69814_p2.read() | xor_ln779_1381_fu_69788_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5564_fu_69847_p2() {
    or_ln340_5564_fu_69847_p2 = (or_ln340_5563_fu_69841_p2.read() | and_ln416_1381_reg_104245.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5565_fu_70039_p2() {
    or_ln340_5565_fu_70039_p2 = (and_ln786_4182_fu_70033_p2.read() | and_ln785_1382_fu_70009_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5566_fu_70045_p2() {
    or_ln340_5566_fu_70045_p2 = (and_ln786_4181_fu_70015_p2.read() | xor_ln779_1382_fu_69983_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5567_fu_70051_p2() {
    or_ln340_5567_fu_70051_p2 = (or_ln340_5566_fu_70045_p2.read() | and_ln416_1382_fu_69969_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5568_fu_70235_p2() {
    or_ln340_5568_fu_70235_p2 = (and_ln786_4184_fu_70229_p2.read() | and_ln785_1383_fu_70205_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5569_fu_70241_p2() {
    or_ln340_5569_fu_70241_p2 = (and_ln786_4183_fu_70211_p2.read() | xor_ln779_1383_fu_70179_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5570_fu_70247_p2() {
    or_ln340_5570_fu_70247_p2 = (or_ln340_5569_fu_70241_p2.read() | and_ln416_1383_fu_70165_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5571_fu_70427_p2() {
    or_ln340_5571_fu_70427_p2 = (and_ln786_4186_fu_70421_p2.read() | and_ln785_1384_fu_70397_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5572_fu_70433_p2() {
    or_ln340_5572_fu_70433_p2 = (and_ln786_4185_fu_70403_p2.read() | xor_ln779_1384_fu_70371_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5573_fu_70439_p2() {
    or_ln340_5573_fu_70439_p2 = (or_ln340_5572_fu_70433_p2.read() | and_ln416_1384_fu_70357_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5574_fu_70655_p2() {
    or_ln340_5574_fu_70655_p2 = (and_ln786_4188_fu_70649_p2.read() | and_ln785_1385_fu_70625_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5575_fu_70661_p2() {
    or_ln340_5575_fu_70661_p2 = (and_ln786_4187_fu_70631_p2.read() | xor_ln779_1385_fu_70599_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5576_fu_70667_p2() {
    or_ln340_5576_fu_70667_p2 = (or_ln340_5575_fu_70661_p2.read() | and_ln416_1385_fu_70585_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5577_fu_70864_p2() {
    or_ln340_5577_fu_70864_p2 = (and_ln786_4190_fu_70858_p2.read() | and_ln785_1386_fu_70834_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5578_fu_70870_p2() {
    or_ln340_5578_fu_70870_p2 = (and_ln786_4189_fu_70840_p2.read() | xor_ln779_1386_fu_70808_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5579_fu_70876_p2() {
    or_ln340_5579_fu_70876_p2 = (or_ln340_5578_fu_70870_p2.read() | and_ln416_1386_fu_70794_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5580_fu_71060_p2() {
    or_ln340_5580_fu_71060_p2 = (and_ln786_4192_fu_71054_p2.read() | and_ln785_1387_fu_71030_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5581_fu_71066_p2() {
    or_ln340_5581_fu_71066_p2 = (and_ln786_4191_fu_71036_p2.read() | xor_ln779_1387_fu_71004_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5582_fu_71072_p2() {
    or_ln340_5582_fu_71072_p2 = (or_ln340_5581_fu_71066_p2.read() | and_ln416_1387_fu_70990_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5583_fu_71260_p2() {
    or_ln340_5583_fu_71260_p2 = (and_ln786_4194_fu_71254_p2.read() | and_ln785_1388_fu_71230_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5584_fu_71266_p2() {
    or_ln340_5584_fu_71266_p2 = (and_ln786_4193_fu_71236_p2.read() | xor_ln779_1388_fu_71204_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5585_fu_71272_p2() {
    or_ln340_5585_fu_71272_p2 = (or_ln340_5584_fu_71266_p2.read() | and_ln416_1388_fu_71190_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5586_fu_71460_p2() {
    or_ln340_5586_fu_71460_p2 = (and_ln786_4196_fu_71454_p2.read() | and_ln785_1389_fu_71430_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5587_fu_71466_p2() {
    or_ln340_5587_fu_71466_p2 = (and_ln786_4195_fu_71436_p2.read() | xor_ln779_1389_fu_71404_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5588_fu_71472_p2() {
    or_ln340_5588_fu_71472_p2 = (or_ln340_5587_fu_71466_p2.read() | and_ln416_1389_fu_71390_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5589_fu_71676_p2() {
    or_ln340_5589_fu_71676_p2 = (and_ln786_4198_fu_71670_p2.read() | and_ln785_1390_fu_71646_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5590_fu_71682_p2() {
    or_ln340_5590_fu_71682_p2 = (and_ln786_4197_fu_71652_p2.read() | xor_ln779_1390_fu_71620_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5591_fu_71688_p2() {
    or_ln340_5591_fu_71688_p2 = (or_ln340_5590_fu_71682_p2.read() | and_ln416_1390_fu_71606_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5592_fu_71872_p2() {
    or_ln340_5592_fu_71872_p2 = (and_ln786_4200_fu_71866_p2.read() | and_ln785_1391_fu_71842_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5593_fu_71878_p2() {
    or_ln340_5593_fu_71878_p2 = (and_ln786_4199_fu_71848_p2.read() | xor_ln779_1391_fu_71816_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5594_fu_71884_p2() {
    or_ln340_5594_fu_71884_p2 = (or_ln340_5593_fu_71878_p2.read() | and_ln416_1391_fu_71802_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5595_fu_72064_p2() {
    or_ln340_5595_fu_72064_p2 = (and_ln786_4202_fu_72058_p2.read() | and_ln785_1392_fu_72034_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5596_fu_72070_p2() {
    or_ln340_5596_fu_72070_p2 = (and_ln786_4201_fu_72040_p2.read() | xor_ln779_1392_fu_72008_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5597_fu_72076_p2() {
    or_ln340_5597_fu_72076_p2 = (or_ln340_5596_fu_72070_p2.read() | and_ln416_1392_fu_71994_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5598_fu_72260_p2() {
    or_ln340_5598_fu_72260_p2 = (and_ln786_4204_fu_72254_p2.read() | and_ln785_1393_fu_72230_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5599_fu_72266_p2() {
    or_ln340_5599_fu_72266_p2 = (and_ln786_4203_fu_72236_p2.read() | xor_ln779_1393_fu_72204_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5600_fu_72272_p2() {
    or_ln340_5600_fu_72272_p2 = (or_ln340_5599_fu_72266_p2.read() | and_ln416_1393_fu_72190_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5601_fu_72472_p2() {
    or_ln340_5601_fu_72472_p2 = (and_ln786_4206_fu_72466_p2.read() | and_ln785_1394_fu_72442_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5602_fu_72478_p2() {
    or_ln340_5602_fu_72478_p2 = (and_ln786_4205_fu_72448_p2.read() | xor_ln779_1394_fu_72416_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5603_fu_72484_p2() {
    or_ln340_5603_fu_72484_p2 = (or_ln340_5602_fu_72478_p2.read() | and_ln416_1394_fu_72402_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5604_fu_72672_p2() {
    or_ln340_5604_fu_72672_p2 = (and_ln786_4208_fu_72666_p2.read() | and_ln785_1395_fu_72642_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5605_fu_72678_p2() {
    or_ln340_5605_fu_72678_p2 = (and_ln786_4207_fu_72648_p2.read() | xor_ln779_1395_fu_72616_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5606_fu_72684_p2() {
    or_ln340_5606_fu_72684_p2 = (or_ln340_5605_fu_72678_p2.read() | and_ln416_1395_fu_72602_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5607_fu_72864_p2() {
    or_ln340_5607_fu_72864_p2 = (and_ln786_4210_fu_72858_p2.read() | and_ln785_1396_fu_72834_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5608_fu_72870_p2() {
    or_ln340_5608_fu_72870_p2 = (and_ln786_4209_fu_72840_p2.read() | xor_ln779_1396_fu_72808_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5609_fu_72876_p2() {
    or_ln340_5609_fu_72876_p2 = (or_ln340_5608_fu_72870_p2.read() | and_ln416_1396_fu_72794_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5610_fu_73064_p2() {
    or_ln340_5610_fu_73064_p2 = (and_ln786_4212_fu_73058_p2.read() | and_ln785_1397_fu_73034_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5611_fu_73070_p2() {
    or_ln340_5611_fu_73070_p2 = (and_ln786_4211_fu_73040_p2.read() | xor_ln779_1397_fu_73008_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5612_fu_73076_p2() {
    or_ln340_5612_fu_73076_p2 = (or_ln340_5611_fu_73070_p2.read() | and_ln416_1397_fu_72994_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5613_fu_75876_p2() {
    or_ln340_5613_fu_75876_p2 = (and_ln786_4214_fu_75871_p2.read() | and_ln785_1398_fu_75849_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5614_fu_75882_p2() {
    or_ln340_5614_fu_75882_p2 = (and_ln786_4213_fu_75855_p2.read() | xor_ln779_1398_fu_75829_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5615_fu_75888_p2() {
    or_ln340_5615_fu_75888_p2 = (or_ln340_5614_fu_75882_p2.read() | and_ln416_1398_reg_104449.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5616_fu_73378_p2() {
    or_ln340_5616_fu_73378_p2 = (and_ln786_4216_fu_73372_p2.read() | and_ln785_1399_fu_73348_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5617_fu_73384_p2() {
    or_ln340_5617_fu_73384_p2 = (and_ln786_4215_fu_73354_p2.read() | xor_ln779_1399_fu_73322_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5618_fu_73390_p2() {
    or_ln340_5618_fu_73390_p2 = (or_ln340_5617_fu_73384_p2.read() | and_ln416_1399_fu_73308_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5619_fu_73574_p2() {
    or_ln340_5619_fu_73574_p2 = (and_ln786_4218_fu_73568_p2.read() | and_ln785_1400_fu_73544_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5620_fu_73580_p2() {
    or_ln340_5620_fu_73580_p2 = (and_ln786_4217_fu_73550_p2.read() | xor_ln779_1400_fu_73518_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5621_fu_73586_p2() {
    or_ln340_5621_fu_73586_p2 = (or_ln340_5620_fu_73580_p2.read() | and_ln416_1400_fu_73504_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5622_fu_75967_p2() {
    or_ln340_5622_fu_75967_p2 = (and_ln786_4220_fu_75962_p2.read() | and_ln785_1401_fu_75940_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5623_fu_75973_p2() {
    or_ln340_5623_fu_75973_p2 = (and_ln786_4219_fu_75946_p2.read() | xor_ln779_1401_fu_75920_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5624_fu_75979_p2() {
    or_ln340_5624_fu_75979_p2 = (or_ln340_5623_fu_75973_p2.read() | and_ln416_1401_reg_104488.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5625_fu_76170_p2() {
    or_ln340_5625_fu_76170_p2 = (and_ln786_4222_fu_76164_p2.read() | and_ln785_1402_fu_76140_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5626_fu_76176_p2() {
    or_ln340_5626_fu_76176_p2 = (and_ln786_4221_fu_76146_p2.read() | xor_ln779_1402_fu_76114_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5627_fu_76182_p2() {
    or_ln340_5627_fu_76182_p2 = (or_ln340_5626_fu_76176_p2.read() | and_ln416_1402_fu_76100_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5628_fu_76404_p2() {
    or_ln340_5628_fu_76404_p2 = (and_ln786_4224_fu_76398_p2.read() | and_ln785_1403_fu_76374_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5629_fu_76410_p2() {
    or_ln340_5629_fu_76410_p2 = (and_ln786_4223_fu_76380_p2.read() | xor_ln779_1403_fu_76348_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5630_fu_76416_p2() {
    or_ln340_5630_fu_76416_p2 = (or_ln340_5629_fu_76410_p2.read() | and_ln416_1403_fu_76334_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5631_fu_76596_p2() {
    or_ln340_5631_fu_76596_p2 = (and_ln786_4226_fu_76590_p2.read() | and_ln785_1404_fu_76566_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5632_fu_76602_p2() {
    or_ln340_5632_fu_76602_p2 = (and_ln786_4225_fu_76572_p2.read() | xor_ln779_1404_fu_76540_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5633_fu_76608_p2() {
    or_ln340_5633_fu_76608_p2 = (or_ln340_5632_fu_76602_p2.read() | and_ln416_1404_fu_76526_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5634_fu_76845_p2() {
    or_ln340_5634_fu_76845_p2 = (and_ln786_4228_fu_76839_p2.read() | and_ln785_1405_fu_76815_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5635_fu_76851_p2() {
    or_ln340_5635_fu_76851_p2 = (and_ln786_4227_fu_76821_p2.read() | xor_ln779_1405_fu_76789_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5636_fu_76857_p2() {
    or_ln340_5636_fu_76857_p2 = (or_ln340_5635_fu_76851_p2.read() | and_ln416_1405_fu_76775_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5637_fu_77054_p2() {
    or_ln340_5637_fu_77054_p2 = (and_ln786_4230_fu_77048_p2.read() | and_ln785_1406_fu_77024_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5638_fu_77060_p2() {
    or_ln340_5638_fu_77060_p2 = (and_ln786_4229_fu_77030_p2.read() | xor_ln779_1406_fu_76998_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5639_fu_77066_p2() {
    or_ln340_5639_fu_77066_p2 = (or_ln340_5638_fu_77060_p2.read() | and_ln416_1406_fu_76984_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5640_fu_77254_p2() {
    or_ln340_5640_fu_77254_p2 = (and_ln786_4232_fu_77248_p2.read() | and_ln785_1407_fu_77224_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5641_fu_77260_p2() {
    or_ln340_5641_fu_77260_p2 = (and_ln786_4231_fu_77230_p2.read() | xor_ln779_1407_fu_77198_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5642_fu_77266_p2() {
    or_ln340_5642_fu_77266_p2 = (or_ln340_5641_fu_77260_p2.read() | and_ln416_1407_fu_77184_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5643_fu_77454_p2() {
    or_ln340_5643_fu_77454_p2 = (and_ln786_4234_fu_77448_p2.read() | and_ln785_1408_fu_77424_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5644_fu_77460_p2() {
    or_ln340_5644_fu_77460_p2 = (and_ln786_4233_fu_77430_p2.read() | xor_ln779_1408_fu_77398_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5645_fu_77466_p2() {
    or_ln340_5645_fu_77466_p2 = (or_ln340_5644_fu_77460_p2.read() | and_ln416_1408_fu_77384_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5646_fu_77654_p2() {
    or_ln340_5646_fu_77654_p2 = (and_ln786_4236_fu_77648_p2.read() | and_ln785_1409_fu_77624_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5647_fu_77660_p2() {
    or_ln340_5647_fu_77660_p2 = (and_ln786_4235_fu_77630_p2.read() | xor_ln779_1409_fu_77598_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5648_fu_77666_p2() {
    or_ln340_5648_fu_77666_p2 = (or_ln340_5647_fu_77660_p2.read() | and_ln416_1409_fu_77584_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5649_fu_77863_p2() {
    or_ln340_5649_fu_77863_p2 = (and_ln786_4238_fu_77857_p2.read() | and_ln785_1410_fu_77833_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5650_fu_77869_p2() {
    or_ln340_5650_fu_77869_p2 = (and_ln786_4237_fu_77839_p2.read() | xor_ln779_1410_fu_77807_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5651_fu_77875_p2() {
    or_ln340_5651_fu_77875_p2 = (or_ln340_5650_fu_77869_p2.read() | and_ln416_1410_fu_77793_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5652_fu_78091_p2() {
    or_ln340_5652_fu_78091_p2 = (and_ln786_4240_fu_78085_p2.read() | and_ln785_1411_fu_78061_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5653_fu_78097_p2() {
    or_ln340_5653_fu_78097_p2 = (and_ln786_4239_fu_78067_p2.read() | xor_ln779_1411_fu_78035_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5654_fu_78103_p2() {
    or_ln340_5654_fu_78103_p2 = (or_ln340_5653_fu_78097_p2.read() | and_ln416_1411_fu_78021_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5655_fu_78291_p2() {
    or_ln340_5655_fu_78291_p2 = (and_ln786_4242_fu_78285_p2.read() | and_ln785_1412_fu_78261_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5656_fu_78297_p2() {
    or_ln340_5656_fu_78297_p2 = (and_ln786_4241_fu_78267_p2.read() | xor_ln779_1412_fu_78235_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5657_fu_78303_p2() {
    or_ln340_5657_fu_78303_p2 = (or_ln340_5656_fu_78297_p2.read() | and_ln416_1412_fu_78221_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5658_fu_78491_p2() {
    or_ln340_5658_fu_78491_p2 = (and_ln786_4244_fu_78485_p2.read() | and_ln785_1413_fu_78461_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5659_fu_78497_p2() {
    or_ln340_5659_fu_78497_p2 = (and_ln786_4243_fu_78467_p2.read() | xor_ln779_1413_fu_78435_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5660_fu_78503_p2() {
    or_ln340_5660_fu_78503_p2 = (or_ln340_5659_fu_78497_p2.read() | and_ln416_1413_fu_78421_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5661_fu_78700_p2() {
    or_ln340_5661_fu_78700_p2 = (and_ln786_4246_fu_78694_p2.read() | and_ln785_1414_fu_78670_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5662_fu_78706_p2() {
    or_ln340_5662_fu_78706_p2 = (and_ln786_4245_fu_78676_p2.read() | xor_ln779_1414_fu_78644_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5663_fu_78712_p2() {
    or_ln340_5663_fu_78712_p2 = (or_ln340_5662_fu_78706_p2.read() | and_ln416_1414_fu_78630_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5664_fu_78900_p2() {
    or_ln340_5664_fu_78900_p2 = (and_ln786_4248_fu_78894_p2.read() | and_ln785_1415_fu_78870_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5665_fu_78906_p2() {
    or_ln340_5665_fu_78906_p2 = (and_ln786_4247_fu_78876_p2.read() | xor_ln779_1415_fu_78844_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5666_fu_78912_p2() {
    or_ln340_5666_fu_78912_p2 = (or_ln340_5665_fu_78906_p2.read() | and_ln416_1415_fu_78830_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5667_fu_79092_p2() {
    or_ln340_5667_fu_79092_p2 = (and_ln786_4250_fu_79086_p2.read() | and_ln785_1416_fu_79062_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5668_fu_79098_p2() {
    or_ln340_5668_fu_79098_p2 = (and_ln786_4249_fu_79068_p2.read() | xor_ln779_1416_fu_79036_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5669_fu_79104_p2() {
    or_ln340_5669_fu_79104_p2 = (or_ln340_5668_fu_79098_p2.read() | and_ln416_1416_fu_79022_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5670_fu_79288_p2() {
    or_ln340_5670_fu_79288_p2 = (and_ln786_4252_fu_79282_p2.read() | and_ln785_1417_fu_79258_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5671_fu_79294_p2() {
    or_ln340_5671_fu_79294_p2 = (and_ln786_4251_fu_79264_p2.read() | xor_ln779_1417_fu_79232_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5672_fu_79300_p2() {
    or_ln340_5672_fu_79300_p2 = (or_ln340_5671_fu_79294_p2.read() | and_ln416_1417_fu_79218_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5673_fu_79496_p2() {
    or_ln340_5673_fu_79496_p2 = (and_ln786_4254_fu_79490_p2.read() | and_ln785_1418_fu_79466_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5674_fu_79502_p2() {
    or_ln340_5674_fu_79502_p2 = (and_ln786_4253_fu_79472_p2.read() | xor_ln779_1418_fu_79440_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5675_fu_79508_p2() {
    or_ln340_5675_fu_79508_p2 = (or_ln340_5674_fu_79502_p2.read() | and_ln416_1418_fu_79426_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5676_fu_79688_p2() {
    or_ln340_5676_fu_79688_p2 = (and_ln786_4256_fu_79682_p2.read() | and_ln785_1419_fu_79658_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5677_fu_79694_p2() {
    or_ln340_5677_fu_79694_p2 = (and_ln786_4255_fu_79664_p2.read() | xor_ln779_1419_fu_79632_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5678_fu_79700_p2() {
    or_ln340_5678_fu_79700_p2 = (or_ln340_5677_fu_79694_p2.read() | and_ln416_1419_fu_79618_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5679_fu_82894_p2() {
    or_ln340_5679_fu_82894_p2 = (and_ln786_4258_fu_82889_p2.read() | and_ln785_1420_fu_82867_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5680_fu_82900_p2() {
    or_ln340_5680_fu_82900_p2 = (and_ln786_4257_fu_82873_p2.read() | xor_ln779_1420_fu_82847_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5681_fu_82906_p2() {
    or_ln340_5681_fu_82906_p2 = (or_ln340_5680_fu_82900_p2.read() | and_ln416_1420_reg_104709.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5682_fu_82985_p2() {
    or_ln340_5682_fu_82985_p2 = (and_ln786_4260_fu_82980_p2.read() | and_ln785_1421_fu_82958_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5683_fu_82991_p2() {
    or_ln340_5683_fu_82991_p2 = (and_ln786_4259_fu_82964_p2.read() | xor_ln779_1421_fu_82938_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5684_fu_82997_p2() {
    or_ln340_5684_fu_82997_p2 = (or_ln340_5683_fu_82991_p2.read() | and_ln416_1421_reg_104736.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5685_fu_80154_p2() {
    or_ln340_5685_fu_80154_p2 = (and_ln786_4262_fu_80148_p2.read() | and_ln785_1422_fu_80124_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5686_fu_80160_p2() {
    or_ln340_5686_fu_80160_p2 = (and_ln786_4261_fu_80130_p2.read() | xor_ln779_1422_fu_80098_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5687_fu_80166_p2() {
    or_ln340_5687_fu_80166_p2 = (or_ln340_5686_fu_80160_p2.read() | and_ln416_1422_fu_80084_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5688_fu_80350_p2() {
    or_ln340_5688_fu_80350_p2 = (and_ln786_4264_fu_80344_p2.read() | and_ln785_1423_fu_80320_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5689_fu_80356_p2() {
    or_ln340_5689_fu_80356_p2 = (and_ln786_4263_fu_80326_p2.read() | xor_ln779_1423_fu_80294_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5690_fu_80362_p2() {
    or_ln340_5690_fu_80362_p2 = (or_ln340_5689_fu_80356_p2.read() | and_ln416_1423_fu_80280_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5691_fu_80542_p2() {
    or_ln340_5691_fu_80542_p2 = (and_ln786_4266_fu_80536_p2.read() | and_ln785_1424_fu_80512_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5692_fu_80548_p2() {
    or_ln340_5692_fu_80548_p2 = (and_ln786_4265_fu_80518_p2.read() | xor_ln779_1424_fu_80486_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5693_fu_80554_p2() {
    or_ln340_5693_fu_80554_p2 = (or_ln340_5692_fu_80548_p2.read() | and_ln416_1424_fu_80472_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5694_fu_80738_p2() {
    or_ln340_5694_fu_80738_p2 = (and_ln786_4268_fu_80732_p2.read() | and_ln785_1425_fu_80708_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5695_fu_80744_p2() {
    or_ln340_5695_fu_80744_p2 = (and_ln786_4267_fu_80714_p2.read() | xor_ln779_1425_fu_80682_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5696_fu_80750_p2() {
    or_ln340_5696_fu_80750_p2 = (or_ln340_5695_fu_80744_p2.read() | and_ln416_1425_fu_80668_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5697_fu_83200_p2() {
    or_ln340_5697_fu_83200_p2 = (and_ln786_4270_fu_83194_p2.read() | and_ln785_1426_fu_83170_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5698_fu_83206_p2() {
    or_ln340_5698_fu_83206_p2 = (and_ln786_4269_fu_83176_p2.read() | xor_ln779_1426_fu_83144_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5699_fu_83212_p2() {
    or_ln340_5699_fu_83212_p2 = (or_ln340_5698_fu_83206_p2.read() | and_ln416_1426_fu_83130_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5700_fu_83400_p2() {
    or_ln340_5700_fu_83400_p2 = (and_ln786_4272_fu_83394_p2.read() | and_ln785_1427_fu_83370_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5701_fu_83406_p2() {
    or_ln340_5701_fu_83406_p2 = (and_ln786_4271_fu_83376_p2.read() | xor_ln779_1427_fu_83344_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5702_fu_83412_p2() {
    or_ln340_5702_fu_83412_p2 = (or_ln340_5701_fu_83406_p2.read() | and_ln416_1427_fu_83330_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5703_fu_83600_p2() {
    or_ln340_5703_fu_83600_p2 = (and_ln786_4274_fu_83594_p2.read() | and_ln785_1428_fu_83570_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5704_fu_83606_p2() {
    or_ln340_5704_fu_83606_p2 = (and_ln786_4273_fu_83576_p2.read() | xor_ln779_1428_fu_83544_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5705_fu_83612_p2() {
    or_ln340_5705_fu_83612_p2 = (or_ln340_5704_fu_83606_p2.read() | and_ln416_1428_fu_83530_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5706_fu_83792_p2() {
    or_ln340_5706_fu_83792_p2 = (and_ln786_4276_fu_83786_p2.read() | and_ln785_1429_fu_83762_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5707_fu_83798_p2() {
    or_ln340_5707_fu_83798_p2 = (and_ln786_4275_fu_83768_p2.read() | xor_ln779_1429_fu_83736_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5708_fu_83804_p2() {
    or_ln340_5708_fu_83804_p2 = (or_ln340_5707_fu_83798_p2.read() | and_ln416_1429_fu_83722_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5709_fu_84000_p2() {
    or_ln340_5709_fu_84000_p2 = (and_ln786_4278_fu_83994_p2.read() | and_ln785_1430_fu_83970_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5710_fu_84006_p2() {
    or_ln340_5710_fu_84006_p2 = (and_ln786_4277_fu_83976_p2.read() | xor_ln779_1430_fu_83944_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5711_fu_84012_p2() {
    or_ln340_5711_fu_84012_p2 = (or_ln340_5710_fu_84006_p2.read() | and_ln416_1430_fu_83930_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5712_fu_84237_p2() {
    or_ln340_5712_fu_84237_p2 = (and_ln786_4280_fu_84231_p2.read() | and_ln785_1431_fu_84207_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5713_fu_84243_p2() {
    or_ln340_5713_fu_84243_p2 = (and_ln786_4279_fu_84213_p2.read() | xor_ln779_1431_fu_84181_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5714_fu_84249_p2() {
    or_ln340_5714_fu_84249_p2 = (or_ln340_5713_fu_84243_p2.read() | and_ln416_1431_fu_84167_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5715_fu_84429_p2() {
    or_ln340_5715_fu_84429_p2 = (and_ln786_4282_fu_84423_p2.read() | and_ln785_1432_fu_84399_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5716_fu_84435_p2() {
    or_ln340_5716_fu_84435_p2 = (and_ln786_4281_fu_84405_p2.read() | xor_ln779_1432_fu_84373_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5717_fu_84441_p2() {
    or_ln340_5717_fu_84441_p2 = (or_ln340_5716_fu_84435_p2.read() | and_ln416_1432_fu_84359_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5718_fu_84625_p2() {
    or_ln340_5718_fu_84625_p2 = (and_ln786_4284_fu_84619_p2.read() | and_ln785_1433_fu_84595_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5719_fu_84631_p2() {
    or_ln340_5719_fu_84631_p2 = (and_ln786_4283_fu_84601_p2.read() | xor_ln779_1433_fu_84569_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5720_fu_84637_p2() {
    or_ln340_5720_fu_84637_p2 = (or_ln340_5719_fu_84631_p2.read() | and_ln416_1433_fu_84555_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5721_fu_84827_p2() {
    or_ln340_5721_fu_84827_p2 = (and_ln786_4286_fu_84821_p2.read() | and_ln785_1434_fu_84797_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5722_fu_84833_p2() {
    or_ln340_5722_fu_84833_p2 = (and_ln786_4285_fu_84803_p2.read() | xor_ln779_1434_fu_84771_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5723_fu_84839_p2() {
    or_ln340_5723_fu_84839_p2 = (or_ln340_5722_fu_84833_p2.read() | and_ln416_1434_fu_84757_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5724_fu_85044_p2() {
    or_ln340_5724_fu_85044_p2 = (and_ln786_4288_fu_85038_p2.read() | and_ln785_1435_fu_85014_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5725_fu_85050_p2() {
    or_ln340_5725_fu_85050_p2 = (and_ln786_4287_fu_85020_p2.read() | xor_ln779_1435_fu_84988_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5726_fu_85056_p2() {
    or_ln340_5726_fu_85056_p2 = (or_ln340_5725_fu_85050_p2.read() | and_ln416_1435_fu_84974_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5727_fu_85240_p2() {
    or_ln340_5727_fu_85240_p2 = (and_ln786_4290_fu_85234_p2.read() | and_ln785_1436_fu_85210_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5728_fu_85246_p2() {
    or_ln340_5728_fu_85246_p2 = (and_ln786_4289_fu_85216_p2.read() | xor_ln779_1436_fu_85184_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5729_fu_85252_p2() {
    or_ln340_5729_fu_85252_p2 = (or_ln340_5728_fu_85246_p2.read() | and_ln416_1436_fu_85170_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5730_fu_85436_p2() {
    or_ln340_5730_fu_85436_p2 = (and_ln786_4292_fu_85430_p2.read() | and_ln785_1437_fu_85406_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5731_fu_85442_p2() {
    or_ln340_5731_fu_85442_p2 = (and_ln786_4291_fu_85412_p2.read() | xor_ln779_1437_fu_85380_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5732_fu_85448_p2() {
    or_ln340_5732_fu_85448_p2 = (or_ln340_5731_fu_85442_p2.read() | and_ln416_1437_fu_85366_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5733_fu_85649_p2() {
    or_ln340_5733_fu_85649_p2 = (and_ln786_4294_fu_85643_p2.read() | and_ln785_1438_fu_85619_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5734_fu_85655_p2() {
    or_ln340_5734_fu_85655_p2 = (and_ln786_4293_fu_85625_p2.read() | xor_ln779_1438_fu_85593_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5735_fu_85661_p2() {
    or_ln340_5735_fu_85661_p2 = (or_ln340_5734_fu_85655_p2.read() | and_ln416_1438_fu_85579_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5736_fu_85849_p2() {
    or_ln340_5736_fu_85849_p2 = (and_ln786_4296_fu_85843_p2.read() | and_ln785_1439_fu_85819_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5737_fu_85855_p2() {
    or_ln340_5737_fu_85855_p2 = (and_ln786_4295_fu_85825_p2.read() | xor_ln779_1439_fu_85793_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5738_fu_85861_p2() {
    or_ln340_5738_fu_85861_p2 = (or_ln340_5737_fu_85855_p2.read() | and_ln416_1439_fu_85779_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5739_fu_86045_p2() {
    or_ln340_5739_fu_86045_p2 = (and_ln786_4298_fu_86039_p2.read() | and_ln785_1440_fu_86015_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5740_fu_86051_p2() {
    or_ln340_5740_fu_86051_p2 = (and_ln786_4297_fu_86021_p2.read() | xor_ln779_1440_fu_85989_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5741_fu_86057_p2() {
    or_ln340_5741_fu_86057_p2 = (or_ln340_5740_fu_86051_p2.read() | and_ln416_1440_fu_85975_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5742_fu_86245_p2() {
    or_ln340_5742_fu_86245_p2 = (and_ln786_4300_fu_86239_p2.read() | and_ln785_1441_fu_86215_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5743_fu_86251_p2() {
    or_ln340_5743_fu_86251_p2 = (and_ln786_4299_fu_86221_p2.read() | xor_ln779_1441_fu_86189_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5744_fu_86257_p2() {
    or_ln340_5744_fu_86257_p2 = (or_ln340_5743_fu_86251_p2.read() | and_ln416_1441_fu_86175_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5745_fu_86450_p2() {
    or_ln340_5745_fu_86450_p2 = (and_ln786_4302_fu_86444_p2.read() | and_ln785_1442_fu_86420_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5746_fu_86456_p2() {
    or_ln340_5746_fu_86456_p2 = (and_ln786_4301_fu_86426_p2.read() | xor_ln779_1442_fu_86394_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5747_fu_86462_p2() {
    or_ln340_5747_fu_86462_p2 = (or_ln340_5746_fu_86456_p2.read() | and_ln416_1442_fu_86380_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5748_fu_88996_p2() {
    or_ln340_5748_fu_88996_p2 = (and_ln786_4304_fu_88990_p2.read() | and_ln785_1443_fu_88966_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5749_fu_89002_p2() {
    or_ln340_5749_fu_89002_p2 = (and_ln786_4303_fu_88972_p2.read() | xor_ln779_1443_fu_88940_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5750_fu_89008_p2() {
    or_ln340_5750_fu_89008_p2 = (or_ln340_5749_fu_89002_p2.read() | and_ln416_1443_fu_88926_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5751_fu_86642_p2() {
    or_ln340_5751_fu_86642_p2 = (and_ln786_4306_fu_86636_p2.read() | and_ln785_1444_fu_86612_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5752_fu_86648_p2() {
    or_ln340_5752_fu_86648_p2 = (and_ln786_4305_fu_86618_p2.read() | xor_ln779_1444_fu_86586_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5753_fu_86654_p2() {
    or_ln340_5753_fu_86654_p2 = (or_ln340_5752_fu_86648_p2.read() | and_ln416_1444_fu_86572_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5754_fu_86834_p2() {
    or_ln340_5754_fu_86834_p2 = (and_ln786_4308_fu_86828_p2.read() | and_ln785_1445_fu_86804_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5755_fu_86840_p2() {
    or_ln340_5755_fu_86840_p2 = (and_ln786_4307_fu_86810_p2.read() | xor_ln779_1445_fu_86778_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5756_fu_86846_p2() {
    or_ln340_5756_fu_86846_p2 = (or_ln340_5755_fu_86840_p2.read() | and_ln416_1445_fu_86764_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5757_fu_89246_p2() {
    or_ln340_5757_fu_89246_p2 = (and_ln786_4310_fu_89240_p2.read() | and_ln785_1446_fu_89216_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5758_fu_89252_p2() {
    or_ln340_5758_fu_89252_p2 = (and_ln786_4309_fu_89222_p2.read() | xor_ln779_1446_fu_89190_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5759_fu_89258_p2() {
    or_ln340_5759_fu_89258_p2 = (or_ln340_5758_fu_89252_p2.read() | and_ln416_1446_fu_89176_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5760_fu_89446_p2() {
    or_ln340_5760_fu_89446_p2 = (and_ln786_4312_fu_89440_p2.read() | and_ln785_1447_fu_89416_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5761_fu_89452_p2() {
    or_ln340_5761_fu_89452_p2 = (and_ln786_4311_fu_89422_p2.read() | xor_ln779_1447_fu_89390_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5762_fu_89458_p2() {
    or_ln340_5762_fu_89458_p2 = (or_ln340_5761_fu_89452_p2.read() | and_ln416_1447_fu_89376_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5763_fu_89646_p2() {
    or_ln340_5763_fu_89646_p2 = (and_ln786_4314_fu_89640_p2.read() | and_ln785_1448_fu_89616_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5764_fu_89652_p2() {
    or_ln340_5764_fu_89652_p2 = (and_ln786_4313_fu_89622_p2.read() | xor_ln779_1448_fu_89590_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5765_fu_89658_p2() {
    or_ln340_5765_fu_89658_p2 = (or_ln340_5764_fu_89652_p2.read() | and_ln416_1448_fu_89576_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5766_fu_89842_p2() {
    or_ln340_5766_fu_89842_p2 = (and_ln786_4316_fu_89836_p2.read() | and_ln785_1449_fu_89812_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5767_fu_89848_p2() {
    or_ln340_5767_fu_89848_p2 = (and_ln786_4315_fu_89818_p2.read() | xor_ln779_1449_fu_89786_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5768_fu_89854_p2() {
    or_ln340_5768_fu_89854_p2 = (or_ln340_5767_fu_89848_p2.read() | and_ln416_1449_fu_89772_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5769_fu_90048_p2() {
    or_ln340_5769_fu_90048_p2 = (and_ln786_4318_fu_90042_p2.read() | and_ln785_1450_fu_90018_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5770_fu_90054_p2() {
    or_ln340_5770_fu_90054_p2 = (and_ln786_4317_fu_90024_p2.read() | xor_ln779_1450_fu_89992_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5771_fu_90060_p2() {
    or_ln340_5771_fu_90060_p2 = (or_ln340_5770_fu_90054_p2.read() | and_ln416_1450_fu_89978_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5772_fu_90240_p2() {
    or_ln340_5772_fu_90240_p2 = (and_ln786_4320_fu_90234_p2.read() | and_ln785_1451_fu_90210_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5773_fu_90246_p2() {
    or_ln340_5773_fu_90246_p2 = (and_ln786_4319_fu_90216_p2.read() | xor_ln779_1451_fu_90184_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5774_fu_90252_p2() {
    or_ln340_5774_fu_90252_p2 = (or_ln340_5773_fu_90246_p2.read() | and_ln416_1451_fu_90170_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5775_fu_90436_p2() {
    or_ln340_5775_fu_90436_p2 = (and_ln786_4322_fu_90430_p2.read() | and_ln785_1452_fu_90406_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5776_fu_90442_p2() {
    or_ln340_5776_fu_90442_p2 = (and_ln786_4321_fu_90412_p2.read() | xor_ln779_1452_fu_90380_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5777_fu_90448_p2() {
    or_ln340_5777_fu_90448_p2 = (or_ln340_5776_fu_90442_p2.read() | and_ln416_1452_fu_90366_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5778_fu_90628_p2() {
    or_ln340_5778_fu_90628_p2 = (and_ln786_4324_fu_90622_p2.read() | and_ln785_1453_fu_90598_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5779_fu_90634_p2() {
    or_ln340_5779_fu_90634_p2 = (and_ln786_4323_fu_90604_p2.read() | xor_ln779_1453_fu_90572_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5780_fu_90640_p2() {
    or_ln340_5780_fu_90640_p2 = (or_ln340_5779_fu_90634_p2.read() | and_ln416_1453_fu_90558_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5781_fu_90838_p2() {
    or_ln340_5781_fu_90838_p2 = (and_ln786_4326_fu_90832_p2.read() | and_ln785_1454_fu_90808_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5782_fu_90844_p2() {
    or_ln340_5782_fu_90844_p2 = (and_ln786_4325_fu_90814_p2.read() | xor_ln779_1454_fu_90782_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5783_fu_90850_p2() {
    or_ln340_5783_fu_90850_p2 = (or_ln340_5782_fu_90844_p2.read() | and_ln416_1454_fu_90768_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5784_fu_91034_p2() {
    or_ln340_5784_fu_91034_p2 = (and_ln786_4328_fu_91028_p2.read() | and_ln785_1455_fu_91004_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5785_fu_91040_p2() {
    or_ln340_5785_fu_91040_p2 = (and_ln786_4327_fu_91010_p2.read() | xor_ln779_1455_fu_90978_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5786_fu_91046_p2() {
    or_ln340_5786_fu_91046_p2 = (or_ln340_5785_fu_91040_p2.read() | and_ln416_1455_fu_90964_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5787_fu_91230_p2() {
    or_ln340_5787_fu_91230_p2 = (and_ln786_4330_fu_91224_p2.read() | and_ln785_1456_fu_91200_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5788_fu_91236_p2() {
    or_ln340_5788_fu_91236_p2 = (and_ln786_4329_fu_91206_p2.read() | xor_ln779_1456_fu_91174_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5789_fu_91242_p2() {
    or_ln340_5789_fu_91242_p2 = (or_ln340_5788_fu_91236_p2.read() | and_ln416_1456_fu_91160_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5790_fu_91426_p2() {
    or_ln340_5790_fu_91426_p2 = (and_ln786_4332_fu_91420_p2.read() | and_ln785_1457_fu_91396_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5791_fu_91432_p2() {
    or_ln340_5791_fu_91432_p2 = (and_ln786_4331_fu_91402_p2.read() | xor_ln779_1457_fu_91370_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5792_fu_91438_p2() {
    or_ln340_5792_fu_91438_p2 = (or_ln340_5791_fu_91432_p2.read() | and_ln416_1457_fu_91356_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5793_fu_91635_p2() {
    or_ln340_5793_fu_91635_p2 = (and_ln786_4334_fu_91629_p2.read() | and_ln785_1458_fu_91605_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5794_fu_91641_p2() {
    or_ln340_5794_fu_91641_p2 = (and_ln786_4333_fu_91611_p2.read() | xor_ln779_1458_fu_91579_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5795_fu_91647_p2() {
    or_ln340_5795_fu_91647_p2 = (or_ln340_5794_fu_91641_p2.read() | and_ln416_1458_fu_91565_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5796_fu_91827_p2() {
    or_ln340_5796_fu_91827_p2 = (and_ln786_4336_fu_91821_p2.read() | and_ln785_1459_fu_91797_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5797_fu_91833_p2() {
    or_ln340_5797_fu_91833_p2 = (and_ln786_4335_fu_91803_p2.read() | xor_ln779_1459_fu_91771_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5798_fu_91839_p2() {
    or_ln340_5798_fu_91839_p2 = (or_ln340_5797_fu_91833_p2.read() | and_ln416_1459_fu_91757_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5799_fu_92023_p2() {
    or_ln340_5799_fu_92023_p2 = (and_ln786_4338_fu_92017_p2.read() | and_ln785_1460_fu_91993_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5800_fu_92029_p2() {
    or_ln340_5800_fu_92029_p2 = (and_ln786_4337_fu_91999_p2.read() | xor_ln779_1460_fu_91967_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5801_fu_92035_p2() {
    or_ln340_5801_fu_92035_p2 = (or_ln340_5800_fu_92029_p2.read() | and_ln416_1460_fu_91953_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5802_fu_92223_p2() {
    or_ln340_5802_fu_92223_p2 = (and_ln786_4340_fu_92217_p2.read() | and_ln785_1461_fu_92193_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5803_fu_92229_p2() {
    or_ln340_5803_fu_92229_p2 = (and_ln786_4339_fu_92199_p2.read() | xor_ln779_1461_fu_92167_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5804_fu_92235_p2() {
    or_ln340_5804_fu_92235_p2 = (or_ln340_5803_fu_92229_p2.read() | and_ln416_1461_fu_92153_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5805_fu_92432_p2() {
    or_ln340_5805_fu_92432_p2 = (and_ln786_4342_fu_92426_p2.read() | and_ln785_1462_fu_92402_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5806_fu_92438_p2() {
    or_ln340_5806_fu_92438_p2 = (and_ln786_4341_fu_92408_p2.read() | xor_ln779_1462_fu_92376_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5807_fu_92444_p2() {
    or_ln340_5807_fu_92444_p2 = (or_ln340_5806_fu_92438_p2.read() | and_ln416_1462_fu_92362_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5808_fu_92632_p2() {
    or_ln340_5808_fu_92632_p2 = (and_ln786_4344_fu_92626_p2.read() | and_ln785_1463_fu_92602_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5809_fu_92638_p2() {
    or_ln340_5809_fu_92638_p2 = (and_ln786_4343_fu_92608_p2.read() | xor_ln779_1463_fu_92576_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5810_fu_92644_p2() {
    or_ln340_5810_fu_92644_p2 = (or_ln340_5809_fu_92638_p2.read() | and_ln416_1463_fu_92562_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5811_fu_92824_p2() {
    or_ln340_5811_fu_92824_p2 = (and_ln786_4346_fu_92818_p2.read() | and_ln785_1464_fu_92794_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5812_fu_92830_p2() {
    or_ln340_5812_fu_92830_p2 = (and_ln786_4345_fu_92800_p2.read() | xor_ln779_1464_fu_92768_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5813_fu_92836_p2() {
    or_ln340_5813_fu_92836_p2 = (or_ln340_5812_fu_92830_p2.read() | and_ln416_1464_fu_92754_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5814_fu_93020_p2() {
    or_ln340_5814_fu_93020_p2 = (and_ln786_4348_fu_93014_p2.read() | and_ln785_1465_fu_92990_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5815_fu_93026_p2() {
    or_ln340_5815_fu_93026_p2 = (and_ln786_4347_fu_92996_p2.read() | xor_ln779_1465_fu_92964_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5816_fu_93032_p2() {
    or_ln340_5816_fu_93032_p2 = (or_ln340_5815_fu_93026_p2.read() | and_ln416_1465_fu_92950_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5817_fu_93232_p2() {
    or_ln340_5817_fu_93232_p2 = (and_ln786_4350_fu_93226_p2.read() | and_ln785_1466_fu_93202_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5818_fu_93238_p2() {
    or_ln340_5818_fu_93238_p2 = (and_ln786_4349_fu_93208_p2.read() | xor_ln779_1466_fu_93176_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5819_fu_93244_p2() {
    or_ln340_5819_fu_93244_p2 = (or_ln340_5818_fu_93238_p2.read() | and_ln416_1466_fu_93162_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5820_fu_95818_p2() {
    or_ln340_5820_fu_95818_p2 = (and_ln786_4352_fu_95813_p2.read() | and_ln785_1467_fu_95791_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5821_fu_95824_p2() {
    or_ln340_5821_fu_95824_p2 = (and_ln786_4351_fu_95797_p2.read() | xor_ln779_1467_fu_95771_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5822_fu_95830_p2() {
    or_ln340_5822_fu_95830_p2 = (or_ln340_5821_fu_95824_p2.read() | and_ln416_1467_reg_105101.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5823_fu_93550_p2() {
    or_ln340_5823_fu_93550_p2 = (and_ln786_4354_fu_93544_p2.read() | and_ln785_1468_fu_93520_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5824_fu_93556_p2() {
    or_ln340_5824_fu_93556_p2 = (and_ln786_4353_fu_93526_p2.read() | xor_ln779_1468_fu_93494_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5825_fu_93562_p2() {
    or_ln340_5825_fu_93562_p2 = (or_ln340_5824_fu_93556_p2.read() | and_ln416_1468_fu_93480_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5826_fu_93746_p2() {
    or_ln340_5826_fu_93746_p2 = (and_ln786_4356_fu_93740_p2.read() | and_ln785_1469_fu_93716_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5827_fu_93752_p2() {
    or_ln340_5827_fu_93752_p2 = (and_ln786_4355_fu_93722_p2.read() | xor_ln779_1469_fu_93690_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5828_fu_93758_p2() {
    or_ln340_5828_fu_93758_p2 = (or_ln340_5827_fu_93752_p2.read() | and_ln416_1469_fu_93676_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5829_fu_96026_p2() {
    or_ln340_5829_fu_96026_p2 = (and_ln786_4358_fu_96020_p2.read() | and_ln785_1470_fu_95996_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5830_fu_96032_p2() {
    or_ln340_5830_fu_96032_p2 = (and_ln786_4357_fu_96002_p2.read() | xor_ln779_1470_fu_95970_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5831_fu_96038_p2() {
    or_ln340_5831_fu_96038_p2 = (or_ln340_5830_fu_96032_p2.read() | and_ln416_1470_fu_95956_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5832_fu_96222_p2() {
    or_ln340_5832_fu_96222_p2 = (and_ln786_4360_fu_96216_p2.read() | and_ln785_1471_fu_96192_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5833_fu_96228_p2() {
    or_ln340_5833_fu_96228_p2 = (and_ln786_4359_fu_96198_p2.read() | xor_ln779_1471_fu_96166_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5834_fu_96234_p2() {
    or_ln340_5834_fu_96234_p2 = (or_ln340_5833_fu_96228_p2.read() | and_ln416_1471_fu_96152_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5835_fu_96445_p2() {
    or_ln340_5835_fu_96445_p2 = (and_ln786_4362_fu_96439_p2.read() | and_ln785_1472_fu_96415_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5836_fu_96451_p2() {
    or_ln340_5836_fu_96451_p2 = (and_ln786_4361_fu_96421_p2.read() | xor_ln779_1472_fu_96389_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5837_fu_96457_p2() {
    or_ln340_5837_fu_96457_p2 = (or_ln340_5836_fu_96451_p2.read() | and_ln416_1472_fu_96375_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5838_fu_96641_p2() {
    or_ln340_5838_fu_96641_p2 = (and_ln786_4364_fu_96635_p2.read() | and_ln785_1473_fu_96611_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5839_fu_96647_p2() {
    or_ln340_5839_fu_96647_p2 = (and_ln786_4363_fu_96617_p2.read() | xor_ln779_1473_fu_96585_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5840_fu_96653_p2() {
    or_ln340_5840_fu_96653_p2 = (or_ln340_5839_fu_96647_p2.read() | and_ln416_1473_fu_96571_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5841_fu_96854_p2() {
    or_ln340_5841_fu_96854_p2 = (and_ln786_4366_fu_96848_p2.read() | and_ln785_1474_fu_96824_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5842_fu_96860_p2() {
    or_ln340_5842_fu_96860_p2 = (and_ln786_4365_fu_96830_p2.read() | xor_ln779_1474_fu_96798_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5843_fu_96866_p2() {
    or_ln340_5843_fu_96866_p2 = (or_ln340_5842_fu_96860_p2.read() | and_ln416_1474_fu_96784_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5844_fu_97050_p2() {
    or_ln340_5844_fu_97050_p2 = (and_ln786_4368_fu_97044_p2.read() | and_ln785_1475_fu_97020_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5845_fu_97056_p2() {
    or_ln340_5845_fu_97056_p2 = (and_ln786_4367_fu_97026_p2.read() | xor_ln779_1475_fu_96994_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5846_fu_97062_p2() {
    or_ln340_5846_fu_97062_p2 = (or_ln340_5845_fu_97056_p2.read() | and_ln416_1475_fu_96980_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5847_fu_97242_p2() {
    or_ln340_5847_fu_97242_p2 = (and_ln786_4370_fu_97236_p2.read() | and_ln785_1476_fu_97212_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5848_fu_97248_p2() {
    or_ln340_5848_fu_97248_p2 = (and_ln786_4369_fu_97218_p2.read() | xor_ln779_1476_fu_97186_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5849_fu_97254_p2() {
    or_ln340_5849_fu_97254_p2 = (or_ln340_5848_fu_97248_p2.read() | and_ln416_1476_fu_97172_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5850_fu_97438_p2() {
    or_ln340_5850_fu_97438_p2 = (and_ln786_4372_fu_97432_p2.read() | and_ln785_1477_fu_97408_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5851_fu_97444_p2() {
    or_ln340_5851_fu_97444_p2 = (and_ln786_4371_fu_97414_p2.read() | xor_ln779_1477_fu_97382_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5852_fu_97450_p2() {
    or_ln340_5852_fu_97450_p2 = (or_ln340_5851_fu_97444_p2.read() | and_ln416_1477_fu_97368_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5853_fu_101393_p2() {
    or_ln340_5853_fu_101393_p2 = (and_ln786_4374_fu_101388_p2.read() | and_ln785_1478_fu_101366_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5854_fu_101399_p2() {
    or_ln340_5854_fu_101399_p2 = (and_ln786_4373_fu_101372_p2.read() | xor_ln779_1478_fu_101346_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5855_fu_101405_p2() {
    or_ln340_5855_fu_101405_p2 = (or_ln340_5854_fu_101399_p2.read() | and_ln416_1478_reg_105178.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5856_fu_101484_p2() {
    or_ln340_5856_fu_101484_p2 = (and_ln786_4376_fu_101479_p2.read() | and_ln785_1479_fu_101457_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5857_fu_101490_p2() {
    or_ln340_5857_fu_101490_p2 = (and_ln786_4375_fu_101463_p2.read() | xor_ln779_1479_fu_101437_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5858_fu_101496_p2() {
    or_ln340_5858_fu_101496_p2 = (or_ln340_5857_fu_101490_p2.read() | and_ln416_1479_reg_105205.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5859_fu_101575_p2() {
    or_ln340_5859_fu_101575_p2 = (and_ln786_4378_fu_101570_p2.read() | and_ln785_1480_fu_101548_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5860_fu_101581_p2() {
    or_ln340_5860_fu_101581_p2 = (and_ln786_4377_fu_101554_p2.read() | xor_ln779_1480_fu_101528_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5861_fu_101587_p2() {
    or_ln340_5861_fu_101587_p2 = (or_ln340_5860_fu_101581_p2.read() | and_ln416_1480_reg_105232.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5862_fu_97986_p2() {
    or_ln340_5862_fu_97986_p2 = (and_ln786_4380_fu_97980_p2.read() | and_ln785_1481_fu_97956_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5863_fu_97992_p2() {
    or_ln340_5863_fu_97992_p2 = (and_ln786_4379_fu_97962_p2.read() | xor_ln779_1481_fu_97930_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5864_fu_97998_p2() {
    or_ln340_5864_fu_97998_p2 = (or_ln340_5863_fu_97992_p2.read() | and_ln416_1481_fu_97916_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5865_fu_98187_p2() {
    or_ln340_5865_fu_98187_p2 = (and_ln786_4382_fu_98181_p2.read() | and_ln785_1482_fu_98157_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5866_fu_98193_p2() {
    or_ln340_5866_fu_98193_p2 = (and_ln786_4381_fu_98163_p2.read() | xor_ln779_1482_fu_98131_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5867_fu_98199_p2() {
    or_ln340_5867_fu_98199_p2 = (or_ln340_5866_fu_98193_p2.read() | and_ln416_1482_fu_98117_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5868_fu_98383_p2() {
    or_ln340_5868_fu_98383_p2 = (and_ln786_4384_fu_98377_p2.read() | and_ln785_1483_fu_98353_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5869_fu_98389_p2() {
    or_ln340_5869_fu_98389_p2 = (and_ln786_4383_fu_98359_p2.read() | xor_ln779_1483_fu_98327_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5870_fu_98395_p2() {
    or_ln340_5870_fu_98395_p2 = (or_ln340_5869_fu_98389_p2.read() | and_ln416_1483_fu_98313_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5871_fu_98575_p2() {
    or_ln340_5871_fu_98575_p2 = (and_ln786_4386_fu_98569_p2.read() | and_ln785_1484_fu_98545_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5872_fu_98581_p2() {
    or_ln340_5872_fu_98581_p2 = (and_ln786_4385_fu_98551_p2.read() | xor_ln779_1484_fu_98519_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5873_fu_98587_p2() {
    or_ln340_5873_fu_98587_p2 = (or_ln340_5872_fu_98581_p2.read() | and_ln416_1484_fu_98505_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5874_fu_98785_p2() {
    or_ln340_5874_fu_98785_p2 = (and_ln786_4388_fu_98779_p2.read() | and_ln785_1485_fu_98755_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5875_fu_98791_p2() {
    or_ln340_5875_fu_98791_p2 = (and_ln786_4387_fu_98761_p2.read() | xor_ln779_1485_fu_98729_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5876_fu_98797_p2() {
    or_ln340_5876_fu_98797_p2 = (or_ln340_5875_fu_98791_p2.read() | and_ln416_1485_fu_98715_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5877_fu_98985_p2() {
    or_ln340_5877_fu_98985_p2 = (and_ln786_4390_fu_98979_p2.read() | and_ln785_1486_fu_98955_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5878_fu_98991_p2() {
    or_ln340_5878_fu_98991_p2 = (and_ln786_4389_fu_98961_p2.read() | xor_ln779_1486_fu_98929_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5879_fu_98997_p2() {
    or_ln340_5879_fu_98997_p2 = (or_ln340_5878_fu_98991_p2.read() | and_ln416_1486_fu_98915_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5880_fu_99185_p2() {
    or_ln340_5880_fu_99185_p2 = (and_ln786_4392_fu_99179_p2.read() | and_ln785_1487_fu_99155_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5881_fu_99191_p2() {
    or_ln340_5881_fu_99191_p2 = (and_ln786_4391_fu_99161_p2.read() | xor_ln779_1487_fu_99129_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5882_fu_99197_p2() {
    or_ln340_5882_fu_99197_p2 = (or_ln340_5881_fu_99191_p2.read() | and_ln416_1487_fu_99115_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5883_fu_99381_p2() {
    or_ln340_5883_fu_99381_p2 = (and_ln786_4394_fu_99375_p2.read() | and_ln785_1488_fu_99351_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5884_fu_99387_p2() {
    or_ln340_5884_fu_99387_p2 = (and_ln786_4393_fu_99357_p2.read() | xor_ln779_1488_fu_99325_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5885_fu_99393_p2() {
    or_ln340_5885_fu_99393_p2 = (or_ln340_5884_fu_99387_p2.read() | and_ln416_1488_fu_99311_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5886_fu_101780_p2() {
    or_ln340_5886_fu_101780_p2 = (and_ln786_4396_fu_101774_p2.read() | and_ln785_1489_fu_101750_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5887_fu_101786_p2() {
    or_ln340_5887_fu_101786_p2 = (and_ln786_4395_fu_101756_p2.read() | xor_ln779_1489_fu_101724_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5888_fu_101792_p2() {
    or_ln340_5888_fu_101792_p2 = (or_ln340_5887_fu_101786_p2.read() | and_ln416_1489_fu_101710_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5889_fu_101976_p2() {
    or_ln340_5889_fu_101976_p2 = (and_ln786_4398_fu_101970_p2.read() | and_ln785_1490_fu_101946_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5890_fu_101982_p2() {
    or_ln340_5890_fu_101982_p2 = (and_ln786_4397_fu_101952_p2.read() | xor_ln779_1490_fu_101920_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5891_fu_101988_p2() {
    or_ln340_5891_fu_101988_p2 = (or_ln340_5890_fu_101982_p2.read() | and_ln416_1490_fu_101906_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5892_fu_102172_p2() {
    or_ln340_5892_fu_102172_p2 = (and_ln786_4400_fu_102166_p2.read() | and_ln785_1491_fu_102142_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5893_fu_102178_p2() {
    or_ln340_5893_fu_102178_p2 = (and_ln786_4399_fu_102148_p2.read() | xor_ln779_1491_fu_102116_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5894_fu_102184_p2() {
    or_ln340_5894_fu_102184_p2 = (or_ln340_5893_fu_102178_p2.read() | and_ln416_1491_fu_102102_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5895_fu_102364_p2() {
    or_ln340_5895_fu_102364_p2 = (and_ln786_4402_fu_102358_p2.read() | and_ln785_1492_fu_102334_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5896_fu_102370_p2() {
    or_ln340_5896_fu_102370_p2 = (and_ln786_4401_fu_102340_p2.read() | xor_ln779_1492_fu_102308_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5897_fu_102376_p2() {
    or_ln340_5897_fu_102376_p2 = (or_ln340_5896_fu_102370_p2.read() | and_ln416_1492_fu_102294_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5898_fu_61967_p2() {
    or_ln340_5898_fu_61967_p2 = (tmp_10336_fu_61935_p3.read() | xor_ln340_fu_61961_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5899_fu_62053_p2() {
    or_ln340_5899_fu_62053_p2 = (tmp_10338_fu_62021_p3.read() | xor_ln340_1390_fu_62047_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5900_fu_62139_p2() {
    or_ln340_5900_fu_62139_p2 = (tmp_10340_fu_62107_p3.read() | xor_ln340_1391_fu_62133_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5901_fu_62225_p2() {
    or_ln340_5901_fu_62225_p2 = (tmp_10342_fu_62193_p3.read() | xor_ln340_1392_fu_62219_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5902_fu_62315_p2() {
    or_ln340_5902_fu_62315_p2 = (tmp_10344_fu_62283_p3.read() | xor_ln340_1393_fu_62309_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5903_fu_62405_p2() {
    or_ln340_5903_fu_62405_p2 = (tmp_10346_fu_62373_p3.read() | xor_ln340_1394_fu_62399_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5904_fu_62495_p2() {
    or_ln340_5904_fu_62495_p2 = (tmp_10348_fu_62463_p3.read() | xor_ln340_1395_fu_62489_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5905_fu_62585_p2() {
    or_ln340_5905_fu_62585_p2 = (tmp_10350_fu_62553_p3.read() | xor_ln340_1396_fu_62579_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5906_fu_67494_p2() {
    or_ln340_5906_fu_67494_p2 = (tmp_10352_fu_67462_p3.read() | xor_ln340_1397_fu_67488_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5907_fu_67580_p2() {
    or_ln340_5907_fu_67580_p2 = (tmp_10354_fu_67548_p3.read() | xor_ln340_1398_fu_67574_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5908_fu_67666_p2() {
    or_ln340_5908_fu_67666_p2 = (tmp_10356_fu_67634_p3.read() | xor_ln340_1399_fu_67660_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5909_fu_67752_p2() {
    or_ln340_5909_fu_67752_p2 = (tmp_10358_fu_67720_p3.read() | xor_ln340_1400_fu_67746_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5910_fu_67840_p2() {
    or_ln340_5910_fu_67840_p2 = (tmp_10360_fu_67808_p3.read() | xor_ln340_1401_fu_67834_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5911_fu_67928_p2() {
    or_ln340_5911_fu_67928_p2 = (tmp_10362_fu_67896_p3.read() | xor_ln340_1402_fu_67922_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5912_fu_68016_p2() {
    or_ln340_5912_fu_68016_p2 = (tmp_10364_fu_67984_p3.read() | xor_ln340_1403_fu_68010_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5913_fu_68104_p2() {
    or_ln340_5913_fu_68104_p2 = (tmp_10366_fu_68072_p3.read() | xor_ln340_1404_fu_68098_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5914_fu_68192_p2() {
    or_ln340_5914_fu_68192_p2 = (tmp_10368_fu_68160_p3.read() | xor_ln340_1405_fu_68186_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5915_fu_68282_p2() {
    or_ln340_5915_fu_68282_p2 = (tmp_10370_fu_68250_p3.read() | xor_ln340_1406_fu_68276_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5916_fu_68370_p2() {
    or_ln340_5916_fu_68370_p2 = (tmp_10372_fu_68338_p3.read() | xor_ln340_1407_fu_68364_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5917_fu_68458_p2() {
    or_ln340_5917_fu_68458_p2 = (tmp_10374_fu_68426_p3.read() | xor_ln340_1408_fu_68452_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5918_fu_68546_p2() {
    or_ln340_5918_fu_68546_p2 = (tmp_10376_fu_68514_p3.read() | xor_ln340_1409_fu_68540_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5919_fu_68636_p2() {
    or_ln340_5919_fu_68636_p2 = (tmp_10378_fu_68604_p3.read() | xor_ln340_1410_fu_68630_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5920_fu_68724_p2() {
    or_ln340_5920_fu_68724_p2 = (tmp_10380_fu_68692_p3.read() | xor_ln340_1411_fu_68718_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5921_fu_68812_p2() {
    or_ln340_5921_fu_68812_p2 = (tmp_10382_fu_68780_p3.read() | xor_ln340_1412_fu_68806_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5922_fu_68902_p2() {
    or_ln340_5922_fu_68902_p2 = (tmp_10384_fu_68870_p3.read() | xor_ln340_1413_fu_68896_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5923_fu_68992_p2() {
    or_ln340_5923_fu_68992_p2 = (tmp_10386_fu_68960_p3.read() | xor_ln340_1414_fu_68986_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5924_fu_69082_p2() {
    or_ln340_5924_fu_69082_p2 = (tmp_10388_fu_69050_p3.read() | xor_ln340_1415_fu_69076_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5925_fu_69172_p2() {
    or_ln340_5925_fu_69172_p2 = (tmp_10390_fu_69140_p3.read() | xor_ln340_1416_fu_69166_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5926_fu_73723_p2() {
    or_ln340_5926_fu_73723_p2 = (tmp_10392_reg_104270.read() | xor_ln340_1417_fu_73718_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5927_fu_73751_p2() {
    or_ln340_5927_fu_73751_p2 = (tmp_10394_reg_104292.read() | xor_ln340_1418_fu_73746_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5928_fu_73779_p2() {
    or_ln340_5928_fu_73779_p2 = (tmp_10396_reg_104314.read() | xor_ln340_1419_fu_73774_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5929_fu_73807_p2() {
    or_ln340_5929_fu_73807_p2 = (tmp_10398_reg_104336.read() | xor_ln340_1420_fu_73802_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5930_fu_73884_p2() {
    or_ln340_5930_fu_73884_p2 = (tmp_10400_fu_73852_p3.read() | xor_ln340_1421_fu_73878_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5931_fu_73972_p2() {
    or_ln340_5931_fu_73972_p2 = (tmp_10402_fu_73940_p3.read() | xor_ln340_1422_fu_73966_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5932_fu_74060_p2() {
    or_ln340_5932_fu_74060_p2 = (tmp_10404_fu_74028_p3.read() | xor_ln340_1423_fu_74054_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5933_fu_74148_p2() {
    or_ln340_5933_fu_74148_p2 = (tmp_10406_fu_74116_p3.read() | xor_ln340_1424_fu_74142_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5934_fu_74238_p2() {
    or_ln340_5934_fu_74238_p2 = (tmp_10408_fu_74206_p3.read() | xor_ln340_1425_fu_74232_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5935_fu_74326_p2() {
    or_ln340_5935_fu_74326_p2 = (tmp_10410_fu_74294_p3.read() | xor_ln340_1426_fu_74320_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5936_fu_74414_p2() {
    or_ln340_5936_fu_74414_p2 = (tmp_10412_fu_74382_p3.read() | xor_ln340_1427_fu_74408_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5937_fu_74502_p2() {
    or_ln340_5937_fu_74502_p2 = (tmp_10414_fu_74470_p3.read() | xor_ln340_1428_fu_74496_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5938_fu_74590_p2() {
    or_ln340_5938_fu_74590_p2 = (tmp_10416_fu_74558_p3.read() | xor_ln340_1429_fu_74584_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5939_fu_74678_p2() {
    or_ln340_5939_fu_74678_p2 = (tmp_10418_fu_74646_p3.read() | xor_ln340_1430_fu_74672_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5940_fu_74766_p2() {
    or_ln340_5940_fu_74766_p2 = (tmp_10420_fu_74734_p3.read() | xor_ln340_1431_fu_74760_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5941_fu_74854_p2() {
    or_ln340_5941_fu_74854_p2 = (tmp_10422_fu_74822_p3.read() | xor_ln340_1432_fu_74848_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5942_fu_74942_p2() {
    or_ln340_5942_fu_74942_p2 = (tmp_10424_fu_74910_p3.read() | xor_ln340_1433_fu_74936_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5943_fu_75032_p2() {
    or_ln340_5943_fu_75032_p2 = (tmp_10426_fu_75000_p3.read() | xor_ln340_1434_fu_75026_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5944_fu_75122_p2() {
    or_ln340_5944_fu_75122_p2 = (tmp_10428_fu_75090_p3.read() | xor_ln340_1435_fu_75116_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5945_fu_75212_p2() {
    or_ln340_5945_fu_75212_p2 = (tmp_10430_fu_75180_p3.read() | xor_ln340_1436_fu_75206_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5946_fu_75302_p2() {
    or_ln340_5946_fu_75302_p2 = (tmp_10432_fu_75270_p3.read() | xor_ln340_1437_fu_75296_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5947_fu_75392_p2() {
    or_ln340_5947_fu_75392_p2 = (tmp_10434_fu_75360_p3.read() | xor_ln340_1438_fu_75386_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5948_fu_75482_p2() {
    or_ln340_5948_fu_75482_p2 = (tmp_10436_fu_75450_p3.read() | xor_ln340_1439_fu_75476_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5949_fu_75572_p2() {
    or_ln340_5949_fu_75572_p2 = (tmp_10438_fu_75540_p3.read() | xor_ln340_1440_fu_75566_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5950_fu_80799_p2() {
    or_ln340_5950_fu_80799_p2 = (tmp_10440_reg_104515.read() | xor_ln340_1441_fu_80794_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5951_fu_80845_p2() {
    or_ln340_5951_fu_80845_p2 = (tmp_10442_reg_104535.read() | xor_ln340_1442_fu_80840_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5952_fu_80891_p2() {
    or_ln340_5952_fu_80891_p2 = (tmp_10444_reg_104555.read() | xor_ln340_1443_fu_80886_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5953_fu_80937_p2() {
    or_ln340_5953_fu_80937_p2 = (tmp_10446_reg_104575.read() | xor_ln340_1444_fu_80932_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5954_fu_81022_p2() {
    or_ln340_5954_fu_81022_p2 = (tmp_10448_fu_80990_p3.read() | xor_ln340_1445_fu_81016_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5955_fu_81110_p2() {
    or_ln340_5955_fu_81110_p2 = (tmp_10450_fu_81078_p3.read() | xor_ln340_1446_fu_81104_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5956_fu_81198_p2() {
    or_ln340_5956_fu_81198_p2 = (tmp_10452_fu_81166_p3.read() | xor_ln340_1447_fu_81192_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5957_fu_81286_p2() {
    or_ln340_5957_fu_81286_p2 = (tmp_10454_fu_81254_p3.read() | xor_ln340_1448_fu_81280_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5958_fu_81374_p2() {
    or_ln340_5958_fu_81374_p2 = (tmp_10456_fu_81342_p3.read() | xor_ln340_1449_fu_81368_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5959_fu_81462_p2() {
    or_ln340_5959_fu_81462_p2 = (tmp_10458_fu_81430_p3.read() | xor_ln340_1450_fu_81456_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5960_fu_81550_p2() {
    or_ln340_5960_fu_81550_p2 = (tmp_10460_fu_81518_p3.read() | xor_ln340_1451_fu_81544_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5961_fu_81638_p2() {
    or_ln340_5961_fu_81638_p2 = (tmp_10462_fu_81606_p3.read() | xor_ln340_1452_fu_81632_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5962_fu_81728_p2() {
    or_ln340_5962_fu_81728_p2 = (tmp_10464_fu_81696_p3.read() | xor_ln340_1453_fu_81722_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5963_fu_81816_p2() {
    or_ln340_5963_fu_81816_p2 = (tmp_10466_fu_81784_p3.read() | xor_ln340_1454_fu_81810_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5964_fu_81904_p2() {
    or_ln340_5964_fu_81904_p2 = (tmp_10468_fu_81872_p3.read() | xor_ln340_1455_fu_81898_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5965_fu_81994_p2() {
    or_ln340_5965_fu_81994_p2 = (tmp_10470_fu_81962_p3.read() | xor_ln340_1456_fu_81988_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5966_fu_82084_p2() {
    or_ln340_5966_fu_82084_p2 = (tmp_10472_fu_82052_p3.read() | xor_ln340_1457_fu_82078_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5967_fu_82174_p2() {
    or_ln340_5967_fu_82174_p2 = (tmp_10474_fu_82142_p3.read() | xor_ln340_1458_fu_82168_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5968_fu_82264_p2() {
    or_ln340_5968_fu_82264_p2 = (tmp_10476_fu_82232_p3.read() | xor_ln340_1459_fu_82258_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5969_fu_82354_p2() {
    or_ln340_5969_fu_82354_p2 = (tmp_10478_fu_82322_p3.read() | xor_ln340_1460_fu_82348_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5970_fu_82444_p2() {
    or_ln340_5970_fu_82444_p2 = (tmp_10480_fu_82412_p3.read() | xor_ln340_1461_fu_82438_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5971_fu_82534_p2() {
    or_ln340_5971_fu_82534_p2 = (tmp_10482_fu_82502_p3.read() | xor_ln340_1462_fu_82528_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5972_fu_82624_p2() {
    or_ln340_5972_fu_82624_p2 = (tmp_10484_fu_82592_p3.read() | xor_ln340_1463_fu_82618_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5973_fu_82714_p2() {
    or_ln340_5973_fu_82714_p2 = (tmp_10486_fu_82682_p3.read() | xor_ln340_1464_fu_82708_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5974_fu_86932_p2() {
    or_ln340_5974_fu_86932_p2 = (tmp_10488_fu_86900_p3.read() | xor_ln340_1465_fu_86926_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5975_fu_87018_p2() {
    or_ln340_5975_fu_87018_p2 = (tmp_10490_fu_86986_p3.read() | xor_ln340_1466_fu_87012_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5976_fu_87104_p2() {
    or_ln340_5976_fu_87104_p2 = (tmp_10492_fu_87072_p3.read() | xor_ln340_1467_fu_87098_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5977_fu_87190_p2() {
    or_ln340_5977_fu_87190_p2 = (tmp_10494_fu_87158_p3.read() | xor_ln340_1468_fu_87184_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5978_fu_87278_p2() {
    or_ln340_5978_fu_87278_p2 = (tmp_10496_fu_87246_p3.read() | xor_ln340_1469_fu_87272_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5979_fu_87366_p2() {
    or_ln340_5979_fu_87366_p2 = (tmp_10498_fu_87334_p3.read() | xor_ln340_1470_fu_87360_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5980_fu_87454_p2() {
    or_ln340_5980_fu_87454_p2 = (tmp_10500_fu_87422_p3.read() | xor_ln340_1471_fu_87448_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5981_fu_87542_p2() {
    or_ln340_5981_fu_87542_p2 = (tmp_10502_fu_87510_p3.read() | xor_ln340_1472_fu_87536_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5982_fu_87630_p2() {
    or_ln340_5982_fu_87630_p2 = (tmp_10504_fu_87598_p3.read() | xor_ln340_1473_fu_87624_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5983_fu_87718_p2() {
    or_ln340_5983_fu_87718_p2 = (tmp_10506_fu_87686_p3.read() | xor_ln340_1474_fu_87712_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5984_fu_87808_p2() {
    or_ln340_5984_fu_87808_p2 = (tmp_10508_fu_87776_p3.read() | xor_ln340_1475_fu_87802_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5985_fu_87898_p2() {
    or_ln340_5985_fu_87898_p2 = (tmp_10510_fu_87866_p3.read() | xor_ln340_1476_fu_87892_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5986_fu_87986_p2() {
    or_ln340_5986_fu_87986_p2 = (tmp_10512_fu_87954_p3.read() | xor_ln340_1477_fu_87980_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5987_fu_88074_p2() {
    or_ln340_5987_fu_88074_p2 = (tmp_10514_fu_88042_p3.read() | xor_ln340_1478_fu_88068_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5988_fu_88162_p2() {
    or_ln340_5988_fu_88162_p2 = (tmp_10516_fu_88130_p3.read() | xor_ln340_1479_fu_88156_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5989_fu_88250_p2() {
    or_ln340_5989_fu_88250_p2 = (tmp_10518_fu_88218_p3.read() | xor_ln340_1480_fu_88244_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5990_fu_88340_p2() {
    or_ln340_5990_fu_88340_p2 = (tmp_10520_fu_88308_p3.read() | xor_ln340_1481_fu_88334_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5991_fu_88430_p2() {
    or_ln340_5991_fu_88430_p2 = (tmp_10522_fu_88398_p3.read() | xor_ln340_1482_fu_88424_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5992_fu_88520_p2() {
    or_ln340_5992_fu_88520_p2 = (tmp_10524_fu_88488_p3.read() | xor_ln340_1483_fu_88514_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5993_fu_88610_p2() {
    or_ln340_5993_fu_88610_p2 = (tmp_10526_fu_88578_p3.read() | xor_ln340_1484_fu_88604_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5994_fu_93797_p2() {
    or_ln340_5994_fu_93797_p2 = (tmp_10528_reg_104945.read() | xor_ln340_1485_fu_93792_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5995_fu_93835_p2() {
    or_ln340_5995_fu_93835_p2 = (tmp_10530_reg_104969.read() | xor_ln340_1486_fu_93830_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5996_fu_93881_p2() {
    or_ln340_5996_fu_93881_p2 = (tmp_10532_reg_104989.read() | xor_ln340_1487_fu_93876_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5997_fu_93927_p2() {
    or_ln340_5997_fu_93927_p2 = (tmp_10534_reg_105009.read() | xor_ln340_1488_fu_93922_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5998_fu_94012_p2() {
    or_ln340_5998_fu_94012_p2 = (tmp_10536_fu_93980_p3.read() | xor_ln340_1489_fu_94006_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_5999_fu_94100_p2() {
    or_ln340_5999_fu_94100_p2 = (tmp_10538_fu_94068_p3.read() | xor_ln340_1490_fu_94094_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6000_fu_94188_p2() {
    or_ln340_6000_fu_94188_p2 = (tmp_10540_fu_94156_p3.read() | xor_ln340_1491_fu_94182_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6001_fu_94276_p2() {
    or_ln340_6001_fu_94276_p2 = (tmp_10542_fu_94244_p3.read() | xor_ln340_1492_fu_94270_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6002_fu_94364_p2() {
    or_ln340_6002_fu_94364_p2 = (tmp_10544_fu_94332_p3.read() | xor_ln340_1493_fu_94358_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6003_fu_94452_p2() {
    or_ln340_6003_fu_94452_p2 = (tmp_10546_fu_94420_p3.read() | xor_ln340_1494_fu_94446_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6004_fu_94540_p2() {
    or_ln340_6004_fu_94540_p2 = (tmp_10548_fu_94508_p3.read() | xor_ln340_1495_fu_94534_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6005_fu_94628_p2() {
    or_ln340_6005_fu_94628_p2 = (tmp_10550_fu_94596_p3.read() | xor_ln340_1496_fu_94622_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6006_fu_94716_p2() {
    or_ln340_6006_fu_94716_p2 = (tmp_10552_fu_94684_p3.read() | xor_ln340_1497_fu_94710_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6007_fu_94806_p2() {
    or_ln340_6007_fu_94806_p2 = (tmp_10554_fu_94774_p3.read() | xor_ln340_1498_fu_94800_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6008_fu_94894_p2() {
    or_ln340_6008_fu_94894_p2 = (tmp_10556_fu_94862_p3.read() | xor_ln340_1499_fu_94888_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6009_fu_94982_p2() {
    or_ln340_6009_fu_94982_p2 = (tmp_10558_fu_94950_p3.read() | xor_ln340_1500_fu_94976_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6010_fu_95072_p2() {
    or_ln340_6010_fu_95072_p2 = (tmp_10560_fu_95040_p3.read() | xor_ln340_1501_fu_95066_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6011_fu_95162_p2() {
    or_ln340_6011_fu_95162_p2 = (tmp_10562_fu_95130_p3.read() | xor_ln340_1502_fu_95156_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6012_fu_95252_p2() {
    or_ln340_6012_fu_95252_p2 = (tmp_10564_fu_95220_p3.read() | xor_ln340_1503_fu_95246_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6013_fu_95342_p2() {
    or_ln340_6013_fu_95342_p2 = (tmp_10566_fu_95310_p3.read() | xor_ln340_1504_fu_95336_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6014_fu_95432_p2() {
    or_ln340_6014_fu_95432_p2 = (tmp_10568_fu_95400_p3.read() | xor_ln340_1505_fu_95426_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6015_fu_95522_p2() {
    or_ln340_6015_fu_95522_p2 = (tmp_10570_fu_95490_p3.read() | xor_ln340_1506_fu_95516_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6016_fu_95612_p2() {
    or_ln340_6016_fu_95612_p2 = (tmp_10572_fu_95580_p3.read() | xor_ln340_1507_fu_95606_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6017_fu_95702_p2() {
    or_ln340_6017_fu_95702_p2 = (tmp_10574_fu_95670_p3.read() | xor_ln340_1508_fu_95696_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6018_fu_99442_p2() {
    or_ln340_6018_fu_99442_p2 = (tmp_10576_reg_105158.read() | xor_ln340_1509_fu_99437_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6019_fu_99525_p2() {
    or_ln340_6019_fu_99525_p2 = (tmp_10578_fu_99493_p3.read() | xor_ln340_1510_fu_99519_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6020_fu_99611_p2() {
    or_ln340_6020_fu_99611_p2 = (tmp_10580_fu_99579_p3.read() | xor_ln340_1511_fu_99605_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6021_fu_99697_p2() {
    or_ln340_6021_fu_99697_p2 = (tmp_10582_fu_99665_p3.read() | xor_ln340_1512_fu_99691_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6022_fu_99785_p2() {
    or_ln340_6022_fu_99785_p2 = (tmp_10584_fu_99753_p3.read() | xor_ln340_1513_fu_99779_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6023_fu_99873_p2() {
    or_ln340_6023_fu_99873_p2 = (tmp_10586_fu_99841_p3.read() | xor_ln340_1514_fu_99867_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6024_fu_99961_p2() {
    or_ln340_6024_fu_99961_p2 = (tmp_10588_fu_99929_p3.read() | xor_ln340_1515_fu_99955_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6025_fu_100049_p2() {
    or_ln340_6025_fu_100049_p2 = (tmp_10590_fu_100017_p3.read() | xor_ln340_1516_fu_100043_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6026_fu_100137_p2() {
    or_ln340_6026_fu_100137_p2 = (tmp_10592_fu_100105_p3.read() | xor_ln340_1517_fu_100131_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6027_fu_100225_p2() {
    or_ln340_6027_fu_100225_p2 = (tmp_10594_fu_100193_p3.read() | xor_ln340_1518_fu_100219_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6028_fu_100313_p2() {
    or_ln340_6028_fu_100313_p2 = (tmp_10596_fu_100281_p3.read() | xor_ln340_1519_fu_100307_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6029_fu_100401_p2() {
    or_ln340_6029_fu_100401_p2 = (tmp_10598_fu_100369_p3.read() | xor_ln340_1520_fu_100395_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6030_fu_100489_p2() {
    or_ln340_6030_fu_100489_p2 = (tmp_10600_fu_100457_p3.read() | xor_ln340_1521_fu_100483_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6031_fu_100579_p2() {
    or_ln340_6031_fu_100579_p2 = (tmp_10602_fu_100547_p3.read() | xor_ln340_1522_fu_100573_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6032_fu_100667_p2() {
    or_ln340_6032_fu_100667_p2 = (tmp_10604_fu_100635_p3.read() | xor_ln340_1523_fu_100661_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6033_fu_100755_p2() {
    or_ln340_6033_fu_100755_p2 = (tmp_10606_fu_100723_p3.read() | xor_ln340_1524_fu_100749_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6034_fu_100845_p2() {
    or_ln340_6034_fu_100845_p2 = (tmp_10608_fu_100813_p3.read() | xor_ln340_1525_fu_100839_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6035_fu_100935_p2() {
    or_ln340_6035_fu_100935_p2 = (tmp_10610_fu_100903_p3.read() | xor_ln340_1526_fu_100929_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6036_fu_101025_p2() {
    or_ln340_6036_fu_101025_p2 = (tmp_10612_fu_100993_p3.read() | xor_ln340_1527_fu_101019_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6037_fu_101115_p2() {
    or_ln340_6037_fu_101115_p2 = (tmp_10614_fu_101083_p3.read() | xor_ln340_1528_fu_101109_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6038_fu_101205_p2() {
    or_ln340_6038_fu_101205_p2 = (tmp_10616_fu_101173_p3.read() | xor_ln340_1529_fu_101199_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6039_fu_102425_p2() {
    or_ln340_6039_fu_102425_p2 = (tmp_10618_reg_105313.read() | xor_ln340_1530_fu_102420_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6040_fu_102471_p2() {
    or_ln340_6040_fu_102471_p2 = (tmp_10620_reg_105333.read() | xor_ln340_1531_fu_102466_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6041_fu_102517_p2() {
    or_ln340_6041_fu_102517_p2 = (tmp_10622_reg_105353.read() | xor_ln340_1532_fu_102512_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6042_fu_102602_p2() {
    or_ln340_6042_fu_102602_p2 = (tmp_10624_fu_102570_p3.read() | xor_ln340_1533_fu_102596_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6043_fu_102692_p2() {
    or_ln340_6043_fu_102692_p2 = (tmp_10626_fu_102660_p3.read() | xor_ln340_1534_fu_102686_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6044_fu_102782_p2() {
    or_ln340_6044_fu_102782_p2 = (tmp_10628_fu_102750_p3.read() | xor_ln340_1535_fu_102776_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6045_fu_102870_p2() {
    or_ln340_6045_fu_102870_p2 = (tmp_10630_fu_102838_p3.read() | xor_ln340_1536_fu_102864_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6046_fu_102958_p2() {
    or_ln340_6046_fu_102958_p2 = (tmp_10632_fu_102926_p3.read() | xor_ln340_1537_fu_102952_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6047_fu_103046_p2() {
    or_ln340_6047_fu_103046_p2 = (tmp_10634_fu_103014_p3.read() | xor_ln340_1538_fu_103040_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6048_fu_103134_p2() {
    or_ln340_6048_fu_103134_p2 = (tmp_10636_fu_103102_p3.read() | xor_ln340_1539_fu_103128_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6049_fu_103222_p2() {
    or_ln340_6049_fu_103222_p2 = (tmp_10638_fu_103190_p3.read() | xor_ln340_1540_fu_103216_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6050_fu_103310_p2() {
    or_ln340_6050_fu_103310_p2 = (tmp_10640_fu_103278_p3.read() | xor_ln340_1541_fu_103304_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6051_fu_103398_p2() {
    or_ln340_6051_fu_103398_p2 = (tmp_10642_fu_103366_p3.read() | xor_ln340_1542_fu_103392_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6052_fu_103486_p2() {
    or_ln340_6052_fu_103486_p2 = (tmp_10644_fu_103454_p3.read() | xor_ln340_1543_fu_103480_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6053_fu_103576_p2() {
    or_ln340_6053_fu_103576_p2 = (tmp_10646_fu_103544_p3.read() | xor_ln340_1544_fu_103570_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6054_fu_103667_p2() {
    or_ln340_6054_fu_103667_p2 = (tmp_10648_fu_103635_p3.read() | xor_ln340_1545_fu_103661_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6055_fu_103758_p2() {
    or_ln340_6055_fu_103758_p2 = (tmp_10650_fu_103726_p3.read() | xor_ln340_1546_fu_103752_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_6056_fu_103849_p2() {
    or_ln340_6056_fu_103849_p2 = (tmp_10652_fu_103817_p3.read() | xor_ln340_1547_fu_103843_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln340_fu_57364_p2() {
    or_ln340_fu_57364_p2 = (and_ln786_4086_fu_57358_p2.read() | and_ln785_fu_57334_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1350_fu_57446_p2() {
    or_ln406_1350_fu_57446_p2 = (tmp_9545_fu_57406_p3.read() | icmp_ln718_1350_fu_57432_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1351_fu_57642_p2() {
    or_ln406_1351_fu_57642_p2 = (tmp_9550_fu_57602_p3.read() | icmp_ln718_1351_fu_57628_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1352_fu_57842_p2() {
    or_ln406_1352_fu_57842_p2 = (tmp_9555_fu_57802_p3.read() | icmp_ln718_1352_fu_57828_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1353_fu_58086_p2() {
    or_ln406_1353_fu_58086_p2 = (tmp_9560_fu_58046_p3.read() | icmp_ln718_1353_fu_58072_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1354_fu_58286_p2() {
    or_ln406_1354_fu_58286_p2 = (tmp_9565_fu_58246_p3.read() | icmp_ln718_1354_fu_58272_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1355_fu_58482_p2() {
    or_ln406_1355_fu_58482_p2 = (tmp_9570_fu_58442_p3.read() | icmp_ln718_1355_fu_58468_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1356_fu_58700_p2() {
    or_ln406_1356_fu_58700_p2 = (tmp_9575_fu_58660_p3.read() | icmp_ln718_1356_fu_58686_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1357_fu_58912_p2() {
    or_ln406_1357_fu_58912_p2 = (tmp_9580_fu_58876_p3.read() | icmp_ln718_1357_fu_58898_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1358_fu_59104_p2() {
    or_ln406_1358_fu_59104_p2 = (tmp_9585_fu_59068_p3.read() | icmp_ln718_1358_fu_59090_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1359_fu_59300_p2() {
    or_ln406_1359_fu_59300_p2 = (tmp_9590_fu_59260_p3.read() | icmp_ln718_1359_fu_59286_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1360_fu_59496_p2() {
    or_ln406_1360_fu_59496_p2 = (tmp_9595_fu_59456_p3.read() | icmp_ln718_1360_fu_59482_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1361_fu_59708_p2() {
    or_ln406_1361_fu_59708_p2 = (tmp_9600_fu_59668_p3.read() | icmp_ln718_1361_fu_59694_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1362_fu_59904_p2() {
    or_ln406_1362_fu_59904_p2 = (tmp_9605_fu_59868_p3.read() | icmp_ln718_1362_fu_59890_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1363_fu_60096_p2() {
    or_ln406_1363_fu_60096_p2 = (tmp_9610_fu_60060_p3.read() | icmp_ln718_1363_fu_60082_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1364_fu_60288_p2() {
    or_ln406_1364_fu_60288_p2 = (tmp_9615_fu_60252_p3.read() | icmp_ln718_1364_fu_60274_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1365_fu_60551_p2() {
    or_ln406_1365_fu_60551_p2 = (tmp_9620_fu_60505_p3.read() | icmp_ln718_1365_fu_60537_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1366_fu_60751_p2() {
    or_ln406_1366_fu_60751_p2 = (tmp_9625_fu_60711_p3.read() | icmp_ln718_1366_fu_60737_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1367_fu_60849_p2() {
    or_ln406_1367_fu_60849_p2 = (tmp_9630_fu_60809_p3.read() | icmp_ln718_1367_fu_60835_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1368_fu_61045_p2() {
    or_ln406_1368_fu_61045_p2 = (tmp_9635_fu_61005_p3.read() | icmp_ln718_1368_fu_61031_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1369_fu_61261_p2() {
    or_ln406_1369_fu_61261_p2 = (tmp_9640_fu_61225_p3.read() | icmp_ln718_1369_fu_61247_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1370_fu_61457_p2() {
    or_ln406_1370_fu_61457_p2 = (tmp_9645_fu_61417_p3.read() | icmp_ln718_1370_fu_61443_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1371_fu_61555_p2() {
    or_ln406_1371_fu_61555_p2 = (tmp_9650_fu_61515_p3.read() | icmp_ln718_1371_fu_61541_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1372_fu_61751_p2() {
    or_ln406_1372_fu_61751_p2 = (tmp_9655_fu_61711_p3.read() | icmp_ln718_1372_fu_61737_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1373_fu_62963_p2() {
    or_ln406_1373_fu_62963_p2 = (tmp_9660_fu_62923_p3.read() | icmp_ln718_1373_fu_62949_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1374_fu_63163_p2() {
    or_ln406_1374_fu_63163_p2 = (tmp_9665_fu_63123_p3.read() | icmp_ln718_1374_fu_63149_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1375_fu_63363_p2() {
    or_ln406_1375_fu_63363_p2 = (tmp_9670_fu_63323_p3.read() | icmp_ln718_1375_fu_63349_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1376_fu_63559_p2() {
    or_ln406_1376_fu_63559_p2 = (tmp_9675_fu_63519_p3.read() | icmp_ln718_1376_fu_63545_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1377_fu_63810_p2() {
    or_ln406_1377_fu_63810_p2 = (tmp_9680_fu_63770_p3.read() | icmp_ln718_1377_fu_63796_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1378_fu_64010_p2() {
    or_ln406_1378_fu_64010_p2 = (tmp_9685_fu_63970_p3.read() | icmp_ln718_1378_fu_63996_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1379_fu_64210_p2() {
    or_ln406_1379_fu_64210_p2 = (tmp_9690_fu_64170_p3.read() | icmp_ln718_1379_fu_64196_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1380_fu_64402_p2() {
    or_ln406_1380_fu_64402_p2 = (tmp_9695_fu_64366_p3.read() | icmp_ln718_1380_fu_64388_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1381_fu_64610_p2() {
    or_ln406_1381_fu_64610_p2 = (tmp_9700_fu_64570_p3.read() | icmp_ln718_1381_fu_64596_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1382_fu_64810_p2() {
    or_ln406_1382_fu_64810_p2 = (tmp_9705_fu_64770_p3.read() | icmp_ln718_1382_fu_64796_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1383_fu_65010_p2() {
    or_ln406_1383_fu_65010_p2 = (tmp_9710_fu_64970_p3.read() | icmp_ln718_1383_fu_64996_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1384_fu_65206_p2() {
    or_ln406_1384_fu_65206_p2 = (tmp_9715_fu_65166_p3.read() | icmp_ln718_1384_fu_65192_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1385_fu_65449_p2() {
    or_ln406_1385_fu_65449_p2 = (tmp_9720_fu_65409_p3.read() | icmp_ln718_1385_fu_65435_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1386_fu_65547_p2() {
    or_ln406_1386_fu_65547_p2 = (tmp_9725_fu_65507_p3.read() | icmp_ln718_1386_fu_65533_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1387_fu_65747_p2() {
    or_ln406_1387_fu_65747_p2 = (tmp_9730_fu_65707_p3.read() | icmp_ln718_1387_fu_65733_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1388_fu_65947_p2() {
    or_ln406_1388_fu_65947_p2 = (tmp_9735_fu_65907_p3.read() | icmp_ln718_1388_fu_65933_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1389_fu_66159_p2() {
    or_ln406_1389_fu_66159_p2 = (tmp_9740_fu_66119_p3.read() | icmp_ln718_1389_fu_66145_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1390_fu_66359_p2() {
    or_ln406_1390_fu_66359_p2 = (tmp_9745_fu_66319_p3.read() | icmp_ln718_1390_fu_66345_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1391_fu_66559_p2() {
    or_ln406_1391_fu_66559_p2 = (tmp_9750_fu_66519_p3.read() | icmp_ln718_1391_fu_66545_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1392_fu_66759_p2() {
    or_ln406_1392_fu_66759_p2 = (tmp_9755_fu_66719_p3.read() | icmp_ln718_1392_fu_66745_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1393_fu_66970_p2() {
    or_ln406_1393_fu_66970_p2 = (tmp_9760_fu_66930_p3.read() | icmp_ln718_1393_fu_66956_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1394_fu_67184_p2() {
    or_ln406_1394_fu_67184_p2 = (tmp_9765_fu_67144_p3.read() | icmp_ln718_1394_fu_67170_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1395_fu_67282_p2() {
    or_ln406_1395_fu_67282_p2 = (tmp_9770_fu_67242_p3.read() | icmp_ln718_1395_fu_67268_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1396_fu_67380_p2() {
    or_ln406_1396_fu_67380_p2 = (tmp_9775_fu_67340_p3.read() | icmp_ln718_1396_fu_67366_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1397_fu_69925_p2() {
    or_ln406_1397_fu_69925_p2 = (tmp_9780_fu_69885_p3.read() | icmp_ln718_1397_fu_69911_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1398_fu_70121_p2() {
    or_ln406_1398_fu_70121_p2 = (tmp_9785_fu_70081_p3.read() | icmp_ln718_1398_fu_70107_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1399_fu_70313_p2() {
    or_ln406_1399_fu_70313_p2 = (tmp_9790_fu_70277_p3.read() | icmp_ln718_1399_fu_70299_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1400_fu_70537_p2() {
    or_ln406_1400_fu_70537_p2 = (tmp_9795_fu_70497_p3.read() | icmp_ln718_1400_fu_70523_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1401_fu_70750_p2() {
    or_ln406_1401_fu_70750_p2 = (tmp_9800_fu_70710_p3.read() | icmp_ln718_1401_fu_70736_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1402_fu_70946_p2() {
    or_ln406_1402_fu_70946_p2 = (tmp_9805_fu_70906_p3.read() | icmp_ln718_1402_fu_70932_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1403_fu_71142_p2() {
    or_ln406_1403_fu_71142_p2 = (tmp_9810_fu_71102_p3.read() | icmp_ln718_1403_fu_71128_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1404_fu_71342_p2() {
    or_ln406_1404_fu_71342_p2 = (tmp_9815_fu_71302_p3.read() | icmp_ln718_1404_fu_71328_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1405_fu_71558_p2() {
    or_ln406_1405_fu_71558_p2 = (tmp_9820_fu_71518_p3.read() | icmp_ln718_1405_fu_71544_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1406_fu_71758_p2() {
    or_ln406_1406_fu_71758_p2 = (tmp_9825_fu_71718_p3.read() | icmp_ln718_1406_fu_71744_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1407_fu_71950_p2() {
    or_ln406_1407_fu_71950_p2 = (tmp_9830_fu_71914_p3.read() | icmp_ln718_1407_fu_71936_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1408_fu_72146_p2() {
    or_ln406_1408_fu_72146_p2 = (tmp_9835_fu_72106_p3.read() | icmp_ln718_1408_fu_72132_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1409_fu_72358_p2() {
    or_ln406_1409_fu_72358_p2 = (tmp_9840_fu_72318_p3.read() | icmp_ln718_1409_fu_72344_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1410_fu_72554_p2() {
    or_ln406_1410_fu_72554_p2 = (tmp_9845_fu_72514_p3.read() | icmp_ln718_1410_fu_72540_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1411_fu_72750_p2() {
    or_ln406_1411_fu_72750_p2 = (tmp_9850_fu_72714_p3.read() | icmp_ln718_1411_fu_72736_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1412_fu_72946_p2() {
    or_ln406_1412_fu_72946_p2 = (tmp_9855_fu_72906_p3.read() | icmp_ln718_1412_fu_72932_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1413_fu_73162_p2() {
    or_ln406_1413_fu_73162_p2 = (tmp_9860_fu_73122_p3.read() | icmp_ln718_1413_fu_73148_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1414_fu_73260_p2() {
    or_ln406_1414_fu_73260_p2 = (tmp_9865_fu_73220_p3.read() | icmp_ln718_1414_fu_73246_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1415_fu_73460_p2() {
    or_ln406_1415_fu_73460_p2 = (tmp_9870_fu_73420_p3.read() | icmp_ln718_1415_fu_73446_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1416_fu_73656_p2() {
    or_ln406_1416_fu_73656_p2 = (tmp_9875_fu_73616_p3.read() | icmp_ln718_1416_fu_73642_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1417_fu_76056_p2() {
    or_ln406_1417_fu_76056_p2 = (tmp_9880_fu_76016_p3.read() | icmp_ln718_1417_fu_76042_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1418_fu_76286_p2() {
    or_ln406_1418_fu_76286_p2 = (tmp_9885_fu_76246_p3.read() | icmp_ln718_1418_fu_76272_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1419_fu_76482_p2() {
    or_ln406_1419_fu_76482_p2 = (tmp_9890_fu_76446_p3.read() | icmp_ln718_1419_fu_76468_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1420_fu_76727_p2() {
    or_ln406_1420_fu_76727_p2 = (tmp_9895_fu_76681_p3.read() | icmp_ln718_1420_fu_76713_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1421_fu_76940_p2() {
    or_ln406_1421_fu_76940_p2 = (tmp_9900_fu_76900_p3.read() | icmp_ln718_1421_fu_76926_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1422_fu_77136_p2() {
    or_ln406_1422_fu_77136_p2 = (tmp_9905_fu_77096_p3.read() | icmp_ln718_1422_fu_77122_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1423_fu_77336_p2() {
    or_ln406_1423_fu_77336_p2 = (tmp_9910_fu_77296_p3.read() | icmp_ln718_1423_fu_77322_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1424_fu_77536_p2() {
    or_ln406_1424_fu_77536_p2 = (tmp_9915_fu_77496_p3.read() | icmp_ln718_1424_fu_77522_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1425_fu_77745_p2() {
    or_ln406_1425_fu_77745_p2 = (tmp_9920_fu_77705_p3.read() | icmp_ln718_1425_fu_77731_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1426_fu_77973_p2() {
    or_ln406_1426_fu_77973_p2 = (tmp_9925_fu_77933_p3.read() | icmp_ln718_1426_fu_77959_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1427_fu_78173_p2() {
    or_ln406_1427_fu_78173_p2 = (tmp_9930_fu_78133_p3.read() | icmp_ln718_1427_fu_78159_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1428_fu_78373_p2() {
    or_ln406_1428_fu_78373_p2 = (tmp_9935_fu_78333_p3.read() | icmp_ln718_1428_fu_78359_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1429_fu_78586_p2() {
    or_ln406_1429_fu_78586_p2 = (tmp_9940_fu_78546_p3.read() | icmp_ln718_1429_fu_78572_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1430_fu_78782_p2() {
    or_ln406_1430_fu_78782_p2 = (tmp_9945_fu_78742_p3.read() | icmp_ln718_1430_fu_78768_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1431_fu_78978_p2() {
    or_ln406_1431_fu_78978_p2 = (tmp_9950_fu_78942_p3.read() | icmp_ln718_1431_fu_78964_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1432_fu_79174_p2() {
    or_ln406_1432_fu_79174_p2 = (tmp_9955_fu_79134_p3.read() | icmp_ln718_1432_fu_79160_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1433_fu_79378_p2() {
    or_ln406_1433_fu_79378_p2 = (tmp_9960_fu_79338_p3.read() | icmp_ln718_1433_fu_79364_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1434_fu_79574_p2() {
    or_ln406_1434_fu_79574_p2 = (tmp_9965_fu_79538_p3.read() | icmp_ln718_1434_fu_79560_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1435_fu_79812_p2() {
    or_ln406_1435_fu_79812_p2 = (tmp_9970_fu_79766_p3.read() | icmp_ln718_1435_fu_79798_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1436_fu_79922_p2() {
    or_ln406_1436_fu_79922_p2 = (tmp_9975_fu_79882_p3.read() | icmp_ln718_1436_fu_79908_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1437_fu_80036_p2() {
    or_ln406_1437_fu_80036_p2 = (tmp_9980_fu_79996_p3.read() | icmp_ln718_1437_fu_80022_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1438_fu_80236_p2() {
    or_ln406_1438_fu_80236_p2 = (tmp_9985_fu_80196_p3.read() | icmp_ln718_1438_fu_80222_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1439_fu_80428_p2() {
    or_ln406_1439_fu_80428_p2 = (tmp_9990_fu_80392_p3.read() | icmp_ln718_1439_fu_80414_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1440_fu_80624_p2() {
    or_ln406_1440_fu_80624_p2 = (tmp_9995_fu_80584_p3.read() | icmp_ln718_1440_fu_80610_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1441_fu_83082_p2() {
    or_ln406_1441_fu_83082_p2 = (tmp_10000_fu_83042_p3.read() | icmp_ln718_1441_fu_83068_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1442_fu_83282_p2() {
    or_ln406_1442_fu_83282_p2 = (tmp_10005_fu_83242_p3.read() | icmp_ln718_1442_fu_83268_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1443_fu_83482_p2() {
    or_ln406_1443_fu_83482_p2 = (tmp_10010_fu_83442_p3.read() | icmp_ln718_1443_fu_83468_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1444_fu_83678_p2() {
    or_ln406_1444_fu_83678_p2 = (tmp_10015_fu_83642_p3.read() | icmp_ln718_1444_fu_83664_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1445_fu_83886_p2() {
    or_ln406_1445_fu_83886_p2 = (tmp_10020_fu_83846_p3.read() | icmp_ln718_1445_fu_83872_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1446_fu_84119_p2() {
    or_ln406_1446_fu_84119_p2 = (tmp_10025_fu_84073_p3.read() | icmp_ln718_1446_fu_84105_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1447_fu_84315_p2() {
    or_ln406_1447_fu_84315_p2 = (tmp_10030_fu_84279_p3.read() | icmp_ln718_1447_fu_84301_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1448_fu_84511_p2() {
    or_ln406_1448_fu_84511_p2 = (tmp_10035_fu_84471_p3.read() | icmp_ln718_1448_fu_84497_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1449_fu_84713_p2() {
    or_ln406_1449_fu_84713_p2 = (tmp_10040_fu_84673_p3.read() | icmp_ln718_1449_fu_84699_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1450_fu_84926_p2() {
    or_ln406_1450_fu_84926_p2 = (tmp_10045_fu_84886_p3.read() | icmp_ln718_1450_fu_84912_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1451_fu_85126_p2() {
    or_ln406_1451_fu_85126_p2 = (tmp_10050_fu_85086_p3.read() | icmp_ln718_1451_fu_85112_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1452_fu_85322_p2() {
    or_ln406_1452_fu_85322_p2 = (tmp_10055_fu_85282_p3.read() | icmp_ln718_1452_fu_85308_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1453_fu_85531_p2() {
    or_ln406_1453_fu_85531_p2 = (tmp_10060_fu_85491_p3.read() | icmp_ln718_1453_fu_85517_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1454_fu_85731_p2() {
    or_ln406_1454_fu_85731_p2 = (tmp_10065_fu_85691_p3.read() | icmp_ln718_1454_fu_85717_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1455_fu_85931_p2() {
    or_ln406_1455_fu_85931_p2 = (tmp_10070_fu_85891_p3.read() | icmp_ln718_1455_fu_85917_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1456_fu_86127_p2() {
    or_ln406_1456_fu_86127_p2 = (tmp_10075_fu_86087_p3.read() | icmp_ln718_1456_fu_86113_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1457_fu_86336_p2() {
    or_ln406_1457_fu_86336_p2 = (tmp_10080_fu_86296_p3.read() | icmp_ln718_1457_fu_86322_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1458_fu_88878_p2() {
    or_ln406_1458_fu_88878_p2 = (tmp_10085_fu_88838_p3.read() | icmp_ln718_1458_fu_88864_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1459_fu_86528_p2() {
    or_ln406_1459_fu_86528_p2 = (tmp_10090_fu_86492_p3.read() | icmp_ln718_1459_fu_86514_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1460_fu_86720_p2() {
    or_ln406_1460_fu_86720_p2 = (tmp_10095_fu_86684_p3.read() | icmp_ln718_1460_fu_86706_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1461_fu_89128_p2() {
    or_ln406_1461_fu_89128_p2 = (tmp_10100_fu_89082_p3.read() | icmp_ln718_1461_fu_89114_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1462_fu_89328_p2() {
    or_ln406_1462_fu_89328_p2 = (tmp_10105_fu_89288_p3.read() | icmp_ln718_1462_fu_89314_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1463_fu_89528_p2() {
    or_ln406_1463_fu_89528_p2 = (tmp_10110_fu_89488_p3.read() | icmp_ln718_1463_fu_89514_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1464_fu_89728_p2() {
    or_ln406_1464_fu_89728_p2 = (tmp_10115_fu_89688_p3.read() | icmp_ln718_1464_fu_89714_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1465_fu_89934_p2() {
    or_ln406_1465_fu_89934_p2 = (tmp_10120_fu_89894_p3.read() | icmp_ln718_1465_fu_89920_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1466_fu_90126_p2() {
    or_ln406_1466_fu_90126_p2 = (tmp_10125_fu_90090_p3.read() | icmp_ln718_1466_fu_90112_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1467_fu_90322_p2() {
    or_ln406_1467_fu_90322_p2 = (tmp_10130_fu_90282_p3.read() | icmp_ln718_1467_fu_90308_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1468_fu_90514_p2() {
    or_ln406_1468_fu_90514_p2 = (tmp_10135_fu_90478_p3.read() | icmp_ln718_1468_fu_90500_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1469_fu_90720_p2() {
    or_ln406_1469_fu_90720_p2 = (tmp_10140_fu_90680_p3.read() | icmp_ln718_1469_fu_90706_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1470_fu_90920_p2() {
    or_ln406_1470_fu_90920_p2 = (tmp_10145_fu_90880_p3.read() | icmp_ln718_1470_fu_90906_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1471_fu_91116_p2() {
    or_ln406_1471_fu_91116_p2 = (tmp_10150_fu_91076_p3.read() | icmp_ln718_1471_fu_91102_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1472_fu_91312_p2() {
    or_ln406_1472_fu_91312_p2 = (tmp_10155_fu_91272_p3.read() | icmp_ln718_1472_fu_91298_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1473_fu_91521_p2() {
    or_ln406_1473_fu_91521_p2 = (tmp_10160_fu_91481_p3.read() | icmp_ln718_1473_fu_91507_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1474_fu_91713_p2() {
    or_ln406_1474_fu_91713_p2 = (tmp_10165_fu_91677_p3.read() | icmp_ln718_1474_fu_91699_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1475_fu_91909_p2() {
    or_ln406_1475_fu_91909_p2 = (tmp_10170_fu_91869_p3.read() | icmp_ln718_1475_fu_91895_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1476_fu_92105_p2() {
    or_ln406_1476_fu_92105_p2 = (tmp_10175_fu_92065_p3.read() | icmp_ln718_1476_fu_92091_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1477_fu_92318_p2() {
    or_ln406_1477_fu_92318_p2 = (tmp_10180_fu_92278_p3.read() | icmp_ln718_1477_fu_92304_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1478_fu_92514_p2() {
    or_ln406_1478_fu_92514_p2 = (tmp_10185_fu_92474_p3.read() | icmp_ln718_1478_fu_92500_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1479_fu_92710_p2() {
    or_ln406_1479_fu_92710_p2 = (tmp_10190_fu_92674_p3.read() | icmp_ln718_1479_fu_92696_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1480_fu_92906_p2() {
    or_ln406_1480_fu_92906_p2 = (tmp_10195_fu_92866_p3.read() | icmp_ln718_1480_fu_92892_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1481_fu_93114_p2() {
    or_ln406_1481_fu_93114_p2 = (tmp_10200_fu_93074_p3.read() | icmp_ln718_1481_fu_93100_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1482_fu_93342_p2() {
    or_ln406_1482_fu_93342_p2 = (tmp_10205_fu_93302_p3.read() | icmp_ln718_1482_fu_93328_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1483_fu_93436_p2() {
    or_ln406_1483_fu_93436_p2 = (tmp_10210_fu_93400_p3.read() | icmp_ln718_1483_fu_93422_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1484_fu_93632_p2() {
    or_ln406_1484_fu_93632_p2 = (tmp_10215_fu_93592_p3.read() | icmp_ln718_1484_fu_93618_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1485_fu_95908_p2() {
    or_ln406_1485_fu_95908_p2 = (tmp_10220_fu_95868_p3.read() | icmp_ln718_1485_fu_95894_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1486_fu_96108_p2() {
    or_ln406_1486_fu_96108_p2 = (tmp_10225_fu_96068_p3.read() | icmp_ln718_1486_fu_96094_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1487_fu_96327_p2() {
    or_ln406_1487_fu_96327_p2 = (tmp_10230_fu_96287_p3.read() | icmp_ln718_1487_fu_96313_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1488_fu_96527_p2() {
    or_ln406_1488_fu_96527_p2 = (tmp_10235_fu_96487_p3.read() | icmp_ln718_1488_fu_96513_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1489_fu_96736_p2() {
    or_ln406_1489_fu_96736_p2 = (tmp_10240_fu_96696_p3.read() | icmp_ln718_1489_fu_96722_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1490_fu_96936_p2() {
    or_ln406_1490_fu_96936_p2 = (tmp_10245_fu_96896_p3.read() | icmp_ln718_1490_fu_96922_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1491_fu_97128_p2() {
    or_ln406_1491_fu_97128_p2 = (tmp_10250_fu_97092_p3.read() | icmp_ln718_1491_fu_97114_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1492_fu_97324_p2() {
    or_ln406_1492_fu_97324_p2 = (tmp_10255_fu_97284_p3.read() | icmp_ln718_1492_fu_97310_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1493_fu_97529_p2() {
    or_ln406_1493_fu_97529_p2 = (tmp_10260_fu_97489_p3.read() | icmp_ln718_1493_fu_97515_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1494_fu_97676_p2() {
    or_ln406_1494_fu_97676_p2 = (tmp_10265_fu_97630_p3.read() | icmp_ln718_1494_fu_97662_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1495_fu_97774_p2() {
    or_ln406_1495_fu_97774_p2 = (tmp_10270_fu_97734_p3.read() | icmp_ln718_1495_fu_97760_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1496_fu_97872_p2() {
    or_ln406_1496_fu_97872_p2 = (tmp_10275_fu_97832_p3.read() | icmp_ln718_1496_fu_97858_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1497_fu_98073_p2() {
    or_ln406_1497_fu_98073_p2 = (tmp_10280_fu_98037_p3.read() | icmp_ln718_1497_fu_98059_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1498_fu_98269_p2() {
    or_ln406_1498_fu_98269_p2 = (tmp_10285_fu_98229_p3.read() | icmp_ln718_1498_fu_98255_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1499_fu_98461_p2() {
    or_ln406_1499_fu_98461_p2 = (tmp_10290_fu_98425_p3.read() | icmp_ln718_1499_fu_98447_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1500_fu_98667_p2() {
    or_ln406_1500_fu_98667_p2 = (tmp_10295_fu_98627_p3.read() | icmp_ln718_1500_fu_98653_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1501_fu_98867_p2() {
    or_ln406_1501_fu_98867_p2 = (tmp_10300_fu_98827_p3.read() | icmp_ln718_1501_fu_98853_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1502_fu_99067_p2() {
    or_ln406_1502_fu_99067_p2 = (tmp_10305_fu_99027_p3.read() | icmp_ln718_1502_fu_99053_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1503_fu_99267_p2() {
    or_ln406_1503_fu_99267_p2 = (tmp_10310_fu_99227_p3.read() | icmp_ln718_1503_fu_99253_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1504_fu_101666_p2() {
    or_ln406_1504_fu_101666_p2 = (tmp_10315_fu_101626_p3.read() | icmp_ln718_1504_fu_101652_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1505_fu_101862_p2() {
    or_ln406_1505_fu_101862_p2 = (tmp_10320_fu_101822_p3.read() | icmp_ln718_1505_fu_101848_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1506_fu_102058_p2() {
    or_ln406_1506_fu_102058_p2 = (tmp_10325_fu_102018_p3.read() | icmp_ln718_1506_fu_102044_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_1507_fu_102250_p2() {
    or_ln406_1507_fu_102250_p2 = (tmp_10330_fu_102214_p3.read() | icmp_ln718_1507_fu_102236_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln406_fu_57246_p2() {
    or_ln406_fu_57246_p2 = (tmp_9540_fu_57206_p3.read() | icmp_ln718_fu_57232_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1358_fu_57524_p2() {
    or_ln785_1358_fu_57524_p2 = (tmp_9549_fu_57496_p3.read() | xor_ln785_1358_fu_57518_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1359_fu_57724_p2() {
    or_ln785_1359_fu_57724_p2 = (tmp_9554_fu_57696_p3.read() | xor_ln785_1359_fu_57718_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1360_fu_57924_p2() {
    or_ln785_1360_fu_57924_p2 = (tmp_9559_fu_57896_p3.read() | xor_ln785_1360_fu_57918_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1361_fu_58168_p2() {
    or_ln785_1361_fu_58168_p2 = (tmp_9564_fu_58140_p3.read() | xor_ln785_1361_fu_58162_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1362_fu_58364_p2() {
    or_ln785_1362_fu_58364_p2 = (tmp_9569_fu_58336_p3.read() | xor_ln785_1362_fu_58358_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1363_fu_58564_p2() {
    or_ln785_1363_fu_58564_p2 = (tmp_9574_fu_58536_p3.read() | xor_ln785_1363_fu_58558_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1364_fu_58782_p2() {
    or_ln785_1364_fu_58782_p2 = (tmp_9579_fu_58754_p3.read() | xor_ln785_1364_fu_58776_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1365_fu_58990_p2() {
    or_ln785_1365_fu_58990_p2 = (tmp_9584_fu_58962_p3.read() | xor_ln785_1365_fu_58984_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1366_fu_59182_p2() {
    or_ln785_1366_fu_59182_p2 = (tmp_9589_fu_59154_p3.read() | xor_ln785_1366_fu_59176_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1367_fu_59378_p2() {
    or_ln785_1367_fu_59378_p2 = (tmp_9594_fu_59350_p3.read() | xor_ln785_1367_fu_59372_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1368_fu_59578_p2() {
    or_ln785_1368_fu_59578_p2 = (tmp_9599_fu_59550_p3.read() | xor_ln785_1368_fu_59572_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1369_fu_59790_p2() {
    or_ln785_1369_fu_59790_p2 = (tmp_9604_fu_59762_p3.read() | xor_ln785_1369_fu_59784_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1370_fu_59982_p2() {
    or_ln785_1370_fu_59982_p2 = (tmp_9609_fu_59954_p3.read() | xor_ln785_1370_fu_59976_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1371_fu_60174_p2() {
    or_ln785_1371_fu_60174_p2 = (tmp_9614_fu_60146_p3.read() | xor_ln785_1371_fu_60168_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1372_fu_60366_p2() {
    or_ln785_1372_fu_60366_p2 = (tmp_9619_fu_60338_p3.read() | xor_ln785_1372_fu_60360_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1373_fu_60633_p2() {
    or_ln785_1373_fu_60633_p2 = (tmp_9624_fu_60605_p3.read() | xor_ln785_1373_fu_60627_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1374_fu_62739_p2() {
    or_ln785_1374_fu_62739_p2 = (tmp_9629_reg_103968.read() | xor_ln785_1374_fu_62735_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1375_fu_60927_p2() {
    or_ln785_1375_fu_60927_p2 = (tmp_9634_fu_60899_p3.read() | xor_ln785_1375_fu_60921_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1376_fu_61127_p2() {
    or_ln785_1376_fu_61127_p2 = (tmp_9639_fu_61099_p3.read() | xor_ln785_1376_fu_61121_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1377_fu_61339_p2() {
    or_ln785_1377_fu_61339_p2 = (tmp_9644_fu_61311_p3.read() | xor_ln785_1377_fu_61333_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1378_fu_62830_p2() {
    or_ln785_1378_fu_62830_p2 = (tmp_9649_reg_104013.read() | xor_ln785_1378_fu_62826_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1379_fu_61633_p2() {
    or_ln785_1379_fu_61633_p2 = (tmp_9654_fu_61605_p3.read() | xor_ln785_1379_fu_61627_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1380_fu_61833_p2() {
    or_ln785_1380_fu_61833_p2 = (tmp_9659_fu_61805_p3.read() | xor_ln785_1380_fu_61827_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1381_fu_63045_p2() {
    or_ln785_1381_fu_63045_p2 = (tmp_9664_fu_63017_p3.read() | xor_ln785_1381_fu_63039_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1382_fu_63245_p2() {
    or_ln785_1382_fu_63245_p2 = (tmp_9669_fu_63217_p3.read() | xor_ln785_1382_fu_63239_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1383_fu_63441_p2() {
    or_ln785_1383_fu_63441_p2 = (tmp_9674_fu_63413_p3.read() | xor_ln785_1383_fu_63435_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1384_fu_63641_p2() {
    or_ln785_1384_fu_63641_p2 = (tmp_9679_fu_63613_p3.read() | xor_ln785_1384_fu_63635_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1385_fu_63892_p2() {
    or_ln785_1385_fu_63892_p2 = (tmp_9684_fu_63864_p3.read() | xor_ln785_1385_fu_63886_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1386_fu_64092_p2() {
    or_ln785_1386_fu_64092_p2 = (tmp_9689_fu_64064_p3.read() | xor_ln785_1386_fu_64086_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1387_fu_64288_p2() {
    or_ln785_1387_fu_64288_p2 = (tmp_9694_fu_64260_p3.read() | xor_ln785_1387_fu_64282_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1388_fu_64480_p2() {
    or_ln785_1388_fu_64480_p2 = (tmp_9699_fu_64452_p3.read() | xor_ln785_1388_fu_64474_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1389_fu_64692_p2() {
    or_ln785_1389_fu_64692_p2 = (tmp_9704_fu_64664_p3.read() | xor_ln785_1389_fu_64686_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1390_fu_64892_p2() {
    or_ln785_1390_fu_64892_p2 = (tmp_9709_fu_64864_p3.read() | xor_ln785_1390_fu_64886_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1391_fu_65088_p2() {
    or_ln785_1391_fu_65088_p2 = (tmp_9714_fu_65060_p3.read() | xor_ln785_1391_fu_65082_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1392_fu_65288_p2() {
    or_ln785_1392_fu_65288_p2 = (tmp_9719_fu_65260_p3.read() | xor_ln785_1392_fu_65282_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1393_fu_69530_p2() {
    or_ln785_1393_fu_69530_p2 = (tmp_9724_reg_104124.read() | xor_ln785_1393_fu_69526_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1394_fu_65629_p2() {
    or_ln785_1394_fu_65629_p2 = (tmp_9729_fu_65601_p3.read() | xor_ln785_1394_fu_65623_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1395_fu_65829_p2() {
    or_ln785_1395_fu_65829_p2 = (tmp_9734_fu_65801_p3.read() | xor_ln785_1395_fu_65823_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1396_fu_66029_p2() {
    or_ln785_1396_fu_66029_p2 = (tmp_9739_fu_66001_p3.read() | xor_ln785_1396_fu_66023_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1397_fu_66241_p2() {
    or_ln785_1397_fu_66241_p2 = (tmp_9744_fu_66213_p3.read() | xor_ln785_1397_fu_66235_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1398_fu_66441_p2() {
    or_ln785_1398_fu_66441_p2 = (tmp_9749_fu_66413_p3.read() | xor_ln785_1398_fu_66435_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1399_fu_66641_p2() {
    or_ln785_1399_fu_66641_p2 = (tmp_9754_fu_66613_p3.read() | xor_ln785_1399_fu_66635_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1400_fu_66837_p2() {
    or_ln785_1400_fu_66837_p2 = (tmp_9759_fu_66809_p3.read() | xor_ln785_1400_fu_66831_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1401_fu_67048_p2() {
    or_ln785_1401_fu_67048_p2 = (tmp_9764_fu_67020_p3.read() | xor_ln785_1401_fu_67042_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1402_fu_69621_p2() {
    or_ln785_1402_fu_69621_p2 = (tmp_9769_reg_104199.read() | xor_ln785_1402_fu_69617_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1403_fu_69712_p2() {
    or_ln785_1403_fu_69712_p2 = (tmp_9774_reg_104226.read() | xor_ln785_1403_fu_69708_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1404_fu_69803_p2() {
    or_ln785_1404_fu_69803_p2 = (tmp_9779_reg_104253.read() | xor_ln785_1404_fu_69799_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1405_fu_70003_p2() {
    or_ln785_1405_fu_70003_p2 = (tmp_9784_fu_69975_p3.read() | xor_ln785_1405_fu_69997_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1406_fu_70199_p2() {
    or_ln785_1406_fu_70199_p2 = (tmp_9789_fu_70171_p3.read() | xor_ln785_1406_fu_70193_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1407_fu_70391_p2() {
    or_ln785_1407_fu_70391_p2 = (tmp_9794_fu_70363_p3.read() | xor_ln785_1407_fu_70385_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1408_fu_70619_p2() {
    or_ln785_1408_fu_70619_p2 = (tmp_9799_fu_70591_p3.read() | xor_ln785_1408_fu_70613_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1409_fu_70828_p2() {
    or_ln785_1409_fu_70828_p2 = (tmp_9804_fu_70800_p3.read() | xor_ln785_1409_fu_70822_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1410_fu_71024_p2() {
    or_ln785_1410_fu_71024_p2 = (tmp_9809_fu_70996_p3.read() | xor_ln785_1410_fu_71018_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1411_fu_71224_p2() {
    or_ln785_1411_fu_71224_p2 = (tmp_9814_fu_71196_p3.read() | xor_ln785_1411_fu_71218_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1412_fu_71424_p2() {
    or_ln785_1412_fu_71424_p2 = (tmp_9819_fu_71396_p3.read() | xor_ln785_1412_fu_71418_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1413_fu_71640_p2() {
    or_ln785_1413_fu_71640_p2 = (tmp_9824_fu_71612_p3.read() | xor_ln785_1413_fu_71634_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1414_fu_71836_p2() {
    or_ln785_1414_fu_71836_p2 = (tmp_9829_fu_71808_p3.read() | xor_ln785_1414_fu_71830_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1415_fu_72028_p2() {
    or_ln785_1415_fu_72028_p2 = (tmp_9834_fu_72000_p3.read() | xor_ln785_1415_fu_72022_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1416_fu_72224_p2() {
    or_ln785_1416_fu_72224_p2 = (tmp_9839_fu_72196_p3.read() | xor_ln785_1416_fu_72218_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1417_fu_72436_p2() {
    or_ln785_1417_fu_72436_p2 = (tmp_9844_fu_72408_p3.read() | xor_ln785_1417_fu_72430_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1418_fu_72636_p2() {
    or_ln785_1418_fu_72636_p2 = (tmp_9849_fu_72608_p3.read() | xor_ln785_1418_fu_72630_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1419_fu_72828_p2() {
    or_ln785_1419_fu_72828_p2 = (tmp_9854_fu_72800_p3.read() | xor_ln785_1419_fu_72822_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1420_fu_73028_p2() {
    or_ln785_1420_fu_73028_p2 = (tmp_9859_fu_73000_p3.read() | xor_ln785_1420_fu_73022_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1421_fu_75844_p2() {
    or_ln785_1421_fu_75844_p2 = (tmp_9864_reg_104457.read() | xor_ln785_1421_fu_75840_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1422_fu_73342_p2() {
    or_ln785_1422_fu_73342_p2 = (tmp_9869_fu_73314_p3.read() | xor_ln785_1422_fu_73336_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1423_fu_73538_p2() {
    or_ln785_1423_fu_73538_p2 = (tmp_9874_fu_73510_p3.read() | xor_ln785_1423_fu_73532_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1424_fu_75935_p2() {
    or_ln785_1424_fu_75935_p2 = (tmp_9879_reg_104496.read() | xor_ln785_1424_fu_75931_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1425_fu_76134_p2() {
    or_ln785_1425_fu_76134_p2 = (tmp_9884_fu_76106_p3.read() | xor_ln785_1425_fu_76128_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1426_fu_76368_p2() {
    or_ln785_1426_fu_76368_p2 = (tmp_9889_fu_76340_p3.read() | xor_ln785_1426_fu_76362_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1427_fu_76560_p2() {
    or_ln785_1427_fu_76560_p2 = (tmp_9894_fu_76532_p3.read() | xor_ln785_1427_fu_76554_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1428_fu_76809_p2() {
    or_ln785_1428_fu_76809_p2 = (tmp_9899_fu_76781_p3.read() | xor_ln785_1428_fu_76803_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1429_fu_77018_p2() {
    or_ln785_1429_fu_77018_p2 = (tmp_9904_fu_76990_p3.read() | xor_ln785_1429_fu_77012_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1430_fu_77218_p2() {
    or_ln785_1430_fu_77218_p2 = (tmp_9909_fu_77190_p3.read() | xor_ln785_1430_fu_77212_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1431_fu_77418_p2() {
    or_ln785_1431_fu_77418_p2 = (tmp_9914_fu_77390_p3.read() | xor_ln785_1431_fu_77412_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1432_fu_77618_p2() {
    or_ln785_1432_fu_77618_p2 = (tmp_9919_fu_77590_p3.read() | xor_ln785_1432_fu_77612_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1433_fu_77827_p2() {
    or_ln785_1433_fu_77827_p2 = (tmp_9924_fu_77799_p3.read() | xor_ln785_1433_fu_77821_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1434_fu_78055_p2() {
    or_ln785_1434_fu_78055_p2 = (tmp_9929_fu_78027_p3.read() | xor_ln785_1434_fu_78049_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1435_fu_78255_p2() {
    or_ln785_1435_fu_78255_p2 = (tmp_9934_fu_78227_p3.read() | xor_ln785_1435_fu_78249_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1436_fu_78455_p2() {
    or_ln785_1436_fu_78455_p2 = (tmp_9939_fu_78427_p3.read() | xor_ln785_1436_fu_78449_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1437_fu_78664_p2() {
    or_ln785_1437_fu_78664_p2 = (tmp_9944_fu_78636_p3.read() | xor_ln785_1437_fu_78658_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1438_fu_78864_p2() {
    or_ln785_1438_fu_78864_p2 = (tmp_9949_fu_78836_p3.read() | xor_ln785_1438_fu_78858_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1439_fu_79056_p2() {
    or_ln785_1439_fu_79056_p2 = (tmp_9954_fu_79028_p3.read() | xor_ln785_1439_fu_79050_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1440_fu_79252_p2() {
    or_ln785_1440_fu_79252_p2 = (tmp_9959_fu_79224_p3.read() | xor_ln785_1440_fu_79246_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1441_fu_79460_p2() {
    or_ln785_1441_fu_79460_p2 = (tmp_9964_fu_79432_p3.read() | xor_ln785_1441_fu_79454_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1442_fu_79652_p2() {
    or_ln785_1442_fu_79652_p2 = (tmp_9969_fu_79624_p3.read() | xor_ln785_1442_fu_79646_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1443_fu_82862_p2() {
    or_ln785_1443_fu_82862_p2 = (tmp_9974_reg_104717.read() | xor_ln785_1443_fu_82858_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1444_fu_82953_p2() {
    or_ln785_1444_fu_82953_p2 = (tmp_9979_reg_104744.read() | xor_ln785_1444_fu_82949_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1445_fu_80118_p2() {
    or_ln785_1445_fu_80118_p2 = (tmp_9984_fu_80090_p3.read() | xor_ln785_1445_fu_80112_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1446_fu_80314_p2() {
    or_ln785_1446_fu_80314_p2 = (tmp_9989_fu_80286_p3.read() | xor_ln785_1446_fu_80308_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1447_fu_80506_p2() {
    or_ln785_1447_fu_80506_p2 = (tmp_9994_fu_80478_p3.read() | xor_ln785_1447_fu_80500_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_or_ln785_1448_fu_80702_p2() {
    or_ln785_1448_fu_80702_p2 = (tmp_9999_fu_80674_p3.read() | xor_ln785_1448_fu_80696_p2.read());
}

}

