#include "conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_103_fu_5835_p3() {
    acc_0_V_103_fu_5835_p3 = (!and_ln786_1873_fu_5803_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1873_fu_5803_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_0_V_fu_5784_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_104_fu_5951_p2() {
    acc_0_V_104_fu_5951_p2 = (!select_ln340_2386_fu_5921_p3.read().is_01() || !select_ln340_2385_fu_5843_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2386_fu_5921_p3.read()) + sc_bigint<24>(select_ln340_2385_fu_5843_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_105_fu_6003_p3() {
    acc_0_V_105_fu_6003_p3 = (!and_ln786_1875_fu_5971_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1875_fu_5971_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_0_V_104_fu_5951_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_106_fu_6170_p2() {
    acc_0_V_106_fu_6170_p2 = (!select_ln340_2388_fu_6140_p3.read().is_01() || !select_ln340_2387_fu_6011_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2388_fu_6140_p3.read()) + sc_bigint<24>(select_ln340_2387_fu_6011_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_107_fu_6222_p3() {
    acc_0_V_107_fu_6222_p3 = (!and_ln786_1877_fu_6190_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1877_fu_6190_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_0_V_106_fu_6170_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_108_fu_6389_p2() {
    acc_0_V_108_fu_6389_p2 = (!select_ln340_2390_fu_6359_p3.read().is_01() || !select_ln340_2389_fu_6230_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2390_fu_6359_p3.read()) + sc_bigint<24>(select_ln340_2389_fu_6230_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_109_fu_6441_p3() {
    acc_0_V_109_fu_6441_p3 = (!and_ln786_1879_fu_6409_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1879_fu_6409_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_0_V_108_fu_6389_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_110_fu_6608_p2() {
    acc_0_V_110_fu_6608_p2 = (!select_ln340_2392_fu_6578_p3.read().is_01() || !select_ln340_2391_fu_6449_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2392_fu_6578_p3.read()) + sc_bigint<24>(select_ln340_2391_fu_6449_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_111_fu_6660_p3() {
    acc_0_V_111_fu_6660_p3 = (!and_ln786_1881_fu_6628_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1881_fu_6628_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_0_V_110_fu_6608_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_112_fu_6827_p2() {
    acc_0_V_112_fu_6827_p2 = (!select_ln340_2394_fu_6797_p3.read().is_01() || !select_ln340_2393_fu_6668_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2394_fu_6797_p3.read()) + sc_bigint<24>(select_ln340_2393_fu_6668_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_113_fu_6879_p3() {
    acc_0_V_113_fu_6879_p3 = (!and_ln786_1883_fu_6847_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1883_fu_6847_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_0_V_112_fu_6827_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_114_fu_7046_p2() {
    acc_0_V_114_fu_7046_p2 = (!select_ln340_2396_fu_7016_p3.read().is_01() || !select_ln340_2395_fu_6887_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2396_fu_7016_p3.read()) + sc_bigint<24>(select_ln340_2395_fu_6887_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_115_fu_7098_p3() {
    acc_0_V_115_fu_7098_p3 = (!and_ln786_1885_fu_7066_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1885_fu_7066_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_0_V_114_fu_7046_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_116_fu_7265_p2() {
    acc_0_V_116_fu_7265_p2 = (!select_ln340_2398_fu_7235_p3.read().is_01() || !select_ln340_2397_fu_7106_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2398_fu_7235_p3.read()) + sc_bigint<24>(select_ln340_2397_fu_7106_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_117_fu_7317_p3() {
    acc_0_V_117_fu_7317_p3 = (!and_ln786_1887_fu_7285_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1887_fu_7285_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_0_V_116_fu_7265_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_118_fu_7484_p2() {
    acc_0_V_118_fu_7484_p2 = (!select_ln340_2400_fu_7454_p3.read().is_01() || !select_ln340_2399_fu_7325_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2400_fu_7454_p3.read()) + sc_bigint<24>(select_ln340_2399_fu_7325_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_119_fu_7536_p3() {
    acc_0_V_119_fu_7536_p3 = (!and_ln786_1889_fu_7504_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1889_fu_7504_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_0_V_118_fu_7484_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_120_fu_7703_p2() {
    acc_0_V_120_fu_7703_p2 = (!select_ln340_2402_fu_7673_p3.read().is_01() || !select_ln340_2401_fu_7544_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2402_fu_7673_p3.read()) + sc_bigint<24>(select_ln340_2401_fu_7544_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_121_fu_7755_p3() {
    acc_0_V_121_fu_7755_p3 = (!and_ln786_1891_fu_7723_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1891_fu_7723_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_0_V_120_fu_7703_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_122_fu_7922_p2() {
    acc_0_V_122_fu_7922_p2 = (!select_ln340_2404_fu_7892_p3.read().is_01() || !select_ln340_2403_fu_7763_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2404_fu_7892_p3.read()) + sc_bigint<24>(select_ln340_2403_fu_7763_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_123_fu_7974_p3() {
    acc_0_V_123_fu_7974_p3 = (!and_ln786_1893_fu_7942_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1893_fu_7942_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_0_V_122_fu_7922_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_124_fu_8141_p2() {
    acc_0_V_124_fu_8141_p2 = (!select_ln340_2406_fu_8111_p3.read().is_01() || !select_ln340_2405_fu_7982_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2406_fu_8111_p3.read()) + sc_bigint<24>(select_ln340_2405_fu_7982_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_125_fu_8193_p3() {
    acc_0_V_125_fu_8193_p3 = (!and_ln786_1895_fu_8161_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1895_fu_8161_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_0_V_124_fu_8141_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_126_fu_8360_p2() {
    acc_0_V_126_fu_8360_p2 = (!select_ln340_2408_fu_8330_p3.read().is_01() || !select_ln340_2407_fu_8201_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2408_fu_8330_p3.read()) + sc_bigint<24>(select_ln340_2407_fu_8201_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_127_fu_8412_p3() {
    acc_0_V_127_fu_8412_p3 = (!and_ln786_1897_fu_8380_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1897_fu_8380_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_0_V_126_fu_8360_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_128_fu_8579_p2() {
    acc_0_V_128_fu_8579_p2 = (!select_ln340_2410_fu_8549_p3.read().is_01() || !select_ln340_2409_fu_8420_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2410_fu_8549_p3.read()) + sc_bigint<24>(select_ln340_2409_fu_8420_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_129_fu_8631_p3() {
    acc_0_V_129_fu_8631_p3 = (!and_ln786_1899_fu_8599_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1899_fu_8599_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_0_V_128_fu_8579_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_130_fu_8798_p2() {
    acc_0_V_130_fu_8798_p2 = (!select_ln340_2412_fu_8768_p3.read().is_01() || !select_ln340_2411_fu_8639_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2412_fu_8768_p3.read()) + sc_bigint<24>(select_ln340_2411_fu_8639_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_131_fu_8850_p3() {
    acc_0_V_131_fu_8850_p3 = (!and_ln786_1901_fu_8818_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1901_fu_8818_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_0_V_130_fu_8798_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_132_fu_9017_p2() {
    acc_0_V_132_fu_9017_p2 = (!select_ln340_2414_fu_8987_p3.read().is_01() || !select_ln340_2413_fu_8858_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2414_fu_8987_p3.read()) + sc_bigint<24>(select_ln340_2413_fu_8858_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_133_fu_9069_p3() {
    acc_0_V_133_fu_9069_p3 = (!and_ln786_1903_fu_9037_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1903_fu_9037_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_0_V_132_fu_9017_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_134_fu_9236_p2() {
    acc_0_V_134_fu_9236_p2 = (!select_ln340_2416_fu_9206_p3.read().is_01() || !select_ln340_2415_fu_9077_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2416_fu_9206_p3.read()) + sc_bigint<24>(select_ln340_2415_fu_9077_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_135_fu_9288_p3() {
    acc_0_V_135_fu_9288_p3 = (!and_ln786_1905_fu_9256_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1905_fu_9256_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_0_V_134_fu_9236_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_136_fu_9455_p2() {
    acc_0_V_136_fu_9455_p2 = (!select_ln340_2418_fu_9425_p3.read().is_01() || !select_ln340_2417_fu_9296_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2418_fu_9425_p3.read()) + sc_bigint<24>(select_ln340_2417_fu_9296_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_137_fu_9507_p3() {
    acc_0_V_137_fu_9507_p3 = (!and_ln786_1907_fu_9475_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1907_fu_9475_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_0_V_136_fu_9455_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_138_fu_9674_p2() {
    acc_0_V_138_fu_9674_p2 = (!select_ln340_2420_fu_9644_p3.read().is_01() || !select_ln340_2419_fu_9515_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2420_fu_9644_p3.read()) + sc_bigint<24>(select_ln340_2419_fu_9515_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_139_fu_9726_p3() {
    acc_0_V_139_fu_9726_p3 = (!and_ln786_1909_fu_9694_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1909_fu_9694_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_0_V_138_fu_9674_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_140_fu_9893_p2() {
    acc_0_V_140_fu_9893_p2 = (!select_ln340_2422_fu_9863_p3.read().is_01() || !select_ln340_2421_fu_9734_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2422_fu_9863_p3.read()) + sc_bigint<24>(select_ln340_2421_fu_9734_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_141_fu_9945_p3() {
    acc_0_V_141_fu_9945_p3 = (!and_ln786_1911_fu_9913_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1911_fu_9913_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_0_V_140_fu_9893_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_0_V_fu_5784_p2() {
    acc_0_V_fu_5784_p2 = (!select_ln340_2384_reg_23866.read().is_01() || !tmp_data_0_V_1611_reg_868.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2384_reg_23866.read()) + sc_bigint<24>(tmp_data_0_V_1611_reg_868.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_103_fu_10033_p3() {
    acc_1_V_103_fu_10033_p3 = (!and_ln786_1913_fu_10001_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1913_fu_10001_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_1_V_fu_9982_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_104_fu_10149_p2() {
    acc_1_V_104_fu_10149_p2 = (!select_ln340_2426_fu_10119_p3.read().is_01() || !select_ln340_2425_fu_10041_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2426_fu_10119_p3.read()) + sc_bigint<24>(select_ln340_2425_fu_10041_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_105_fu_10201_p3() {
    acc_1_V_105_fu_10201_p3 = (!and_ln786_1915_fu_10169_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1915_fu_10169_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_1_V_104_fu_10149_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_106_fu_10368_p2() {
    acc_1_V_106_fu_10368_p2 = (!select_ln340_2428_fu_10338_p3.read().is_01() || !select_ln340_2427_fu_10209_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2428_fu_10338_p3.read()) + sc_bigint<24>(select_ln340_2427_fu_10209_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_107_fu_10420_p3() {
    acc_1_V_107_fu_10420_p3 = (!and_ln786_1917_fu_10388_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1917_fu_10388_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_1_V_106_fu_10368_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_108_fu_10587_p2() {
    acc_1_V_108_fu_10587_p2 = (!select_ln340_2430_fu_10557_p3.read().is_01() || !select_ln340_2429_fu_10428_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2430_fu_10557_p3.read()) + sc_bigint<24>(select_ln340_2429_fu_10428_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_109_fu_10639_p3() {
    acc_1_V_109_fu_10639_p3 = (!and_ln786_1919_fu_10607_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1919_fu_10607_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_1_V_108_fu_10587_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_110_fu_10806_p2() {
    acc_1_V_110_fu_10806_p2 = (!select_ln340_2432_fu_10776_p3.read().is_01() || !select_ln340_2431_fu_10647_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2432_fu_10776_p3.read()) + sc_bigint<24>(select_ln340_2431_fu_10647_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_111_fu_10858_p3() {
    acc_1_V_111_fu_10858_p3 = (!and_ln786_1921_fu_10826_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1921_fu_10826_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_1_V_110_fu_10806_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_112_fu_11025_p2() {
    acc_1_V_112_fu_11025_p2 = (!select_ln340_2434_fu_10995_p3.read().is_01() || !select_ln340_2433_fu_10866_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2434_fu_10995_p3.read()) + sc_bigint<24>(select_ln340_2433_fu_10866_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_113_fu_11077_p3() {
    acc_1_V_113_fu_11077_p3 = (!and_ln786_1923_fu_11045_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1923_fu_11045_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_1_V_112_fu_11025_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_114_fu_11244_p2() {
    acc_1_V_114_fu_11244_p2 = (!select_ln340_2436_fu_11214_p3.read().is_01() || !select_ln340_2435_fu_11085_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2436_fu_11214_p3.read()) + sc_bigint<24>(select_ln340_2435_fu_11085_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_115_fu_11296_p3() {
    acc_1_V_115_fu_11296_p3 = (!and_ln786_1925_fu_11264_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1925_fu_11264_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_1_V_114_fu_11244_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_116_fu_11463_p2() {
    acc_1_V_116_fu_11463_p2 = (!select_ln340_2438_fu_11433_p3.read().is_01() || !select_ln340_2437_fu_11304_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2438_fu_11433_p3.read()) + sc_bigint<24>(select_ln340_2437_fu_11304_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_117_fu_11515_p3() {
    acc_1_V_117_fu_11515_p3 = (!and_ln786_1927_fu_11483_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1927_fu_11483_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_1_V_116_fu_11463_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_118_fu_11682_p2() {
    acc_1_V_118_fu_11682_p2 = (!select_ln340_2440_fu_11652_p3.read().is_01() || !select_ln340_2439_fu_11523_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2440_fu_11652_p3.read()) + sc_bigint<24>(select_ln340_2439_fu_11523_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_119_fu_11734_p3() {
    acc_1_V_119_fu_11734_p3 = (!and_ln786_1929_fu_11702_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1929_fu_11702_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_1_V_118_fu_11682_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_120_fu_11901_p2() {
    acc_1_V_120_fu_11901_p2 = (!select_ln340_2442_fu_11871_p3.read().is_01() || !select_ln340_2441_fu_11742_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2442_fu_11871_p3.read()) + sc_bigint<24>(select_ln340_2441_fu_11742_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_121_fu_11953_p3() {
    acc_1_V_121_fu_11953_p3 = (!and_ln786_1931_fu_11921_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1931_fu_11921_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_1_V_120_fu_11901_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_122_fu_12120_p2() {
    acc_1_V_122_fu_12120_p2 = (!select_ln340_2444_fu_12090_p3.read().is_01() || !select_ln340_2443_fu_11961_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2444_fu_12090_p3.read()) + sc_bigint<24>(select_ln340_2443_fu_11961_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_123_fu_12172_p3() {
    acc_1_V_123_fu_12172_p3 = (!and_ln786_1933_fu_12140_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1933_fu_12140_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_1_V_122_fu_12120_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_124_fu_12339_p2() {
    acc_1_V_124_fu_12339_p2 = (!select_ln340_2446_fu_12309_p3.read().is_01() || !select_ln340_2445_fu_12180_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2446_fu_12309_p3.read()) + sc_bigint<24>(select_ln340_2445_fu_12180_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_125_fu_12391_p3() {
    acc_1_V_125_fu_12391_p3 = (!and_ln786_1935_fu_12359_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1935_fu_12359_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_1_V_124_fu_12339_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_126_fu_12558_p2() {
    acc_1_V_126_fu_12558_p2 = (!select_ln340_2448_fu_12528_p3.read().is_01() || !select_ln340_2447_fu_12399_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2448_fu_12528_p3.read()) + sc_bigint<24>(select_ln340_2447_fu_12399_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_127_fu_12610_p3() {
    acc_1_V_127_fu_12610_p3 = (!and_ln786_1937_fu_12578_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1937_fu_12578_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_1_V_126_fu_12558_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_128_fu_12777_p2() {
    acc_1_V_128_fu_12777_p2 = (!select_ln340_2450_fu_12747_p3.read().is_01() || !select_ln340_2449_fu_12618_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2450_fu_12747_p3.read()) + sc_bigint<24>(select_ln340_2449_fu_12618_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_129_fu_12829_p3() {
    acc_1_V_129_fu_12829_p3 = (!and_ln786_1939_fu_12797_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1939_fu_12797_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_1_V_128_fu_12777_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_130_fu_12996_p2() {
    acc_1_V_130_fu_12996_p2 = (!select_ln340_2452_fu_12966_p3.read().is_01() || !select_ln340_2451_fu_12837_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2452_fu_12966_p3.read()) + sc_bigint<24>(select_ln340_2451_fu_12837_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_131_fu_13048_p3() {
    acc_1_V_131_fu_13048_p3 = (!and_ln786_1941_fu_13016_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1941_fu_13016_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_1_V_130_fu_12996_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_132_fu_13215_p2() {
    acc_1_V_132_fu_13215_p2 = (!select_ln340_2454_fu_13185_p3.read().is_01() || !select_ln340_2453_fu_13056_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2454_fu_13185_p3.read()) + sc_bigint<24>(select_ln340_2453_fu_13056_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_133_fu_13267_p3() {
    acc_1_V_133_fu_13267_p3 = (!and_ln786_1943_fu_13235_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1943_fu_13235_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_1_V_132_fu_13215_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_134_fu_13434_p2() {
    acc_1_V_134_fu_13434_p2 = (!select_ln340_2456_fu_13404_p3.read().is_01() || !select_ln340_2455_fu_13275_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2456_fu_13404_p3.read()) + sc_bigint<24>(select_ln340_2455_fu_13275_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_135_fu_13486_p3() {
    acc_1_V_135_fu_13486_p3 = (!and_ln786_1945_fu_13454_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1945_fu_13454_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_1_V_134_fu_13434_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_136_fu_13653_p2() {
    acc_1_V_136_fu_13653_p2 = (!select_ln340_2458_fu_13623_p3.read().is_01() || !select_ln340_2457_fu_13494_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2458_fu_13623_p3.read()) + sc_bigint<24>(select_ln340_2457_fu_13494_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_137_fu_13705_p3() {
    acc_1_V_137_fu_13705_p3 = (!and_ln786_1947_fu_13673_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1947_fu_13673_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_1_V_136_fu_13653_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_138_fu_13872_p2() {
    acc_1_V_138_fu_13872_p2 = (!select_ln340_2460_fu_13842_p3.read().is_01() || !select_ln340_2459_fu_13713_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2460_fu_13842_p3.read()) + sc_bigint<24>(select_ln340_2459_fu_13713_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_139_fu_13924_p3() {
    acc_1_V_139_fu_13924_p3 = (!and_ln786_1949_fu_13892_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1949_fu_13892_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_1_V_138_fu_13872_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_140_fu_14091_p2() {
    acc_1_V_140_fu_14091_p2 = (!select_ln340_2462_fu_14061_p3.read().is_01() || !select_ln340_2461_fu_13932_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2462_fu_14061_p3.read()) + sc_bigint<24>(select_ln340_2461_fu_13932_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_141_fu_14143_p3() {
    acc_1_V_141_fu_14143_p3 = (!and_ln786_1951_fu_14111_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1951_fu_14111_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_1_V_140_fu_14091_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_1_V_fu_9982_p2() {
    acc_1_V_fu_9982_p2 = (!select_ln340_2424_reg_24428.read().is_01() || !tmp_data_1_V_139_reg_879.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2424_reg_24428.read()) + sc_bigint<24>(tmp_data_1_V_139_reg_879.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_103_fu_14231_p3() {
    acc_2_V_103_fu_14231_p3 = (!and_ln786_1953_fu_14199_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1953_fu_14199_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_2_V_fu_14180_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_104_fu_14347_p2() {
    acc_2_V_104_fu_14347_p2 = (!select_ln340_2466_fu_14317_p3.read().is_01() || !select_ln340_2465_fu_14239_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2466_fu_14317_p3.read()) + sc_bigint<24>(select_ln340_2465_fu_14239_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_105_fu_14399_p3() {
    acc_2_V_105_fu_14399_p3 = (!and_ln786_1955_fu_14367_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1955_fu_14367_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_2_V_104_fu_14347_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_106_fu_14566_p2() {
    acc_2_V_106_fu_14566_p2 = (!select_ln340_2468_fu_14536_p3.read().is_01() || !select_ln340_2467_fu_14407_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2468_fu_14536_p3.read()) + sc_bigint<24>(select_ln340_2467_fu_14407_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_107_fu_14618_p3() {
    acc_2_V_107_fu_14618_p3 = (!and_ln786_1957_fu_14586_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1957_fu_14586_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_2_V_106_fu_14566_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_108_fu_14785_p2() {
    acc_2_V_108_fu_14785_p2 = (!select_ln340_2470_fu_14755_p3.read().is_01() || !select_ln340_2469_fu_14626_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2470_fu_14755_p3.read()) + sc_bigint<24>(select_ln340_2469_fu_14626_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_109_fu_14837_p3() {
    acc_2_V_109_fu_14837_p3 = (!and_ln786_1959_fu_14805_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1959_fu_14805_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_2_V_108_fu_14785_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_110_fu_15004_p2() {
    acc_2_V_110_fu_15004_p2 = (!select_ln340_2472_fu_14974_p3.read().is_01() || !select_ln340_2471_fu_14845_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2472_fu_14974_p3.read()) + sc_bigint<24>(select_ln340_2471_fu_14845_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_111_fu_15056_p3() {
    acc_2_V_111_fu_15056_p3 = (!and_ln786_1961_fu_15024_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1961_fu_15024_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_2_V_110_fu_15004_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_112_fu_15223_p2() {
    acc_2_V_112_fu_15223_p2 = (!select_ln340_2474_fu_15193_p3.read().is_01() || !select_ln340_2473_fu_15064_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2474_fu_15193_p3.read()) + sc_bigint<24>(select_ln340_2473_fu_15064_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_113_fu_15275_p3() {
    acc_2_V_113_fu_15275_p3 = (!and_ln786_1963_fu_15243_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1963_fu_15243_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_2_V_112_fu_15223_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_114_fu_15442_p2() {
    acc_2_V_114_fu_15442_p2 = (!select_ln340_2476_fu_15412_p3.read().is_01() || !select_ln340_2475_fu_15283_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2476_fu_15412_p3.read()) + sc_bigint<24>(select_ln340_2475_fu_15283_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_115_fu_15494_p3() {
    acc_2_V_115_fu_15494_p3 = (!and_ln786_1965_fu_15462_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1965_fu_15462_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_2_V_114_fu_15442_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_116_fu_15661_p2() {
    acc_2_V_116_fu_15661_p2 = (!select_ln340_2478_fu_15631_p3.read().is_01() || !select_ln340_2477_fu_15502_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2478_fu_15631_p3.read()) + sc_bigint<24>(select_ln340_2477_fu_15502_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_117_fu_15713_p3() {
    acc_2_V_117_fu_15713_p3 = (!and_ln786_1967_fu_15681_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1967_fu_15681_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_2_V_116_fu_15661_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_118_fu_15880_p2() {
    acc_2_V_118_fu_15880_p2 = (!select_ln340_2480_fu_15850_p3.read().is_01() || !select_ln340_2479_fu_15721_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2480_fu_15850_p3.read()) + sc_bigint<24>(select_ln340_2479_fu_15721_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_119_fu_15932_p3() {
    acc_2_V_119_fu_15932_p3 = (!and_ln786_1969_fu_15900_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1969_fu_15900_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_2_V_118_fu_15880_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_120_fu_16099_p2() {
    acc_2_V_120_fu_16099_p2 = (!select_ln340_2482_fu_16069_p3.read().is_01() || !select_ln340_2481_fu_15940_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2482_fu_16069_p3.read()) + sc_bigint<24>(select_ln340_2481_fu_15940_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_121_fu_16151_p3() {
    acc_2_V_121_fu_16151_p3 = (!and_ln786_1971_fu_16119_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1971_fu_16119_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_2_V_120_fu_16099_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_122_fu_16318_p2() {
    acc_2_V_122_fu_16318_p2 = (!select_ln340_2484_fu_16288_p3.read().is_01() || !select_ln340_2483_fu_16159_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2484_fu_16288_p3.read()) + sc_bigint<24>(select_ln340_2483_fu_16159_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_123_fu_16370_p3() {
    acc_2_V_123_fu_16370_p3 = (!and_ln786_1973_fu_16338_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1973_fu_16338_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_2_V_122_fu_16318_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_124_fu_16537_p2() {
    acc_2_V_124_fu_16537_p2 = (!select_ln340_2486_fu_16507_p3.read().is_01() || !select_ln340_2485_fu_16378_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2486_fu_16507_p3.read()) + sc_bigint<24>(select_ln340_2485_fu_16378_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_125_fu_16589_p3() {
    acc_2_V_125_fu_16589_p3 = (!and_ln786_1975_fu_16557_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1975_fu_16557_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_2_V_124_fu_16537_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_126_fu_16756_p2() {
    acc_2_V_126_fu_16756_p2 = (!select_ln340_2488_fu_16726_p3.read().is_01() || !select_ln340_2487_fu_16597_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2488_fu_16726_p3.read()) + sc_bigint<24>(select_ln340_2487_fu_16597_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_127_fu_16808_p3() {
    acc_2_V_127_fu_16808_p3 = (!and_ln786_1977_fu_16776_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1977_fu_16776_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_2_V_126_fu_16756_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_128_fu_16975_p2() {
    acc_2_V_128_fu_16975_p2 = (!select_ln340_2490_fu_16945_p3.read().is_01() || !select_ln340_2489_fu_16816_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2490_fu_16945_p3.read()) + sc_bigint<24>(select_ln340_2489_fu_16816_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_129_fu_17027_p3() {
    acc_2_V_129_fu_17027_p3 = (!and_ln786_1979_fu_16995_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1979_fu_16995_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_2_V_128_fu_16975_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_130_fu_17194_p2() {
    acc_2_V_130_fu_17194_p2 = (!select_ln340_2492_fu_17164_p3.read().is_01() || !select_ln340_2491_fu_17035_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2492_fu_17164_p3.read()) + sc_bigint<24>(select_ln340_2491_fu_17035_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_131_fu_17246_p3() {
    acc_2_V_131_fu_17246_p3 = (!and_ln786_1981_fu_17214_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1981_fu_17214_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_2_V_130_fu_17194_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_132_fu_17413_p2() {
    acc_2_V_132_fu_17413_p2 = (!select_ln340_2494_fu_17383_p3.read().is_01() || !select_ln340_2493_fu_17254_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2494_fu_17383_p3.read()) + sc_bigint<24>(select_ln340_2493_fu_17254_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_133_fu_17465_p3() {
    acc_2_V_133_fu_17465_p3 = (!and_ln786_1983_fu_17433_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1983_fu_17433_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_2_V_132_fu_17413_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_134_fu_17632_p2() {
    acc_2_V_134_fu_17632_p2 = (!select_ln340_2496_fu_17602_p3.read().is_01() || !select_ln340_2495_fu_17473_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2496_fu_17602_p3.read()) + sc_bigint<24>(select_ln340_2495_fu_17473_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_135_fu_17684_p3() {
    acc_2_V_135_fu_17684_p3 = (!and_ln786_1985_fu_17652_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1985_fu_17652_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_2_V_134_fu_17632_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_136_fu_17851_p2() {
    acc_2_V_136_fu_17851_p2 = (!select_ln340_2498_fu_17821_p3.read().is_01() || !select_ln340_2497_fu_17692_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2498_fu_17821_p3.read()) + sc_bigint<24>(select_ln340_2497_fu_17692_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_137_fu_17903_p3() {
    acc_2_V_137_fu_17903_p3 = (!and_ln786_1987_fu_17871_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1987_fu_17871_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_2_V_136_fu_17851_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_138_fu_18070_p2() {
    acc_2_V_138_fu_18070_p2 = (!select_ln340_2500_fu_18040_p3.read().is_01() || !select_ln340_2499_fu_17911_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2500_fu_18040_p3.read()) + sc_bigint<24>(select_ln340_2499_fu_17911_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_139_fu_18122_p3() {
    acc_2_V_139_fu_18122_p3 = (!and_ln786_1989_fu_18090_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1989_fu_18090_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_2_V_138_fu_18070_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_140_fu_18289_p2() {
    acc_2_V_140_fu_18289_p2 = (!select_ln340_2502_fu_18259_p3.read().is_01() || !select_ln340_2501_fu_18130_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2502_fu_18259_p3.read()) + sc_bigint<24>(select_ln340_2501_fu_18130_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_141_fu_18341_p3() {
    acc_2_V_141_fu_18341_p3 = (!and_ln786_1991_fu_18309_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1991_fu_18309_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_2_V_140_fu_18289_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_2_V_fu_14180_p2() {
    acc_2_V_fu_14180_p2 = (!select_ln340_2464_reg_24990.read().is_01() || !tmp_data_2_V_137_reg_890.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2464_reg_24990.read()) + sc_bigint<24>(tmp_data_2_V_137_reg_890.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_103_fu_18429_p3() {
    acc_3_V_103_fu_18429_p3 = (!and_ln786_1993_fu_18397_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1993_fu_18397_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_3_V_fu_18378_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_104_fu_18545_p2() {
    acc_3_V_104_fu_18545_p2 = (!select_ln340_2506_fu_18515_p3.read().is_01() || !select_ln340_2505_fu_18437_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2506_fu_18515_p3.read()) + sc_bigint<24>(select_ln340_2505_fu_18437_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_105_fu_18597_p3() {
    acc_3_V_105_fu_18597_p3 = (!and_ln786_1995_fu_18565_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1995_fu_18565_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_3_V_104_fu_18545_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_106_fu_18764_p2() {
    acc_3_V_106_fu_18764_p2 = (!select_ln340_2508_fu_18734_p3.read().is_01() || !select_ln340_2507_fu_18605_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2508_fu_18734_p3.read()) + sc_bigint<24>(select_ln340_2507_fu_18605_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_107_fu_18816_p3() {
    acc_3_V_107_fu_18816_p3 = (!and_ln786_1997_fu_18784_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1997_fu_18784_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_3_V_106_fu_18764_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_108_fu_18983_p2() {
    acc_3_V_108_fu_18983_p2 = (!select_ln340_2510_fu_18953_p3.read().is_01() || !select_ln340_2509_fu_18824_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2510_fu_18953_p3.read()) + sc_bigint<24>(select_ln340_2509_fu_18824_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_109_fu_19035_p3() {
    acc_3_V_109_fu_19035_p3 = (!and_ln786_1999_fu_19003_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_1999_fu_19003_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_3_V_108_fu_18983_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_110_fu_19202_p2() {
    acc_3_V_110_fu_19202_p2 = (!select_ln340_2512_fu_19172_p3.read().is_01() || !select_ln340_2511_fu_19043_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2512_fu_19172_p3.read()) + sc_bigint<24>(select_ln340_2511_fu_19043_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_111_fu_19254_p3() {
    acc_3_V_111_fu_19254_p3 = (!and_ln786_2001_fu_19222_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_2001_fu_19222_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_3_V_110_fu_19202_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_112_fu_19421_p2() {
    acc_3_V_112_fu_19421_p2 = (!select_ln340_2514_fu_19391_p3.read().is_01() || !select_ln340_2513_fu_19262_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2514_fu_19391_p3.read()) + sc_bigint<24>(select_ln340_2513_fu_19262_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_113_fu_19473_p3() {
    acc_3_V_113_fu_19473_p3 = (!and_ln786_2003_fu_19441_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_2003_fu_19441_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_3_V_112_fu_19421_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_114_fu_19640_p2() {
    acc_3_V_114_fu_19640_p2 = (!select_ln340_2516_fu_19610_p3.read().is_01() || !select_ln340_2515_fu_19481_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2516_fu_19610_p3.read()) + sc_bigint<24>(select_ln340_2515_fu_19481_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_115_fu_19692_p3() {
    acc_3_V_115_fu_19692_p3 = (!and_ln786_2005_fu_19660_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_2005_fu_19660_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_3_V_114_fu_19640_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_116_fu_19859_p2() {
    acc_3_V_116_fu_19859_p2 = (!select_ln340_2518_fu_19829_p3.read().is_01() || !select_ln340_2517_fu_19700_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2518_fu_19829_p3.read()) + sc_bigint<24>(select_ln340_2517_fu_19700_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_117_fu_19911_p3() {
    acc_3_V_117_fu_19911_p3 = (!and_ln786_2007_fu_19879_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_2007_fu_19879_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_3_V_116_fu_19859_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_118_fu_20078_p2() {
    acc_3_V_118_fu_20078_p2 = (!select_ln340_2520_fu_20048_p3.read().is_01() || !select_ln340_2519_fu_19919_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2520_fu_20048_p3.read()) + sc_bigint<24>(select_ln340_2519_fu_19919_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_119_fu_20130_p3() {
    acc_3_V_119_fu_20130_p3 = (!and_ln786_2009_fu_20098_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_2009_fu_20098_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_3_V_118_fu_20078_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_120_fu_20297_p2() {
    acc_3_V_120_fu_20297_p2 = (!select_ln340_2522_fu_20267_p3.read().is_01() || !select_ln340_2521_fu_20138_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2522_fu_20267_p3.read()) + sc_bigint<24>(select_ln340_2521_fu_20138_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_121_fu_20349_p3() {
    acc_3_V_121_fu_20349_p3 = (!and_ln786_2011_fu_20317_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_2011_fu_20317_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_3_V_120_fu_20297_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_122_fu_20516_p2() {
    acc_3_V_122_fu_20516_p2 = (!select_ln340_2524_fu_20486_p3.read().is_01() || !select_ln340_2523_fu_20357_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2524_fu_20486_p3.read()) + sc_bigint<24>(select_ln340_2523_fu_20357_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_123_fu_20568_p3() {
    acc_3_V_123_fu_20568_p3 = (!and_ln786_2013_fu_20536_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_2013_fu_20536_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_3_V_122_fu_20516_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_124_fu_20735_p2() {
    acc_3_V_124_fu_20735_p2 = (!select_ln340_2526_fu_20705_p3.read().is_01() || !select_ln340_2525_fu_20576_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2526_fu_20705_p3.read()) + sc_bigint<24>(select_ln340_2525_fu_20576_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_125_fu_20787_p3() {
    acc_3_V_125_fu_20787_p3 = (!and_ln786_2015_fu_20755_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_2015_fu_20755_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_3_V_124_fu_20735_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_126_fu_20954_p2() {
    acc_3_V_126_fu_20954_p2 = (!select_ln340_2528_fu_20924_p3.read().is_01() || !select_ln340_2527_fu_20795_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2528_fu_20924_p3.read()) + sc_bigint<24>(select_ln340_2527_fu_20795_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_127_fu_21006_p3() {
    acc_3_V_127_fu_21006_p3 = (!and_ln786_2017_fu_20974_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_2017_fu_20974_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_3_V_126_fu_20954_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_128_fu_21173_p2() {
    acc_3_V_128_fu_21173_p2 = (!select_ln340_2530_fu_21143_p3.read().is_01() || !select_ln340_2529_fu_21014_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2530_fu_21143_p3.read()) + sc_bigint<24>(select_ln340_2529_fu_21014_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_129_fu_21225_p3() {
    acc_3_V_129_fu_21225_p3 = (!and_ln786_2019_fu_21193_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_2019_fu_21193_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_3_V_128_fu_21173_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_130_fu_21392_p2() {
    acc_3_V_130_fu_21392_p2 = (!select_ln340_2532_fu_21362_p3.read().is_01() || !select_ln340_2531_fu_21233_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2532_fu_21362_p3.read()) + sc_bigint<24>(select_ln340_2531_fu_21233_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_131_fu_21444_p3() {
    acc_3_V_131_fu_21444_p3 = (!and_ln786_2021_fu_21412_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_2021_fu_21412_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_3_V_130_fu_21392_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_132_fu_21611_p2() {
    acc_3_V_132_fu_21611_p2 = (!select_ln340_2534_fu_21581_p3.read().is_01() || !select_ln340_2533_fu_21452_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2534_fu_21581_p3.read()) + sc_bigint<24>(select_ln340_2533_fu_21452_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_133_fu_21663_p3() {
    acc_3_V_133_fu_21663_p3 = (!and_ln786_2023_fu_21631_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_2023_fu_21631_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_3_V_132_fu_21611_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_134_fu_21830_p2() {
    acc_3_V_134_fu_21830_p2 = (!select_ln340_2536_fu_21800_p3.read().is_01() || !select_ln340_2535_fu_21671_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2536_fu_21800_p3.read()) + sc_bigint<24>(select_ln340_2535_fu_21671_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_135_fu_21882_p3() {
    acc_3_V_135_fu_21882_p3 = (!and_ln786_2025_fu_21850_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_2025_fu_21850_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_3_V_134_fu_21830_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_136_fu_22049_p2() {
    acc_3_V_136_fu_22049_p2 = (!select_ln340_2538_fu_22019_p3.read().is_01() || !select_ln340_2537_fu_21890_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2538_fu_22019_p3.read()) + sc_bigint<24>(select_ln340_2537_fu_21890_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_137_fu_22101_p3() {
    acc_3_V_137_fu_22101_p3 = (!and_ln786_2027_fu_22069_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_2027_fu_22069_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_3_V_136_fu_22049_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_138_fu_22268_p2() {
    acc_3_V_138_fu_22268_p2 = (!select_ln340_2540_fu_22238_p3.read().is_01() || !select_ln340_2539_fu_22109_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2540_fu_22238_p3.read()) + sc_bigint<24>(select_ln340_2539_fu_22109_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_139_fu_22320_p3() {
    acc_3_V_139_fu_22320_p3 = (!and_ln786_2029_fu_22288_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_2029_fu_22288_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_3_V_138_fu_22268_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_140_fu_22487_p2() {
    acc_3_V_140_fu_22487_p2 = (!select_ln340_2542_fu_22457_p3.read().is_01() || !select_ln340_2541_fu_22328_p3.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2542_fu_22457_p3.read()) + sc_bigint<24>(select_ln340_2541_fu_22328_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_141_fu_22539_p3() {
    acc_3_V_141_fu_22539_p3 = (!and_ln786_2031_fu_22507_p2.read()[0].is_01())? sc_lv<24>(): ((and_ln786_2031_fu_22507_p2.read()[0].to_bool())? ap_const_lv24_800000: acc_3_V_140_fu_22487_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_acc_3_V_fu_18378_p2() {
    acc_3_V_fu_18378_p2 = (!select_ln340_2504_reg_25552.read().is_01() || !tmp_data_3_V_135_reg_901.read().is_01())? sc_lv<24>(): (sc_bigint<24>(select_ln340_2504_reg_25552.read()) + sc_bigint<24>(tmp_data_3_V_135_reg_901.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_678_fu_5937_p2() {
    add_ln1192_678_fu_5937_p2 = (!sext_ln703_1359_fu_5929_p1.read().is_01() || !sext_ln703_1360_fu_5933_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1359_fu_5929_p1.read()) + sc_bigint<25>(sext_ln703_1360_fu_5933_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_679_fu_6156_p2() {
    add_ln1192_679_fu_6156_p2 = (!sext_ln703_1361_fu_6148_p1.read().is_01() || !sext_ln703_1362_fu_6152_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1361_fu_6148_p1.read()) + sc_bigint<25>(sext_ln703_1362_fu_6152_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_680_fu_6375_p2() {
    add_ln1192_680_fu_6375_p2 = (!sext_ln703_1363_fu_6367_p1.read().is_01() || !sext_ln703_1364_fu_6371_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1363_fu_6367_p1.read()) + sc_bigint<25>(sext_ln703_1364_fu_6371_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_681_fu_6594_p2() {
    add_ln1192_681_fu_6594_p2 = (!sext_ln703_1365_fu_6586_p1.read().is_01() || !sext_ln703_1366_fu_6590_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1365_fu_6586_p1.read()) + sc_bigint<25>(sext_ln703_1366_fu_6590_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_682_fu_6813_p2() {
    add_ln1192_682_fu_6813_p2 = (!sext_ln703_1367_fu_6805_p1.read().is_01() || !sext_ln703_1368_fu_6809_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1367_fu_6805_p1.read()) + sc_bigint<25>(sext_ln703_1368_fu_6809_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_683_fu_7032_p2() {
    add_ln1192_683_fu_7032_p2 = (!sext_ln703_1369_fu_7024_p1.read().is_01() || !sext_ln703_1370_fu_7028_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1369_fu_7024_p1.read()) + sc_bigint<25>(sext_ln703_1370_fu_7028_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_684_fu_7251_p2() {
    add_ln1192_684_fu_7251_p2 = (!sext_ln703_1371_fu_7243_p1.read().is_01() || !sext_ln703_1372_fu_7247_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1371_fu_7243_p1.read()) + sc_bigint<25>(sext_ln703_1372_fu_7247_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_685_fu_7470_p2() {
    add_ln1192_685_fu_7470_p2 = (!sext_ln703_1373_fu_7462_p1.read().is_01() || !sext_ln703_1374_fu_7466_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1373_fu_7462_p1.read()) + sc_bigint<25>(sext_ln703_1374_fu_7466_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_686_fu_7689_p2() {
    add_ln1192_686_fu_7689_p2 = (!sext_ln703_1375_fu_7681_p1.read().is_01() || !sext_ln703_1376_fu_7685_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1375_fu_7681_p1.read()) + sc_bigint<25>(sext_ln703_1376_fu_7685_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_687_fu_7908_p2() {
    add_ln1192_687_fu_7908_p2 = (!sext_ln703_1377_fu_7900_p1.read().is_01() || !sext_ln703_1378_fu_7904_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1377_fu_7900_p1.read()) + sc_bigint<25>(sext_ln703_1378_fu_7904_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_688_fu_8127_p2() {
    add_ln1192_688_fu_8127_p2 = (!sext_ln703_1379_fu_8119_p1.read().is_01() || !sext_ln703_1380_fu_8123_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1379_fu_8119_p1.read()) + sc_bigint<25>(sext_ln703_1380_fu_8123_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_689_fu_8346_p2() {
    add_ln1192_689_fu_8346_p2 = (!sext_ln703_1381_fu_8338_p1.read().is_01() || !sext_ln703_1382_fu_8342_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1381_fu_8338_p1.read()) + sc_bigint<25>(sext_ln703_1382_fu_8342_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_690_fu_8565_p2() {
    add_ln1192_690_fu_8565_p2 = (!sext_ln703_1383_fu_8557_p1.read().is_01() || !sext_ln703_1384_fu_8561_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1383_fu_8557_p1.read()) + sc_bigint<25>(sext_ln703_1384_fu_8561_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_691_fu_8784_p2() {
    add_ln1192_691_fu_8784_p2 = (!sext_ln703_1385_fu_8776_p1.read().is_01() || !sext_ln703_1386_fu_8780_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1385_fu_8776_p1.read()) + sc_bigint<25>(sext_ln703_1386_fu_8780_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_692_fu_9003_p2() {
    add_ln1192_692_fu_9003_p2 = (!sext_ln703_1387_fu_8995_p1.read().is_01() || !sext_ln703_1388_fu_8999_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1387_fu_8995_p1.read()) + sc_bigint<25>(sext_ln703_1388_fu_8999_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_693_fu_9222_p2() {
    add_ln1192_693_fu_9222_p2 = (!sext_ln703_1389_fu_9214_p1.read().is_01() || !sext_ln703_1390_fu_9218_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1389_fu_9214_p1.read()) + sc_bigint<25>(sext_ln703_1390_fu_9218_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_694_fu_9441_p2() {
    add_ln1192_694_fu_9441_p2 = (!sext_ln703_1391_fu_9433_p1.read().is_01() || !sext_ln703_1392_fu_9437_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1391_fu_9433_p1.read()) + sc_bigint<25>(sext_ln703_1392_fu_9437_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_695_fu_9660_p2() {
    add_ln1192_695_fu_9660_p2 = (!sext_ln703_1393_fu_9652_p1.read().is_01() || !sext_ln703_1394_fu_9656_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1393_fu_9652_p1.read()) + sc_bigint<25>(sext_ln703_1394_fu_9656_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_696_fu_9879_p2() {
    add_ln1192_696_fu_9879_p2 = (!sext_ln703_1395_fu_9871_p1.read().is_01() || !sext_ln703_1396_fu_9875_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1395_fu_9871_p1.read()) + sc_bigint<25>(sext_ln703_1396_fu_9875_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_697_fu_9968_p2() {
    add_ln1192_697_fu_9968_p2 = (!sext_ln703_1397_fu_9961_p1.read().is_01() || !sext_ln703_1398_fu_9965_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1397_fu_9961_p1.read()) + sc_bigint<25>(sext_ln703_1398_fu_9965_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_698_fu_10135_p2() {
    add_ln1192_698_fu_10135_p2 = (!sext_ln703_1399_fu_10127_p1.read().is_01() || !sext_ln703_1400_fu_10131_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1399_fu_10127_p1.read()) + sc_bigint<25>(sext_ln703_1400_fu_10131_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_699_fu_10354_p2() {
    add_ln1192_699_fu_10354_p2 = (!sext_ln703_1401_fu_10346_p1.read().is_01() || !sext_ln703_1402_fu_10350_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1401_fu_10346_p1.read()) + sc_bigint<25>(sext_ln703_1402_fu_10350_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_700_fu_10573_p2() {
    add_ln1192_700_fu_10573_p2 = (!sext_ln703_1403_fu_10565_p1.read().is_01() || !sext_ln703_1404_fu_10569_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1403_fu_10565_p1.read()) + sc_bigint<25>(sext_ln703_1404_fu_10569_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_701_fu_10792_p2() {
    add_ln1192_701_fu_10792_p2 = (!sext_ln703_1405_fu_10784_p1.read().is_01() || !sext_ln703_1406_fu_10788_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1405_fu_10784_p1.read()) + sc_bigint<25>(sext_ln703_1406_fu_10788_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_702_fu_11011_p2() {
    add_ln1192_702_fu_11011_p2 = (!sext_ln703_1407_fu_11003_p1.read().is_01() || !sext_ln703_1408_fu_11007_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1407_fu_11003_p1.read()) + sc_bigint<25>(sext_ln703_1408_fu_11007_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_703_fu_11230_p2() {
    add_ln1192_703_fu_11230_p2 = (!sext_ln703_1409_fu_11222_p1.read().is_01() || !sext_ln703_1410_fu_11226_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1409_fu_11222_p1.read()) + sc_bigint<25>(sext_ln703_1410_fu_11226_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_704_fu_11449_p2() {
    add_ln1192_704_fu_11449_p2 = (!sext_ln703_1411_fu_11441_p1.read().is_01() || !sext_ln703_1412_fu_11445_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1411_fu_11441_p1.read()) + sc_bigint<25>(sext_ln703_1412_fu_11445_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_705_fu_11668_p2() {
    add_ln1192_705_fu_11668_p2 = (!sext_ln703_1413_fu_11660_p1.read().is_01() || !sext_ln703_1414_fu_11664_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1413_fu_11660_p1.read()) + sc_bigint<25>(sext_ln703_1414_fu_11664_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_706_fu_11887_p2() {
    add_ln1192_706_fu_11887_p2 = (!sext_ln703_1415_fu_11879_p1.read().is_01() || !sext_ln703_1416_fu_11883_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1415_fu_11879_p1.read()) + sc_bigint<25>(sext_ln703_1416_fu_11883_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_707_fu_12106_p2() {
    add_ln1192_707_fu_12106_p2 = (!sext_ln703_1417_fu_12098_p1.read().is_01() || !sext_ln703_1418_fu_12102_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1417_fu_12098_p1.read()) + sc_bigint<25>(sext_ln703_1418_fu_12102_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_708_fu_12325_p2() {
    add_ln1192_708_fu_12325_p2 = (!sext_ln703_1419_fu_12317_p1.read().is_01() || !sext_ln703_1420_fu_12321_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1419_fu_12317_p1.read()) + sc_bigint<25>(sext_ln703_1420_fu_12321_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_709_fu_12544_p2() {
    add_ln1192_709_fu_12544_p2 = (!sext_ln703_1421_fu_12536_p1.read().is_01() || !sext_ln703_1422_fu_12540_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1421_fu_12536_p1.read()) + sc_bigint<25>(sext_ln703_1422_fu_12540_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_710_fu_12763_p2() {
    add_ln1192_710_fu_12763_p2 = (!sext_ln703_1423_fu_12755_p1.read().is_01() || !sext_ln703_1424_fu_12759_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1423_fu_12755_p1.read()) + sc_bigint<25>(sext_ln703_1424_fu_12759_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_711_fu_12982_p2() {
    add_ln1192_711_fu_12982_p2 = (!sext_ln703_1425_fu_12974_p1.read().is_01() || !sext_ln703_1426_fu_12978_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1425_fu_12974_p1.read()) + sc_bigint<25>(sext_ln703_1426_fu_12978_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_712_fu_13201_p2() {
    add_ln1192_712_fu_13201_p2 = (!sext_ln703_1427_fu_13193_p1.read().is_01() || !sext_ln703_1428_fu_13197_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1427_fu_13193_p1.read()) + sc_bigint<25>(sext_ln703_1428_fu_13197_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_713_fu_13420_p2() {
    add_ln1192_713_fu_13420_p2 = (!sext_ln703_1429_fu_13412_p1.read().is_01() || !sext_ln703_1430_fu_13416_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1429_fu_13412_p1.read()) + sc_bigint<25>(sext_ln703_1430_fu_13416_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_714_fu_13639_p2() {
    add_ln1192_714_fu_13639_p2 = (!sext_ln703_1431_fu_13631_p1.read().is_01() || !sext_ln703_1432_fu_13635_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1431_fu_13631_p1.read()) + sc_bigint<25>(sext_ln703_1432_fu_13635_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_715_fu_13858_p2() {
    add_ln1192_715_fu_13858_p2 = (!sext_ln703_1433_fu_13850_p1.read().is_01() || !sext_ln703_1434_fu_13854_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1433_fu_13850_p1.read()) + sc_bigint<25>(sext_ln703_1434_fu_13854_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_716_fu_14077_p2() {
    add_ln1192_716_fu_14077_p2 = (!sext_ln703_1435_fu_14069_p1.read().is_01() || !sext_ln703_1436_fu_14073_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1435_fu_14069_p1.read()) + sc_bigint<25>(sext_ln703_1436_fu_14073_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_717_fu_14166_p2() {
    add_ln1192_717_fu_14166_p2 = (!sext_ln703_1437_fu_14159_p1.read().is_01() || !sext_ln703_1438_fu_14163_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1437_fu_14159_p1.read()) + sc_bigint<25>(sext_ln703_1438_fu_14163_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_718_fu_14333_p2() {
    add_ln1192_718_fu_14333_p2 = (!sext_ln703_1439_fu_14325_p1.read().is_01() || !sext_ln703_1440_fu_14329_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1439_fu_14325_p1.read()) + sc_bigint<25>(sext_ln703_1440_fu_14329_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_719_fu_14552_p2() {
    add_ln1192_719_fu_14552_p2 = (!sext_ln703_1441_fu_14544_p1.read().is_01() || !sext_ln703_1442_fu_14548_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1441_fu_14544_p1.read()) + sc_bigint<25>(sext_ln703_1442_fu_14548_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_720_fu_14771_p2() {
    add_ln1192_720_fu_14771_p2 = (!sext_ln703_1443_fu_14763_p1.read().is_01() || !sext_ln703_1444_fu_14767_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1443_fu_14763_p1.read()) + sc_bigint<25>(sext_ln703_1444_fu_14767_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_721_fu_14990_p2() {
    add_ln1192_721_fu_14990_p2 = (!sext_ln703_1445_fu_14982_p1.read().is_01() || !sext_ln703_1446_fu_14986_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1445_fu_14982_p1.read()) + sc_bigint<25>(sext_ln703_1446_fu_14986_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_722_fu_15209_p2() {
    add_ln1192_722_fu_15209_p2 = (!sext_ln703_1447_fu_15201_p1.read().is_01() || !sext_ln703_1448_fu_15205_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1447_fu_15201_p1.read()) + sc_bigint<25>(sext_ln703_1448_fu_15205_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_723_fu_15428_p2() {
    add_ln1192_723_fu_15428_p2 = (!sext_ln703_1449_fu_15420_p1.read().is_01() || !sext_ln703_1450_fu_15424_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1449_fu_15420_p1.read()) + sc_bigint<25>(sext_ln703_1450_fu_15424_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_724_fu_15647_p2() {
    add_ln1192_724_fu_15647_p2 = (!sext_ln703_1451_fu_15639_p1.read().is_01() || !sext_ln703_1452_fu_15643_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1451_fu_15639_p1.read()) + sc_bigint<25>(sext_ln703_1452_fu_15643_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_725_fu_15866_p2() {
    add_ln1192_725_fu_15866_p2 = (!sext_ln703_1453_fu_15858_p1.read().is_01() || !sext_ln703_1454_fu_15862_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1453_fu_15858_p1.read()) + sc_bigint<25>(sext_ln703_1454_fu_15862_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_726_fu_16085_p2() {
    add_ln1192_726_fu_16085_p2 = (!sext_ln703_1455_fu_16077_p1.read().is_01() || !sext_ln703_1456_fu_16081_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1455_fu_16077_p1.read()) + sc_bigint<25>(sext_ln703_1456_fu_16081_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_727_fu_16304_p2() {
    add_ln1192_727_fu_16304_p2 = (!sext_ln703_1457_fu_16296_p1.read().is_01() || !sext_ln703_1458_fu_16300_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1457_fu_16296_p1.read()) + sc_bigint<25>(sext_ln703_1458_fu_16300_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_728_fu_16523_p2() {
    add_ln1192_728_fu_16523_p2 = (!sext_ln703_1459_fu_16515_p1.read().is_01() || !sext_ln703_1460_fu_16519_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1459_fu_16515_p1.read()) + sc_bigint<25>(sext_ln703_1460_fu_16519_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_729_fu_16742_p2() {
    add_ln1192_729_fu_16742_p2 = (!sext_ln703_1461_fu_16734_p1.read().is_01() || !sext_ln703_1462_fu_16738_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1461_fu_16734_p1.read()) + sc_bigint<25>(sext_ln703_1462_fu_16738_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_730_fu_16961_p2() {
    add_ln1192_730_fu_16961_p2 = (!sext_ln703_1463_fu_16953_p1.read().is_01() || !sext_ln703_1464_fu_16957_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1463_fu_16953_p1.read()) + sc_bigint<25>(sext_ln703_1464_fu_16957_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_731_fu_17180_p2() {
    add_ln1192_731_fu_17180_p2 = (!sext_ln703_1465_fu_17172_p1.read().is_01() || !sext_ln703_1466_fu_17176_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1465_fu_17172_p1.read()) + sc_bigint<25>(sext_ln703_1466_fu_17176_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_732_fu_17399_p2() {
    add_ln1192_732_fu_17399_p2 = (!sext_ln703_1467_fu_17391_p1.read().is_01() || !sext_ln703_1468_fu_17395_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1467_fu_17391_p1.read()) + sc_bigint<25>(sext_ln703_1468_fu_17395_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_733_fu_17618_p2() {
    add_ln1192_733_fu_17618_p2 = (!sext_ln703_1469_fu_17610_p1.read().is_01() || !sext_ln703_1470_fu_17614_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1469_fu_17610_p1.read()) + sc_bigint<25>(sext_ln703_1470_fu_17614_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_734_fu_17837_p2() {
    add_ln1192_734_fu_17837_p2 = (!sext_ln703_1471_fu_17829_p1.read().is_01() || !sext_ln703_1472_fu_17833_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1471_fu_17829_p1.read()) + sc_bigint<25>(sext_ln703_1472_fu_17833_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_735_fu_18056_p2() {
    add_ln1192_735_fu_18056_p2 = (!sext_ln703_1473_fu_18048_p1.read().is_01() || !sext_ln703_1474_fu_18052_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1473_fu_18048_p1.read()) + sc_bigint<25>(sext_ln703_1474_fu_18052_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_736_fu_18275_p2() {
    add_ln1192_736_fu_18275_p2 = (!sext_ln703_1475_fu_18267_p1.read().is_01() || !sext_ln703_1476_fu_18271_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1475_fu_18267_p1.read()) + sc_bigint<25>(sext_ln703_1476_fu_18271_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_737_fu_18364_p2() {
    add_ln1192_737_fu_18364_p2 = (!sext_ln703_1477_fu_18357_p1.read().is_01() || !sext_ln703_1478_fu_18361_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1477_fu_18357_p1.read()) + sc_bigint<25>(sext_ln703_1478_fu_18361_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_738_fu_18531_p2() {
    add_ln1192_738_fu_18531_p2 = (!sext_ln703_1479_fu_18523_p1.read().is_01() || !sext_ln703_1480_fu_18527_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1479_fu_18523_p1.read()) + sc_bigint<25>(sext_ln703_1480_fu_18527_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_739_fu_18750_p2() {
    add_ln1192_739_fu_18750_p2 = (!sext_ln703_1481_fu_18742_p1.read().is_01() || !sext_ln703_1482_fu_18746_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1481_fu_18742_p1.read()) + sc_bigint<25>(sext_ln703_1482_fu_18746_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_740_fu_18969_p2() {
    add_ln1192_740_fu_18969_p2 = (!sext_ln703_1483_fu_18961_p1.read().is_01() || !sext_ln703_1484_fu_18965_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1483_fu_18961_p1.read()) + sc_bigint<25>(sext_ln703_1484_fu_18965_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_741_fu_19188_p2() {
    add_ln1192_741_fu_19188_p2 = (!sext_ln703_1485_fu_19180_p1.read().is_01() || !sext_ln703_1486_fu_19184_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1485_fu_19180_p1.read()) + sc_bigint<25>(sext_ln703_1486_fu_19184_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_742_fu_19407_p2() {
    add_ln1192_742_fu_19407_p2 = (!sext_ln703_1487_fu_19399_p1.read().is_01() || !sext_ln703_1488_fu_19403_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1487_fu_19399_p1.read()) + sc_bigint<25>(sext_ln703_1488_fu_19403_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_743_fu_19626_p2() {
    add_ln1192_743_fu_19626_p2 = (!sext_ln703_1489_fu_19618_p1.read().is_01() || !sext_ln703_1490_fu_19622_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1489_fu_19618_p1.read()) + sc_bigint<25>(sext_ln703_1490_fu_19622_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_744_fu_19845_p2() {
    add_ln1192_744_fu_19845_p2 = (!sext_ln703_1491_fu_19837_p1.read().is_01() || !sext_ln703_1492_fu_19841_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1491_fu_19837_p1.read()) + sc_bigint<25>(sext_ln703_1492_fu_19841_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_745_fu_20064_p2() {
    add_ln1192_745_fu_20064_p2 = (!sext_ln703_1493_fu_20056_p1.read().is_01() || !sext_ln703_1494_fu_20060_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1493_fu_20056_p1.read()) + sc_bigint<25>(sext_ln703_1494_fu_20060_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_746_fu_20283_p2() {
    add_ln1192_746_fu_20283_p2 = (!sext_ln703_1495_fu_20275_p1.read().is_01() || !sext_ln703_1496_fu_20279_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1495_fu_20275_p1.read()) + sc_bigint<25>(sext_ln703_1496_fu_20279_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_747_fu_20502_p2() {
    add_ln1192_747_fu_20502_p2 = (!sext_ln703_1497_fu_20494_p1.read().is_01() || !sext_ln703_1498_fu_20498_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1497_fu_20494_p1.read()) + sc_bigint<25>(sext_ln703_1498_fu_20498_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_748_fu_20721_p2() {
    add_ln1192_748_fu_20721_p2 = (!sext_ln703_1499_fu_20713_p1.read().is_01() || !sext_ln703_1500_fu_20717_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1499_fu_20713_p1.read()) + sc_bigint<25>(sext_ln703_1500_fu_20717_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_749_fu_20940_p2() {
    add_ln1192_749_fu_20940_p2 = (!sext_ln703_1501_fu_20932_p1.read().is_01() || !sext_ln703_1502_fu_20936_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1501_fu_20932_p1.read()) + sc_bigint<25>(sext_ln703_1502_fu_20936_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_750_fu_21159_p2() {
    add_ln1192_750_fu_21159_p2 = (!sext_ln703_1503_fu_21151_p1.read().is_01() || !sext_ln703_1504_fu_21155_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1503_fu_21151_p1.read()) + sc_bigint<25>(sext_ln703_1504_fu_21155_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_751_fu_21378_p2() {
    add_ln1192_751_fu_21378_p2 = (!sext_ln703_1505_fu_21370_p1.read().is_01() || !sext_ln703_1506_fu_21374_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1505_fu_21370_p1.read()) + sc_bigint<25>(sext_ln703_1506_fu_21374_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_752_fu_21597_p2() {
    add_ln1192_752_fu_21597_p2 = (!sext_ln703_1507_fu_21589_p1.read().is_01() || !sext_ln703_1508_fu_21593_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1507_fu_21589_p1.read()) + sc_bigint<25>(sext_ln703_1508_fu_21593_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_753_fu_21816_p2() {
    add_ln1192_753_fu_21816_p2 = (!sext_ln703_1509_fu_21808_p1.read().is_01() || !sext_ln703_1510_fu_21812_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1509_fu_21808_p1.read()) + sc_bigint<25>(sext_ln703_1510_fu_21812_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_754_fu_22035_p2() {
    add_ln1192_754_fu_22035_p2 = (!sext_ln703_1511_fu_22027_p1.read().is_01() || !sext_ln703_1512_fu_22031_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1511_fu_22027_p1.read()) + sc_bigint<25>(sext_ln703_1512_fu_22031_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_755_fu_22254_p2() {
    add_ln1192_755_fu_22254_p2 = (!sext_ln703_1513_fu_22246_p1.read().is_01() || !sext_ln703_1514_fu_22250_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1513_fu_22246_p1.read()) + sc_bigint<25>(sext_ln703_1514_fu_22250_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_756_fu_22473_p2() {
    add_ln1192_756_fu_22473_p2 = (!sext_ln703_1515_fu_22465_p1.read().is_01() || !sext_ln703_1516_fu_22469_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_1515_fu_22465_p1.read()) + sc_bigint<25>(sext_ln703_1516_fu_22469_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln1192_fu_5770_p2() {
    add_ln1192_fu_5770_p2 = (!sext_ln703_fu_5763_p1.read().is_01() || !sext_ln703_1358_fu_5767_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_fu_5763_p1.read()) + sc_bigint<25>(sext_ln703_1358_fu_5767_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln389_fu_22560_p2() {
    add_ln389_fu_22560_p2 = (!pX_2_load_reg_23436.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(pX_2_load_reg_23436.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln391_fu_22571_p2() {
    add_ln391_fu_22571_p2 = (!sX_2_load_reg_23426.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(sX_2_load_reg_23426.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_686_fu_2445_p2() {
    add_ln415_686_fu_2445_p2 = (!trunc_ln708_s_fu_2418_p4.read().is_01() || !zext_ln415_686_fu_2441_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_s_fu_2418_p4.read()) + sc_biguint<24>(zext_ln415_686_fu_2441_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_687_fu_6029_p2() {
    add_ln415_687_fu_6029_p2 = (!trunc_ln708_683_reg_23918.read().is_01() || !zext_ln415_687_fu_6026_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_683_reg_23918.read()) + sc_biguint<24>(zext_ln415_687_fu_6026_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_688_fu_6248_p2() {
    add_ln415_688_fu_6248_p2 = (!trunc_ln708_684_reg_23947.read().is_01() || !zext_ln415_688_fu_6245_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_684_reg_23947.read()) + sc_biguint<24>(zext_ln415_688_fu_6245_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_689_fu_6467_p2() {
    add_ln415_689_fu_6467_p2 = (!trunc_ln708_685_reg_23976.read().is_01() || !zext_ln415_689_fu_6464_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_685_reg_23976.read()) + sc_biguint<24>(zext_ln415_689_fu_6464_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_690_fu_6686_p2() {
    add_ln415_690_fu_6686_p2 = (!trunc_ln708_686_reg_24005.read().is_01() || !zext_ln415_690_fu_6683_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_686_reg_24005.read()) + sc_biguint<24>(zext_ln415_690_fu_6683_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_691_fu_6905_p2() {
    add_ln415_691_fu_6905_p2 = (!trunc_ln708_687_reg_24034.read().is_01() || !zext_ln415_691_fu_6902_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_687_reg_24034.read()) + sc_biguint<24>(zext_ln415_691_fu_6902_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_692_fu_7124_p2() {
    add_ln415_692_fu_7124_p2 = (!trunc_ln708_688_reg_24063.read().is_01() || !zext_ln415_692_fu_7121_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_688_reg_24063.read()) + sc_biguint<24>(zext_ln415_692_fu_7121_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_693_fu_7343_p2() {
    add_ln415_693_fu_7343_p2 = (!trunc_ln708_689_reg_24092.read().is_01() || !zext_ln415_693_fu_7340_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_689_reg_24092.read()) + sc_biguint<24>(zext_ln415_693_fu_7340_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_694_fu_7562_p2() {
    add_ln415_694_fu_7562_p2 = (!trunc_ln708_690_reg_24121.read().is_01() || !zext_ln415_694_fu_7559_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_690_reg_24121.read()) + sc_biguint<24>(zext_ln415_694_fu_7559_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_695_fu_7781_p2() {
    add_ln415_695_fu_7781_p2 = (!trunc_ln708_691_reg_24150.read().is_01() || !zext_ln415_695_fu_7778_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_691_reg_24150.read()) + sc_biguint<24>(zext_ln415_695_fu_7778_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_696_fu_8000_p2() {
    add_ln415_696_fu_8000_p2 = (!trunc_ln708_692_reg_24179.read().is_01() || !zext_ln415_696_fu_7997_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_692_reg_24179.read()) + sc_biguint<24>(zext_ln415_696_fu_7997_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_697_fu_8219_p2() {
    add_ln415_697_fu_8219_p2 = (!trunc_ln708_693_reg_24208.read().is_01() || !zext_ln415_697_fu_8216_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_693_reg_24208.read()) + sc_biguint<24>(zext_ln415_697_fu_8216_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_698_fu_8438_p2() {
    add_ln415_698_fu_8438_p2 = (!trunc_ln708_694_reg_24237.read().is_01() || !zext_ln415_698_fu_8435_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_694_reg_24237.read()) + sc_biguint<24>(zext_ln415_698_fu_8435_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_699_fu_8657_p2() {
    add_ln415_699_fu_8657_p2 = (!trunc_ln708_695_reg_24266.read().is_01() || !zext_ln415_699_fu_8654_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_695_reg_24266.read()) + sc_biguint<24>(zext_ln415_699_fu_8654_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_700_fu_8876_p2() {
    add_ln415_700_fu_8876_p2 = (!trunc_ln708_696_reg_24295.read().is_01() || !zext_ln415_700_fu_8873_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_696_reg_24295.read()) + sc_biguint<24>(zext_ln415_700_fu_8873_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_701_fu_9095_p2() {
    add_ln415_701_fu_9095_p2 = (!trunc_ln708_697_reg_24324.read().is_01() || !zext_ln415_701_fu_9092_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_697_reg_24324.read()) + sc_biguint<24>(zext_ln415_701_fu_9092_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_702_fu_9314_p2() {
    add_ln415_702_fu_9314_p2 = (!trunc_ln708_698_reg_24353.read().is_01() || !zext_ln415_702_fu_9311_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_698_reg_24353.read()) + sc_biguint<24>(zext_ln415_702_fu_9311_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_703_fu_9533_p2() {
    add_ln415_703_fu_9533_p2 = (!trunc_ln708_699_reg_24382.read().is_01() || !zext_ln415_703_fu_9530_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_699_reg_24382.read()) + sc_biguint<24>(zext_ln415_703_fu_9530_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_704_fu_9752_p2() {
    add_ln415_704_fu_9752_p2 = (!trunc_ln708_700_reg_24411.read().is_01() || !zext_ln415_704_fu_9749_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_700_reg_24411.read()) + sc_biguint<24>(zext_ln415_704_fu_9749_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_705_fu_3334_p2() {
    add_ln415_705_fu_3334_p2 = (!trunc_ln708_701_fu_3307_p4.read().is_01() || !zext_ln415_705_fu_3330_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_701_fu_3307_p4.read()) + sc_biguint<24>(zext_ln415_705_fu_3330_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_706_fu_3503_p2() {
    add_ln415_706_fu_3503_p2 = (!trunc_ln708_702_fu_3476_p4.read().is_01() || !zext_ln415_706_fu_3499_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_702_fu_3476_p4.read()) + sc_biguint<24>(zext_ln415_706_fu_3499_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_707_fu_10227_p2() {
    add_ln415_707_fu_10227_p2 = (!trunc_ln708_703_reg_24480.read().is_01() || !zext_ln415_707_fu_10224_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_703_reg_24480.read()) + sc_biguint<24>(zext_ln415_707_fu_10224_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_708_fu_10446_p2() {
    add_ln415_708_fu_10446_p2 = (!trunc_ln708_704_reg_24509.read().is_01() || !zext_ln415_708_fu_10443_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_704_reg_24509.read()) + sc_biguint<24>(zext_ln415_708_fu_10443_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_709_fu_10665_p2() {
    add_ln415_709_fu_10665_p2 = (!trunc_ln708_705_reg_24538.read().is_01() || !zext_ln415_709_fu_10662_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_705_reg_24538.read()) + sc_biguint<24>(zext_ln415_709_fu_10662_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_710_fu_10884_p2() {
    add_ln415_710_fu_10884_p2 = (!trunc_ln708_706_reg_24567.read().is_01() || !zext_ln415_710_fu_10881_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_706_reg_24567.read()) + sc_biguint<24>(zext_ln415_710_fu_10881_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_711_fu_11103_p2() {
    add_ln415_711_fu_11103_p2 = (!trunc_ln708_707_reg_24596.read().is_01() || !zext_ln415_711_fu_11100_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_707_reg_24596.read()) + sc_biguint<24>(zext_ln415_711_fu_11100_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_712_fu_11322_p2() {
    add_ln415_712_fu_11322_p2 = (!trunc_ln708_708_reg_24625.read().is_01() || !zext_ln415_712_fu_11319_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_708_reg_24625.read()) + sc_biguint<24>(zext_ln415_712_fu_11319_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_713_fu_11541_p2() {
    add_ln415_713_fu_11541_p2 = (!trunc_ln708_709_reg_24654.read().is_01() || !zext_ln415_713_fu_11538_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_709_reg_24654.read()) + sc_biguint<24>(zext_ln415_713_fu_11538_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_714_fu_11760_p2() {
    add_ln415_714_fu_11760_p2 = (!trunc_ln708_710_reg_24683.read().is_01() || !zext_ln415_714_fu_11757_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_710_reg_24683.read()) + sc_biguint<24>(zext_ln415_714_fu_11757_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_715_fu_11979_p2() {
    add_ln415_715_fu_11979_p2 = (!trunc_ln708_711_reg_24712.read().is_01() || !zext_ln415_715_fu_11976_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_711_reg_24712.read()) + sc_biguint<24>(zext_ln415_715_fu_11976_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_716_fu_12198_p2() {
    add_ln415_716_fu_12198_p2 = (!trunc_ln708_712_reg_24741.read().is_01() || !zext_ln415_716_fu_12195_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_712_reg_24741.read()) + sc_biguint<24>(zext_ln415_716_fu_12195_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_717_fu_12417_p2() {
    add_ln415_717_fu_12417_p2 = (!trunc_ln708_713_reg_24770.read().is_01() || !zext_ln415_717_fu_12414_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_713_reg_24770.read()) + sc_biguint<24>(zext_ln415_717_fu_12414_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_718_fu_12636_p2() {
    add_ln415_718_fu_12636_p2 = (!trunc_ln708_714_reg_24799.read().is_01() || !zext_ln415_718_fu_12633_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_714_reg_24799.read()) + sc_biguint<24>(zext_ln415_718_fu_12633_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_719_fu_12855_p2() {
    add_ln415_719_fu_12855_p2 = (!trunc_ln708_715_reg_24828.read().is_01() || !zext_ln415_719_fu_12852_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_715_reg_24828.read()) + sc_biguint<24>(zext_ln415_719_fu_12852_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_720_fu_13074_p2() {
    add_ln415_720_fu_13074_p2 = (!trunc_ln708_716_reg_24857.read().is_01() || !zext_ln415_720_fu_13071_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_716_reg_24857.read()) + sc_biguint<24>(zext_ln415_720_fu_13071_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_721_fu_13293_p2() {
    add_ln415_721_fu_13293_p2 = (!trunc_ln708_717_reg_24886.read().is_01() || !zext_ln415_721_fu_13290_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_717_reg_24886.read()) + sc_biguint<24>(zext_ln415_721_fu_13290_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_722_fu_13512_p2() {
    add_ln415_722_fu_13512_p2 = (!trunc_ln708_718_reg_24915.read().is_01() || !zext_ln415_722_fu_13509_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_718_reg_24915.read()) + sc_biguint<24>(zext_ln415_722_fu_13509_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_723_fu_13731_p2() {
    add_ln415_723_fu_13731_p2 = (!trunc_ln708_719_reg_24944.read().is_01() || !zext_ln415_723_fu_13728_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_719_reg_24944.read()) + sc_biguint<24>(zext_ln415_723_fu_13728_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_724_fu_13950_p2() {
    add_ln415_724_fu_13950_p2 = (!trunc_ln708_720_reg_24973.read().is_01() || !zext_ln415_724_fu_13947_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_720_reg_24973.read()) + sc_biguint<24>(zext_ln415_724_fu_13947_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_725_fu_4156_p2() {
    add_ln415_725_fu_4156_p2 = (!trunc_ln708_721_fu_4129_p4.read().is_01() || !zext_ln415_725_fu_4152_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_721_fu_4129_p4.read()) + sc_biguint<24>(zext_ln415_725_fu_4152_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_726_fu_4325_p2() {
    add_ln415_726_fu_4325_p2 = (!trunc_ln708_722_fu_4298_p4.read().is_01() || !zext_ln415_726_fu_4321_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_722_fu_4298_p4.read()) + sc_biguint<24>(zext_ln415_726_fu_4321_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_727_fu_14425_p2() {
    add_ln415_727_fu_14425_p2 = (!trunc_ln708_723_reg_25042.read().is_01() || !zext_ln415_727_fu_14422_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_723_reg_25042.read()) + sc_biguint<24>(zext_ln415_727_fu_14422_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_728_fu_14644_p2() {
    add_ln415_728_fu_14644_p2 = (!trunc_ln708_724_reg_25071.read().is_01() || !zext_ln415_728_fu_14641_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_724_reg_25071.read()) + sc_biguint<24>(zext_ln415_728_fu_14641_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_729_fu_14863_p2() {
    add_ln415_729_fu_14863_p2 = (!trunc_ln708_725_reg_25100.read().is_01() || !zext_ln415_729_fu_14860_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_725_reg_25100.read()) + sc_biguint<24>(zext_ln415_729_fu_14860_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_730_fu_15082_p2() {
    add_ln415_730_fu_15082_p2 = (!trunc_ln708_726_reg_25129.read().is_01() || !zext_ln415_730_fu_15079_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_726_reg_25129.read()) + sc_biguint<24>(zext_ln415_730_fu_15079_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_731_fu_15301_p2() {
    add_ln415_731_fu_15301_p2 = (!trunc_ln708_727_reg_25158.read().is_01() || !zext_ln415_731_fu_15298_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_727_reg_25158.read()) + sc_biguint<24>(zext_ln415_731_fu_15298_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_732_fu_15520_p2() {
    add_ln415_732_fu_15520_p2 = (!trunc_ln708_728_reg_25187.read().is_01() || !zext_ln415_732_fu_15517_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_728_reg_25187.read()) + sc_biguint<24>(zext_ln415_732_fu_15517_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_733_fu_15739_p2() {
    add_ln415_733_fu_15739_p2 = (!trunc_ln708_729_reg_25216.read().is_01() || !zext_ln415_733_fu_15736_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_729_reg_25216.read()) + sc_biguint<24>(zext_ln415_733_fu_15736_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_734_fu_15958_p2() {
    add_ln415_734_fu_15958_p2 = (!trunc_ln708_730_reg_25245.read().is_01() || !zext_ln415_734_fu_15955_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_730_reg_25245.read()) + sc_biguint<24>(zext_ln415_734_fu_15955_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_735_fu_16177_p2() {
    add_ln415_735_fu_16177_p2 = (!trunc_ln708_731_reg_25274.read().is_01() || !zext_ln415_735_fu_16174_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_731_reg_25274.read()) + sc_biguint<24>(zext_ln415_735_fu_16174_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_736_fu_16396_p2() {
    add_ln415_736_fu_16396_p2 = (!trunc_ln708_732_reg_25303.read().is_01() || !zext_ln415_736_fu_16393_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_732_reg_25303.read()) + sc_biguint<24>(zext_ln415_736_fu_16393_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_737_fu_16615_p2() {
    add_ln415_737_fu_16615_p2 = (!trunc_ln708_733_reg_25332.read().is_01() || !zext_ln415_737_fu_16612_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_733_reg_25332.read()) + sc_biguint<24>(zext_ln415_737_fu_16612_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_738_fu_16834_p2() {
    add_ln415_738_fu_16834_p2 = (!trunc_ln708_734_reg_25361.read().is_01() || !zext_ln415_738_fu_16831_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_734_reg_25361.read()) + sc_biguint<24>(zext_ln415_738_fu_16831_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_739_fu_17053_p2() {
    add_ln415_739_fu_17053_p2 = (!trunc_ln708_735_reg_25390.read().is_01() || !zext_ln415_739_fu_17050_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_735_reg_25390.read()) + sc_biguint<24>(zext_ln415_739_fu_17050_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_740_fu_17272_p2() {
    add_ln415_740_fu_17272_p2 = (!trunc_ln708_736_reg_25419.read().is_01() || !zext_ln415_740_fu_17269_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_736_reg_25419.read()) + sc_biguint<24>(zext_ln415_740_fu_17269_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_741_fu_17491_p2() {
    add_ln415_741_fu_17491_p2 = (!trunc_ln708_737_reg_25448.read().is_01() || !zext_ln415_741_fu_17488_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_737_reg_25448.read()) + sc_biguint<24>(zext_ln415_741_fu_17488_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_742_fu_17710_p2() {
    add_ln415_742_fu_17710_p2 = (!trunc_ln708_738_reg_25477.read().is_01() || !zext_ln415_742_fu_17707_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_738_reg_25477.read()) + sc_biguint<24>(zext_ln415_742_fu_17707_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_743_fu_17929_p2() {
    add_ln415_743_fu_17929_p2 = (!trunc_ln708_739_reg_25506.read().is_01() || !zext_ln415_743_fu_17926_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_739_reg_25506.read()) + sc_biguint<24>(zext_ln415_743_fu_17926_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_744_fu_18148_p2() {
    add_ln415_744_fu_18148_p2 = (!trunc_ln708_740_reg_25535.read().is_01() || !zext_ln415_744_fu_18145_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_740_reg_25535.read()) + sc_biguint<24>(zext_ln415_744_fu_18145_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_745_fu_4978_p2() {
    add_ln415_745_fu_4978_p2 = (!trunc_ln708_741_fu_4951_p4.read().is_01() || !zext_ln415_745_fu_4974_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_741_fu_4951_p4.read()) + sc_biguint<24>(zext_ln415_745_fu_4974_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_746_fu_5147_p2() {
    add_ln415_746_fu_5147_p2 = (!trunc_ln708_742_fu_5120_p4.read().is_01() || !zext_ln415_746_fu_5143_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_742_fu_5120_p4.read()) + sc_biguint<24>(zext_ln415_746_fu_5143_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_747_fu_18623_p2() {
    add_ln415_747_fu_18623_p2 = (!trunc_ln708_743_reg_25604.read().is_01() || !zext_ln415_747_fu_18620_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_743_reg_25604.read()) + sc_biguint<24>(zext_ln415_747_fu_18620_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_748_fu_18842_p2() {
    add_ln415_748_fu_18842_p2 = (!trunc_ln708_744_reg_25633.read().is_01() || !zext_ln415_748_fu_18839_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_744_reg_25633.read()) + sc_biguint<24>(zext_ln415_748_fu_18839_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_749_fu_19061_p2() {
    add_ln415_749_fu_19061_p2 = (!trunc_ln708_745_reg_25662.read().is_01() || !zext_ln415_749_fu_19058_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_745_reg_25662.read()) + sc_biguint<24>(zext_ln415_749_fu_19058_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_750_fu_19280_p2() {
    add_ln415_750_fu_19280_p2 = (!trunc_ln708_746_reg_25691.read().is_01() || !zext_ln415_750_fu_19277_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_746_reg_25691.read()) + sc_biguint<24>(zext_ln415_750_fu_19277_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_751_fu_19499_p2() {
    add_ln415_751_fu_19499_p2 = (!trunc_ln708_747_reg_25720.read().is_01() || !zext_ln415_751_fu_19496_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_747_reg_25720.read()) + sc_biguint<24>(zext_ln415_751_fu_19496_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_752_fu_19718_p2() {
    add_ln415_752_fu_19718_p2 = (!trunc_ln708_748_reg_25749.read().is_01() || !zext_ln415_752_fu_19715_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_748_reg_25749.read()) + sc_biguint<24>(zext_ln415_752_fu_19715_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_753_fu_19937_p2() {
    add_ln415_753_fu_19937_p2 = (!trunc_ln708_749_reg_25778.read().is_01() || !zext_ln415_753_fu_19934_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_749_reg_25778.read()) + sc_biguint<24>(zext_ln415_753_fu_19934_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_754_fu_20156_p2() {
    add_ln415_754_fu_20156_p2 = (!trunc_ln708_750_reg_25807.read().is_01() || !zext_ln415_754_fu_20153_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_750_reg_25807.read()) + sc_biguint<24>(zext_ln415_754_fu_20153_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_755_fu_20375_p2() {
    add_ln415_755_fu_20375_p2 = (!trunc_ln708_751_reg_25836.read().is_01() || !zext_ln415_755_fu_20372_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_751_reg_25836.read()) + sc_biguint<24>(zext_ln415_755_fu_20372_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_756_fu_20594_p2() {
    add_ln415_756_fu_20594_p2 = (!trunc_ln708_752_reg_25865.read().is_01() || !zext_ln415_756_fu_20591_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_752_reg_25865.read()) + sc_biguint<24>(zext_ln415_756_fu_20591_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_757_fu_20813_p2() {
    add_ln415_757_fu_20813_p2 = (!trunc_ln708_753_reg_25894.read().is_01() || !zext_ln415_757_fu_20810_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_753_reg_25894.read()) + sc_biguint<24>(zext_ln415_757_fu_20810_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_758_fu_21032_p2() {
    add_ln415_758_fu_21032_p2 = (!trunc_ln708_754_reg_25923.read().is_01() || !zext_ln415_758_fu_21029_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_754_reg_25923.read()) + sc_biguint<24>(zext_ln415_758_fu_21029_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_759_fu_21251_p2() {
    add_ln415_759_fu_21251_p2 = (!trunc_ln708_755_reg_25952.read().is_01() || !zext_ln415_759_fu_21248_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_755_reg_25952.read()) + sc_biguint<24>(zext_ln415_759_fu_21248_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_760_fu_21470_p2() {
    add_ln415_760_fu_21470_p2 = (!trunc_ln708_756_reg_25981.read().is_01() || !zext_ln415_760_fu_21467_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_756_reg_25981.read()) + sc_biguint<24>(zext_ln415_760_fu_21467_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_761_fu_21689_p2() {
    add_ln415_761_fu_21689_p2 = (!trunc_ln708_757_reg_26010.read().is_01() || !zext_ln415_761_fu_21686_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_757_reg_26010.read()) + sc_biguint<24>(zext_ln415_761_fu_21686_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_762_fu_21908_p2() {
    add_ln415_762_fu_21908_p2 = (!trunc_ln708_758_reg_26039.read().is_01() || !zext_ln415_762_fu_21905_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_758_reg_26039.read()) + sc_biguint<24>(zext_ln415_762_fu_21905_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_763_fu_22127_p2() {
    add_ln415_763_fu_22127_p2 = (!trunc_ln708_759_reg_26068.read().is_01() || !zext_ln415_763_fu_22124_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_759_reg_26068.read()) + sc_biguint<24>(zext_ln415_763_fu_22124_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_764_fu_22346_p2() {
    add_ln415_764_fu_22346_p2 = (!trunc_ln708_760_reg_26097.read().is_01() || !zext_ln415_764_fu_22343_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln708_760_reg_26097.read()) + sc_biguint<24>(zext_ln415_764_fu_22343_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_add_ln415_fu_2273_p2() {
    add_ln415_fu_2273_p2 = (!trunc_ln8_fu_2246_p4.read().is_01() || !zext_ln415_fu_2269_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln8_fu_2246_p4.read()) + sc_biguint<24>(zext_ln415_fu_2269_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln360_fu_1390_p2() {
    and_ln360_fu_1390_p2 = (icmp_ln360_fu_1364_p2.read() & icmp_ln360_3_fu_1384_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_671_fu_2465_p2() {
    and_ln416_671_fu_2465_p2 = (tmp_5267_fu_2427_p3.read() & xor_ln416_671_fu_2459_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_672_fu_6048_p2() {
    and_ln416_672_fu_6048_p2 = (tmp_5274_fu_6019_p3.read() & xor_ln416_672_fu_6042_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_673_fu_6267_p2() {
    and_ln416_673_fu_6267_p2 = (tmp_5281_fu_6238_p3.read() & xor_ln416_673_fu_6261_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_674_fu_6486_p2() {
    and_ln416_674_fu_6486_p2 = (tmp_5288_fu_6457_p3.read() & xor_ln416_674_fu_6480_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_675_fu_6705_p2() {
    and_ln416_675_fu_6705_p2 = (tmp_5295_fu_6676_p3.read() & xor_ln416_675_fu_6699_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_676_fu_6924_p2() {
    and_ln416_676_fu_6924_p2 = (tmp_5302_fu_6895_p3.read() & xor_ln416_676_fu_6918_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_677_fu_7143_p2() {
    and_ln416_677_fu_7143_p2 = (tmp_5309_fu_7114_p3.read() & xor_ln416_677_fu_7137_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_678_fu_7362_p2() {
    and_ln416_678_fu_7362_p2 = (tmp_5316_fu_7333_p3.read() & xor_ln416_678_fu_7356_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_679_fu_7581_p2() {
    and_ln416_679_fu_7581_p2 = (tmp_5323_fu_7552_p3.read() & xor_ln416_679_fu_7575_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_680_fu_7800_p2() {
    and_ln416_680_fu_7800_p2 = (tmp_5330_fu_7771_p3.read() & xor_ln416_680_fu_7794_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_681_fu_8019_p2() {
    and_ln416_681_fu_8019_p2 = (tmp_5337_fu_7990_p3.read() & xor_ln416_681_fu_8013_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_682_fu_8238_p2() {
    and_ln416_682_fu_8238_p2 = (tmp_5344_fu_8209_p3.read() & xor_ln416_682_fu_8232_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_683_fu_8457_p2() {
    and_ln416_683_fu_8457_p2 = (tmp_5351_fu_8428_p3.read() & xor_ln416_683_fu_8451_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_684_fu_8676_p2() {
    and_ln416_684_fu_8676_p2 = (tmp_5358_fu_8647_p3.read() & xor_ln416_684_fu_8670_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_685_fu_8895_p2() {
    and_ln416_685_fu_8895_p2 = (tmp_5365_fu_8866_p3.read() & xor_ln416_685_fu_8889_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_686_fu_9114_p2() {
    and_ln416_686_fu_9114_p2 = (tmp_5372_fu_9085_p3.read() & xor_ln416_686_fu_9108_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_687_fu_9333_p2() {
    and_ln416_687_fu_9333_p2 = (tmp_5379_fu_9304_p3.read() & xor_ln416_687_fu_9327_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_688_fu_9552_p2() {
    and_ln416_688_fu_9552_p2 = (tmp_5386_fu_9523_p3.read() & xor_ln416_688_fu_9546_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_689_fu_9771_p2() {
    and_ln416_689_fu_9771_p2 = (tmp_5393_fu_9742_p3.read() & xor_ln416_689_fu_9765_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_690_fu_3354_p2() {
    and_ln416_690_fu_3354_p2 = (tmp_5400_fu_3316_p3.read() & xor_ln416_690_fu_3348_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_691_fu_3523_p2() {
    and_ln416_691_fu_3523_p2 = (tmp_5407_fu_3485_p3.read() & xor_ln416_691_fu_3517_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_692_fu_10246_p2() {
    and_ln416_692_fu_10246_p2 = (tmp_5414_fu_10217_p3.read() & xor_ln416_692_fu_10240_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_693_fu_10465_p2() {
    and_ln416_693_fu_10465_p2 = (tmp_5421_fu_10436_p3.read() & xor_ln416_693_fu_10459_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_694_fu_10684_p2() {
    and_ln416_694_fu_10684_p2 = (tmp_5428_fu_10655_p3.read() & xor_ln416_694_fu_10678_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_695_fu_10903_p2() {
    and_ln416_695_fu_10903_p2 = (tmp_5435_fu_10874_p3.read() & xor_ln416_695_fu_10897_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_696_fu_11122_p2() {
    and_ln416_696_fu_11122_p2 = (tmp_5442_fu_11093_p3.read() & xor_ln416_696_fu_11116_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_697_fu_11341_p2() {
    and_ln416_697_fu_11341_p2 = (tmp_5449_fu_11312_p3.read() & xor_ln416_697_fu_11335_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_698_fu_11560_p2() {
    and_ln416_698_fu_11560_p2 = (tmp_5456_fu_11531_p3.read() & xor_ln416_698_fu_11554_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_699_fu_11779_p2() {
    and_ln416_699_fu_11779_p2 = (tmp_5463_fu_11750_p3.read() & xor_ln416_699_fu_11773_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_700_fu_11998_p2() {
    and_ln416_700_fu_11998_p2 = (tmp_5470_fu_11969_p3.read() & xor_ln416_700_fu_11992_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_701_fu_12217_p2() {
    and_ln416_701_fu_12217_p2 = (tmp_5477_fu_12188_p3.read() & xor_ln416_701_fu_12211_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_702_fu_12436_p2() {
    and_ln416_702_fu_12436_p2 = (tmp_5484_fu_12407_p3.read() & xor_ln416_702_fu_12430_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_703_fu_12655_p2() {
    and_ln416_703_fu_12655_p2 = (tmp_5491_fu_12626_p3.read() & xor_ln416_703_fu_12649_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_704_fu_12874_p2() {
    and_ln416_704_fu_12874_p2 = (tmp_5498_fu_12845_p3.read() & xor_ln416_704_fu_12868_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_705_fu_13093_p2() {
    and_ln416_705_fu_13093_p2 = (tmp_5505_fu_13064_p3.read() & xor_ln416_705_fu_13087_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_706_fu_13312_p2() {
    and_ln416_706_fu_13312_p2 = (tmp_5512_fu_13283_p3.read() & xor_ln416_706_fu_13306_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_707_fu_13531_p2() {
    and_ln416_707_fu_13531_p2 = (tmp_5519_fu_13502_p3.read() & xor_ln416_707_fu_13525_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_708_fu_13750_p2() {
    and_ln416_708_fu_13750_p2 = (tmp_5526_fu_13721_p3.read() & xor_ln416_708_fu_13744_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_709_fu_13969_p2() {
    and_ln416_709_fu_13969_p2 = (tmp_5533_fu_13940_p3.read() & xor_ln416_709_fu_13963_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_710_fu_4176_p2() {
    and_ln416_710_fu_4176_p2 = (tmp_5540_fu_4138_p3.read() & xor_ln416_710_fu_4170_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_711_fu_4345_p2() {
    and_ln416_711_fu_4345_p2 = (tmp_5547_fu_4307_p3.read() & xor_ln416_711_fu_4339_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_712_fu_14444_p2() {
    and_ln416_712_fu_14444_p2 = (tmp_5554_fu_14415_p3.read() & xor_ln416_712_fu_14438_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_713_fu_14663_p2() {
    and_ln416_713_fu_14663_p2 = (tmp_5561_fu_14634_p3.read() & xor_ln416_713_fu_14657_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_714_fu_14882_p2() {
    and_ln416_714_fu_14882_p2 = (tmp_5568_fu_14853_p3.read() & xor_ln416_714_fu_14876_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_715_fu_15101_p2() {
    and_ln416_715_fu_15101_p2 = (tmp_5575_fu_15072_p3.read() & xor_ln416_715_fu_15095_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_716_fu_15320_p2() {
    and_ln416_716_fu_15320_p2 = (tmp_5582_fu_15291_p3.read() & xor_ln416_716_fu_15314_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_717_fu_15539_p2() {
    and_ln416_717_fu_15539_p2 = (tmp_5589_fu_15510_p3.read() & xor_ln416_717_fu_15533_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_718_fu_15758_p2() {
    and_ln416_718_fu_15758_p2 = (tmp_5596_fu_15729_p3.read() & xor_ln416_718_fu_15752_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_719_fu_15977_p2() {
    and_ln416_719_fu_15977_p2 = (tmp_5603_fu_15948_p3.read() & xor_ln416_719_fu_15971_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_720_fu_16196_p2() {
    and_ln416_720_fu_16196_p2 = (tmp_5610_fu_16167_p3.read() & xor_ln416_720_fu_16190_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_721_fu_16415_p2() {
    and_ln416_721_fu_16415_p2 = (tmp_5617_fu_16386_p3.read() & xor_ln416_721_fu_16409_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_722_fu_16634_p2() {
    and_ln416_722_fu_16634_p2 = (tmp_5624_fu_16605_p3.read() & xor_ln416_722_fu_16628_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_723_fu_16853_p2() {
    and_ln416_723_fu_16853_p2 = (tmp_5631_fu_16824_p3.read() & xor_ln416_723_fu_16847_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_724_fu_17072_p2() {
    and_ln416_724_fu_17072_p2 = (tmp_5638_fu_17043_p3.read() & xor_ln416_724_fu_17066_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_725_fu_17291_p2() {
    and_ln416_725_fu_17291_p2 = (tmp_5645_fu_17262_p3.read() & xor_ln416_725_fu_17285_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_726_fu_17510_p2() {
    and_ln416_726_fu_17510_p2 = (tmp_5652_fu_17481_p3.read() & xor_ln416_726_fu_17504_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_727_fu_17729_p2() {
    and_ln416_727_fu_17729_p2 = (tmp_5659_fu_17700_p3.read() & xor_ln416_727_fu_17723_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_728_fu_17948_p2() {
    and_ln416_728_fu_17948_p2 = (tmp_5666_fu_17919_p3.read() & xor_ln416_728_fu_17942_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_729_fu_18167_p2() {
    and_ln416_729_fu_18167_p2 = (tmp_5673_fu_18138_p3.read() & xor_ln416_729_fu_18161_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_730_fu_4998_p2() {
    and_ln416_730_fu_4998_p2 = (tmp_5680_fu_4960_p3.read() & xor_ln416_730_fu_4992_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_731_fu_5167_p2() {
    and_ln416_731_fu_5167_p2 = (tmp_5687_fu_5129_p3.read() & xor_ln416_731_fu_5161_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_732_fu_18642_p2() {
    and_ln416_732_fu_18642_p2 = (tmp_5694_fu_18613_p3.read() & xor_ln416_732_fu_18636_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_733_fu_18861_p2() {
    and_ln416_733_fu_18861_p2 = (tmp_5701_fu_18832_p3.read() & xor_ln416_733_fu_18855_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_734_fu_19080_p2() {
    and_ln416_734_fu_19080_p2 = (tmp_5708_fu_19051_p3.read() & xor_ln416_734_fu_19074_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_735_fu_19299_p2() {
    and_ln416_735_fu_19299_p2 = (tmp_5715_fu_19270_p3.read() & xor_ln416_735_fu_19293_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_736_fu_19518_p2() {
    and_ln416_736_fu_19518_p2 = (tmp_5722_fu_19489_p3.read() & xor_ln416_736_fu_19512_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_737_fu_19737_p2() {
    and_ln416_737_fu_19737_p2 = (tmp_5729_fu_19708_p3.read() & xor_ln416_737_fu_19731_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_738_fu_19956_p2() {
    and_ln416_738_fu_19956_p2 = (tmp_5736_fu_19927_p3.read() & xor_ln416_738_fu_19950_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_739_fu_20175_p2() {
    and_ln416_739_fu_20175_p2 = (tmp_5743_fu_20146_p3.read() & xor_ln416_739_fu_20169_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_740_fu_20394_p2() {
    and_ln416_740_fu_20394_p2 = (tmp_5750_fu_20365_p3.read() & xor_ln416_740_fu_20388_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_741_fu_20613_p2() {
    and_ln416_741_fu_20613_p2 = (tmp_5757_fu_20584_p3.read() & xor_ln416_741_fu_20607_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_742_fu_20832_p2() {
    and_ln416_742_fu_20832_p2 = (tmp_5764_fu_20803_p3.read() & xor_ln416_742_fu_20826_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_743_fu_21051_p2() {
    and_ln416_743_fu_21051_p2 = (tmp_5771_fu_21022_p3.read() & xor_ln416_743_fu_21045_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_744_fu_21270_p2() {
    and_ln416_744_fu_21270_p2 = (tmp_5778_fu_21241_p3.read() & xor_ln416_744_fu_21264_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_745_fu_21489_p2() {
    and_ln416_745_fu_21489_p2 = (tmp_5785_fu_21460_p3.read() & xor_ln416_745_fu_21483_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_746_fu_21708_p2() {
    and_ln416_746_fu_21708_p2 = (tmp_5792_fu_21679_p3.read() & xor_ln416_746_fu_21702_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_747_fu_21927_p2() {
    and_ln416_747_fu_21927_p2 = (tmp_5799_fu_21898_p3.read() & xor_ln416_747_fu_21921_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_748_fu_22146_p2() {
    and_ln416_748_fu_22146_p2 = (tmp_5806_fu_22117_p3.read() & xor_ln416_748_fu_22140_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_749_fu_22365_p2() {
    and_ln416_749_fu_22365_p2 = (tmp_5813_fu_22336_p3.read() & xor_ln416_749_fu_22359_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln416_fu_2293_p2() {
    and_ln416_fu_2293_p2 = (tmp_5260_fu_2255_p3.read() & xor_ln416_fu_2287_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_671_fu_5865_p2() {
    and_ln785_671_fu_5865_p2 = (or_ln785_1_fu_5860_p2.read() & xor_ln779_1_reg_23899.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_672_fu_6079_p2() {
    and_ln785_672_fu_6079_p2 = (or_ln785_2_fu_6073_p2.read() & xor_ln779_2_reg_23928.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_673_fu_6298_p2() {
    and_ln785_673_fu_6298_p2 = (or_ln785_3_fu_6292_p2.read() & xor_ln779_3_reg_23957.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_674_fu_6517_p2() {
    and_ln785_674_fu_6517_p2 = (or_ln785_418_fu_6511_p2.read() & xor_ln779_4_reg_23986.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_675_fu_6736_p2() {
    and_ln785_675_fu_6736_p2 = (or_ln785_5_fu_6730_p2.read() & xor_ln779_5_reg_24015.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_676_fu_6955_p2() {
    and_ln785_676_fu_6955_p2 = (or_ln785_6_fu_6949_p2.read() & xor_ln779_6_reg_24044.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_677_fu_7174_p2() {
    and_ln785_677_fu_7174_p2 = (or_ln785_7_fu_7168_p2.read() & xor_ln779_7_reg_24073.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_678_fu_7393_p2() {
    and_ln785_678_fu_7393_p2 = (or_ln785_8_fu_7387_p2.read() & xor_ln779_8_reg_24102.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_679_fu_7612_p2() {
    and_ln785_679_fu_7612_p2 = (or_ln785_9_fu_7606_p2.read() & xor_ln779_9_reg_24131.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_680_fu_7831_p2() {
    and_ln785_680_fu_7831_p2 = (or_ln785_10_fu_7825_p2.read() & xor_ln779_10_reg_24160.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_681_fu_8050_p2() {
    and_ln785_681_fu_8050_p2 = (or_ln785_11_fu_8044_p2.read() & xor_ln779_11_reg_24189.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_682_fu_8269_p2() {
    and_ln785_682_fu_8269_p2 = (or_ln785_12_fu_8263_p2.read() & xor_ln779_12_reg_24218.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_683_fu_8488_p2() {
    and_ln785_683_fu_8488_p2 = (or_ln785_13_fu_8482_p2.read() & xor_ln779_13_reg_24247.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_684_fu_8707_p2() {
    and_ln785_684_fu_8707_p2 = (or_ln785_14_fu_8701_p2.read() & xor_ln779_14_reg_24276.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_685_fu_8926_p2() {
    and_ln785_685_fu_8926_p2 = (or_ln785_15_fu_8920_p2.read() & xor_ln779_15_reg_24305.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_686_fu_9145_p2() {
    and_ln785_686_fu_9145_p2 = (or_ln785_16_fu_9139_p2.read() & xor_ln779_16_reg_24334.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_687_fu_9364_p2() {
    and_ln785_687_fu_9364_p2 = (or_ln785_17_fu_9358_p2.read() & xor_ln779_17_reg_24363.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_688_fu_9583_p2() {
    and_ln785_688_fu_9583_p2 = (or_ln785_18_fu_9577_p2.read() & xor_ln779_18_reg_24392.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_689_fu_9802_p2() {
    and_ln785_689_fu_9802_p2 = (or_ln785_19_fu_9796_p2.read() & xor_ln779_19_reg_24421.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_690_fu_3394_p2() {
    and_ln785_690_fu_3394_p2 = (or_ln785_20_fu_3388_p2.read() & xor_ln779_20_fu_3368_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_691_fu_10063_p2() {
    and_ln785_691_fu_10063_p2 = (or_ln785_21_fu_10058_p2.read() & xor_ln779_21_reg_24461.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_692_fu_10277_p2() {
    and_ln785_692_fu_10277_p2 = (or_ln785_22_fu_10271_p2.read() & xor_ln779_22_reg_24490.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_693_fu_10496_p2() {
    and_ln785_693_fu_10496_p2 = (or_ln785_23_fu_10490_p2.read() & xor_ln779_23_reg_24519.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_694_fu_10715_p2() {
    and_ln785_694_fu_10715_p2 = (or_ln785_24_fu_10709_p2.read() & xor_ln779_24_reg_24548.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_695_fu_10934_p2() {
    and_ln785_695_fu_10934_p2 = (or_ln785_25_fu_10928_p2.read() & xor_ln779_25_reg_24577.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_696_fu_11153_p2() {
    and_ln785_696_fu_11153_p2 = (or_ln785_26_fu_11147_p2.read() & xor_ln779_26_reg_24606.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_697_fu_11372_p2() {
    and_ln785_697_fu_11372_p2 = (or_ln785_27_fu_11366_p2.read() & xor_ln779_27_reg_24635.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_698_fu_11591_p2() {
    and_ln785_698_fu_11591_p2 = (or_ln785_28_fu_11585_p2.read() & xor_ln779_28_reg_24664.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_699_fu_11810_p2() {
    and_ln785_699_fu_11810_p2 = (or_ln785_29_fu_11804_p2.read() & xor_ln779_29_reg_24693.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_700_fu_12029_p2() {
    and_ln785_700_fu_12029_p2 = (or_ln785_30_fu_12023_p2.read() & xor_ln779_30_reg_24722.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_701_fu_12248_p2() {
    and_ln785_701_fu_12248_p2 = (or_ln785_31_fu_12242_p2.read() & xor_ln779_31_reg_24751.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_702_fu_12467_p2() {
    and_ln785_702_fu_12467_p2 = (or_ln785_32_fu_12461_p2.read() & xor_ln779_32_reg_24780.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_703_fu_12686_p2() {
    and_ln785_703_fu_12686_p2 = (or_ln785_33_fu_12680_p2.read() & xor_ln779_33_reg_24809.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_704_fu_12905_p2() {
    and_ln785_704_fu_12905_p2 = (or_ln785_34_fu_12899_p2.read() & xor_ln779_34_reg_24838.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_705_fu_13124_p2() {
    and_ln785_705_fu_13124_p2 = (or_ln785_35_fu_13118_p2.read() & xor_ln779_35_reg_24867.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_706_fu_13343_p2() {
    and_ln785_706_fu_13343_p2 = (or_ln785_36_fu_13337_p2.read() & xor_ln779_36_reg_24896.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_707_fu_13562_p2() {
    and_ln785_707_fu_13562_p2 = (or_ln785_37_fu_13556_p2.read() & xor_ln779_37_reg_24925.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_708_fu_13781_p2() {
    and_ln785_708_fu_13781_p2 = (or_ln785_38_fu_13775_p2.read() & xor_ln779_38_reg_24954.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_709_fu_14000_p2() {
    and_ln785_709_fu_14000_p2 = (or_ln785_39_fu_13994_p2.read() & xor_ln779_39_reg_24983.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_710_fu_4216_p2() {
    and_ln785_710_fu_4216_p2 = (or_ln785_40_fu_4210_p2.read() & xor_ln779_40_fu_4190_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_711_fu_14261_p2() {
    and_ln785_711_fu_14261_p2 = (or_ln785_41_fu_14256_p2.read() & xor_ln779_41_reg_25023.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_712_fu_14475_p2() {
    and_ln785_712_fu_14475_p2 = (or_ln785_42_fu_14469_p2.read() & xor_ln779_42_reg_25052.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_713_fu_14694_p2() {
    and_ln785_713_fu_14694_p2 = (or_ln785_43_fu_14688_p2.read() & xor_ln779_43_reg_25081.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_714_fu_14913_p2() {
    and_ln785_714_fu_14913_p2 = (or_ln785_44_fu_14907_p2.read() & xor_ln779_44_reg_25110.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_715_fu_15132_p2() {
    and_ln785_715_fu_15132_p2 = (or_ln785_45_fu_15126_p2.read() & xor_ln779_45_reg_25139.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_716_fu_15351_p2() {
    and_ln785_716_fu_15351_p2 = (or_ln785_46_fu_15345_p2.read() & xor_ln779_46_reg_25168.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_717_fu_15570_p2() {
    and_ln785_717_fu_15570_p2 = (or_ln785_47_fu_15564_p2.read() & xor_ln779_47_reg_25197.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_718_fu_15789_p2() {
    and_ln785_718_fu_15789_p2 = (or_ln785_48_fu_15783_p2.read() & xor_ln779_48_reg_25226.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_719_fu_16008_p2() {
    and_ln785_719_fu_16008_p2 = (or_ln785_49_fu_16002_p2.read() & xor_ln779_49_reg_25255.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_720_fu_16227_p2() {
    and_ln785_720_fu_16227_p2 = (or_ln785_50_fu_16221_p2.read() & xor_ln779_50_reg_25284.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_721_fu_16446_p2() {
    and_ln785_721_fu_16446_p2 = (or_ln785_51_fu_16440_p2.read() & xor_ln779_51_reg_25313.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_722_fu_16665_p2() {
    and_ln785_722_fu_16665_p2 = (or_ln785_52_fu_16659_p2.read() & xor_ln779_52_reg_25342.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_723_fu_16884_p2() {
    and_ln785_723_fu_16884_p2 = (or_ln785_53_fu_16878_p2.read() & xor_ln779_53_reg_25371.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_724_fu_17103_p2() {
    and_ln785_724_fu_17103_p2 = (or_ln785_54_fu_17097_p2.read() & xor_ln779_54_reg_25400.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_725_fu_17322_p2() {
    and_ln785_725_fu_17322_p2 = (or_ln785_55_fu_17316_p2.read() & xor_ln779_55_reg_25429.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_726_fu_17541_p2() {
    and_ln785_726_fu_17541_p2 = (or_ln785_56_fu_17535_p2.read() & xor_ln779_56_reg_25458.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_727_fu_17760_p2() {
    and_ln785_727_fu_17760_p2 = (or_ln785_57_fu_17754_p2.read() & xor_ln779_57_reg_25487.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_728_fu_17979_p2() {
    and_ln785_728_fu_17979_p2 = (or_ln785_58_fu_17973_p2.read() & xor_ln779_58_reg_25516.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_729_fu_18198_p2() {
    and_ln785_729_fu_18198_p2 = (or_ln785_59_fu_18192_p2.read() & xor_ln779_59_reg_25545.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_730_fu_5038_p2() {
    and_ln785_730_fu_5038_p2 = (or_ln785_60_fu_5032_p2.read() & xor_ln779_60_fu_5012_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_731_fu_18459_p2() {
    and_ln785_731_fu_18459_p2 = (or_ln785_61_fu_18454_p2.read() & xor_ln779_61_reg_25585.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_732_fu_18673_p2() {
    and_ln785_732_fu_18673_p2 = (or_ln785_62_fu_18667_p2.read() & xor_ln779_62_reg_25614.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_733_fu_18892_p2() {
    and_ln785_733_fu_18892_p2 = (or_ln785_63_fu_18886_p2.read() & xor_ln779_63_reg_25643.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_734_fu_19111_p2() {
    and_ln785_734_fu_19111_p2 = (or_ln785_64_fu_19105_p2.read() & xor_ln779_64_reg_25672.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_735_fu_19330_p2() {
    and_ln785_735_fu_19330_p2 = (or_ln785_65_fu_19324_p2.read() & xor_ln779_65_reg_25701.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_736_fu_19549_p2() {
    and_ln785_736_fu_19549_p2 = (or_ln785_66_fu_19543_p2.read() & xor_ln779_66_reg_25730.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_737_fu_19768_p2() {
    and_ln785_737_fu_19768_p2 = (or_ln785_67_fu_19762_p2.read() & xor_ln779_67_reg_25759.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_738_fu_19987_p2() {
    and_ln785_738_fu_19987_p2 = (or_ln785_68_fu_19981_p2.read() & xor_ln779_68_reg_25788.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_739_fu_20206_p2() {
    and_ln785_739_fu_20206_p2 = (or_ln785_69_fu_20200_p2.read() & xor_ln779_69_reg_25817.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_740_fu_20425_p2() {
    and_ln785_740_fu_20425_p2 = (or_ln785_70_fu_20419_p2.read() & xor_ln779_70_reg_25846.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_741_fu_20644_p2() {
    and_ln785_741_fu_20644_p2 = (or_ln785_71_fu_20638_p2.read() & xor_ln779_71_reg_25875.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_742_fu_20863_p2() {
    and_ln785_742_fu_20863_p2 = (or_ln785_72_fu_20857_p2.read() & xor_ln779_72_reg_25904.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_743_fu_21082_p2() {
    and_ln785_743_fu_21082_p2 = (or_ln785_73_fu_21076_p2.read() & xor_ln779_73_reg_25933.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_744_fu_21301_p2() {
    and_ln785_744_fu_21301_p2 = (or_ln785_74_fu_21295_p2.read() & xor_ln779_74_reg_25962.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_745_fu_21520_p2() {
    and_ln785_745_fu_21520_p2 = (or_ln785_75_fu_21514_p2.read() & xor_ln779_75_reg_25991.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_746_fu_21739_p2() {
    and_ln785_746_fu_21739_p2 = (or_ln785_76_fu_21733_p2.read() & xor_ln779_76_reg_26020.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_747_fu_21958_p2() {
    and_ln785_747_fu_21958_p2 = (or_ln785_77_fu_21952_p2.read() & xor_ln779_77_reg_26049.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_748_fu_22177_p2() {
    and_ln785_748_fu_22177_p2 = (or_ln785_78_fu_22171_p2.read() & xor_ln779_78_reg_26078.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_749_fu_22396_p2() {
    and_ln785_749_fu_22396_p2 = (or_ln785_79_fu_22390_p2.read() & xor_ln779_79_reg_26107.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln785_fu_2333_p2() {
    and_ln785_fu_2333_p2 = (or_ln785_fu_2327_p2.read() & xor_ln779_fu_2307_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_10_fu_7836_p2() {
    and_ln786_10_fu_7836_p2 = (tmp_5333_fu_7806_p3.read() & select_ln416_680_fu_7814_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_11_fu_8055_p2() {
    and_ln786_11_fu_8055_p2 = (tmp_5340_fu_8025_p3.read() & select_ln416_681_fu_8033_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_12_fu_8274_p2() {
    and_ln786_12_fu_8274_p2 = (tmp_5347_fu_8244_p3.read() & select_ln416_682_fu_8252_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_13_fu_8493_p2() {
    and_ln786_13_fu_8493_p2 = (tmp_5354_fu_8463_p3.read() & select_ln416_683_fu_8471_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_14_fu_8712_p2() {
    and_ln786_14_fu_8712_p2 = (tmp_5361_fu_8682_p3.read() & select_ln416_684_fu_8690_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_15_fu_8931_p2() {
    and_ln786_15_fu_8931_p2 = (tmp_5368_fu_8901_p3.read() & select_ln416_685_fu_8909_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_16_fu_9150_p2() {
    and_ln786_16_fu_9150_p2 = (tmp_5375_fu_9120_p3.read() & select_ln416_686_fu_9128_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_17_fu_9369_p2() {
    and_ln786_17_fu_9369_p2 = (tmp_5382_fu_9339_p3.read() & select_ln416_687_fu_9347_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1872_fu_2357_p2() {
    and_ln786_1872_fu_2357_p2 = (tmp_5259_fu_2239_p3.read() & xor_ln786_fu_2351_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1873_fu_5803_p2() {
    and_ln786_1873_fu_5803_p2 = (tmp_5264_fu_5776_p3.read() & xor_ln786_1184_fu_5797_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1874_fu_5886_p2() {
    and_ln786_1874_fu_5886_p2 = (tmp_5266_reg_23872.read() & xor_ln786_1343_fu_5880_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1875_fu_5971_p2() {
    and_ln786_1875_fu_5971_p2 = (tmp_5271_fu_5943_p3.read() & xor_ln786_1185_fu_5965_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1876_fu_6102_p2() {
    and_ln786_1876_fu_6102_p2 = (tmp_5273_reg_23911.read() & xor_ln786_1344_fu_6096_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1877_fu_6190_p2() {
    and_ln786_1877_fu_6190_p2 = (tmp_5278_fu_6162_p3.read() & xor_ln786_1186_fu_6184_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1878_fu_6321_p2() {
    and_ln786_1878_fu_6321_p2 = (tmp_5280_reg_23940.read() & xor_ln786_1345_fu_6315_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1879_fu_6409_p2() {
    and_ln786_1879_fu_6409_p2 = (tmp_5285_fu_6381_p3.read() & xor_ln786_1187_fu_6403_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1880_fu_6540_p2() {
    and_ln786_1880_fu_6540_p2 = (tmp_5287_reg_23969.read() & xor_ln786_1346_fu_6534_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1881_fu_6628_p2() {
    and_ln786_1881_fu_6628_p2 = (tmp_5292_fu_6600_p3.read() & xor_ln786_1188_fu_6622_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1882_fu_6759_p2() {
    and_ln786_1882_fu_6759_p2 = (tmp_5294_reg_23998.read() & xor_ln786_1347_fu_6753_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1883_fu_6847_p2() {
    and_ln786_1883_fu_6847_p2 = (tmp_5299_fu_6819_p3.read() & xor_ln786_1189_fu_6841_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1884_fu_6978_p2() {
    and_ln786_1884_fu_6978_p2 = (tmp_5301_reg_24027.read() & xor_ln786_1348_fu_6972_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1885_fu_7066_p2() {
    and_ln786_1885_fu_7066_p2 = (tmp_5306_fu_7038_p3.read() & xor_ln786_1190_fu_7060_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1886_fu_7197_p2() {
    and_ln786_1886_fu_7197_p2 = (tmp_5308_reg_24056.read() & xor_ln786_1349_fu_7191_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1887_fu_7285_p2() {
    and_ln786_1887_fu_7285_p2 = (tmp_5313_fu_7257_p3.read() & xor_ln786_1191_fu_7279_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1888_fu_7416_p2() {
    and_ln786_1888_fu_7416_p2 = (tmp_5315_reg_24085.read() & xor_ln786_1350_fu_7410_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1889_fu_7504_p2() {
    and_ln786_1889_fu_7504_p2 = (tmp_5320_fu_7476_p3.read() & xor_ln786_1192_fu_7498_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1890_fu_7635_p2() {
    and_ln786_1890_fu_7635_p2 = (tmp_5322_reg_24114.read() & xor_ln786_1351_fu_7629_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1891_fu_7723_p2() {
    and_ln786_1891_fu_7723_p2 = (tmp_5327_fu_7695_p3.read() & xor_ln786_1193_fu_7717_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1892_fu_7854_p2() {
    and_ln786_1892_fu_7854_p2 = (tmp_5329_reg_24143.read() & xor_ln786_1352_fu_7848_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1893_fu_7942_p2() {
    and_ln786_1893_fu_7942_p2 = (tmp_5334_fu_7914_p3.read() & xor_ln786_1194_fu_7936_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1894_fu_8073_p2() {
    and_ln786_1894_fu_8073_p2 = (tmp_5336_reg_24172.read() & xor_ln786_1353_fu_8067_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1895_fu_8161_p2() {
    and_ln786_1895_fu_8161_p2 = (tmp_5341_fu_8133_p3.read() & xor_ln786_1195_fu_8155_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1896_fu_8292_p2() {
    and_ln786_1896_fu_8292_p2 = (tmp_5343_reg_24201.read() & xor_ln786_1354_fu_8286_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1897_fu_8380_p2() {
    and_ln786_1897_fu_8380_p2 = (tmp_5348_fu_8352_p3.read() & xor_ln786_1196_fu_8374_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1898_fu_8511_p2() {
    and_ln786_1898_fu_8511_p2 = (tmp_5350_reg_24230.read() & xor_ln786_1355_fu_8505_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1899_fu_8599_p2() {
    and_ln786_1899_fu_8599_p2 = (tmp_5355_fu_8571_p3.read() & xor_ln786_1197_fu_8593_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_18_fu_9588_p2() {
    and_ln786_18_fu_9588_p2 = (tmp_5389_fu_9558_p3.read() & select_ln416_688_fu_9566_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1900_fu_8730_p2() {
    and_ln786_1900_fu_8730_p2 = (tmp_5357_reg_24259.read() & xor_ln786_1356_fu_8724_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1901_fu_8818_p2() {
    and_ln786_1901_fu_8818_p2 = (tmp_5362_fu_8790_p3.read() & xor_ln786_1198_fu_8812_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1902_fu_8949_p2() {
    and_ln786_1902_fu_8949_p2 = (tmp_5364_reg_24288.read() & xor_ln786_1357_fu_8943_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1903_fu_9037_p2() {
    and_ln786_1903_fu_9037_p2 = (tmp_5369_fu_9009_p3.read() & xor_ln786_1199_fu_9031_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1904_fu_9168_p2() {
    and_ln786_1904_fu_9168_p2 = (tmp_5371_reg_24317.read() & xor_ln786_1358_fu_9162_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1905_fu_9256_p2() {
    and_ln786_1905_fu_9256_p2 = (tmp_5376_fu_9228_p3.read() & xor_ln786_1200_fu_9250_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1906_fu_9387_p2() {
    and_ln786_1906_fu_9387_p2 = (tmp_5378_reg_24346.read() & xor_ln786_1359_fu_9381_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1907_fu_9475_p2() {
    and_ln786_1907_fu_9475_p2 = (tmp_5383_fu_9447_p3.read() & xor_ln786_1201_fu_9469_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1908_fu_9606_p2() {
    and_ln786_1908_fu_9606_p2 = (tmp_5385_reg_24375.read() & xor_ln786_1360_fu_9600_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1909_fu_9694_p2() {
    and_ln786_1909_fu_9694_p2 = (tmp_5390_fu_9666_p3.read() & xor_ln786_1202_fu_9688_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1910_fu_9825_p2() {
    and_ln786_1910_fu_9825_p2 = (tmp_5392_reg_24404.read() & xor_ln786_1361_fu_9819_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1911_fu_9913_p2() {
    and_ln786_1911_fu_9913_p2 = (tmp_5397_fu_9885_p3.read() & xor_ln786_1203_fu_9907_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1912_fu_3418_p2() {
    and_ln786_1912_fu_3418_p2 = (tmp_5399_fu_3300_p3.read() & xor_ln786_1362_fu_3412_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1913_fu_10001_p2() {
    and_ln786_1913_fu_10001_p2 = (tmp_5404_fu_9974_p3.read() & xor_ln786_1204_fu_9995_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1914_fu_10084_p2() {
    and_ln786_1914_fu_10084_p2 = (tmp_5406_reg_24434.read() & xor_ln786_1363_fu_10078_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1915_fu_10169_p2() {
    and_ln786_1915_fu_10169_p2 = (tmp_5411_fu_10141_p3.read() & xor_ln786_1205_fu_10163_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1916_fu_10300_p2() {
    and_ln786_1916_fu_10300_p2 = (tmp_5413_reg_24473.read() & xor_ln786_1364_fu_10294_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1917_fu_10388_p2() {
    and_ln786_1917_fu_10388_p2 = (tmp_5418_fu_10360_p3.read() & xor_ln786_1206_fu_10382_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1918_fu_10519_p2() {
    and_ln786_1918_fu_10519_p2 = (tmp_5420_reg_24502.read() & xor_ln786_1365_fu_10513_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1919_fu_10607_p2() {
    and_ln786_1919_fu_10607_p2 = (tmp_5425_fu_10579_p3.read() & xor_ln786_1207_fu_10601_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1920_fu_10738_p2() {
    and_ln786_1920_fu_10738_p2 = (tmp_5427_reg_24531.read() & xor_ln786_1366_fu_10732_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1921_fu_10826_p2() {
    and_ln786_1921_fu_10826_p2 = (tmp_5432_fu_10798_p3.read() & xor_ln786_1208_fu_10820_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1922_fu_10957_p2() {
    and_ln786_1922_fu_10957_p2 = (tmp_5434_reg_24560.read() & xor_ln786_1367_fu_10951_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1923_fu_11045_p2() {
    and_ln786_1923_fu_11045_p2 = (tmp_5439_fu_11017_p3.read() & xor_ln786_1209_fu_11039_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1924_fu_11176_p2() {
    and_ln786_1924_fu_11176_p2 = (tmp_5441_reg_24589.read() & xor_ln786_1368_fu_11170_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1925_fu_11264_p2() {
    and_ln786_1925_fu_11264_p2 = (tmp_5446_fu_11236_p3.read() & xor_ln786_1210_fu_11258_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1926_fu_11395_p2() {
    and_ln786_1926_fu_11395_p2 = (tmp_5448_reg_24618.read() & xor_ln786_1369_fu_11389_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1927_fu_11483_p2() {
    and_ln786_1927_fu_11483_p2 = (tmp_5453_fu_11455_p3.read() & xor_ln786_1211_fu_11477_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1928_fu_11614_p2() {
    and_ln786_1928_fu_11614_p2 = (tmp_5455_reg_24647.read() & xor_ln786_1370_fu_11608_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1929_fu_11702_p2() {
    and_ln786_1929_fu_11702_p2 = (tmp_5460_fu_11674_p3.read() & xor_ln786_1212_fu_11696_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1930_fu_11833_p2() {
    and_ln786_1930_fu_11833_p2 = (tmp_5462_reg_24676.read() & xor_ln786_1371_fu_11827_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1931_fu_11921_p2() {
    and_ln786_1931_fu_11921_p2 = (tmp_5467_fu_11893_p3.read() & xor_ln786_1213_fu_11915_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1932_fu_12052_p2() {
    and_ln786_1932_fu_12052_p2 = (tmp_5469_reg_24705.read() & xor_ln786_1372_fu_12046_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1933_fu_12140_p2() {
    and_ln786_1933_fu_12140_p2 = (tmp_5474_fu_12112_p3.read() & xor_ln786_1214_fu_12134_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1934_fu_12271_p2() {
    and_ln786_1934_fu_12271_p2 = (tmp_5476_reg_24734.read() & xor_ln786_1373_fu_12265_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1935_fu_12359_p2() {
    and_ln786_1935_fu_12359_p2 = (tmp_5481_fu_12331_p3.read() & xor_ln786_1215_fu_12353_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1936_fu_12490_p2() {
    and_ln786_1936_fu_12490_p2 = (tmp_5483_reg_24763.read() & xor_ln786_1374_fu_12484_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1937_fu_12578_p2() {
    and_ln786_1937_fu_12578_p2 = (tmp_5488_fu_12550_p3.read() & xor_ln786_1216_fu_12572_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1938_fu_12709_p2() {
    and_ln786_1938_fu_12709_p2 = (tmp_5490_reg_24792.read() & xor_ln786_1375_fu_12703_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1939_fu_12797_p2() {
    and_ln786_1939_fu_12797_p2 = (tmp_5495_fu_12769_p3.read() & xor_ln786_1217_fu_12791_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1940_fu_12928_p2() {
    and_ln786_1940_fu_12928_p2 = (tmp_5497_reg_24821.read() & xor_ln786_1376_fu_12922_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1941_fu_13016_p2() {
    and_ln786_1941_fu_13016_p2 = (tmp_5502_fu_12988_p3.read() & xor_ln786_1218_fu_13010_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1942_fu_13147_p2() {
    and_ln786_1942_fu_13147_p2 = (tmp_5504_reg_24850.read() & xor_ln786_1377_fu_13141_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1943_fu_13235_p2() {
    and_ln786_1943_fu_13235_p2 = (tmp_5509_fu_13207_p3.read() & xor_ln786_1219_fu_13229_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1944_fu_13366_p2() {
    and_ln786_1944_fu_13366_p2 = (tmp_5511_reg_24879.read() & xor_ln786_1378_fu_13360_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1945_fu_13454_p2() {
    and_ln786_1945_fu_13454_p2 = (tmp_5516_fu_13426_p3.read() & xor_ln786_1220_fu_13448_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1946_fu_13585_p2() {
    and_ln786_1946_fu_13585_p2 = (tmp_5518_reg_24908.read() & xor_ln786_1379_fu_13579_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1947_fu_13673_p2() {
    and_ln786_1947_fu_13673_p2 = (tmp_5523_fu_13645_p3.read() & xor_ln786_1221_fu_13667_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1948_fu_13804_p2() {
    and_ln786_1948_fu_13804_p2 = (tmp_5525_reg_24937.read() & xor_ln786_1380_fu_13798_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1949_fu_13892_p2() {
    and_ln786_1949_fu_13892_p2 = (tmp_5530_fu_13864_p3.read() & xor_ln786_1222_fu_13886_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1950_fu_14023_p2() {
    and_ln786_1950_fu_14023_p2 = (tmp_5532_reg_24966.read() & xor_ln786_1381_fu_14017_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1951_fu_14111_p2() {
    and_ln786_1951_fu_14111_p2 = (tmp_5537_fu_14083_p3.read() & xor_ln786_1223_fu_14105_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1952_fu_4240_p2() {
    and_ln786_1952_fu_4240_p2 = (tmp_5539_fu_4122_p3.read() & xor_ln786_1382_fu_4234_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1953_fu_14199_p2() {
    and_ln786_1953_fu_14199_p2 = (tmp_5544_fu_14172_p3.read() & xor_ln786_1224_fu_14193_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1954_fu_14282_p2() {
    and_ln786_1954_fu_14282_p2 = (tmp_5546_reg_24996.read() & xor_ln786_1383_fu_14276_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1955_fu_14367_p2() {
    and_ln786_1955_fu_14367_p2 = (tmp_5551_fu_14339_p3.read() & xor_ln786_1225_fu_14361_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1956_fu_14498_p2() {
    and_ln786_1956_fu_14498_p2 = (tmp_5553_reg_25035.read() & xor_ln786_1384_fu_14492_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1957_fu_14586_p2() {
    and_ln786_1957_fu_14586_p2 = (tmp_5558_fu_14558_p3.read() & xor_ln786_1226_fu_14580_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1958_fu_14717_p2() {
    and_ln786_1958_fu_14717_p2 = (tmp_5560_reg_25064.read() & xor_ln786_1385_fu_14711_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1959_fu_14805_p2() {
    and_ln786_1959_fu_14805_p2 = (tmp_5565_fu_14777_p3.read() & xor_ln786_1227_fu_14799_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1960_fu_14936_p2() {
    and_ln786_1960_fu_14936_p2 = (tmp_5567_reg_25093.read() & xor_ln786_1386_fu_14930_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1961_fu_15024_p2() {
    and_ln786_1961_fu_15024_p2 = (tmp_5572_fu_14996_p3.read() & xor_ln786_1228_fu_15018_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1962_fu_15155_p2() {
    and_ln786_1962_fu_15155_p2 = (tmp_5574_reg_25122.read() & xor_ln786_1387_fu_15149_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1963_fu_15243_p2() {
    and_ln786_1963_fu_15243_p2 = (tmp_5579_fu_15215_p3.read() & xor_ln786_1229_fu_15237_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1964_fu_15374_p2() {
    and_ln786_1964_fu_15374_p2 = (tmp_5581_reg_25151.read() & xor_ln786_1388_fu_15368_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1965_fu_15462_p2() {
    and_ln786_1965_fu_15462_p2 = (tmp_5586_fu_15434_p3.read() & xor_ln786_1230_fu_15456_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1966_fu_15593_p2() {
    and_ln786_1966_fu_15593_p2 = (tmp_5588_reg_25180.read() & xor_ln786_1389_fu_15587_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1967_fu_15681_p2() {
    and_ln786_1967_fu_15681_p2 = (tmp_5593_fu_15653_p3.read() & xor_ln786_1231_fu_15675_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1968_fu_15812_p2() {
    and_ln786_1968_fu_15812_p2 = (tmp_5595_reg_25209.read() & xor_ln786_1390_fu_15806_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1969_fu_15900_p2() {
    and_ln786_1969_fu_15900_p2 = (tmp_5600_fu_15872_p3.read() & xor_ln786_1232_fu_15894_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1970_fu_16031_p2() {
    and_ln786_1970_fu_16031_p2 = (tmp_5602_reg_25238.read() & xor_ln786_1391_fu_16025_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1971_fu_16119_p2() {
    and_ln786_1971_fu_16119_p2 = (tmp_5607_fu_16091_p3.read() & xor_ln786_1233_fu_16113_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1972_fu_16250_p2() {
    and_ln786_1972_fu_16250_p2 = (tmp_5609_reg_25267.read() & xor_ln786_1392_fu_16244_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1973_fu_16338_p2() {
    and_ln786_1973_fu_16338_p2 = (tmp_5614_fu_16310_p3.read() & xor_ln786_1234_fu_16332_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1974_fu_16469_p2() {
    and_ln786_1974_fu_16469_p2 = (tmp_5616_reg_25296.read() & xor_ln786_1393_fu_16463_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1975_fu_16557_p2() {
    and_ln786_1975_fu_16557_p2 = (tmp_5621_fu_16529_p3.read() & xor_ln786_1235_fu_16551_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1976_fu_16688_p2() {
    and_ln786_1976_fu_16688_p2 = (tmp_5623_reg_25325.read() & xor_ln786_1394_fu_16682_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1977_fu_16776_p2() {
    and_ln786_1977_fu_16776_p2 = (tmp_5628_fu_16748_p3.read() & xor_ln786_1236_fu_16770_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1978_fu_16907_p2() {
    and_ln786_1978_fu_16907_p2 = (tmp_5630_reg_25354.read() & xor_ln786_1395_fu_16901_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1979_fu_16995_p2() {
    and_ln786_1979_fu_16995_p2 = (tmp_5635_fu_16967_p3.read() & xor_ln786_1237_fu_16989_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1980_fu_17126_p2() {
    and_ln786_1980_fu_17126_p2 = (tmp_5637_reg_25383.read() & xor_ln786_1396_fu_17120_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1981_fu_17214_p2() {
    and_ln786_1981_fu_17214_p2 = (tmp_5642_fu_17186_p3.read() & xor_ln786_1238_fu_17208_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1982_fu_17345_p2() {
    and_ln786_1982_fu_17345_p2 = (tmp_5644_reg_25412.read() & xor_ln786_1397_fu_17339_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1983_fu_17433_p2() {
    and_ln786_1983_fu_17433_p2 = (tmp_5649_fu_17405_p3.read() & xor_ln786_1239_fu_17427_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1984_fu_17564_p2() {
    and_ln786_1984_fu_17564_p2 = (tmp_5651_reg_25441.read() & xor_ln786_1398_fu_17558_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1985_fu_17652_p2() {
    and_ln786_1985_fu_17652_p2 = (tmp_5656_fu_17624_p3.read() & xor_ln786_1240_fu_17646_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1986_fu_17783_p2() {
    and_ln786_1986_fu_17783_p2 = (tmp_5658_reg_25470.read() & xor_ln786_1399_fu_17777_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1987_fu_17871_p2() {
    and_ln786_1987_fu_17871_p2 = (tmp_5663_fu_17843_p3.read() & xor_ln786_1241_fu_17865_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1988_fu_18002_p2() {
    and_ln786_1988_fu_18002_p2 = (tmp_5665_reg_25499.read() & xor_ln786_1400_fu_17996_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1989_fu_18090_p2() {
    and_ln786_1989_fu_18090_p2 = (tmp_5670_fu_18062_p3.read() & xor_ln786_1242_fu_18084_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1990_fu_18221_p2() {
    and_ln786_1990_fu_18221_p2 = (tmp_5672_reg_25528.read() & xor_ln786_1401_fu_18215_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1991_fu_18309_p2() {
    and_ln786_1991_fu_18309_p2 = (tmp_5677_fu_18281_p3.read() & xor_ln786_1243_fu_18303_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1992_fu_5062_p2() {
    and_ln786_1992_fu_5062_p2 = (tmp_5679_fu_4944_p3.read() & xor_ln786_1402_fu_5056_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1993_fu_18397_p2() {
    and_ln786_1993_fu_18397_p2 = (tmp_5684_fu_18370_p3.read() & xor_ln786_1244_fu_18391_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1994_fu_18480_p2() {
    and_ln786_1994_fu_18480_p2 = (tmp_5686_reg_25558.read() & xor_ln786_1403_fu_18474_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1995_fu_18565_p2() {
    and_ln786_1995_fu_18565_p2 = (tmp_5691_fu_18537_p3.read() & xor_ln786_1245_fu_18559_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1996_fu_18696_p2() {
    and_ln786_1996_fu_18696_p2 = (tmp_5693_reg_25597.read() & xor_ln786_1404_fu_18690_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1997_fu_18784_p2() {
    and_ln786_1997_fu_18784_p2 = (tmp_5698_fu_18756_p3.read() & xor_ln786_1246_fu_18778_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1998_fu_18915_p2() {
    and_ln786_1998_fu_18915_p2 = (tmp_5700_reg_25626.read() & xor_ln786_1405_fu_18909_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1999_fu_19003_p2() {
    and_ln786_1999_fu_19003_p2 = (tmp_5705_fu_18975_p3.read() & xor_ln786_1247_fu_18997_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_19_fu_9807_p2() {
    and_ln786_19_fu_9807_p2 = (tmp_5396_fu_9777_p3.read() & select_ln416_689_fu_9785_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_1_fu_5870_p2() {
    and_ln786_1_fu_5870_p2 = (tmp_5270_reg_23893.read() & select_ln416_671_fu_5851_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2000_fu_19134_p2() {
    and_ln786_2000_fu_19134_p2 = (tmp_5707_reg_25655.read() & xor_ln786_1406_fu_19128_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2001_fu_19222_p2() {
    and_ln786_2001_fu_19222_p2 = (tmp_5712_fu_19194_p3.read() & xor_ln786_1248_fu_19216_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2002_fu_19353_p2() {
    and_ln786_2002_fu_19353_p2 = (tmp_5714_reg_25684.read() & xor_ln786_1407_fu_19347_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2003_fu_19441_p2() {
    and_ln786_2003_fu_19441_p2 = (tmp_5719_fu_19413_p3.read() & xor_ln786_1249_fu_19435_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2004_fu_19572_p2() {
    and_ln786_2004_fu_19572_p2 = (tmp_5721_reg_25713.read() & xor_ln786_1408_fu_19566_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2005_fu_19660_p2() {
    and_ln786_2005_fu_19660_p2 = (tmp_5726_fu_19632_p3.read() & xor_ln786_1250_fu_19654_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2006_fu_19791_p2() {
    and_ln786_2006_fu_19791_p2 = (tmp_5728_reg_25742.read() & xor_ln786_1409_fu_19785_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2007_fu_19879_p2() {
    and_ln786_2007_fu_19879_p2 = (tmp_5733_fu_19851_p3.read() & xor_ln786_1251_fu_19873_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2008_fu_20010_p2() {
    and_ln786_2008_fu_20010_p2 = (tmp_5735_reg_25771.read() & xor_ln786_1410_fu_20004_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2009_fu_20098_p2() {
    and_ln786_2009_fu_20098_p2 = (tmp_5740_fu_20070_p3.read() & xor_ln786_1252_fu_20092_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2010_fu_20229_p2() {
    and_ln786_2010_fu_20229_p2 = (tmp_5742_reg_25800.read() & xor_ln786_1411_fu_20223_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2011_fu_20317_p2() {
    and_ln786_2011_fu_20317_p2 = (tmp_5747_fu_20289_p3.read() & xor_ln786_1253_fu_20311_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2012_fu_20448_p2() {
    and_ln786_2012_fu_20448_p2 = (tmp_5749_reg_25829.read() & xor_ln786_1412_fu_20442_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2013_fu_20536_p2() {
    and_ln786_2013_fu_20536_p2 = (tmp_5754_fu_20508_p3.read() & xor_ln786_1254_fu_20530_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2014_fu_20667_p2() {
    and_ln786_2014_fu_20667_p2 = (tmp_5756_reg_25858.read() & xor_ln786_1413_fu_20661_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2015_fu_20755_p2() {
    and_ln786_2015_fu_20755_p2 = (tmp_5761_fu_20727_p3.read() & xor_ln786_1255_fu_20749_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2016_fu_20886_p2() {
    and_ln786_2016_fu_20886_p2 = (tmp_5763_reg_25887.read() & xor_ln786_1414_fu_20880_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2017_fu_20974_p2() {
    and_ln786_2017_fu_20974_p2 = (tmp_5768_fu_20946_p3.read() & xor_ln786_1256_fu_20968_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2018_fu_21105_p2() {
    and_ln786_2018_fu_21105_p2 = (tmp_5770_reg_25916.read() & xor_ln786_1415_fu_21099_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2019_fu_21193_p2() {
    and_ln786_2019_fu_21193_p2 = (tmp_5775_fu_21165_p3.read() & xor_ln786_1257_fu_21187_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2020_fu_21324_p2() {
    and_ln786_2020_fu_21324_p2 = (tmp_5777_reg_25945.read() & xor_ln786_1416_fu_21318_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2021_fu_21412_p2() {
    and_ln786_2021_fu_21412_p2 = (tmp_5782_fu_21384_p3.read() & xor_ln786_1258_fu_21406_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2022_fu_21543_p2() {
    and_ln786_2022_fu_21543_p2 = (tmp_5784_reg_25974.read() & xor_ln786_1417_fu_21537_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2023_fu_21631_p2() {
    and_ln786_2023_fu_21631_p2 = (tmp_5789_fu_21603_p3.read() & xor_ln786_1259_fu_21625_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2024_fu_21762_p2() {
    and_ln786_2024_fu_21762_p2 = (tmp_5791_reg_26003.read() & xor_ln786_1418_fu_21756_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2025_fu_21850_p2() {
    and_ln786_2025_fu_21850_p2 = (tmp_5796_fu_21822_p3.read() & xor_ln786_1260_fu_21844_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2026_fu_21981_p2() {
    and_ln786_2026_fu_21981_p2 = (tmp_5798_reg_26032.read() & xor_ln786_1419_fu_21975_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2027_fu_22069_p2() {
    and_ln786_2027_fu_22069_p2 = (tmp_5803_fu_22041_p3.read() & xor_ln786_1261_fu_22063_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2028_fu_22200_p2() {
    and_ln786_2028_fu_22200_p2 = (tmp_5805_reg_26061.read() & xor_ln786_1420_fu_22194_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2029_fu_22288_p2() {
    and_ln786_2029_fu_22288_p2 = (tmp_5810_fu_22260_p3.read() & xor_ln786_1262_fu_22282_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2030_fu_22419_p2() {
    and_ln786_2030_fu_22419_p2 = (tmp_5812_reg_26090.read() & xor_ln786_1421_fu_22413_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2031_fu_22507_p2() {
    and_ln786_2031_fu_22507_p2 = (tmp_5817_fu_22479_p3.read() & xor_ln786_1263_fu_22501_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_20_fu_3400_p2() {
    and_ln786_20_fu_3400_p2 = (tmp_5403_fu_3360_p3.read() & select_ln416_690_fu_3374_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_21_fu_10068_p2() {
    and_ln786_21_fu_10068_p2 = (tmp_5410_reg_24455.read() & select_ln416_691_fu_10049_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_22_fu_10282_p2() {
    and_ln786_22_fu_10282_p2 = (tmp_5417_fu_10252_p3.read() & select_ln416_692_fu_10260_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_23_fu_10501_p2() {
    and_ln786_23_fu_10501_p2 = (tmp_5424_fu_10471_p3.read() & select_ln416_693_fu_10479_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_24_fu_10720_p2() {
    and_ln786_24_fu_10720_p2 = (tmp_5431_fu_10690_p3.read() & select_ln416_694_fu_10698_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_25_fu_10939_p2() {
    and_ln786_25_fu_10939_p2 = (tmp_5438_fu_10909_p3.read() & select_ln416_695_fu_10917_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_26_fu_11158_p2() {
    and_ln786_26_fu_11158_p2 = (tmp_5445_fu_11128_p3.read() & select_ln416_696_fu_11136_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_27_fu_11377_p2() {
    and_ln786_27_fu_11377_p2 = (tmp_5452_fu_11347_p3.read() & select_ln416_697_fu_11355_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_28_fu_11596_p2() {
    and_ln786_28_fu_11596_p2 = (tmp_5459_fu_11566_p3.read() & select_ln416_698_fu_11574_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_29_fu_11815_p2() {
    and_ln786_29_fu_11815_p2 = (tmp_5466_fu_11785_p3.read() & select_ln416_699_fu_11793_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_2_fu_6084_p2() {
    and_ln786_2_fu_6084_p2 = (tmp_5277_fu_6054_p3.read() & select_ln416_672_fu_6062_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_30_fu_12034_p2() {
    and_ln786_30_fu_12034_p2 = (tmp_5473_fu_12004_p3.read() & select_ln416_700_fu_12012_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_31_fu_12253_p2() {
    and_ln786_31_fu_12253_p2 = (tmp_5480_fu_12223_p3.read() & select_ln416_701_fu_12231_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_32_fu_12472_p2() {
    and_ln786_32_fu_12472_p2 = (tmp_5487_fu_12442_p3.read() & select_ln416_702_fu_12450_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_33_fu_12691_p2() {
    and_ln786_33_fu_12691_p2 = (tmp_5494_fu_12661_p3.read() & select_ln416_703_fu_12669_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_34_fu_12910_p2() {
    and_ln786_34_fu_12910_p2 = (tmp_5501_fu_12880_p3.read() & select_ln416_704_fu_12888_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_35_fu_13129_p2() {
    and_ln786_35_fu_13129_p2 = (tmp_5508_fu_13099_p3.read() & select_ln416_705_fu_13107_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_36_fu_13348_p2() {
    and_ln786_36_fu_13348_p2 = (tmp_5515_fu_13318_p3.read() & select_ln416_706_fu_13326_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_37_fu_13567_p2() {
    and_ln786_37_fu_13567_p2 = (tmp_5522_fu_13537_p3.read() & select_ln416_707_fu_13545_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_38_fu_13786_p2() {
    and_ln786_38_fu_13786_p2 = (tmp_5529_fu_13756_p3.read() & select_ln416_708_fu_13764_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_39_fu_14005_p2() {
    and_ln786_39_fu_14005_p2 = (tmp_5536_fu_13975_p3.read() & select_ln416_709_fu_13983_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_3_fu_6303_p2() {
    and_ln786_3_fu_6303_p2 = (tmp_5284_fu_6273_p3.read() & select_ln416_673_fu_6281_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_40_fu_4222_p2() {
    and_ln786_40_fu_4222_p2 = (tmp_5543_fu_4182_p3.read() & select_ln416_710_fu_4196_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_41_fu_14266_p2() {
    and_ln786_41_fu_14266_p2 = (tmp_5550_reg_25017.read() & select_ln416_711_fu_14247_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_42_fu_14480_p2() {
    and_ln786_42_fu_14480_p2 = (tmp_5557_fu_14450_p3.read() & select_ln416_712_fu_14458_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_43_fu_14699_p2() {
    and_ln786_43_fu_14699_p2 = (tmp_5564_fu_14669_p3.read() & select_ln416_713_fu_14677_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_44_fu_14918_p2() {
    and_ln786_44_fu_14918_p2 = (tmp_5571_fu_14888_p3.read() & select_ln416_714_fu_14896_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_45_fu_15137_p2() {
    and_ln786_45_fu_15137_p2 = (tmp_5578_fu_15107_p3.read() & select_ln416_715_fu_15115_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_46_fu_15356_p2() {
    and_ln786_46_fu_15356_p2 = (tmp_5585_fu_15326_p3.read() & select_ln416_716_fu_15334_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_47_fu_15575_p2() {
    and_ln786_47_fu_15575_p2 = (tmp_5592_fu_15545_p3.read() & select_ln416_717_fu_15553_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_48_fu_15794_p2() {
    and_ln786_48_fu_15794_p2 = (tmp_5599_fu_15764_p3.read() & select_ln416_718_fu_15772_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_49_fu_16013_p2() {
    and_ln786_49_fu_16013_p2 = (tmp_5606_fu_15983_p3.read() & select_ln416_719_fu_15991_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_4_fu_6522_p2() {
    and_ln786_4_fu_6522_p2 = (tmp_5291_fu_6492_p3.read() & select_ln416_674_fu_6500_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_50_fu_16232_p2() {
    and_ln786_50_fu_16232_p2 = (tmp_5613_fu_16202_p3.read() & select_ln416_720_fu_16210_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_51_fu_16451_p2() {
    and_ln786_51_fu_16451_p2 = (tmp_5620_fu_16421_p3.read() & select_ln416_721_fu_16429_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_52_fu_16670_p2() {
    and_ln786_52_fu_16670_p2 = (tmp_5627_fu_16640_p3.read() & select_ln416_722_fu_16648_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_53_fu_16889_p2() {
    and_ln786_53_fu_16889_p2 = (tmp_5634_fu_16859_p3.read() & select_ln416_723_fu_16867_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_54_fu_17108_p2() {
    and_ln786_54_fu_17108_p2 = (tmp_5641_fu_17078_p3.read() & select_ln416_724_fu_17086_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_55_fu_17327_p2() {
    and_ln786_55_fu_17327_p2 = (tmp_5648_fu_17297_p3.read() & select_ln416_725_fu_17305_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_56_fu_17546_p2() {
    and_ln786_56_fu_17546_p2 = (tmp_5655_fu_17516_p3.read() & select_ln416_726_fu_17524_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_57_fu_17765_p2() {
    and_ln786_57_fu_17765_p2 = (tmp_5662_fu_17735_p3.read() & select_ln416_727_fu_17743_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_58_fu_17984_p2() {
    and_ln786_58_fu_17984_p2 = (tmp_5669_fu_17954_p3.read() & select_ln416_728_fu_17962_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_59_fu_18203_p2() {
    and_ln786_59_fu_18203_p2 = (tmp_5676_fu_18173_p3.read() & select_ln416_729_fu_18181_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_5_fu_6741_p2() {
    and_ln786_5_fu_6741_p2 = (tmp_5298_fu_6711_p3.read() & select_ln416_675_fu_6719_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_60_fu_5044_p2() {
    and_ln786_60_fu_5044_p2 = (tmp_5683_fu_5004_p3.read() & select_ln416_730_fu_5018_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_61_fu_18464_p2() {
    and_ln786_61_fu_18464_p2 = (tmp_5690_reg_25579.read() & select_ln416_731_fu_18445_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_62_fu_18678_p2() {
    and_ln786_62_fu_18678_p2 = (tmp_5697_fu_18648_p3.read() & select_ln416_732_fu_18656_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_63_fu_18897_p2() {
    and_ln786_63_fu_18897_p2 = (tmp_5704_fu_18867_p3.read() & select_ln416_733_fu_18875_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_64_fu_19116_p2() {
    and_ln786_64_fu_19116_p2 = (tmp_5711_fu_19086_p3.read() & select_ln416_734_fu_19094_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_65_fu_19335_p2() {
    and_ln786_65_fu_19335_p2 = (tmp_5718_fu_19305_p3.read() & select_ln416_735_fu_19313_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_66_fu_19554_p2() {
    and_ln786_66_fu_19554_p2 = (tmp_5725_fu_19524_p3.read() & select_ln416_736_fu_19532_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_67_fu_19773_p2() {
    and_ln786_67_fu_19773_p2 = (tmp_5732_fu_19743_p3.read() & select_ln416_737_fu_19751_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_68_fu_19992_p2() {
    and_ln786_68_fu_19992_p2 = (tmp_5739_fu_19962_p3.read() & select_ln416_738_fu_19970_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_69_fu_20211_p2() {
    and_ln786_69_fu_20211_p2 = (tmp_5746_fu_20181_p3.read() & select_ln416_739_fu_20189_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_6_fu_6960_p2() {
    and_ln786_6_fu_6960_p2 = (tmp_5305_fu_6930_p3.read() & select_ln416_676_fu_6938_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_70_fu_20430_p2() {
    and_ln786_70_fu_20430_p2 = (tmp_5753_fu_20400_p3.read() & select_ln416_740_fu_20408_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_71_fu_20649_p2() {
    and_ln786_71_fu_20649_p2 = (tmp_5760_fu_20619_p3.read() & select_ln416_741_fu_20627_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_72_fu_20868_p2() {
    and_ln786_72_fu_20868_p2 = (tmp_5767_fu_20838_p3.read() & select_ln416_742_fu_20846_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_73_fu_21087_p2() {
    and_ln786_73_fu_21087_p2 = (tmp_5774_fu_21057_p3.read() & select_ln416_743_fu_21065_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_74_fu_21306_p2() {
    and_ln786_74_fu_21306_p2 = (tmp_5781_fu_21276_p3.read() & select_ln416_744_fu_21284_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_75_fu_21525_p2() {
    and_ln786_75_fu_21525_p2 = (tmp_5788_fu_21495_p3.read() & select_ln416_745_fu_21503_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_76_fu_21744_p2() {
    and_ln786_76_fu_21744_p2 = (tmp_5795_fu_21714_p3.read() & select_ln416_746_fu_21722_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_77_fu_21963_p2() {
    and_ln786_77_fu_21963_p2 = (tmp_5802_fu_21933_p3.read() & select_ln416_747_fu_21941_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_78_fu_22182_p2() {
    and_ln786_78_fu_22182_p2 = (tmp_5809_fu_22152_p3.read() & select_ln416_748_fu_22160_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_79_fu_22401_p2() {
    and_ln786_79_fu_22401_p2 = (tmp_5816_fu_22371_p3.read() & select_ln416_749_fu_22379_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_7_fu_7179_p2() {
    and_ln786_7_fu_7179_p2 = (tmp_5312_fu_7149_p3.read() & select_ln416_677_fu_7157_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_8_fu_7398_p2() {
    and_ln786_8_fu_7398_p2 = (tmp_5319_fu_7368_p3.read() & select_ln416_678_fu_7376_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_9_fu_7617_p2() {
    and_ln786_9_fu_7617_p2 = (tmp_5326_fu_7587_p3.read() & select_ln416_679_fu_7595_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_and_ln786_fu_2339_p2() {
    and_ln786_fu_2339_p2 = (tmp_5263_fu_2299_p3.read() & select_ln416_fu_2313_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[4];
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[5];
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_block_state5_pp1_stage0_iter0() {
    ap_block_state5_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_block_state6_pp1_stage0_iter1() {
    ap_block_state6_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_block_state7_pp1_stage0_iter2() {
    ap_block_state7_pp1_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_block_state8_pp1_stage0_iter3() {
    ap_block_state8_pp1_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_block_state9() {
    ap_block_state9 = (esl_seteq<1,1,1>(and_ln360_reg_23442.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3667.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_condition_1226() {
    ap_condition_1226 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && !(esl_seteq<1,1,1>(and_ln360_reg_23442.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3667.read())));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
         !(esl_seteq<1,1,1>(and_ln360_reg_23442.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3667.read())) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln64_fu_22596_p2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter3.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_phi_mux_i_iw_0_i_i_i_phi_fu_745_p4() {
    ap_phi_mux_i_iw_0_i_i_i_phi_fu_745_p4 = i_iw_0_i_i_i_reg_741.read();
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_phi_mux_in_index13_phi_fu_860_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(in_index13_reg_856.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_in_index13_phi_fu_860_p4 = in_index_reg_23451.read();
    } else {
        ap_phi_mux_in_index13_phi_fu_860_p4 = in_index13_reg_856.read();
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_phi_mux_phi_ln203_10_phi_fu_794_p8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln166_fu_1112_p2.read()))) {
        if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_3)) {
            ap_phi_mux_phi_ln203_10_phi_fu_794_p8 = kernel_data_V_1_35_load_reg_23385.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_2)) {
            ap_phi_mux_phi_ln203_10_phi_fu_794_p8 = kernel_data_V_1_27.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_1)) {
            ap_phi_mux_phi_ln203_10_phi_fu_794_p8 = kernel_data_V_1_19.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_0)) {
            ap_phi_mux_phi_ln203_10_phi_fu_794_p8 = kernel_data_V_1_11.read();
        } else {
            ap_phi_mux_phi_ln203_10_phi_fu_794_p8 = "XXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        ap_phi_mux_phi_ln203_10_phi_fu_794_p8 = "XXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_phi_mux_phi_ln203_11_phi_fu_807_p8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln166_fu_1112_p2.read()))) {
        if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_3)) {
            ap_phi_mux_phi_ln203_11_phi_fu_807_p8 = kernel_data_V_1_36_load_reg_23390.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_2)) {
            ap_phi_mux_phi_ln203_11_phi_fu_807_p8 = kernel_data_V_1_28.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_1)) {
            ap_phi_mux_phi_ln203_11_phi_fu_807_p8 = kernel_data_V_1_20.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_0)) {
            ap_phi_mux_phi_ln203_11_phi_fu_807_p8 = kernel_data_V_1_12.read();
        } else {
            ap_phi_mux_phi_ln203_11_phi_fu_807_p8 = "XXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        ap_phi_mux_phi_ln203_11_phi_fu_807_p8 = "XXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_phi_mux_phi_ln203_12_phi_fu_820_p8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln166_fu_1112_p2.read()))) {
        if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_3)) {
            ap_phi_mux_phi_ln203_12_phi_fu_820_p8 = kernel_data_V_1_37_load_reg_23395.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_2)) {
            ap_phi_mux_phi_ln203_12_phi_fu_820_p8 = kernel_data_V_1_29.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_1)) {
            ap_phi_mux_phi_ln203_12_phi_fu_820_p8 = kernel_data_V_1_21.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_0)) {
            ap_phi_mux_phi_ln203_12_phi_fu_820_p8 = kernel_data_V_1_13.read();
        } else {
            ap_phi_mux_phi_ln203_12_phi_fu_820_p8 = "XXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        ap_phi_mux_phi_ln203_12_phi_fu_820_p8 = "XXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_phi_mux_phi_ln203_13_phi_fu_833_p8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln166_fu_1112_p2.read()))) {
        if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_3)) {
            ap_phi_mux_phi_ln203_13_phi_fu_833_p8 = kernel_data_V_1_38_load_reg_23400.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_2)) {
            ap_phi_mux_phi_ln203_13_phi_fu_833_p8 = kernel_data_V_1_30.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_1)) {
            ap_phi_mux_phi_ln203_13_phi_fu_833_p8 = kernel_data_V_1_22.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_0)) {
            ap_phi_mux_phi_ln203_13_phi_fu_833_p8 = kernel_data_V_1_14.read();
        } else {
            ap_phi_mux_phi_ln203_13_phi_fu_833_p8 = "XXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        ap_phi_mux_phi_ln203_13_phi_fu_833_p8 = "XXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_phi_mux_phi_ln203_14_phi_fu_846_p8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln166_fu_1112_p2.read()))) {
        if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_3)) {
            ap_phi_mux_phi_ln203_14_phi_fu_846_p8 = kernel_data_V_1_39_load_reg_23405.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_2)) {
            ap_phi_mux_phi_ln203_14_phi_fu_846_p8 = kernel_data_V_1_31.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_1)) {
            ap_phi_mux_phi_ln203_14_phi_fu_846_p8 = kernel_data_V_1_23.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_0)) {
            ap_phi_mux_phi_ln203_14_phi_fu_846_p8 = kernel_data_V_1_15.read();
        } else {
            ap_phi_mux_phi_ln203_14_phi_fu_846_p8 = "XXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        ap_phi_mux_phi_ln203_14_phi_fu_846_p8 = "XXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_phi_mux_phi_ln203_8_phi_fu_768_p8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln166_fu_1112_p2.read()))) {
        if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_3)) {
            ap_phi_mux_phi_ln203_8_phi_fu_768_p8 = kernel_data_V_1_33_load_reg_23375.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_2)) {
            ap_phi_mux_phi_ln203_8_phi_fu_768_p8 = kernel_data_V_1_25.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_1)) {
            ap_phi_mux_phi_ln203_8_phi_fu_768_p8 = kernel_data_V_1_17.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_0)) {
            ap_phi_mux_phi_ln203_8_phi_fu_768_p8 = kernel_data_V_1_9.read();
        } else {
            ap_phi_mux_phi_ln203_8_phi_fu_768_p8 = "XXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        ap_phi_mux_phi_ln203_8_phi_fu_768_p8 = "XXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_phi_mux_phi_ln203_9_phi_fu_781_p8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln166_fu_1112_p2.read()))) {
        if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_3)) {
            ap_phi_mux_phi_ln203_9_phi_fu_781_p8 = kernel_data_V_1_34_load_reg_23380.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_2)) {
            ap_phi_mux_phi_ln203_9_phi_fu_781_p8 = kernel_data_V_1_26.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_1)) {
            ap_phi_mux_phi_ln203_9_phi_fu_781_p8 = kernel_data_V_1_18.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_0)) {
            ap_phi_mux_phi_ln203_9_phi_fu_781_p8 = kernel_data_V_1_10.read();
        } else {
            ap_phi_mux_phi_ln203_9_phi_fu_781_p8 = "XXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        ap_phi_mux_phi_ln203_9_phi_fu_781_p8 = "XXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_phi_mux_phi_ln203_phi_fu_755_p8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln166_fu_1112_p2.read()))) {
        if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_3)) {
            ap_phi_mux_phi_ln203_phi_fu_755_p8 = kernel_data_V_1_32_load_reg_23370.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_2)) {
            ap_phi_mux_phi_ln203_phi_fu_755_p8 = kernel_data_V_1_24.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_1)) {
            ap_phi_mux_phi_ln203_phi_fu_755_p8 = kernel_data_V_1_16.read();
        } else if (esl_seteq<1,2,2>(trunc_ln203_fu_1124_p1.read(), ap_const_lv2_0)) {
            ap_phi_mux_phi_ln203_phi_fu_755_p8 = kernel_data_V_1_8.read();
        } else {
            ap_phi_mux_phi_ln203_phi_fu_755_p8 = "XXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        ap_phi_mux_phi_ln203_phi_fu_755_p8 = "XXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_phi_mux_storemerge_i_i_phi_fu_915_p4() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln384_fu_22555_p2.read())) {
            ap_phi_mux_storemerge_i_i_phi_fu_915_p4 = ap_const_lv32_0;
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln384_fu_22555_p2.read())) {
            ap_phi_mux_storemerge_i_i_phi_fu_915_p4 = select_ln391_fu_22576_p3.read();
        } else {
            ap_phi_mux_storemerge_i_i_phi_fu_915_p4 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        ap_phi_mux_storemerge_i_i_phi_fu_915_p4 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_ap_ready() {
    ap_ready = internal_ap_ready.read();
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_data_V_data_0_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        data_V_data_0_V_blk_n = data_V_data_0_V_empty_n.read();
    } else {
        data_V_data_0_V_blk_n = ap_const_logic_1;
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_data_V_data_0_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op27.read(), ap_const_logic_1))) {
        data_V_data_0_V_read = ap_const_logic_1;
    } else {
        data_V_data_0_V_read = ap_const_logic_0;
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_data_V_data_1_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        data_V_data_1_V_blk_n = data_V_data_1_V_empty_n.read();
    } else {
        data_V_data_1_V_blk_n = ap_const_logic_1;
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_data_V_data_1_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op27.read(), ap_const_logic_1))) {
        data_V_data_1_V_read = ap_const_logic_1;
    } else {
        data_V_data_1_V_read = ap_const_logic_0;
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_data_V_data_2_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        data_V_data_2_V_blk_n = data_V_data_2_V_empty_n.read();
    } else {
        data_V_data_2_V_blk_n = ap_const_logic_1;
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_data_V_data_2_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op27.read(), ap_const_logic_1))) {
        data_V_data_2_V_read = ap_const_logic_1;
    } else {
        data_V_data_2_V_read = ap_const_logic_0;
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_data_V_data_3_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        data_V_data_3_V_blk_n = data_V_data_3_V_empty_n.read();
    } else {
        data_V_data_3_V_blk_n = ap_const_logic_1;
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_data_V_data_3_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op27.read(), ap_const_logic_1))) {
        data_V_data_3_V_read = ap_const_logic_1;
    } else {
        data_V_data_3_V_read = ap_const_logic_0;
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_data_V_data_4_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        data_V_data_4_V_blk_n = data_V_data_4_V_empty_n.read();
    } else {
        data_V_data_4_V_blk_n = ap_const_logic_1;
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_data_V_data_4_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op27.read(), ap_const_logic_1))) {
        data_V_data_4_V_read = ap_const_logic_1;
    } else {
        data_V_data_4_V_read = ap_const_logic_0;
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_data_V_data_5_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        data_V_data_5_V_blk_n = data_V_data_5_V_empty_n.read();
    } else {
        data_V_data_5_V_blk_n = ap_const_logic_1;
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_data_V_data_5_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op27.read(), ap_const_logic_1))) {
        data_V_data_5_V_read = ap_const_logic_1;
    } else {
        data_V_data_5_V_read = ap_const_logic_0;
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_data_V_data_6_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        data_V_data_6_V_blk_n = data_V_data_6_V_empty_n.read();
    } else {
        data_V_data_6_V_blk_n = ap_const_logic_1;
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_data_V_data_6_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op27.read(), ap_const_logic_1))) {
        data_V_data_6_V_read = ap_const_logic_1;
    } else {
        data_V_data_6_V_read = ap_const_logic_0;
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_data_V_data_7_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        data_V_data_7_V_blk_n = data_V_data_7_V_empty_n.read();
    } else {
        data_V_data_7_V_blk_n = ap_const_logic_1;
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_data_V_data_7_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op27.read(), ap_const_logic_1))) {
        data_V_data_7_V_read = ap_const_logic_1;
    } else {
        data_V_data_7_V_read = ap_const_logic_0;
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_i_iw_3_fu_1118_p2() {
    i_iw_3_fu_1118_p2 = (!i_iw_0_i_i_i_reg_741.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_iw_0_i_i_i_reg_741.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_i_iw_fu_1106_p2() {
    i_iw_fu_1106_p2 = (!i_iw_0_i14_reg_729.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(i_iw_0_i14_reg_729.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_icmp_ln166_fu_1112_p2() {
    icmp_ln166_fu_1112_p2 = (!i_iw_0_i_i_i_reg_741.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_iw_0_i_i_i_reg_741.read() == ap_const_lv3_4);
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_icmp_ln360_3_fu_1384_p2() {
    icmp_ln360_3_fu_1384_p2 = (!tmp_5258_fu_1374_p4.read().is_01() || !ap_const_lv30_0.is_01())? sc_lv<1>(): (sc_bigint<30>(tmp_5258_fu_1374_p4.read()) > sc_bigint<30>(ap_const_lv30_0));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_icmp_ln360_fu_1364_p2() {
    icmp_ln360_fu_1364_p2 = (!sX_2.read().is_01() || !ap_const_lv32_4.is_01())? sc_lv<1>(): sc_lv<1>(sX_2.read() == ap_const_lv32_4);
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_icmp_ln384_fu_22555_p2() {
    icmp_ln384_fu_22555_p2 = (!pX_2_load_reg_23436.read().is_01() || !ap_const_lv32_42.is_01())? sc_lv<1>(): sc_lv<1>(pX_2_load_reg_23436.read() == ap_const_lv32_42);
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_icmp_ln64_fu_22596_p2() {
    icmp_ln64_fu_22596_p2 = (!i_iw_0_i14_reg_729.read().is_01() || !ap_const_lv7_42.is_01())? sc_lv<1>(): sc_lv<1>(i_iw_0_i14_reg_729.read() == ap_const_lv7_42);
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_in_index_fu_1401_p2() {
    in_index_fu_1401_p2 = (ap_phi_mux_in_index13_phi_fu_860_p4.read() ^ ap_const_lv1_1);
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_internal_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
         !(esl_seteq<1,1,1>(and_ln360_reg_23442.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3667.read())) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln64_fu_22596_p2.read()))) {
        internal_ap_ready = ap_const_logic_1;
    } else {
        internal_ap_ready = ap_const_logic_0;
    }
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_io_acc_block_signal_op27() {
    io_acc_block_signal_op27 = (data_V_data_0_V_empty_n.read() & data_V_data_1_V_empty_n.read() & data_V_data_2_V_empty_n.read() & data_V_data_3_V_empty_n.read() & data_V_data_4_V_empty_n.read() & data_V_data_5_V_empty_n.read() & data_V_data_6_V_empty_n.read() & data_V_data_7_V_empty_n.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_io_acc_block_signal_op3667() {
    io_acc_block_signal_op3667 = (res_V_data_0_V_full_n.read() & res_V_data_1_V_full_n.read() & res_V_data_2_V_full_n.read() & res_V_data_3_V_full_n.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_678_fu_22612_p0() {
    mul_ln1118_678_fu_22612_p0 =  (sc_lv<24>) (sext_ln1116_51_fu_2405_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_679_fu_22622_p0() {
    mul_ln1118_679_fu_22622_p0 =  (sc_lv<24>) (sext_ln1116_52_fu_2501_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_680_fu_22631_p0() {
    mul_ln1118_680_fu_22631_p0 =  (sc_lv<24>) (sext_ln1116_53_fu_2553_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_681_fu_22640_p0() {
    mul_ln1118_681_fu_22640_p0 =  (sc_lv<24>) (sext_ln1116_54_fu_2597_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_682_fu_22649_p0() {
    mul_ln1118_682_fu_22649_p0 =  (sc_lv<24>) (sext_ln1116_55_fu_2641_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_683_fu_22658_p0() {
    mul_ln1118_683_fu_22658_p0 =  (sc_lv<24>) (sext_ln1116_56_fu_2685_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_684_fu_22667_p0() {
    mul_ln1118_684_fu_22667_p0 =  (sc_lv<24>) (sext_ln1116_57_fu_2729_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_685_fu_22676_p0() {
    mul_ln1118_685_fu_22676_p0 =  (sc_lv<24>) (sext_ln1116_58_fu_2773_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_686_fu_22685_p0() {
    mul_ln1118_686_fu_22685_p0 =  (sc_lv<24>) (sext_ln1116_59_fu_2817_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_687_fu_22694_p0() {
    mul_ln1118_687_fu_22694_p0 =  (sc_lv<24>) (sext_ln1116_60_fu_2861_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_688_fu_22703_p0() {
    mul_ln1118_688_fu_22703_p0 =  (sc_lv<24>) (sext_ln1116_61_fu_2905_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_689_fu_22712_p0() {
    mul_ln1118_689_fu_22712_p0 =  (sc_lv<24>) (sext_ln1116_62_fu_2949_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_690_fu_22721_p0() {
    mul_ln1118_690_fu_22721_p0 =  (sc_lv<24>) (sext_ln1116_63_fu_2993_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_691_fu_22730_p0() {
    mul_ln1118_691_fu_22730_p0 =  (sc_lv<24>) (sext_ln1116_64_fu_3037_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_692_fu_22739_p0() {
    mul_ln1118_692_fu_22739_p0 =  (sc_lv<24>) (sext_ln1116_65_fu_3081_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_693_fu_22748_p0() {
    mul_ln1118_693_fu_22748_p0 =  (sc_lv<24>) (sext_ln1116_66_fu_3125_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_694_fu_22757_p0() {
    mul_ln1118_694_fu_22757_p0 =  (sc_lv<24>) (sext_ln1116_67_fu_3169_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_695_fu_22766_p0() {
    mul_ln1118_695_fu_22766_p0 =  (sc_lv<24>) (sext_ln1116_68_fu_3213_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_696_fu_22775_p0() {
    mul_ln1118_696_fu_22775_p0 =  (sc_lv<24>) (sext_ln1116_69_fu_3257_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_697_fu_22784_p0() {
    mul_ln1118_697_fu_22784_p0 =  (sc_lv<24>) (sext_ln1116_fu_2233_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_698_fu_22794_p0() {
    mul_ln1118_698_fu_22794_p0 =  (sc_lv<24>) (sext_ln1116_51_fu_2405_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_699_fu_22804_p0() {
    mul_ln1118_699_fu_22804_p0 =  (sc_lv<24>) (sext_ln1116_52_fu_2501_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_700_fu_22813_p0() {
    mul_ln1118_700_fu_22813_p0 =  (sc_lv<24>) (sext_ln1116_53_fu_2553_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_701_fu_22822_p0() {
    mul_ln1118_701_fu_22822_p0 =  (sc_lv<24>) (sext_ln1116_54_fu_2597_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_702_fu_22831_p0() {
    mul_ln1118_702_fu_22831_p0 =  (sc_lv<24>) (sext_ln1116_55_fu_2641_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_703_fu_22840_p0() {
    mul_ln1118_703_fu_22840_p0 =  (sc_lv<24>) (sext_ln1116_56_fu_2685_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_704_fu_22849_p0() {
    mul_ln1118_704_fu_22849_p0 =  (sc_lv<24>) (sext_ln1116_57_fu_2729_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_705_fu_22858_p0() {
    mul_ln1118_705_fu_22858_p0 =  (sc_lv<24>) (sext_ln1116_58_fu_2773_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_706_fu_22867_p0() {
    mul_ln1118_706_fu_22867_p0 =  (sc_lv<24>) (sext_ln1116_59_fu_2817_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_707_fu_22876_p0() {
    mul_ln1118_707_fu_22876_p0 =  (sc_lv<24>) (sext_ln1116_60_fu_2861_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_708_fu_22885_p0() {
    mul_ln1118_708_fu_22885_p0 =  (sc_lv<24>) (sext_ln1116_61_fu_2905_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_709_fu_22894_p0() {
    mul_ln1118_709_fu_22894_p0 =  (sc_lv<24>) (sext_ln1116_62_fu_2949_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_710_fu_22903_p0() {
    mul_ln1118_710_fu_22903_p0 =  (sc_lv<24>) (sext_ln1116_63_fu_2993_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_711_fu_22912_p0() {
    mul_ln1118_711_fu_22912_p0 =  (sc_lv<24>) (sext_ln1116_64_fu_3037_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_712_fu_22921_p0() {
    mul_ln1118_712_fu_22921_p0 =  (sc_lv<24>) (sext_ln1116_65_fu_3081_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_713_fu_22930_p0() {
    mul_ln1118_713_fu_22930_p0 =  (sc_lv<24>) (sext_ln1116_66_fu_3125_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_714_fu_22939_p0() {
    mul_ln1118_714_fu_22939_p0 =  (sc_lv<24>) (sext_ln1116_67_fu_3169_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_715_fu_22948_p0() {
    mul_ln1118_715_fu_22948_p0 =  (sc_lv<24>) (sext_ln1116_68_fu_3213_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_716_fu_22957_p0() {
    mul_ln1118_716_fu_22957_p0 =  (sc_lv<24>) (sext_ln1116_69_fu_3257_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_717_fu_22966_p0() {
    mul_ln1118_717_fu_22966_p0 =  (sc_lv<24>) (sext_ln1116_fu_2233_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_718_fu_22976_p0() {
    mul_ln1118_718_fu_22976_p0 =  (sc_lv<24>) (sext_ln1116_51_fu_2405_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_719_fu_22986_p0() {
    mul_ln1118_719_fu_22986_p0 =  (sc_lv<24>) (sext_ln1116_52_fu_2501_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_720_fu_22995_p0() {
    mul_ln1118_720_fu_22995_p0 =  (sc_lv<24>) (sext_ln1116_53_fu_2553_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_721_fu_23004_p0() {
    mul_ln1118_721_fu_23004_p0 =  (sc_lv<24>) (sext_ln1116_54_fu_2597_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_722_fu_23013_p0() {
    mul_ln1118_722_fu_23013_p0 =  (sc_lv<24>) (sext_ln1116_55_fu_2641_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_723_fu_23022_p0() {
    mul_ln1118_723_fu_23022_p0 =  (sc_lv<24>) (sext_ln1116_56_fu_2685_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_724_fu_23031_p0() {
    mul_ln1118_724_fu_23031_p0 =  (sc_lv<24>) (sext_ln1116_57_fu_2729_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_725_fu_23040_p0() {
    mul_ln1118_725_fu_23040_p0 =  (sc_lv<24>) (sext_ln1116_58_fu_2773_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_726_fu_23049_p0() {
    mul_ln1118_726_fu_23049_p0 =  (sc_lv<24>) (sext_ln1116_59_fu_2817_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_727_fu_23058_p0() {
    mul_ln1118_727_fu_23058_p0 =  (sc_lv<24>) (sext_ln1116_60_fu_2861_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_728_fu_23067_p0() {
    mul_ln1118_728_fu_23067_p0 =  (sc_lv<24>) (sext_ln1116_61_fu_2905_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_729_fu_23076_p0() {
    mul_ln1118_729_fu_23076_p0 =  (sc_lv<24>) (sext_ln1116_62_fu_2949_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_730_fu_23085_p0() {
    mul_ln1118_730_fu_23085_p0 =  (sc_lv<24>) (sext_ln1116_63_fu_2993_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_731_fu_23094_p0() {
    mul_ln1118_731_fu_23094_p0 =  (sc_lv<24>) (sext_ln1116_64_fu_3037_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_732_fu_23103_p0() {
    mul_ln1118_732_fu_23103_p0 =  (sc_lv<24>) (sext_ln1116_65_fu_3081_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_733_fu_23112_p0() {
    mul_ln1118_733_fu_23112_p0 =  (sc_lv<24>) (sext_ln1116_66_fu_3125_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_734_fu_23121_p0() {
    mul_ln1118_734_fu_23121_p0 =  (sc_lv<24>) (sext_ln1116_67_fu_3169_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_735_fu_23130_p0() {
    mul_ln1118_735_fu_23130_p0 =  (sc_lv<24>) (sext_ln1116_68_fu_3213_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_736_fu_23139_p0() {
    mul_ln1118_736_fu_23139_p0 =  (sc_lv<24>) (sext_ln1116_69_fu_3257_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_737_fu_23148_p0() {
    mul_ln1118_737_fu_23148_p0 =  (sc_lv<24>) (sext_ln1116_fu_2233_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_738_fu_23158_p0() {
    mul_ln1118_738_fu_23158_p0 =  (sc_lv<24>) (sext_ln1116_51_fu_2405_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_739_fu_23168_p0() {
    mul_ln1118_739_fu_23168_p0 =  (sc_lv<24>) (sext_ln1116_52_fu_2501_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_740_fu_23177_p0() {
    mul_ln1118_740_fu_23177_p0 =  (sc_lv<24>) (sext_ln1116_53_fu_2553_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_741_fu_23186_p0() {
    mul_ln1118_741_fu_23186_p0 =  (sc_lv<24>) (sext_ln1116_54_fu_2597_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_742_fu_23195_p0() {
    mul_ln1118_742_fu_23195_p0 =  (sc_lv<24>) (sext_ln1116_55_fu_2641_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_743_fu_23204_p0() {
    mul_ln1118_743_fu_23204_p0 =  (sc_lv<24>) (sext_ln1116_56_fu_2685_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_744_fu_23213_p0() {
    mul_ln1118_744_fu_23213_p0 =  (sc_lv<24>) (sext_ln1116_57_fu_2729_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_745_fu_23222_p0() {
    mul_ln1118_745_fu_23222_p0 =  (sc_lv<24>) (sext_ln1116_58_fu_2773_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_746_fu_23231_p0() {
    mul_ln1118_746_fu_23231_p0 =  (sc_lv<24>) (sext_ln1116_59_fu_2817_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_747_fu_23240_p0() {
    mul_ln1118_747_fu_23240_p0 =  (sc_lv<24>) (sext_ln1116_60_fu_2861_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_748_fu_23249_p0() {
    mul_ln1118_748_fu_23249_p0 =  (sc_lv<24>) (sext_ln1116_61_fu_2905_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_749_fu_23258_p0() {
    mul_ln1118_749_fu_23258_p0 =  (sc_lv<24>) (sext_ln1116_62_fu_2949_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_750_fu_23267_p0() {
    mul_ln1118_750_fu_23267_p0 =  (sc_lv<24>) (sext_ln1116_63_fu_2993_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_751_fu_23276_p0() {
    mul_ln1118_751_fu_23276_p0 =  (sc_lv<24>) (sext_ln1116_64_fu_3037_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_752_fu_23285_p0() {
    mul_ln1118_752_fu_23285_p0 =  (sc_lv<24>) (sext_ln1116_65_fu_3081_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_753_fu_23294_p0() {
    mul_ln1118_753_fu_23294_p0 =  (sc_lv<24>) (sext_ln1116_66_fu_3125_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_754_fu_23303_p0() {
    mul_ln1118_754_fu_23303_p0 =  (sc_lv<24>) (sext_ln1116_67_fu_3169_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_755_fu_23312_p0() {
    mul_ln1118_755_fu_23312_p0 =  (sc_lv<24>) (sext_ln1116_68_fu_3213_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_mul_ln1118_fu_22602_p0() {
    mul_ln1118_fu_22602_p0 =  (sc_lv<24>) (sext_ln1116_fu_2233_p1.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_10_fu_7859_p2() {
    or_ln340_10_fu_7859_p2 = (and_ln786_1892_fu_7854_p2.read() | and_ln785_680_fu_7831_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_1126_fu_8078_p2() {
    or_ln340_1126_fu_8078_p2 = (and_ln786_1894_fu_8073_p2.read() | and_ln785_681_fu_8050_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_12_fu_8297_p2() {
    or_ln340_12_fu_8297_p2 = (and_ln786_1896_fu_8292_p2.read() | and_ln785_682_fu_8269_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_13_fu_8516_p2() {
    or_ln340_13_fu_8516_p2 = (and_ln786_1898_fu_8511_p2.read() | and_ln785_683_fu_8488_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_14_fu_8735_p2() {
    or_ln340_14_fu_8735_p2 = (and_ln786_1900_fu_8730_p2.read() | and_ln785_684_fu_8707_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_15_fu_8954_p2() {
    or_ln340_15_fu_8954_p2 = (and_ln786_1902_fu_8949_p2.read() | and_ln785_685_fu_8926_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_16_fu_9173_p2() {
    or_ln340_16_fu_9173_p2 = (and_ln786_1904_fu_9168_p2.read() | and_ln785_686_fu_9145_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_17_fu_9392_p2() {
    or_ln340_17_fu_9392_p2 = (and_ln786_1906_fu_9387_p2.read() | and_ln785_687_fu_9364_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_18_fu_9611_p2() {
    or_ln340_18_fu_9611_p2 = (and_ln786_1908_fu_9606_p2.read() | and_ln785_688_fu_9583_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_19_fu_9830_p2() {
    or_ln340_19_fu_9830_p2 = (and_ln786_1910_fu_9825_p2.read() | and_ln785_689_fu_9802_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_1_fu_5891_p2() {
    or_ln340_1_fu_5891_p2 = (and_ln786_1874_fu_5886_p2.read() | and_ln785_671_fu_5865_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_20_fu_3424_p2() {
    or_ln340_20_fu_3424_p2 = (and_ln786_1912_fu_3418_p2.read() | and_ln785_690_fu_3394_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_21_fu_10089_p2() {
    or_ln340_21_fu_10089_p2 = (and_ln786_1914_fu_10084_p2.read() | and_ln785_691_fu_10063_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_22_fu_10305_p2() {
    or_ln340_22_fu_10305_p2 = (and_ln786_1916_fu_10300_p2.read() | and_ln785_692_fu_10277_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_23_fu_10524_p2() {
    or_ln340_23_fu_10524_p2 = (and_ln786_1918_fu_10519_p2.read() | and_ln785_693_fu_10496_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_24_fu_10743_p2() {
    or_ln340_24_fu_10743_p2 = (and_ln786_1920_fu_10738_p2.read() | and_ln785_694_fu_10715_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2544_fu_2369_p2() {
    or_ln340_2544_fu_2369_p2 = (and_ln786_fu_2339_p2.read() | xor_ln779_fu_2307_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2545_fu_2375_p2() {
    or_ln340_2545_fu_2375_p2 = (or_ln340_2544_fu_2369_p2.read() | and_ln416_fu_2293_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2546_fu_5821_p2() {
    or_ln340_2546_fu_5821_p2 = (tmp_5265_fu_5789_p3.read() | xor_ln340_fu_5815_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2547_fu_5897_p2() {
    or_ln340_2547_fu_5897_p2 = (and_ln786_1_fu_5870_p2.read() | xor_ln779_1_reg_23899.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2548_fu_5902_p2() {
    or_ln340_2548_fu_5902_p2 = (or_ln340_2547_fu_5897_p2.read() | and_ln416_671_reg_23885.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2549_fu_5989_p2() {
    or_ln340_2549_fu_5989_p2 = (tmp_5272_fu_5957_p3.read() | xor_ln340_679_fu_5983_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2550_fu_6113_p2() {
    or_ln340_2550_fu_6113_p2 = (and_ln786_2_fu_6084_p2.read() | xor_ln779_2_reg_23928.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2551_fu_6118_p2() {
    or_ln340_2551_fu_6118_p2 = (or_ln340_2550_fu_6113_p2.read() | and_ln416_672_fu_6048_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2552_fu_6208_p2() {
    or_ln340_2552_fu_6208_p2 = (tmp_5279_fu_6176_p3.read() | xor_ln340_680_fu_6202_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2553_fu_6332_p2() {
    or_ln340_2553_fu_6332_p2 = (and_ln786_3_fu_6303_p2.read() | xor_ln779_3_reg_23957.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2554_fu_6337_p2() {
    or_ln340_2554_fu_6337_p2 = (or_ln340_2553_fu_6332_p2.read() | and_ln416_673_fu_6267_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2555_fu_6427_p2() {
    or_ln340_2555_fu_6427_p2 = (tmp_5286_fu_6395_p3.read() | xor_ln340_681_fu_6421_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2556_fu_6551_p2() {
    or_ln340_2556_fu_6551_p2 = (and_ln786_4_fu_6522_p2.read() | xor_ln779_4_reg_23986.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2557_fu_6556_p2() {
    or_ln340_2557_fu_6556_p2 = (or_ln340_2556_fu_6551_p2.read() | and_ln416_674_fu_6486_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2558_fu_6646_p2() {
    or_ln340_2558_fu_6646_p2 = (tmp_5293_fu_6614_p3.read() | xor_ln340_682_fu_6640_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2559_fu_6770_p2() {
    or_ln340_2559_fu_6770_p2 = (and_ln786_5_fu_6741_p2.read() | xor_ln779_5_reg_24015.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2560_fu_6775_p2() {
    or_ln340_2560_fu_6775_p2 = (or_ln340_2559_fu_6770_p2.read() | and_ln416_675_fu_6705_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2561_fu_6865_p2() {
    or_ln340_2561_fu_6865_p2 = (tmp_5300_fu_6833_p3.read() | xor_ln340_683_fu_6859_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2562_fu_6989_p2() {
    or_ln340_2562_fu_6989_p2 = (and_ln786_6_fu_6960_p2.read() | xor_ln779_6_reg_24044.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2563_fu_6994_p2() {
    or_ln340_2563_fu_6994_p2 = (or_ln340_2562_fu_6989_p2.read() | and_ln416_676_fu_6924_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2564_fu_7084_p2() {
    or_ln340_2564_fu_7084_p2 = (tmp_5307_fu_7052_p3.read() | xor_ln340_684_fu_7078_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2565_fu_7208_p2() {
    or_ln340_2565_fu_7208_p2 = (and_ln786_7_fu_7179_p2.read() | xor_ln779_7_reg_24073.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2566_fu_7213_p2() {
    or_ln340_2566_fu_7213_p2 = (or_ln340_2565_fu_7208_p2.read() | and_ln416_677_fu_7143_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2567_fu_7303_p2() {
    or_ln340_2567_fu_7303_p2 = (tmp_5314_fu_7271_p3.read() | xor_ln340_685_fu_7297_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2568_fu_7427_p2() {
    or_ln340_2568_fu_7427_p2 = (and_ln786_8_fu_7398_p2.read() | xor_ln779_8_reg_24102.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2569_fu_7432_p2() {
    or_ln340_2569_fu_7432_p2 = (or_ln340_2568_fu_7427_p2.read() | and_ln416_678_fu_7362_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2570_fu_7522_p2() {
    or_ln340_2570_fu_7522_p2 = (tmp_5321_fu_7490_p3.read() | xor_ln340_686_fu_7516_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2571_fu_7646_p2() {
    or_ln340_2571_fu_7646_p2 = (and_ln786_9_fu_7617_p2.read() | xor_ln779_9_reg_24131.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2572_fu_7651_p2() {
    or_ln340_2572_fu_7651_p2 = (or_ln340_2571_fu_7646_p2.read() | and_ln416_679_fu_7581_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2573_fu_7741_p2() {
    or_ln340_2573_fu_7741_p2 = (tmp_5328_fu_7709_p3.read() | xor_ln340_687_fu_7735_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2574_fu_7865_p2() {
    or_ln340_2574_fu_7865_p2 = (and_ln786_10_fu_7836_p2.read() | xor_ln779_10_reg_24160.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2575_fu_7870_p2() {
    or_ln340_2575_fu_7870_p2 = (or_ln340_2574_fu_7865_p2.read() | and_ln416_680_fu_7800_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2576_fu_7960_p2() {
    or_ln340_2576_fu_7960_p2 = (tmp_5335_fu_7928_p3.read() | xor_ln340_688_fu_7954_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2577_fu_8084_p2() {
    or_ln340_2577_fu_8084_p2 = (and_ln786_11_fu_8055_p2.read() | xor_ln779_11_reg_24189.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2578_fu_8089_p2() {
    or_ln340_2578_fu_8089_p2 = (or_ln340_2577_fu_8084_p2.read() | and_ln416_681_fu_8019_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2579_fu_8179_p2() {
    or_ln340_2579_fu_8179_p2 = (tmp_5342_fu_8147_p3.read() | xor_ln340_689_fu_8173_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2580_fu_8303_p2() {
    or_ln340_2580_fu_8303_p2 = (and_ln786_12_fu_8274_p2.read() | xor_ln779_12_reg_24218.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2581_fu_8308_p2() {
    or_ln340_2581_fu_8308_p2 = (or_ln340_2580_fu_8303_p2.read() | and_ln416_682_fu_8238_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2582_fu_8398_p2() {
    or_ln340_2582_fu_8398_p2 = (tmp_5349_fu_8366_p3.read() | xor_ln340_690_fu_8392_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2583_fu_8522_p2() {
    or_ln340_2583_fu_8522_p2 = (and_ln786_13_fu_8493_p2.read() | xor_ln779_13_reg_24247.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2584_fu_8527_p2() {
    or_ln340_2584_fu_8527_p2 = (or_ln340_2583_fu_8522_p2.read() | and_ln416_683_fu_8457_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2585_fu_8617_p2() {
    or_ln340_2585_fu_8617_p2 = (tmp_5356_fu_8585_p3.read() | xor_ln340_691_fu_8611_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2586_fu_8741_p2() {
    or_ln340_2586_fu_8741_p2 = (and_ln786_14_fu_8712_p2.read() | xor_ln779_14_reg_24276.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2587_fu_8746_p2() {
    or_ln340_2587_fu_8746_p2 = (or_ln340_2586_fu_8741_p2.read() | and_ln416_684_fu_8676_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2588_fu_8836_p2() {
    or_ln340_2588_fu_8836_p2 = (tmp_5363_fu_8804_p3.read() | xor_ln340_692_fu_8830_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2589_fu_8960_p2() {
    or_ln340_2589_fu_8960_p2 = (and_ln786_15_fu_8931_p2.read() | xor_ln779_15_reg_24305.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2590_fu_8965_p2() {
    or_ln340_2590_fu_8965_p2 = (or_ln340_2589_fu_8960_p2.read() | and_ln416_685_fu_8895_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2591_fu_9055_p2() {
    or_ln340_2591_fu_9055_p2 = (tmp_5370_fu_9023_p3.read() | xor_ln340_693_fu_9049_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2592_fu_9179_p2() {
    or_ln340_2592_fu_9179_p2 = (and_ln786_16_fu_9150_p2.read() | xor_ln779_16_reg_24334.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2593_fu_9184_p2() {
    or_ln340_2593_fu_9184_p2 = (or_ln340_2592_fu_9179_p2.read() | and_ln416_686_fu_9114_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2594_fu_9274_p2() {
    or_ln340_2594_fu_9274_p2 = (tmp_5377_fu_9242_p3.read() | xor_ln340_694_fu_9268_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2595_fu_9398_p2() {
    or_ln340_2595_fu_9398_p2 = (and_ln786_17_fu_9369_p2.read() | xor_ln779_17_reg_24363.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2596_fu_9403_p2() {
    or_ln340_2596_fu_9403_p2 = (or_ln340_2595_fu_9398_p2.read() | and_ln416_687_fu_9333_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2597_fu_9493_p2() {
    or_ln340_2597_fu_9493_p2 = (tmp_5384_fu_9461_p3.read() | xor_ln340_695_fu_9487_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2598_fu_9617_p2() {
    or_ln340_2598_fu_9617_p2 = (and_ln786_18_fu_9588_p2.read() | xor_ln779_18_reg_24392.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2599_fu_9622_p2() {
    or_ln340_2599_fu_9622_p2 = (or_ln340_2598_fu_9617_p2.read() | and_ln416_688_fu_9552_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_25_fu_10962_p2() {
    or_ln340_25_fu_10962_p2 = (and_ln786_1922_fu_10957_p2.read() | and_ln785_695_fu_10934_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2600_fu_9712_p2() {
    or_ln340_2600_fu_9712_p2 = (tmp_5391_fu_9680_p3.read() | xor_ln340_696_fu_9706_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2601_fu_9836_p2() {
    or_ln340_2601_fu_9836_p2 = (and_ln786_19_fu_9807_p2.read() | xor_ln779_19_reg_24421.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2602_fu_9841_p2() {
    or_ln340_2602_fu_9841_p2 = (or_ln340_2601_fu_9836_p2.read() | and_ln416_689_fu_9771_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2603_fu_9931_p2() {
    or_ln340_2603_fu_9931_p2 = (tmp_5398_fu_9899_p3.read() | xor_ln340_697_fu_9925_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2604_fu_3430_p2() {
    or_ln340_2604_fu_3430_p2 = (and_ln786_20_fu_3400_p2.read() | xor_ln779_20_fu_3368_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2605_fu_3436_p2() {
    or_ln340_2605_fu_3436_p2 = (or_ln340_2604_fu_3430_p2.read() | and_ln416_690_fu_3354_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2606_fu_10019_p2() {
    or_ln340_2606_fu_10019_p2 = (tmp_5405_fu_9987_p3.read() | xor_ln340_698_fu_10013_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2607_fu_10095_p2() {
    or_ln340_2607_fu_10095_p2 = (and_ln786_21_fu_10068_p2.read() | xor_ln779_21_reg_24461.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2608_fu_10100_p2() {
    or_ln340_2608_fu_10100_p2 = (or_ln340_2607_fu_10095_p2.read() | and_ln416_691_reg_24447.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2609_fu_10187_p2() {
    or_ln340_2609_fu_10187_p2 = (tmp_5412_fu_10155_p3.read() | xor_ln340_699_fu_10181_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2610_fu_10311_p2() {
    or_ln340_2610_fu_10311_p2 = (and_ln786_22_fu_10282_p2.read() | xor_ln779_22_reg_24490.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2611_fu_10316_p2() {
    or_ln340_2611_fu_10316_p2 = (or_ln340_2610_fu_10311_p2.read() | and_ln416_692_fu_10246_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2612_fu_10406_p2() {
    or_ln340_2612_fu_10406_p2 = (tmp_5419_fu_10374_p3.read() | xor_ln340_700_fu_10400_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2613_fu_10530_p2() {
    or_ln340_2613_fu_10530_p2 = (and_ln786_23_fu_10501_p2.read() | xor_ln779_23_reg_24519.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2614_fu_10535_p2() {
    or_ln340_2614_fu_10535_p2 = (or_ln340_2613_fu_10530_p2.read() | and_ln416_693_fu_10465_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2615_fu_10625_p2() {
    or_ln340_2615_fu_10625_p2 = (tmp_5426_fu_10593_p3.read() | xor_ln340_701_fu_10619_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2616_fu_10749_p2() {
    or_ln340_2616_fu_10749_p2 = (and_ln786_24_fu_10720_p2.read() | xor_ln779_24_reg_24548.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2617_fu_10754_p2() {
    or_ln340_2617_fu_10754_p2 = (or_ln340_2616_fu_10749_p2.read() | and_ln416_694_fu_10684_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2618_fu_10844_p2() {
    or_ln340_2618_fu_10844_p2 = (tmp_5433_fu_10812_p3.read() | xor_ln340_702_fu_10838_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2619_fu_10968_p2() {
    or_ln340_2619_fu_10968_p2 = (and_ln786_25_fu_10939_p2.read() | xor_ln779_25_reg_24577.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2620_fu_10973_p2() {
    or_ln340_2620_fu_10973_p2 = (or_ln340_2619_fu_10968_p2.read() | and_ln416_695_fu_10903_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2621_fu_11063_p2() {
    or_ln340_2621_fu_11063_p2 = (tmp_5440_fu_11031_p3.read() | xor_ln340_703_fu_11057_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2622_fu_11187_p2() {
    or_ln340_2622_fu_11187_p2 = (and_ln786_26_fu_11158_p2.read() | xor_ln779_26_reg_24606.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2623_fu_11192_p2() {
    or_ln340_2623_fu_11192_p2 = (or_ln340_2622_fu_11187_p2.read() | and_ln416_696_fu_11122_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2624_fu_11282_p2() {
    or_ln340_2624_fu_11282_p2 = (tmp_5447_fu_11250_p3.read() | xor_ln340_704_fu_11276_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2625_fu_11406_p2() {
    or_ln340_2625_fu_11406_p2 = (and_ln786_27_fu_11377_p2.read() | xor_ln779_27_reg_24635.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2626_fu_11411_p2() {
    or_ln340_2626_fu_11411_p2 = (or_ln340_2625_fu_11406_p2.read() | and_ln416_697_fu_11341_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2627_fu_11501_p2() {
    or_ln340_2627_fu_11501_p2 = (tmp_5454_fu_11469_p3.read() | xor_ln340_705_fu_11495_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2628_fu_11625_p2() {
    or_ln340_2628_fu_11625_p2 = (and_ln786_28_fu_11596_p2.read() | xor_ln779_28_reg_24664.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2629_fu_11630_p2() {
    or_ln340_2629_fu_11630_p2 = (or_ln340_2628_fu_11625_p2.read() | and_ln416_698_fu_11560_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2630_fu_11720_p2() {
    or_ln340_2630_fu_11720_p2 = (tmp_5461_fu_11688_p3.read() | xor_ln340_706_fu_11714_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2631_fu_11844_p2() {
    or_ln340_2631_fu_11844_p2 = (and_ln786_29_fu_11815_p2.read() | xor_ln779_29_reg_24693.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2632_fu_11849_p2() {
    or_ln340_2632_fu_11849_p2 = (or_ln340_2631_fu_11844_p2.read() | and_ln416_699_fu_11779_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2633_fu_11939_p2() {
    or_ln340_2633_fu_11939_p2 = (tmp_5468_fu_11907_p3.read() | xor_ln340_707_fu_11933_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2634_fu_12063_p2() {
    or_ln340_2634_fu_12063_p2 = (and_ln786_30_fu_12034_p2.read() | xor_ln779_30_reg_24722.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2635_fu_12068_p2() {
    or_ln340_2635_fu_12068_p2 = (or_ln340_2634_fu_12063_p2.read() | and_ln416_700_fu_11998_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2636_fu_12158_p2() {
    or_ln340_2636_fu_12158_p2 = (tmp_5475_fu_12126_p3.read() | xor_ln340_708_fu_12152_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2637_fu_12282_p2() {
    or_ln340_2637_fu_12282_p2 = (and_ln786_31_fu_12253_p2.read() | xor_ln779_31_reg_24751.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2638_fu_12287_p2() {
    or_ln340_2638_fu_12287_p2 = (or_ln340_2637_fu_12282_p2.read() | and_ln416_701_fu_12217_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2639_fu_12377_p2() {
    or_ln340_2639_fu_12377_p2 = (tmp_5482_fu_12345_p3.read() | xor_ln340_709_fu_12371_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2640_fu_12501_p2() {
    or_ln340_2640_fu_12501_p2 = (and_ln786_32_fu_12472_p2.read() | xor_ln779_32_reg_24780.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2641_fu_12506_p2() {
    or_ln340_2641_fu_12506_p2 = (or_ln340_2640_fu_12501_p2.read() | and_ln416_702_fu_12436_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2642_fu_12596_p2() {
    or_ln340_2642_fu_12596_p2 = (tmp_5489_fu_12564_p3.read() | xor_ln340_710_fu_12590_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2643_fu_12720_p2() {
    or_ln340_2643_fu_12720_p2 = (and_ln786_33_fu_12691_p2.read() | xor_ln779_33_reg_24809.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2644_fu_12725_p2() {
    or_ln340_2644_fu_12725_p2 = (or_ln340_2643_fu_12720_p2.read() | and_ln416_703_fu_12655_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2645_fu_12815_p2() {
    or_ln340_2645_fu_12815_p2 = (tmp_5496_fu_12783_p3.read() | xor_ln340_711_fu_12809_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2646_fu_12939_p2() {
    or_ln340_2646_fu_12939_p2 = (and_ln786_34_fu_12910_p2.read() | xor_ln779_34_reg_24838.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2647_fu_12944_p2() {
    or_ln340_2647_fu_12944_p2 = (or_ln340_2646_fu_12939_p2.read() | and_ln416_704_fu_12874_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2648_fu_13034_p2() {
    or_ln340_2648_fu_13034_p2 = (tmp_5503_fu_13002_p3.read() | xor_ln340_712_fu_13028_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2649_fu_13158_p2() {
    or_ln340_2649_fu_13158_p2 = (and_ln786_35_fu_13129_p2.read() | xor_ln779_35_reg_24867.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2650_fu_13163_p2() {
    or_ln340_2650_fu_13163_p2 = (or_ln340_2649_fu_13158_p2.read() | and_ln416_705_fu_13093_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2651_fu_13253_p2() {
    or_ln340_2651_fu_13253_p2 = (tmp_5510_fu_13221_p3.read() | xor_ln340_713_fu_13247_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2652_fu_13377_p2() {
    or_ln340_2652_fu_13377_p2 = (and_ln786_36_fu_13348_p2.read() | xor_ln779_36_reg_24896.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2653_fu_13382_p2() {
    or_ln340_2653_fu_13382_p2 = (or_ln340_2652_fu_13377_p2.read() | and_ln416_706_fu_13312_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2654_fu_13472_p2() {
    or_ln340_2654_fu_13472_p2 = (tmp_5517_fu_13440_p3.read() | xor_ln340_714_fu_13466_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2655_fu_13596_p2() {
    or_ln340_2655_fu_13596_p2 = (and_ln786_37_fu_13567_p2.read() | xor_ln779_37_reg_24925.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2656_fu_13601_p2() {
    or_ln340_2656_fu_13601_p2 = (or_ln340_2655_fu_13596_p2.read() | and_ln416_707_fu_13531_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2657_fu_13691_p2() {
    or_ln340_2657_fu_13691_p2 = (tmp_5524_fu_13659_p3.read() | xor_ln340_715_fu_13685_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2658_fu_13815_p2() {
    or_ln340_2658_fu_13815_p2 = (and_ln786_38_fu_13786_p2.read() | xor_ln779_38_reg_24954.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2659_fu_13820_p2() {
    or_ln340_2659_fu_13820_p2 = (or_ln340_2658_fu_13815_p2.read() | and_ln416_708_fu_13750_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2660_fu_13910_p2() {
    or_ln340_2660_fu_13910_p2 = (tmp_5531_fu_13878_p3.read() | xor_ln340_716_fu_13904_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2661_fu_14034_p2() {
    or_ln340_2661_fu_14034_p2 = (and_ln786_39_fu_14005_p2.read() | xor_ln779_39_reg_24983.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2662_fu_14039_p2() {
    or_ln340_2662_fu_14039_p2 = (or_ln340_2661_fu_14034_p2.read() | and_ln416_709_fu_13969_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2663_fu_14129_p2() {
    or_ln340_2663_fu_14129_p2 = (tmp_5538_fu_14097_p3.read() | xor_ln340_717_fu_14123_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2664_fu_4252_p2() {
    or_ln340_2664_fu_4252_p2 = (and_ln786_40_fu_4222_p2.read() | xor_ln779_40_fu_4190_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_24_16_0_0_0_4u_config8_s::thread_or_ln340_2665_fu_4258_p2() {
    or_ln340_2665_fu_4258_p2 = (or_ln340_2664_fu_4252_p2.read() | and_ln416_710_fu_4176_p2.read());
}

}

