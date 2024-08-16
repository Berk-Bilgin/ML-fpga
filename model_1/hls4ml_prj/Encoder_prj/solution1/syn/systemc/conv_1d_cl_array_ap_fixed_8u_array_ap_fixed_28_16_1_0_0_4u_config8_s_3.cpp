#include "conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_100_fu_73847_p2() {
    acc_0_V_100_fu_73847_p2 = (!select_ln340_4956_fu_73735_p3.read().is_01() || !select_ln340_4801_reg_104079.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4956_fu_73735_p3.read()) + sc_bigint<28>(select_ln340_4801_reg_104079.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_101_fu_73898_p3() {
    acc_0_V_101_fu_73898_p3 = (!and_ln786_4435_fu_73866_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4435_fu_73866_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_100_fu_73847_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_102_fu_74200_p2() {
    acc_0_V_102_fu_74200_p2 = (!select_ln340_4960_fu_73906_p3.read().is_01() || !select_ln340_4805_fu_69595_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4960_fu_73906_p3.read()) + sc_bigint<28>(select_ln340_4805_fu_69595_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_103_fu_74252_p3() {
    acc_0_V_103_fu_74252_p3 = (!and_ln786_4439_fu_74220_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4439_fu_74220_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_102_fu_74200_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_104_fu_74553_p2() {
    acc_0_V_104_fu_74553_p2 = (!select_ln340_4964_fu_74260_p3.read().is_01() || !select_ln340_4809_reg_104148.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4964_fu_74260_p3.read()) + sc_bigint<28>(select_ln340_4809_reg_104148.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_105_fu_74604_p3() {
    acc_0_V_105_fu_74604_p3 = (!and_ln786_4443_fu_74572_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4443_fu_74572_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_104_fu_74553_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_106_fu_74905_p2() {
    acc_0_V_106_fu_74905_p2 = (!select_ln340_4968_fu_74612_p3.read().is_01() || !select_ln340_4813_reg_104172.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4968_fu_74612_p3.read()) + sc_bigint<28>(select_ln340_4813_reg_104172.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_107_fu_74956_p3() {
    acc_0_V_107_fu_74956_p3 = (!and_ln786_4447_fu_74924_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4447_fu_74924_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_106_fu_74905_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_108_fu_75264_p2() {
    acc_0_V_108_fu_75264_p2 = (!select_ln340_4972_fu_74964_p3.read().is_01() || !select_ln340_4817_fu_70073_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4972_fu_74964_p3.read()) + sc_bigint<28>(select_ln340_4817_fu_70073_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_109_fu_75316_p3() {
    acc_0_V_109_fu_75316_p3 = (!and_ln786_4451_fu_75284_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4451_fu_75284_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_108_fu_75264_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_110_fu_75624_p2() {
    acc_0_V_110_fu_75624_p2 = (!select_ln340_4976_fu_75324_p3.read().is_01() || !select_ln340_4821_fu_70898_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4976_fu_75324_p3.read()) + sc_bigint<28>(select_ln340_4821_fu_70898_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_111_fu_80811_p3() {
    acc_0_V_111_fu_80811_p3 = (!and_ln786_4455_fu_80785_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4455_fu_80785_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_110_reg_104509.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_112_fu_80985_p2() {
    acc_0_V_112_fu_80985_p2 = (!select_ln340_4980_fu_80818_p3.read().is_01() || !select_ln340_4825_reg_104388.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4980_fu_80818_p3.read()) + sc_bigint<28>(select_ln340_4825_reg_104388.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_113_fu_81036_p3() {
    acc_0_V_113_fu_81036_p3 = (!and_ln786_4459_fu_81004_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4459_fu_81004_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_112_fu_80985_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_114_fu_81337_p2() {
    acc_0_V_114_fu_81337_p2 = (!select_ln340_4984_fu_81044_p3.read().is_01() || !select_ln340_4829_reg_104412.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4984_fu_81044_p3.read()) + sc_bigint<28>(select_ln340_4829_reg_104412.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_115_fu_81388_p3() {
    acc_0_V_115_fu_81388_p3 = (!and_ln786_4463_fu_81356_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4463_fu_81356_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_114_fu_81337_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_116_fu_81690_p2() {
    acc_0_V_116_fu_81690_p2 = (!select_ln340_4988_fu_81396_p3.read().is_01() || !select_ln340_4833_fu_75909_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4988_fu_81396_p3.read()) + sc_bigint<28>(select_ln340_4833_fu_75909_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_117_fu_81742_p3() {
    acc_0_V_117_fu_81742_p3 = (!and_ln786_4467_fu_81710_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4467_fu_81710_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_116_fu_81690_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_118_fu_82046_p2() {
    acc_0_V_118_fu_82046_p2 = (!select_ln340_4992_fu_81750_p3.read().is_01() || !select_ln340_4837_fu_76204_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4992_fu_81750_p3.read()) + sc_bigint<28>(select_ln340_4837_fu_76204_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_119_fu_82098_p3() {
    acc_0_V_119_fu_82098_p3 = (!and_ln786_4471_fu_82066_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4471_fu_82066_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_118_fu_82046_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_120_fu_82406_p2() {
    acc_0_V_120_fu_82406_p2 = (!select_ln340_4996_fu_82106_p3.read().is_01() || !select_ln340_4841_fu_77088_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4996_fu_82106_p3.read()) + sc_bigint<28>(select_ln340_4841_fu_77088_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_121_fu_82458_p3() {
    acc_0_V_121_fu_82458_p3 = (!and_ln786_4475_fu_82426_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4475_fu_82426_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_120_fu_82406_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_122_fu_86896_p2() {
    acc_0_V_122_fu_86896_p2 = (!select_ln340_5000_reg_104774.read().is_01() || !select_ln340_4845_reg_104636.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5000_reg_104774.read()) + sc_bigint<28>(select_ln340_4845_reg_104636.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_123_fu_86946_p3() {
    acc_0_V_123_fu_86946_p3 = (!and_ln786_4479_fu_86914_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4479_fu_86914_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_122_fu_86896_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_124_fu_87241_p2() {
    acc_0_V_124_fu_87241_p2 = (!select_ln340_5004_fu_86954_p3.read().is_01() || !select_ln340_4849_reg_104660.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5004_fu_86954_p3.read()) + sc_bigint<28>(select_ln340_4849_reg_104660.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_125_fu_87292_p3() {
    acc_0_V_125_fu_87292_p3 = (!and_ln786_4483_fu_87260_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4483_fu_87260_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_124_fu_87241_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_126_fu_87593_p2() {
    acc_0_V_126_fu_87593_p2 = (!select_ln340_5008_fu_87300_p3.read().is_01() || !select_ln340_4853_reg_104684.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5008_fu_87300_p3.read()) + sc_bigint<28>(select_ln340_4853_reg_104684.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_127_fu_87644_p3() {
    acc_0_V_127_fu_87644_p3 = (!and_ln786_4487_fu_87612_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4487_fu_87612_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_126_fu_87593_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_128_fu_87949_p2() {
    acc_0_V_128_fu_87949_p2 = (!select_ln340_5012_fu_87652_p3.read().is_01() || !select_ln340_4857_reg_104750.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5012_fu_87652_p3.read()) + sc_bigint<28>(select_ln340_4857_reg_104750.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_129_fu_88000_p3() {
    acc_0_V_129_fu_88000_p3 = (!and_ln786_4491_fu_87968_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4491_fu_87968_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_128_fu_87949_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_130_fu_88302_p2() {
    acc_0_V_130_fu_88302_p2 = (!select_ln340_5016_fu_88008_p3.read().is_01() || !select_ln340_4861_fu_83234_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5016_fu_88008_p3.read()) + sc_bigint<28>(select_ln340_4861_fu_83234_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_131_fu_88354_p3() {
    acc_0_V_131_fu_88354_p3 = (!and_ln786_4495_fu_88322_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4495_fu_88322_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_130_fu_88302_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_132_fu_88662_p2() {
    acc_0_V_132_fu_88662_p2 = (!select_ln340_5020_fu_88362_p3.read().is_01() || !select_ln340_4865_fu_84034_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5020_fu_88362_p3.read()) + sc_bigint<28>(select_ln340_4865_fu_84034_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_133_fu_88688_p3() {
    acc_0_V_133_fu_88688_p3 = (!and_ln786_4499_fu_88682_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4499_fu_88682_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_132_fu_88662_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_134_fu_93975_p2() {
    acc_0_V_134_fu_93975_p2 = (!select_ln340_5024_fu_93809_p3.read().is_01() || !select_ln340_4869_reg_104868.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5024_fu_93809_p3.read()) + sc_bigint<28>(select_ln340_4869_reg_104868.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_135_fu_94026_p3() {
    acc_0_V_135_fu_94026_p3 = (!and_ln786_4503_fu_93994_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4503_fu_93994_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_134_fu_93975_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_136_fu_94327_p2() {
    acc_0_V_136_fu_94327_p2 = (!select_ln340_5028_fu_94034_p3.read().is_01() || !select_ln340_4873_reg_104892.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5028_fu_94034_p3.read()) + sc_bigint<28>(select_ln340_4873_reg_104892.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_137_fu_94378_p3() {
    acc_0_V_137_fu_94378_p3 = (!and_ln786_4507_fu_94346_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4507_fu_94346_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_136_fu_94327_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_138_fu_94679_p2() {
    acc_0_V_138_fu_94679_p2 = (!select_ln340_5032_fu_94386_p3.read().is_01() || !select_ln340_4877_reg_104916.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5032_fu_94386_p3.read()) + sc_bigint<28>(select_ln340_4877_reg_104916.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_139_fu_94730_p3() {
    acc_0_V_139_fu_94730_p3 = (!and_ln786_4511_fu_94698_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4511_fu_94698_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_138_fu_94679_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_140_fu_95034_p2() {
    acc_0_V_140_fu_95034_p2 = (!select_ln340_5036_fu_94738_p3.read().is_01() || !select_ln340_4881_fu_89280_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5036_fu_94738_p3.read()) + sc_bigint<28>(select_ln340_4881_fu_89280_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_141_fu_95086_p3() {
    acc_0_V_141_fu_95086_p3 = (!and_ln786_4515_fu_95054_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4515_fu_95054_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_140_fu_95034_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_142_fu_95394_p2() {
    acc_0_V_142_fu_95394_p2 = (!select_ln340_5040_fu_95094_p3.read().is_01() || !select_ln340_4885_fu_90082_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5040_fu_95094_p3.read()) + sc_bigint<28>(select_ln340_4885_fu_90082_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_143_fu_95446_p3() {
    acc_0_V_143_fu_95446_p3 = (!and_ln786_4519_fu_95414_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4519_fu_95414_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_142_fu_95394_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_144_fu_95754_p2() {
    acc_0_V_144_fu_95754_p2 = (!select_ln340_5044_fu_95454_p3.read().is_01() || !select_ln340_4889_fu_90872_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5044_fu_95454_p3.read()) + sc_bigint<28>(select_ln340_4889_fu_90872_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_145_fu_99454_p3() {
    acc_0_V_145_fu_99454_p3 = (!and_ln786_4523_fu_99428_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4523_fu_99428_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_144_reg_105152.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_146_fu_99748_p2() {
    acc_0_V_146_fu_99748_p2 = (!select_ln340_5048_fu_99461_p3.read().is_01() || !select_ln340_4893_reg_105034.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5048_fu_99461_p3.read()) + sc_bigint<28>(select_ln340_4893_reg_105034.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_147_fu_99799_p3() {
    acc_0_V_147_fu_99799_p3 = (!and_ln786_4527_fu_99767_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4527_fu_99767_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_146_fu_99748_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_148_fu_100100_p2() {
    acc_0_V_148_fu_100100_p2 = (!select_ln340_5052_fu_99807_p3.read().is_01() || !select_ln340_4897_reg_105058.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5052_fu_99807_p3.read()) + sc_bigint<28>(select_ln340_4897_reg_105058.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_149_fu_100151_p3() {
    acc_0_V_149_fu_100151_p3 = (!and_ln786_4531_fu_100119_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4531_fu_100119_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_148_fu_100100_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_150_fu_100452_p2() {
    acc_0_V_150_fu_100452_p2 = (!select_ln340_5056_fu_100159_p3.read().is_01() || !select_ln340_4901_reg_105082.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5056_fu_100159_p3.read()) + sc_bigint<28>(select_ln340_4901_reg_105082.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_151_fu_100503_p3() {
    acc_0_V_151_fu_100503_p3 = (!and_ln786_4535_fu_100471_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4535_fu_100471_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_150_fu_100452_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_152_fu_100807_p2() {
    acc_0_V_152_fu_100807_p2 = (!select_ln340_5060_fu_100511_p3.read().is_01() || !select_ln340_4905_fu_96060_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5060_fu_100511_p3.read()) + sc_bigint<28>(select_ln340_4905_fu_96060_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_153_fu_100859_p3() {
    acc_0_V_153_fu_100859_p3 = (!and_ln786_4539_fu_100827_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4539_fu_100827_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_152_fu_100807_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_154_fu_101167_p2() {
    acc_0_V_154_fu_101167_p2 = (!select_ln340_5064_fu_100867_p3.read().is_01() || !select_ln340_4909_fu_96888_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5064_fu_100867_p3.read()) + sc_bigint<28>(select_ln340_4909_fu_96888_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_155_fu_101219_p3() {
    acc_0_V_155_fu_101219_p3 = (!and_ln786_4543_fu_101187_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4543_fu_101187_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_154_fu_101167_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_156_fu_102565_p2() {
    acc_0_V_156_fu_102565_p2 = (!select_ln340_5068_reg_105294.read().is_01() || !select_ln340_4913_fu_101426_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5068_reg_105294.read()) + sc_bigint<28>(select_ln340_4913_fu_101426_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_157_fu_102616_p3() {
    acc_0_V_157_fu_102616_p3 = (!and_ln786_4547_fu_102584_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4547_fu_102584_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_156_fu_102565_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_158_fu_102921_p2() {
    acc_0_V_158_fu_102921_p2 = (!select_ln340_5072_fu_102624_p3.read().is_01() || !select_ln340_4917_reg_105252.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5072_fu_102624_p3.read()) + sc_bigint<28>(select_ln340_4917_reg_105252.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_159_fu_102972_p3() {
    acc_0_V_159_fu_102972_p3 = (!and_ln786_4551_fu_102940_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4551_fu_102940_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_158_fu_102921_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_160_fu_103185_p2() {
    acc_0_V_160_fu_103185_p2 = (!select_ln340_5076_fu_102980_p3.read().is_01() || !select_ln340_4920_reg_105270.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5076_fu_102980_p3.read()) + sc_bigint<28>(select_ln340_4920_reg_105270.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_161_fu_103236_p3() {
    acc_0_V_161_fu_103236_p3 = (!and_ln786_4554_fu_103204_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4554_fu_103204_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_160_fu_103185_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_162_fu_103538_p2() {
    acc_0_V_162_fu_103538_p2 = (!select_ln340_5079_fu_103244_p3.read().is_01() || !select_ln340_4924_fu_101814_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5079_fu_103244_p3.read()) + sc_bigint<28>(select_ln340_4924_fu_101814_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_163_fu_103590_p3() {
    acc_0_V_163_fu_103590_p3 = (!and_ln786_4558_fu_103558_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4558_fu_103558_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_162_fu_103538_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_85_fu_61981_p3() {
    acc_0_V_85_fu_61981_p3 = (!and_ln786_4403_fu_61949_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4403_fu_61949_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_fu_61929_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_86_fu_62277_p2() {
    acc_0_V_86_fu_62277_p2 = (!select_ln340_4928_fu_61989_p3.read().is_01() || !select_ln340_4773_fu_58238_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4928_fu_61989_p3.read()) + sc_bigint<28>(select_ln340_4773_fu_58238_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_87_fu_62329_p3() {
    acc_0_V_87_fu_62329_p3 = (!and_ln786_4407_fu_62297_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4407_fu_62297_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_86_fu_62277_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_88_fu_67458_p2() {
    acc_0_V_88_fu_67458_p2 = (!select_ln340_4932_reg_104031.read().is_01() || !select_ln340_4777_reg_103893.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4932_reg_104031.read()) + sc_bigint<28>(select_ln340_4777_reg_103893.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_89_fu_67508_p3() {
    acc_0_V_89_fu_67508_p3 = (!and_ln786_4411_fu_67476_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4411_fu_67476_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_88_fu_67458_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_90_fu_67803_p2() {
    acc_0_V_90_fu_67803_p2 = (!select_ln340_4936_fu_67516_p3.read().is_01() || !select_ln340_4781_reg_103917.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4936_fu_67516_p3.read()) + sc_bigint<28>(select_ln340_4781_reg_103917.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_91_fu_67854_p3() {
    acc_0_V_91_fu_67854_p3 = (!and_ln786_4415_fu_67822_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4415_fu_67822_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_90_fu_67803_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_92_fu_68155_p2() {
    acc_0_V_92_fu_68155_p2 = (!select_ln340_4940_fu_67862_p3.read().is_01() || !select_ln340_4785_reg_103941.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4940_fu_67862_p3.read()) + sc_bigint<28>(select_ln340_4785_reg_103941.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_93_fu_68206_p3() {
    acc_0_V_93_fu_68206_p3 = (!and_ln786_4419_fu_68174_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4419_fu_68174_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_92_fu_68155_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_94_fu_68509_p2() {
    acc_0_V_94_fu_68509_p2 = (!select_ln340_4944_fu_68214_p3.read().is_01() || !select_ln340_4789_reg_103986.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4944_fu_68214_p3.read()) + sc_bigint<28>(select_ln340_4789_reg_103986.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_95_fu_68560_p3() {
    acc_0_V_95_fu_68560_p3 = (!and_ln786_4423_fu_68528_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4423_fu_68528_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_94_fu_68509_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_96_fu_68864_p2() {
    acc_0_V_96_fu_68864_p2 = (!select_ln340_4948_fu_68568_p3.read().is_01() || !select_ln340_4793_fu_63115_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4948_fu_68568_p3.read()) + sc_bigint<28>(select_ln340_4793_fu_63115_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_97_fu_68916_p3() {
    acc_0_V_97_fu_68916_p3 = (!and_ln786_4427_fu_68884_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4427_fu_68884_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_96_fu_68864_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_98_fu_69224_p2() {
    acc_0_V_98_fu_69224_p2 = (!select_ln340_4952_fu_68924_p3.read().is_01() || !select_ln340_4797_fu_63962_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4952_fu_68924_p3.read()) + sc_bigint<28>(select_ln340_4797_fu_63962_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_99_fu_69250_p3() {
    acc_0_V_99_fu_69250_p3 = (!and_ln786_4431_fu_69244_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4431_fu_69244_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_0_V_98_fu_69224_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_0_V_fu_61929_p2() {
    acc_0_V_fu_61929_p2 = (!ap_const_lv28_FFFFF3C.is_01() || !select_ln340_4769_fu_57398_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(ap_const_lv28_FFFFF3C) + sc_bigint<28>(select_ln340_4769_fu_57398_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_100_fu_73935_p2() {
    acc_1_V_100_fu_73935_p2 = (!select_ln340_4957_fu_73763_p3.read().is_01() || !select_ln340_4802_reg_104085.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4957_fu_73763_p3.read()) + sc_bigint<28>(select_ln340_4802_reg_104085.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_101_fu_73986_p3() {
    acc_1_V_101_fu_73986_p3 = (!and_ln786_4436_fu_73954_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4436_fu_73954_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_100_fu_73935_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_102_fu_74289_p2() {
    acc_1_V_102_fu_74289_p2 = (!select_ln340_4961_fu_73994_p3.read().is_01() || !select_ln340_4806_reg_104130.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4961_fu_73994_p3.read()) + sc_bigint<28>(select_ln340_4806_reg_104130.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_103_fu_74340_p3() {
    acc_1_V_103_fu_74340_p3 = (!and_ln786_4440_fu_74308_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4440_fu_74308_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_102_fu_74289_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_104_fu_74641_p2() {
    acc_1_V_104_fu_74641_p2 = (!select_ln340_4965_fu_74348_p3.read().is_01() || !select_ln340_4810_reg_104154.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4965_fu_74348_p3.read()) + sc_bigint<28>(select_ln340_4810_reg_104154.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_105_fu_74692_p3() {
    acc_1_V_105_fu_74692_p3 = (!and_ln786_4444_fu_74660_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4444_fu_74660_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_104_fu_74641_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_106_fu_74994_p2() {
    acc_1_V_106_fu_74994_p2 = (!select_ln340_4969_fu_74700_p3.read().is_01() || !select_ln340_4814_fu_69686_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4969_fu_74700_p3.read()) + sc_bigint<28>(select_ln340_4814_fu_69686_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_107_fu_75046_p3() {
    acc_1_V_107_fu_75046_p3 = (!and_ln786_4448_fu_75014_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4448_fu_75014_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_106_fu_74994_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_108_fu_75354_p2() {
    acc_1_V_108_fu_75354_p2 = (!select_ln340_4973_fu_75054_p3.read().is_01() || !select_ln340_4818_fu_70269_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4973_fu_75054_p3.read()) + sc_bigint<28>(select_ln340_4818_fu_70269_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_109_fu_75406_p3() {
    acc_1_V_109_fu_75406_p3 = (!and_ln786_4452_fu_75374_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4452_fu_75374_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_108_fu_75354_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_110_fu_75660_p2() {
    acc_1_V_110_fu_75660_p2 = (!select_ln340_4977_fu_75414_p3.read().is_01() || !select_ln340_4822_fu_71094_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4977_fu_75414_p3.read()) + sc_bigint<28>(select_ln340_4822_fu_71094_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_111_fu_80857_p3() {
    acc_1_V_111_fu_80857_p3 = (!and_ln786_4456_fu_80831_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4456_fu_80831_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_110_reg_104529.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_112_fu_81073_p2() {
    acc_1_V_112_fu_81073_p2 = (!select_ln340_4981_fu_80864_p3.read().is_01() || !select_ln340_4826_reg_104394.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4981_fu_80864_p3.read()) + sc_bigint<28>(select_ln340_4826_reg_104394.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_113_fu_81124_p3() {
    acc_1_V_113_fu_81124_p3 = (!and_ln786_4460_fu_81092_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4460_fu_81092_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_112_fu_81073_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_114_fu_81425_p2() {
    acc_1_V_114_fu_81425_p2 = (!select_ln340_4985_fu_81132_p3.read().is_01() || !select_ln340_4830_reg_104418.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4985_fu_81132_p3.read()) + sc_bigint<28>(select_ln340_4830_reg_104418.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_115_fu_81476_p3() {
    acc_1_V_115_fu_81476_p3 = (!and_ln786_4464_fu_81444_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4464_fu_81444_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_114_fu_81425_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_116_fu_81779_p2() {
    acc_1_V_116_fu_81779_p2 = (!select_ln340_4989_fu_81484_p3.read().is_01() || !select_ln340_4834_reg_104463.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4989_fu_81484_p3.read()) + sc_bigint<28>(select_ln340_4834_reg_104463.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_117_fu_81830_p3() {
    acc_1_V_117_fu_81830_p3 = (!and_ln786_4468_fu_81798_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4468_fu_81798_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_116_fu_81779_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_118_fu_82136_p2() {
    acc_1_V_118_fu_82136_p2 = (!select_ln340_4993_fu_81838_p3.read().is_01() || !select_ln340_4838_fu_76438_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4993_fu_81838_p3.read()) + sc_bigint<28>(select_ln340_4838_fu_76438_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_119_fu_82188_p3() {
    acc_1_V_119_fu_82188_p3 = (!and_ln786_4472_fu_82156_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4472_fu_82156_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_118_fu_82136_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_120_fu_82496_p2() {
    acc_1_V_120_fu_82496_p2 = (!select_ln340_4997_fu_82196_p3.read().is_01() || !select_ln340_4842_fu_77288_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4997_fu_82196_p3.read()) + sc_bigint<28>(select_ln340_4842_fu_77288_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_121_fu_82548_p3() {
    acc_1_V_121_fu_82548_p3 = (!and_ln786_4476_fu_82516_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4476_fu_82516_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_120_fu_82496_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_122_fu_86982_p2() {
    acc_1_V_122_fu_86982_p2 = (!select_ln340_5001_reg_104780.read().is_01() || !select_ln340_4846_reg_104642.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5001_reg_104780.read()) + sc_bigint<28>(select_ln340_4846_reg_104642.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_123_fu_87032_p3() {
    acc_1_V_123_fu_87032_p3 = (!and_ln786_4480_fu_87000_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4480_fu_87000_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_122_fu_86982_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_124_fu_87329_p2() {
    acc_1_V_124_fu_87329_p2 = (!select_ln340_5005_fu_87040_p3.read().is_01() || !select_ln340_4850_reg_104666.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5005_fu_87040_p3.read()) + sc_bigint<28>(select_ln340_4850_reg_104666.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_125_fu_87380_p3() {
    acc_1_V_125_fu_87380_p3 = (!and_ln786_4484_fu_87348_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4484_fu_87348_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_124_fu_87329_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_126_fu_87681_p2() {
    acc_1_V_126_fu_87681_p2 = (!select_ln340_5009_fu_87388_p3.read().is_01() || !select_ln340_4854_reg_104690.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5009_fu_87388_p3.read()) + sc_bigint<28>(select_ln340_4854_reg_104690.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_127_fu_87732_p3() {
    acc_1_V_127_fu_87732_p3 = (!and_ln786_4488_fu_87700_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4488_fu_87700_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_126_fu_87681_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_128_fu_88037_p2() {
    acc_1_V_128_fu_88037_p2 = (!select_ln340_5013_fu_87740_p3.read().is_01() || !select_ln340_4858_reg_104756.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5013_fu_87740_p3.read()) + sc_bigint<28>(select_ln340_4858_reg_104756.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_129_fu_88088_p3() {
    acc_1_V_129_fu_88088_p3 = (!and_ln786_4492_fu_88056_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4492_fu_88056_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_128_fu_88037_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_130_fu_88392_p2() {
    acc_1_V_130_fu_88392_p2 = (!select_ln340_5017_fu_88096_p3.read().is_01() || !select_ln340_4862_fu_83434_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5017_fu_88096_p3.read()) + sc_bigint<28>(select_ln340_4862_fu_83434_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_131_fu_88444_p3() {
    acc_1_V_131_fu_88444_p3 = (!and_ln786_4496_fu_88412_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4496_fu_88412_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_130_fu_88392_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_132_fu_88718_p2() {
    acc_1_V_132_fu_88718_p2 = (!select_ln340_5021_fu_88452_p3.read().is_01() || !select_ln340_4866_fu_84271_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5021_fu_88452_p3.read()) + sc_bigint<28>(select_ln340_4866_fu_84271_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_133_fu_93847_p3() {
    acc_1_V_133_fu_93847_p3 = (!and_ln786_4500_fu_93821_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4500_fu_93821_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_132_reg_104963.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_134_fu_94063_p2() {
    acc_1_V_134_fu_94063_p2 = (!select_ln340_5025_fu_93854_p3.read().is_01() || !select_ln340_4870_reg_104874.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5025_fu_93854_p3.read()) + sc_bigint<28>(select_ln340_4870_reg_104874.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_135_fu_94114_p3() {
    acc_1_V_135_fu_94114_p3 = (!and_ln786_4504_fu_94082_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4504_fu_94082_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_134_fu_94063_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_136_fu_94415_p2() {
    acc_1_V_136_fu_94415_p2 = (!select_ln340_5029_fu_94122_p3.read().is_01() || !select_ln340_4874_reg_104898.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5029_fu_94122_p3.read()) + sc_bigint<28>(select_ln340_4874_reg_104898.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_137_fu_94466_p3() {
    acc_1_V_137_fu_94466_p3 = (!and_ln786_4508_fu_94434_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4508_fu_94434_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_136_fu_94415_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_138_fu_94768_p2() {
    acc_1_V_138_fu_94768_p2 = (!select_ln340_5033_fu_94474_p3.read().is_01() || !select_ln340_4878_fu_89030_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5033_fu_94474_p3.read()) + sc_bigint<28>(select_ln340_4878_fu_89030_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_139_fu_94820_p3() {
    acc_1_V_139_fu_94820_p3 = (!and_ln786_4512_fu_94788_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4512_fu_94788_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_138_fu_94768_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_140_fu_95124_p2() {
    acc_1_V_140_fu_95124_p2 = (!select_ln340_5037_fu_94828_p3.read().is_01() || !select_ln340_4882_fu_89480_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5037_fu_94828_p3.read()) + sc_bigint<28>(select_ln340_4882_fu_89480_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_141_fu_95176_p3() {
    acc_1_V_141_fu_95176_p3 = (!and_ln786_4516_fu_95144_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4516_fu_95144_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_140_fu_95124_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_142_fu_95484_p2() {
    acc_1_V_142_fu_95484_p2 = (!select_ln340_5041_fu_95184_p3.read().is_01() || !select_ln340_4886_fu_90274_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5041_fu_95184_p3.read()) + sc_bigint<28>(select_ln340_4886_fu_90274_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_143_fu_95536_p3() {
    acc_1_V_143_fu_95536_p3 = (!and_ln786_4520_fu_95504_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4520_fu_95504_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_142_fu_95484_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_144_fu_99489_p2() {
    acc_1_V_144_fu_99489_p2 = (!select_ln340_5045_reg_105127.read().is_01() || !select_ln340_4890_reg_105016.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5045_reg_105127.read()) + sc_bigint<28>(select_ln340_4890_reg_105016.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_145_fu_99539_p3() {
    acc_1_V_145_fu_99539_p3 = (!and_ln786_4524_fu_99507_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4524_fu_99507_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_144_fu_99489_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_146_fu_99836_p2() {
    acc_1_V_146_fu_99836_p2 = (!select_ln340_5049_fu_99547_p3.read().is_01() || !select_ln340_4894_reg_105040.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5049_fu_99547_p3.read()) + sc_bigint<28>(select_ln340_4894_reg_105040.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_147_fu_99887_p3() {
    acc_1_V_147_fu_99887_p3 = (!and_ln786_4528_fu_99855_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4528_fu_99855_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_146_fu_99836_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_148_fu_100188_p2() {
    acc_1_V_148_fu_100188_p2 = (!select_ln340_5053_fu_99895_p3.read().is_01() || !select_ln340_4898_reg_105064.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5053_fu_99895_p3.read()) + sc_bigint<28>(select_ln340_4898_reg_105064.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_149_fu_100239_p3() {
    acc_1_V_149_fu_100239_p3 = (!and_ln786_4532_fu_100207_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4532_fu_100207_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_148_fu_100188_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_150_fu_100541_p2() {
    acc_1_V_150_fu_100541_p2 = (!select_ln340_5057_fu_100247_p3.read().is_01() || !select_ln340_4902_fu_95851_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5057_fu_100247_p3.read()) + sc_bigint<28>(select_ln340_4902_fu_95851_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_151_fu_100593_p3() {
    acc_1_V_151_fu_100593_p3 = (!and_ln786_4536_fu_100561_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4536_fu_100561_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_150_fu_100541_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_152_fu_100897_p2() {
    acc_1_V_152_fu_100897_p2 = (!select_ln340_5061_fu_100601_p3.read().is_01() || !select_ln340_4906_fu_96256_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5061_fu_100601_p3.read()) + sc_bigint<28>(select_ln340_4906_fu_96256_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_153_fu_100949_p3() {
    acc_1_V_153_fu_100949_p3 = (!and_ln786_4540_fu_100917_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4540_fu_100917_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_152_fu_100897_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_154_fu_101257_p2() {
    acc_1_V_154_fu_101257_p2 = (!select_ln340_5065_fu_100957_p3.read().is_01() || !select_ln340_4910_fu_97084_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5065_fu_100957_p3.read()) + sc_bigint<28>(select_ln340_4910_fu_97084_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_155_fu_102437_p3() {
    acc_1_V_155_fu_102437_p3 = (!and_ln786_4544_fu_102411_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4544_fu_102411_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_154_reg_105307.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_156_fu_102654_p2() {
    acc_1_V_156_fu_102654_p2 = (!select_ln340_5069_fu_102444_p3.read().is_01() || !select_ln340_4914_fu_101517_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5069_fu_102444_p3.read()) + sc_bigint<28>(select_ln340_4914_fu_101517_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_157_fu_102706_p3() {
    acc_1_V_157_fu_102706_p3 = (!and_ln786_4548_fu_102674_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4548_fu_102674_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_156_fu_102654_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_158_fu_103273_p2() {
    acc_1_V_158_fu_103273_p2 = (!select_ln340_5073_fu_102714_p3.read().is_01() || !select_ln340_4921_reg_105276.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5073_fu_102714_p3.read()) + sc_bigint<28>(select_ln340_4921_reg_105276.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_159_fu_103324_p3() {
    acc_1_V_159_fu_103324_p3 = (!and_ln786_4555_fu_103292_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4555_fu_103292_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_158_fu_103273_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_160_fu_103629_p2() {
    acc_1_V_160_fu_103629_p2 = (!select_ln340_5080_fu_103332_p3.read().is_01() || !select_ln340_4925_fu_102010_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5080_fu_103332_p3.read()) + sc_bigint<28>(select_ln340_4925_fu_102010_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_161_fu_103681_p3() {
    acc_1_V_161_fu_103681_p3 = (!and_ln786_4559_fu_103649_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4559_fu_103649_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_160_fu_103629_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_85_fu_62067_p3() {
    acc_1_V_85_fu_62067_p3 = (!and_ln786_4404_fu_62035_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4404_fu_62035_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_fu_62015_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_86_fu_62367_p2() {
    acc_1_V_86_fu_62367_p2 = (!select_ln340_4929_fu_62075_p3.read().is_01() || !select_ln340_4774_fu_58434_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4929_fu_62075_p3.read()) + sc_bigint<28>(select_ln340_4774_fu_58434_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_87_fu_62419_p3() {
    acc_1_V_87_fu_62419_p3 = (!and_ln786_4408_fu_62387_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4408_fu_62387_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_86_fu_62367_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_88_fu_67544_p2() {
    acc_1_V_88_fu_67544_p2 = (!select_ln340_4933_reg_104037.read().is_01() || !select_ln340_4778_reg_103899.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4933_reg_104037.read()) + sc_bigint<28>(select_ln340_4778_reg_103899.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_89_fu_67594_p3() {
    acc_1_V_89_fu_67594_p3 = (!and_ln786_4412_fu_67562_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4412_fu_67562_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_88_fu_67544_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_90_fu_67891_p2() {
    acc_1_V_90_fu_67891_p2 = (!select_ln340_4937_fu_67602_p3.read().is_01() || !select_ln340_4782_reg_103923.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4937_fu_67602_p3.read()) + sc_bigint<28>(select_ln340_4782_reg_103923.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_91_fu_67942_p3() {
    acc_1_V_91_fu_67942_p3 = (!and_ln786_4416_fu_67910_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4416_fu_67910_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_90_fu_67891_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_92_fu_68244_p2() {
    acc_1_V_92_fu_68244_p2 = (!select_ln340_4941_fu_67950_p3.read().is_01() || !select_ln340_4786_fu_62804_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4941_fu_67950_p3.read()) + sc_bigint<28>(select_ln340_4786_fu_62804_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_93_fu_68296_p3() {
    acc_1_V_93_fu_68296_p3 = (!and_ln786_4420_fu_68264_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4420_fu_68264_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_92_fu_68244_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_94_fu_68598_p2() {
    acc_1_V_94_fu_68598_p2 = (!select_ln340_4945_fu_68304_p3.read().is_01() || !select_ln340_4790_fu_62895_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4945_fu_68304_p3.read()) + sc_bigint<28>(select_ln340_4790_fu_62895_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_95_fu_68650_p3() {
    acc_1_V_95_fu_68650_p3 = (!and_ln786_4424_fu_68618_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4424_fu_68618_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_94_fu_68598_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_96_fu_68954_p2() {
    acc_1_V_96_fu_68954_p2 = (!select_ln340_4949_fu_68658_p3.read().is_01() || !select_ln340_4794_fu_63315_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4949_fu_68658_p3.read()) + sc_bigint<28>(select_ln340_4794_fu_63315_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_97_fu_69006_p3() {
    acc_1_V_97_fu_69006_p3 = (!and_ln786_4428_fu_68974_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4428_fu_68974_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_96_fu_68954_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_98_fu_69280_p2() {
    acc_1_V_98_fu_69280_p2 = (!select_ln340_4953_fu_69014_p3.read().is_01() || !select_ln340_4798_fu_64162_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4953_fu_69014_p3.read()) + sc_bigint<28>(select_ln340_4798_fu_64162_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_99_fu_69306_p3() {
    acc_1_V_99_fu_69306_p3 = (!and_ln786_4432_fu_69300_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4432_fu_69300_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_1_V_98_fu_69280_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_1_V_fu_62015_p2() {
    acc_1_V_fu_62015_p2 = (!ap_const_lv28_FFFFFCE.is_01() || !select_ln340_4770_fu_57594_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(ap_const_lv28_FFFFFCE) + sc_bigint<28>(select_ln340_4770_fu_57594_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_100_fu_74023_p2() {
    acc_2_V_100_fu_74023_p2 = (!select_ln340_4958_fu_73791_p3.read().is_01() || !select_ln340_4803_reg_104091.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4958_fu_73791_p3.read()) + sc_bigint<28>(select_ln340_4803_reg_104091.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_101_fu_74074_p3() {
    acc_2_V_101_fu_74074_p3 = (!and_ln786_4437_fu_74042_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4437_fu_74042_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_100_fu_74023_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_102_fu_74377_p2() {
    acc_2_V_102_fu_74377_p2 = (!select_ln340_4962_fu_74082_p3.read().is_01() || !select_ln340_4807_reg_104136.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4962_fu_74082_p3.read()) + sc_bigint<28>(select_ln340_4807_reg_104136.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_103_fu_74428_p3() {
    acc_2_V_103_fu_74428_p3 = (!and_ln786_4441_fu_74396_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4441_fu_74396_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_102_fu_74377_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_104_fu_74729_p2() {
    acc_2_V_104_fu_74729_p2 = (!select_ln340_4966_fu_74436_p3.read().is_01() || !select_ln340_4811_reg_104160.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4966_fu_74436_p3.read()) + sc_bigint<28>(select_ln340_4811_reg_104160.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_105_fu_74780_p3() {
    acc_2_V_105_fu_74780_p3 = (!and_ln786_4445_fu_74748_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4445_fu_74748_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_104_fu_74729_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_106_fu_75084_p2() {
    acc_2_V_106_fu_75084_p2 = (!select_ln340_4970_fu_74788_p3.read().is_01() || !select_ln340_4815_fu_69777_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4970_fu_74788_p3.read()) + sc_bigint<28>(select_ln340_4815_fu_69777_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_107_fu_75136_p3() {
    acc_2_V_107_fu_75136_p3 = (!and_ln786_4449_fu_75104_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4449_fu_75104_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_106_fu_75084_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_108_fu_75444_p2() {
    acc_2_V_108_fu_75444_p2 = (!select_ln340_4974_fu_75144_p3.read().is_01() || !select_ln340_4819_fu_70461_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4974_fu_75144_p3.read()) + sc_bigint<28>(select_ln340_4819_fu_70461_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_109_fu_75496_p3() {
    acc_2_V_109_fu_75496_p3 = (!and_ln786_4453_fu_75464_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4453_fu_75464_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_108_fu_75444_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_110_fu_75696_p2() {
    acc_2_V_110_fu_75696_p2 = (!select_ln340_4978_fu_75504_p3.read().is_01() || !select_ln340_4823_fu_71294_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4978_fu_75504_p3.read()) + sc_bigint<28>(select_ln340_4823_fu_71294_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_111_fu_80903_p3() {
    acc_2_V_111_fu_80903_p3 = (!and_ln786_4457_fu_80877_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4457_fu_80877_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_110_reg_104549.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_112_fu_81161_p2() {
    acc_2_V_112_fu_81161_p2 = (!select_ln340_4982_fu_80910_p3.read().is_01() || !select_ln340_4827_reg_104400.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4982_fu_80910_p3.read()) + sc_bigint<28>(select_ln340_4827_reg_104400.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_113_fu_81212_p3() {
    acc_2_V_113_fu_81212_p3 = (!and_ln786_4461_fu_81180_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4461_fu_81180_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_112_fu_81161_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_114_fu_81513_p2() {
    acc_2_V_114_fu_81513_p2 = (!select_ln340_4986_fu_81220_p3.read().is_01() || !select_ln340_4831_reg_104424.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4986_fu_81220_p3.read()) + sc_bigint<28>(select_ln340_4831_reg_104424.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_115_fu_81564_p3() {
    acc_2_V_115_fu_81564_p3 = (!and_ln786_4465_fu_81532_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4465_fu_81532_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_114_fu_81513_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_116_fu_81867_p2() {
    acc_2_V_116_fu_81867_p2 = (!select_ln340_4990_fu_81572_p3.read().is_01() || !select_ln340_4835_reg_104469.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4990_fu_81572_p3.read()) + sc_bigint<28>(select_ln340_4835_reg_104469.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_117_fu_81918_p3() {
    acc_2_V_117_fu_81918_p3 = (!and_ln786_4469_fu_81886_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4469_fu_81886_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_116_fu_81867_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_118_fu_82226_p2() {
    acc_2_V_118_fu_82226_p2 = (!select_ln340_4994_fu_81926_p3.read().is_01() || !select_ln340_4839_fu_76630_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4994_fu_81926_p3.read()) + sc_bigint<28>(select_ln340_4839_fu_76630_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_119_fu_82278_p3() {
    acc_2_V_119_fu_82278_p3 = (!and_ln786_4473_fu_82246_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4473_fu_82246_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_118_fu_82226_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_120_fu_82586_p2() {
    acc_2_V_120_fu_82586_p2 = (!select_ln340_4998_fu_82286_p3.read().is_01() || !select_ln340_4843_fu_77488_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4998_fu_82286_p3.read()) + sc_bigint<28>(select_ln340_4843_fu_77488_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_121_fu_82638_p3() {
    acc_2_V_121_fu_82638_p3 = (!and_ln786_4477_fu_82606_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4477_fu_82606_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_120_fu_82586_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_122_fu_87068_p2() {
    acc_2_V_122_fu_87068_p2 = (!select_ln340_5002_reg_104786.read().is_01() || !select_ln340_4847_reg_104648.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5002_reg_104786.read()) + sc_bigint<28>(select_ln340_4847_reg_104648.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_123_fu_87118_p3() {
    acc_2_V_123_fu_87118_p3 = (!and_ln786_4481_fu_87086_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4481_fu_87086_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_122_fu_87068_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_124_fu_87417_p2() {
    acc_2_V_124_fu_87417_p2 = (!select_ln340_5006_fu_87126_p3.read().is_01() || !select_ln340_4851_reg_104672.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5006_fu_87126_p3.read()) + sc_bigint<28>(select_ln340_4851_reg_104672.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_125_fu_87468_p3() {
    acc_2_V_125_fu_87468_p3 = (!and_ln786_4485_fu_87436_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4485_fu_87436_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_124_fu_87417_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_126_fu_87770_p2() {
    acc_2_V_126_fu_87770_p2 = (!select_ln340_5010_fu_87476_p3.read().is_01() || !select_ln340_4855_fu_82927_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5010_fu_87476_p3.read()) + sc_bigint<28>(select_ln340_4855_fu_82927_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_127_fu_87822_p3() {
    acc_2_V_127_fu_87822_p3 = (!and_ln786_4489_fu_87790_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4489_fu_87790_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_126_fu_87770_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_128_fu_88125_p2() {
    acc_2_V_128_fu_88125_p2 = (!select_ln340_5014_fu_87830_p3.read().is_01() || !select_ln340_4859_reg_104762.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5014_fu_87830_p3.read()) + sc_bigint<28>(select_ln340_4859_reg_104762.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_129_fu_88176_p3() {
    acc_2_V_129_fu_88176_p3 = (!and_ln786_4493_fu_88144_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4493_fu_88144_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_128_fu_88125_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_130_fu_88482_p2() {
    acc_2_V_130_fu_88482_p2 = (!select_ln340_5018_fu_88184_p3.read().is_01() || !select_ln340_4863_fu_83634_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5018_fu_88184_p3.read()) + sc_bigint<28>(select_ln340_4863_fu_83634_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_131_fu_88534_p3() {
    acc_2_V_131_fu_88534_p3 = (!and_ln786_4497_fu_88502_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4497_fu_88502_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_130_fu_88482_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_132_fu_88754_p2() {
    acc_2_V_132_fu_88754_p2 = (!select_ln340_5022_fu_88542_p3.read().is_01() || !select_ln340_4867_fu_84463_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5022_fu_88542_p3.read()) + sc_bigint<28>(select_ln340_4867_fu_84463_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_133_fu_93893_p3() {
    acc_2_V_133_fu_93893_p3 = (!and_ln786_4501_fu_93867_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4501_fu_93867_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_132_reg_104983.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_134_fu_94151_p2() {
    acc_2_V_134_fu_94151_p2 = (!select_ln340_5026_fu_93900_p3.read().is_01() || !select_ln340_4871_reg_104880.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5026_fu_93900_p3.read()) + sc_bigint<28>(select_ln340_4871_reg_104880.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_135_fu_94202_p3() {
    acc_2_V_135_fu_94202_p3 = (!and_ln786_4505_fu_94170_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4505_fu_94170_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_134_fu_94151_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_136_fu_94503_p2() {
    acc_2_V_136_fu_94503_p2 = (!select_ln340_5030_fu_94210_p3.read().is_01() || !select_ln340_4875_reg_104904.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5030_fu_94210_p3.read()) + sc_bigint<28>(select_ln340_4875_reg_104904.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_137_fu_94554_p3() {
    acc_2_V_137_fu_94554_p3 = (!and_ln786_4509_fu_94522_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4509_fu_94522_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_136_fu_94503_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_138_fu_94857_p2() {
    acc_2_V_138_fu_94857_p2 = (!select_ln340_5034_fu_94562_p3.read().is_01() || !select_ln340_4879_reg_104922.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5034_fu_94562_p3.read()) + sc_bigint<28>(select_ln340_4879_reg_104922.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_139_fu_94908_p3() {
    acc_2_V_139_fu_94908_p3 = (!and_ln786_4513_fu_94876_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4513_fu_94876_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_138_fu_94857_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_140_fu_95214_p2() {
    acc_2_V_140_fu_95214_p2 = (!select_ln340_5038_fu_94916_p3.read().is_01() || !select_ln340_4883_fu_89680_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5038_fu_94916_p3.read()) + sc_bigint<28>(select_ln340_4883_fu_89680_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_141_fu_95266_p3() {
    acc_2_V_141_fu_95266_p3 = (!and_ln786_4517_fu_95234_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4517_fu_95234_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_140_fu_95214_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_142_fu_95574_p2() {
    acc_2_V_142_fu_95574_p2 = (!select_ln340_5042_fu_95274_p3.read().is_01() || !select_ln340_4887_fu_90470_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5042_fu_95274_p3.read()) + sc_bigint<28>(select_ln340_4887_fu_90470_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_143_fu_95626_p3() {
    acc_2_V_143_fu_95626_p3 = (!and_ln786_4521_fu_95594_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4521_fu_95594_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_142_fu_95574_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_144_fu_99575_p2() {
    acc_2_V_144_fu_99575_p2 = (!select_ln340_5046_reg_105133.read().is_01() || !select_ln340_4891_reg_105022.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5046_reg_105133.read()) + sc_bigint<28>(select_ln340_4891_reg_105022.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_145_fu_99625_p3() {
    acc_2_V_145_fu_99625_p3 = (!and_ln786_4525_fu_99593_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4525_fu_99593_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_144_fu_99575_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_146_fu_99924_p2() {
    acc_2_V_146_fu_99924_p2 = (!select_ln340_5050_fu_99633_p3.read().is_01() || !select_ln340_4895_reg_105046.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5050_fu_99633_p3.read()) + sc_bigint<28>(select_ln340_4895_reg_105046.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_147_fu_99975_p3() {
    acc_2_V_147_fu_99975_p3 = (!and_ln786_4529_fu_99943_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4529_fu_99943_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_146_fu_99924_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_148_fu_100276_p2() {
    acc_2_V_148_fu_100276_p2 = (!select_ln340_5054_fu_99983_p3.read().is_01() || !select_ln340_4899_reg_105070.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5054_fu_99983_p3.read()) + sc_bigint<28>(select_ln340_4899_reg_105070.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_149_fu_100327_p3() {
    acc_2_V_149_fu_100327_p3 = (!and_ln786_4533_fu_100295_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4533_fu_100295_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_148_fu_100276_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_150_fu_100630_p2() {
    acc_2_V_150_fu_100630_p2 = (!select_ln340_5058_fu_100335_p3.read().is_01() || !select_ln340_4903_reg_105115.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5058_fu_100335_p3.read()) + sc_bigint<28>(select_ln340_4903_reg_105115.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_151_fu_100681_p3() {
    acc_2_V_151_fu_100681_p3 = (!and_ln786_4537_fu_100649_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4537_fu_100649_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_150_fu_100630_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_152_fu_100987_p2() {
    acc_2_V_152_fu_100987_p2 = (!select_ln340_5062_fu_100689_p3.read().is_01() || !select_ln340_4907_fu_96479_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5062_fu_100689_p3.read()) + sc_bigint<28>(select_ln340_4907_fu_96479_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_153_fu_101039_p3() {
    acc_2_V_153_fu_101039_p3 = (!and_ln786_4541_fu_101007_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4541_fu_101007_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_152_fu_100987_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_154_fu_101293_p2() {
    acc_2_V_154_fu_101293_p2 = (!select_ln340_5066_fu_101047_p3.read().is_01() || !select_ln340_4911_fu_97276_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5066_fu_101047_p3.read()) + sc_bigint<28>(select_ln340_4911_fu_97276_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_155_fu_102483_p3() {
    acc_2_V_155_fu_102483_p3 = (!and_ln786_4545_fu_102457_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4545_fu_102457_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_154_reg_105327.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_156_fu_102744_p2() {
    acc_2_V_156_fu_102744_p2 = (!select_ln340_5070_fu_102490_p3.read().is_01() || !select_ln340_4915_fu_101608_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5070_fu_102490_p3.read()) + sc_bigint<28>(select_ln340_4915_fu_101608_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_157_fu_102796_p3() {
    acc_2_V_157_fu_102796_p3 = (!and_ln786_4549_fu_102764_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4549_fu_102764_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_156_fu_102744_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_158_fu_103009_p2() {
    acc_2_V_158_fu_103009_p2 = (!select_ln340_5074_fu_102804_p3.read().is_01() || !select_ln340_4918_reg_105258.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5074_fu_102804_p3.read()) + sc_bigint<28>(select_ln340_4918_reg_105258.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_159_fu_103060_p3() {
    acc_2_V_159_fu_103060_p3 = (!and_ln786_4552_fu_103028_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4552_fu_103028_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_158_fu_103009_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_160_fu_103361_p2() {
    acc_2_V_160_fu_103361_p2 = (!select_ln340_5077_fu_103068_p3.read().is_01() || !select_ln340_4922_reg_105282.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5077_fu_103068_p3.read()) + sc_bigint<28>(select_ln340_4922_reg_105282.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_161_fu_103412_p3() {
    acc_2_V_161_fu_103412_p3 = (!and_ln786_4556_fu_103380_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4556_fu_103380_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_160_fu_103361_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_162_fu_103720_p2() {
    acc_2_V_162_fu_103720_p2 = (!select_ln340_5081_fu_103420_p3.read().is_01() || !select_ln340_4926_fu_102206_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5081_fu_103420_p3.read()) + sc_bigint<28>(select_ln340_4926_fu_102206_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_163_fu_103772_p3() {
    acc_2_V_163_fu_103772_p3 = (!and_ln786_4560_fu_103740_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4560_fu_103740_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_162_fu_103720_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_85_fu_62153_p3() {
    acc_2_V_85_fu_62153_p3 = (!and_ln786_4405_fu_62121_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4405_fu_62121_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_fu_62101_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_86_fu_62457_p2() {
    acc_2_V_86_fu_62457_p2 = (!select_ln340_4930_fu_62161_p3.read().is_01() || !select_ln340_4775_fu_58634_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4930_fu_62161_p3.read()) + sc_bigint<28>(select_ln340_4775_fu_58634_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_87_fu_62509_p3() {
    acc_2_V_87_fu_62509_p3 = (!and_ln786_4409_fu_62477_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4409_fu_62477_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_86_fu_62457_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_88_fu_67630_p2() {
    acc_2_V_88_fu_67630_p2 = (!select_ln340_4934_reg_104043.read().is_01() || !select_ln340_4779_reg_103905.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4934_reg_104043.read()) + sc_bigint<28>(select_ln340_4779_reg_103905.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_89_fu_67680_p3() {
    acc_2_V_89_fu_67680_p3 = (!and_ln786_4413_fu_67648_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4413_fu_67648_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_88_fu_67630_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_90_fu_67979_p2() {
    acc_2_V_90_fu_67979_p2 = (!select_ln340_4938_fu_67688_p3.read().is_01() || !select_ln340_4783_reg_103929.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4938_fu_67688_p3.read()) + sc_bigint<28>(select_ln340_4783_reg_103929.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_91_fu_68030_p3() {
    acc_2_V_91_fu_68030_p3 = (!and_ln786_4417_fu_67998_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4417_fu_67998_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_90_fu_67979_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_92_fu_68333_p2() {
    acc_2_V_92_fu_68333_p2 = (!select_ln340_4942_fu_68038_p3.read().is_01() || !select_ln340_4787_reg_103974.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4942_fu_68038_p3.read()) + sc_bigint<28>(select_ln340_4787_reg_103974.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_93_fu_68384_p3() {
    acc_2_V_93_fu_68384_p3 = (!and_ln786_4421_fu_68352_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4421_fu_68352_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_92_fu_68333_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_94_fu_68687_p2() {
    acc_2_V_94_fu_68687_p2 = (!select_ln340_4946_fu_68392_p3.read().is_01() || !select_ln340_4791_reg_104019.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4946_fu_68392_p3.read()) + sc_bigint<28>(select_ln340_4791_reg_104019.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_95_fu_68738_p3() {
    acc_2_V_95_fu_68738_p3 = (!and_ln786_4425_fu_68706_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4425_fu_68706_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_94_fu_68687_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_96_fu_69044_p2() {
    acc_2_V_96_fu_69044_p2 = (!select_ln340_4950_fu_68746_p3.read().is_01() || !select_ln340_4795_fu_63511_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4950_fu_68746_p3.read()) + sc_bigint<28>(select_ln340_4795_fu_63511_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_97_fu_69096_p3() {
    acc_2_V_97_fu_69096_p3 = (!and_ln786_4429_fu_69064_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4429_fu_69064_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_96_fu_69044_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_98_fu_69336_p2() {
    acc_2_V_98_fu_69336_p2 = (!select_ln340_4954_fu_69104_p3.read().is_01() || !select_ln340_4799_fu_64358_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4954_fu_69104_p3.read()) + sc_bigint<28>(select_ln340_4799_fu_64358_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_99_fu_69362_p3() {
    acc_2_V_99_fu_69362_p3 = (!and_ln786_4433_fu_69356_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4433_fu_69356_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_2_V_98_fu_69336_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_2_V_fu_62101_p2() {
    acc_2_V_fu_62101_p2 = (!ap_const_lv28_FFFFFEC.is_01() || !select_ln340_4771_fu_57794_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(ap_const_lv28_FFFFFEC) + sc_bigint<28>(select_ln340_4771_fu_57794_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_100_fu_74111_p2() {
    acc_3_V_100_fu_74111_p2 = (!select_ln340_4959_fu_73819_p3.read().is_01() || !select_ln340_4804_reg_104097.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4959_fu_73819_p3.read()) + sc_bigint<28>(select_ln340_4804_reg_104097.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_101_fu_74162_p3() {
    acc_3_V_101_fu_74162_p3 = (!and_ln786_4438_fu_74130_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4438_fu_74130_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_100_fu_74111_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_102_fu_74465_p2() {
    acc_3_V_102_fu_74465_p2 = (!select_ln340_4963_fu_74170_p3.read().is_01() || !select_ln340_4808_reg_104142.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4963_fu_74170_p3.read()) + sc_bigint<28>(select_ln340_4808_reg_104142.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_103_fu_74516_p3() {
    acc_3_V_103_fu_74516_p3 = (!and_ln786_4442_fu_74484_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4442_fu_74484_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_102_fu_74465_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_104_fu_74817_p2() {
    acc_3_V_104_fu_74817_p2 = (!select_ln340_4967_fu_74524_p3.read().is_01() || !select_ln340_4812_reg_104166.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4967_fu_74524_p3.read()) + sc_bigint<28>(select_ln340_4812_reg_104166.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_105_fu_74868_p3() {
    acc_3_V_105_fu_74868_p3 = (!and_ln786_4446_fu_74836_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4446_fu_74836_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_104_fu_74817_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_106_fu_75174_p2() {
    acc_3_V_106_fu_75174_p2 = (!select_ln340_4971_fu_74876_p3.read().is_01() || !select_ln340_4816_fu_69868_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4971_fu_74876_p3.read()) + sc_bigint<28>(select_ln340_4816_fu_69868_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_107_fu_75226_p3() {
    acc_3_V_107_fu_75226_p3 = (!and_ln786_4450_fu_75194_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4450_fu_75194_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_106_fu_75174_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_108_fu_75534_p2() {
    acc_3_V_108_fu_75534_p2 = (!select_ln340_4975_fu_75234_p3.read().is_01() || !select_ln340_4820_fu_70689_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4975_fu_75234_p3.read()) + sc_bigint<28>(select_ln340_4820_fu_70689_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_109_fu_75586_p3() {
    acc_3_V_109_fu_75586_p3 = (!and_ln786_4454_fu_75554_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4454_fu_75554_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_108_fu_75534_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_110_fu_75732_p2() {
    acc_3_V_110_fu_75732_p2 = (!select_ln340_4979_fu_75594_p3.read().is_01() || !select_ln340_4824_fu_71494_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4979_fu_75594_p3.read()) + sc_bigint<28>(select_ln340_4824_fu_71494_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_111_fu_80949_p3() {
    acc_3_V_111_fu_80949_p3 = (!and_ln786_4458_fu_80923_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4458_fu_80923_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_110_reg_104569.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_112_fu_81249_p2() {
    acc_3_V_112_fu_81249_p2 = (!select_ln340_4983_fu_80956_p3.read().is_01() || !select_ln340_4828_reg_104406.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4983_fu_80956_p3.read()) + sc_bigint<28>(select_ln340_4828_reg_104406.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_113_fu_81300_p3() {
    acc_3_V_113_fu_81300_p3 = (!and_ln786_4462_fu_81268_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4462_fu_81268_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_112_fu_81249_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_114_fu_81601_p2() {
    acc_3_V_114_fu_81601_p2 = (!select_ln340_4987_fu_81308_p3.read().is_01() || !select_ln340_4832_reg_104430.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4987_fu_81308_p3.read()) + sc_bigint<28>(select_ln340_4832_reg_104430.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_115_fu_81652_p3() {
    acc_3_V_115_fu_81652_p3 = (!and_ln786_4466_fu_81620_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4466_fu_81620_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_114_fu_81601_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_116_fu_81956_p2() {
    acc_3_V_116_fu_81956_p2 = (!select_ln340_4991_fu_81660_p3.read().is_01() || !select_ln340_4836_fu_76000_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4991_fu_81660_p3.read()) + sc_bigint<28>(select_ln340_4836_fu_76000_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_117_fu_82008_p3() {
    acc_3_V_117_fu_82008_p3 = (!and_ln786_4470_fu_81976_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4470_fu_81976_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_116_fu_81956_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_118_fu_82316_p2() {
    acc_3_V_118_fu_82316_p2 = (!select_ln340_4995_fu_82016_p3.read().is_01() || !select_ln340_4840_fu_76879_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4995_fu_82016_p3.read()) + sc_bigint<28>(select_ln340_4840_fu_76879_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_119_fu_82368_p3() {
    acc_3_V_119_fu_82368_p3 = (!and_ln786_4474_fu_82336_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4474_fu_82336_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_118_fu_82316_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_120_fu_82676_p2() {
    acc_3_V_120_fu_82676_p2 = (!select_ln340_4999_fu_82376_p3.read().is_01() || !select_ln340_4844_fu_77688_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4999_fu_82376_p3.read()) + sc_bigint<28>(select_ln340_4844_fu_77688_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_121_fu_82728_p3() {
    acc_3_V_121_fu_82728_p3 = (!and_ln786_4478_fu_82696_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4478_fu_82696_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_120_fu_82676_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_122_fu_87154_p2() {
    acc_3_V_122_fu_87154_p2 = (!select_ln340_5003_reg_104792.read().is_01() || !select_ln340_4848_reg_104654.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5003_reg_104792.read()) + sc_bigint<28>(select_ln340_4848_reg_104654.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_123_fu_87204_p3() {
    acc_3_V_123_fu_87204_p3 = (!and_ln786_4482_fu_87172_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4482_fu_87172_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_122_fu_87154_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_124_fu_87505_p2() {
    acc_3_V_124_fu_87505_p2 = (!select_ln340_5007_fu_87212_p3.read().is_01() || !select_ln340_4852_reg_104678.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5007_fu_87212_p3.read()) + sc_bigint<28>(select_ln340_4852_reg_104678.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_125_fu_87556_p3() {
    acc_3_V_125_fu_87556_p3 = (!and_ln786_4486_fu_87524_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4486_fu_87524_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_124_fu_87505_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_126_fu_87860_p2() {
    acc_3_V_126_fu_87860_p2 = (!select_ln340_5011_fu_87564_p3.read().is_01() || !select_ln340_4856_fu_83018_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5011_fu_87564_p3.read()) + sc_bigint<28>(select_ln340_4856_fu_83018_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_127_fu_87912_p3() {
    acc_3_V_127_fu_87912_p3 = (!and_ln786_4490_fu_87880_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4490_fu_87880_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_126_fu_87860_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_128_fu_88213_p2() {
    acc_3_V_128_fu_88213_p2 = (!select_ln340_5015_fu_87920_p3.read().is_01() || !select_ln340_4860_reg_104768.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5015_fu_87920_p3.read()) + sc_bigint<28>(select_ln340_4860_reg_104768.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_129_fu_88264_p3() {
    acc_3_V_129_fu_88264_p3 = (!and_ln786_4494_fu_88232_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4494_fu_88232_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_128_fu_88213_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_130_fu_88572_p2() {
    acc_3_V_130_fu_88572_p2 = (!select_ln340_5019_fu_88272_p3.read().is_01() || !select_ln340_4864_fu_83826_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5019_fu_88272_p3.read()) + sc_bigint<28>(select_ln340_4864_fu_83826_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_131_fu_88624_p3() {
    acc_3_V_131_fu_88624_p3 = (!and_ln786_4498_fu_88592_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4498_fu_88592_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_130_fu_88572_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_132_fu_88790_p2() {
    acc_3_V_132_fu_88790_p2 = (!select_ln340_5023_fu_88632_p3.read().is_01() || !select_ln340_4868_fu_84659_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5023_fu_88632_p3.read()) + sc_bigint<28>(select_ln340_4868_fu_84659_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_133_fu_93939_p3() {
    acc_3_V_133_fu_93939_p3 = (!and_ln786_4502_fu_93913_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4502_fu_93913_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_132_reg_105003.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_134_fu_94239_p2() {
    acc_3_V_134_fu_94239_p2 = (!select_ln340_5027_fu_93946_p3.read().is_01() || !select_ln340_4872_reg_104886.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5027_fu_93946_p3.read()) + sc_bigint<28>(select_ln340_4872_reg_104886.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_135_fu_94290_p3() {
    acc_3_V_135_fu_94290_p3 = (!and_ln786_4506_fu_94258_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4506_fu_94258_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_134_fu_94239_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_136_fu_94591_p2() {
    acc_3_V_136_fu_94591_p2 = (!select_ln340_5031_fu_94298_p3.read().is_01() || !select_ln340_4876_reg_104910.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5031_fu_94298_p3.read()) + sc_bigint<28>(select_ln340_4876_reg_104910.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_137_fu_94642_p3() {
    acc_3_V_137_fu_94642_p3 = (!and_ln786_4510_fu_94610_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4510_fu_94610_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_136_fu_94591_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_138_fu_94945_p2() {
    acc_3_V_138_fu_94945_p2 = (!select_ln340_5035_fu_94650_p3.read().is_01() || !select_ln340_4880_reg_104928.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5035_fu_94650_p3.read()) + sc_bigint<28>(select_ln340_4880_reg_104928.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_139_fu_94996_p3() {
    acc_3_V_139_fu_94996_p3 = (!and_ln786_4514_fu_94964_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4514_fu_94964_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_138_fu_94945_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_140_fu_95304_p2() {
    acc_3_V_140_fu_95304_p2 = (!select_ln340_5039_fu_95004_p3.read().is_01() || !select_ln340_4884_fu_89876_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5039_fu_95004_p3.read()) + sc_bigint<28>(select_ln340_4884_fu_89876_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_141_fu_95356_p3() {
    acc_3_V_141_fu_95356_p3 = (!and_ln786_4518_fu_95324_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4518_fu_95324_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_140_fu_95304_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_142_fu_95664_p2() {
    acc_3_V_142_fu_95664_p2 = (!select_ln340_5043_fu_95364_p3.read().is_01() || !select_ln340_4888_fu_90662_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5043_fu_95364_p3.read()) + sc_bigint<28>(select_ln340_4888_fu_90662_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_143_fu_95716_p3() {
    acc_3_V_143_fu_95716_p3 = (!and_ln786_4522_fu_95684_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4522_fu_95684_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_142_fu_95664_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_144_fu_99661_p2() {
    acc_3_V_144_fu_99661_p2 = (!select_ln340_5047_reg_105139.read().is_01() || !select_ln340_4892_reg_105028.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5047_reg_105139.read()) + sc_bigint<28>(select_ln340_4892_reg_105028.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_145_fu_99711_p3() {
    acc_3_V_145_fu_99711_p3 = (!and_ln786_4526_fu_99679_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4526_fu_99679_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_144_fu_99661_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_146_fu_100012_p2() {
    acc_3_V_146_fu_100012_p2 = (!select_ln340_5051_fu_99719_p3.read().is_01() || !select_ln340_4896_reg_105052.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5051_fu_99719_p3.read()) + sc_bigint<28>(select_ln340_4896_reg_105052.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_147_fu_100063_p3() {
    acc_3_V_147_fu_100063_p3 = (!and_ln786_4530_fu_100031_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4530_fu_100031_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_146_fu_100012_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_148_fu_100364_p2() {
    acc_3_V_148_fu_100364_p2 = (!select_ln340_5055_fu_100071_p3.read().is_01() || !select_ln340_4900_reg_105076.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5055_fu_100071_p3.read()) + sc_bigint<28>(select_ln340_4900_reg_105076.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_149_fu_100415_p3() {
    acc_3_V_149_fu_100415_p3 = (!and_ln786_4534_fu_100383_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4534_fu_100383_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_148_fu_100364_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_150_fu_100718_p2() {
    acc_3_V_150_fu_100718_p2 = (!select_ln340_5059_fu_100423_p3.read().is_01() || !select_ln340_4904_reg_105121.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5059_fu_100423_p3.read()) + sc_bigint<28>(select_ln340_4904_reg_105121.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_151_fu_100769_p3() {
    acc_3_V_151_fu_100769_p3 = (!and_ln786_4538_fu_100737_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4538_fu_100737_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_150_fu_100718_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_152_fu_101077_p2() {
    acc_3_V_152_fu_101077_p2 = (!select_ln340_5063_fu_100777_p3.read().is_01() || !select_ln340_4908_fu_96675_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5063_fu_100777_p3.read()) + sc_bigint<28>(select_ln340_4908_fu_96675_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_153_fu_101129_p3() {
    acc_3_V_153_fu_101129_p3 = (!and_ln786_4542_fu_101097_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4542_fu_101097_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_152_fu_101077_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_154_fu_101329_p2() {
    acc_3_V_154_fu_101329_p2 = (!select_ln340_5067_fu_101137_p3.read().is_01() || !select_ln340_4912_fu_97472_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5067_fu_101137_p3.read()) + sc_bigint<28>(select_ln340_4912_fu_97472_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_155_fu_102529_p3() {
    acc_3_V_155_fu_102529_p3 = (!and_ln786_4546_fu_102503_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4546_fu_102503_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_154_reg_105347.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_156_fu_102833_p2() {
    acc_3_V_156_fu_102833_p2 = (!select_ln340_5071_fu_102536_p3.read().is_01() || !select_ln340_4916_reg_105246.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5071_fu_102536_p3.read()) + sc_bigint<28>(select_ln340_4916_reg_105246.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_157_fu_102884_p3() {
    acc_3_V_157_fu_102884_p3 = (!and_ln786_4550_fu_102852_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4550_fu_102852_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_156_fu_102833_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_158_fu_103097_p2() {
    acc_3_V_158_fu_103097_p2 = (!select_ln340_5075_fu_102892_p3.read().is_01() || !select_ln340_4919_reg_105264.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5075_fu_102892_p3.read()) + sc_bigint<28>(select_ln340_4919_reg_105264.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_159_fu_103148_p3() {
    acc_3_V_159_fu_103148_p3 = (!and_ln786_4553_fu_103116_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4553_fu_103116_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_158_fu_103097_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_160_fu_103449_p2() {
    acc_3_V_160_fu_103449_p2 = (!select_ln340_5078_fu_103156_p3.read().is_01() || !select_ln340_4923_reg_105288.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5078_fu_103156_p3.read()) + sc_bigint<28>(select_ln340_4923_reg_105288.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_161_fu_103500_p3() {
    acc_3_V_161_fu_103500_p3 = (!and_ln786_4557_fu_103468_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4557_fu_103468_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_160_fu_103449_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_162_fu_103811_p2() {
    acc_3_V_162_fu_103811_p2 = (!select_ln340_5082_fu_103508_p3.read().is_01() || !select_ln340_4927_fu_102398_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_5082_fu_103508_p3.read()) + sc_bigint<28>(select_ln340_4927_fu_102398_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_163_fu_103863_p3() {
    acc_3_V_163_fu_103863_p3 = (!and_ln786_4561_fu_103831_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4561_fu_103831_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_162_fu_103811_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_85_fu_62239_p3() {
    acc_3_V_85_fu_62239_p3 = (!and_ln786_4406_fu_62207_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4406_fu_62207_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_fu_62187_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_86_fu_62547_p2() {
    acc_3_V_86_fu_62547_p2 = (!select_ln340_4931_fu_62247_p3.read().is_01() || !select_ln340_4776_fu_58852_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4931_fu_62247_p3.read()) + sc_bigint<28>(select_ln340_4776_fu_58852_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_87_fu_62599_p3() {
    acc_3_V_87_fu_62599_p3 = (!and_ln786_4410_fu_62567_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4410_fu_62567_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_86_fu_62547_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_88_fu_67716_p2() {
    acc_3_V_88_fu_67716_p2 = (!select_ln340_4935_reg_104049.read().is_01() || !select_ln340_4780_reg_103911.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4935_reg_104049.read()) + sc_bigint<28>(select_ln340_4780_reg_103911.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_89_fu_67766_p3() {
    acc_3_V_89_fu_67766_p3 = (!and_ln786_4414_fu_67734_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4414_fu_67734_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_88_fu_67716_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_90_fu_68067_p2() {
    acc_3_V_90_fu_68067_p2 = (!select_ln340_4939_fu_67774_p3.read().is_01() || !select_ln340_4784_reg_103935.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4939_fu_67774_p3.read()) + sc_bigint<28>(select_ln340_4784_reg_103935.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_91_fu_68118_p3() {
    acc_3_V_91_fu_68118_p3 = (!and_ln786_4418_fu_68086_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4418_fu_68086_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_90_fu_68067_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_92_fu_68421_p2() {
    acc_3_V_92_fu_68421_p2 = (!select_ln340_4943_fu_68126_p3.read().is_01() || !select_ln340_4788_reg_103980.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4943_fu_68126_p3.read()) + sc_bigint<28>(select_ln340_4788_reg_103980.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_93_fu_68472_p3() {
    acc_3_V_93_fu_68472_p3 = (!and_ln786_4422_fu_68440_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4422_fu_68440_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_92_fu_68421_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_94_fu_68775_p2() {
    acc_3_V_94_fu_68775_p2 = (!select_ln340_4947_fu_68480_p3.read().is_01() || !select_ln340_4792_reg_104025.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4947_fu_68480_p3.read()) + sc_bigint<28>(select_ln340_4792_reg_104025.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_95_fu_68826_p3() {
    acc_3_V_95_fu_68826_p3 = (!and_ln786_4426_fu_68794_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4426_fu_68794_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_94_fu_68775_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_96_fu_69134_p2() {
    acc_3_V_96_fu_69134_p2 = (!select_ln340_4951_fu_68834_p3.read().is_01() || !select_ln340_4796_fu_63711_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4951_fu_68834_p3.read()) + sc_bigint<28>(select_ln340_4796_fu_63711_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_97_fu_69186_p3() {
    acc_3_V_97_fu_69186_p3 = (!and_ln786_4430_fu_69154_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4430_fu_69154_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_96_fu_69134_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_98_fu_69392_p2() {
    acc_3_V_98_fu_69392_p2 = (!select_ln340_4955_fu_69194_p3.read().is_01() || !select_ln340_4800_fu_64550_p3.read().is_01())? sc_lv<28>(): (sc_bigint<28>(select_ln340_4955_fu_69194_p3.read()) + sc_bigint<28>(select_ln340_4800_fu_64550_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_99_fu_69418_p3() {
    acc_3_V_99_fu_69418_p3 = (!and_ln786_4434_fu_69412_p2.read()[0].is_01())? sc_lv<28>(): ((and_ln786_4434_fu_69412_p2.read()[0].to_bool())? ap_const_lv28_8000000: acc_3_V_98_fu_69392_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_acc_3_V_fu_62187_p2() {
    acc_3_V_fu_62187_p2 = (!ap_const_lv28_12E.is_01() || !select_ln340_4772_fu_57994_p3.read().is_01())? sc_lv<28>(): (sc_biguint<28>(ap_const_lv28_12E) + sc_bigint<28>(select_ln340_4772_fu_57994_p3.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1118_fu_97624_p2() {
    add_ln1118_fu_97624_p2 = (!sext_ln1118_875_fu_97594_p1.read().is_01() || !sext_ln1118_876_fu_97605_p1.read().is_01())? sc_lv<34>(): (sc_bigint<34>(sext_ln1118_875_fu_97594_p1.read()) + sc_bigint<34>(sext_ln1118_876_fu_97605_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1366_fu_62001_p2() {
    add_ln1192_1366_fu_62001_p2 = (!ap_const_lv29_1FFFFFCE.is_01() || !sext_ln703_2694_fu_61997_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(ap_const_lv29_1FFFFFCE) + sc_bigint<29>(sext_ln703_2694_fu_61997_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1367_fu_62087_p2() {
    add_ln1192_1367_fu_62087_p2 = (!ap_const_lv29_1FFFFFEC.is_01() || !sext_ln703_2695_fu_62083_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(ap_const_lv29_1FFFFFEC) + sc_bigint<29>(sext_ln703_2695_fu_62083_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1368_fu_62173_p2() {
    add_ln1192_1368_fu_62173_p2 = (!ap_const_lv29_12E.is_01() || !sext_ln703_2696_fu_62169_p1.read().is_01())? sc_lv<29>(): (sc_biguint<29>(ap_const_lv29_12E) + sc_bigint<29>(sext_ln703_2696_fu_62169_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1369_fu_62263_p2() {
    add_ln1192_1369_fu_62263_p2 = (!sext_ln703_2698_fu_62259_p1.read().is_01() || !sext_ln703_2697_fu_62255_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2698_fu_62259_p1.read()) + sc_bigint<29>(sext_ln703_2697_fu_62255_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1370_fu_62353_p2() {
    add_ln1192_1370_fu_62353_p2 = (!sext_ln703_2700_fu_62349_p1.read().is_01() || !sext_ln703_2699_fu_62345_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2700_fu_62349_p1.read()) + sc_bigint<29>(sext_ln703_2699_fu_62345_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1371_fu_62443_p2() {
    add_ln1192_1371_fu_62443_p2 = (!sext_ln703_2702_fu_62439_p1.read().is_01() || !sext_ln703_2701_fu_62435_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2702_fu_62439_p1.read()) + sc_bigint<29>(sext_ln703_2701_fu_62435_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1372_fu_62533_p2() {
    add_ln1192_1372_fu_62533_p2 = (!sext_ln703_2704_fu_62529_p1.read().is_01() || !sext_ln703_2703_fu_62525_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2704_fu_62529_p1.read()) + sc_bigint<29>(sext_ln703_2703_fu_62525_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1373_fu_67444_p2() {
    add_ln1192_1373_fu_67444_p2 = (!sext_ln703_2706_fu_67441_p1.read().is_01() || !sext_ln703_2705_fu_67438_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2706_fu_67441_p1.read()) + sc_bigint<29>(sext_ln703_2705_fu_67438_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1374_fu_67530_p2() {
    add_ln1192_1374_fu_67530_p2 = (!sext_ln703_2708_fu_67527_p1.read().is_01() || !sext_ln703_2707_fu_67524_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2708_fu_67527_p1.read()) + sc_bigint<29>(sext_ln703_2707_fu_67524_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1375_fu_67616_p2() {
    add_ln1192_1375_fu_67616_p2 = (!sext_ln703_2710_fu_67613_p1.read().is_01() || !sext_ln703_2709_fu_67610_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2710_fu_67613_p1.read()) + sc_bigint<29>(sext_ln703_2709_fu_67610_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1376_fu_67702_p2() {
    add_ln1192_1376_fu_67702_p2 = (!sext_ln703_2712_fu_67699_p1.read().is_01() || !sext_ln703_2711_fu_67696_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2712_fu_67699_p1.read()) + sc_bigint<29>(sext_ln703_2711_fu_67696_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1377_fu_67789_p2() {
    add_ln1192_1377_fu_67789_p2 = (!sext_ln703_2714_fu_67786_p1.read().is_01() || !sext_ln703_2713_fu_67782_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2714_fu_67786_p1.read()) + sc_bigint<29>(sext_ln703_2713_fu_67782_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1378_fu_67877_p2() {
    add_ln1192_1378_fu_67877_p2 = (!sext_ln703_2716_fu_67874_p1.read().is_01() || !sext_ln703_2715_fu_67870_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2716_fu_67874_p1.read()) + sc_bigint<29>(sext_ln703_2715_fu_67870_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1379_fu_67965_p2() {
    add_ln1192_1379_fu_67965_p2 = (!sext_ln703_2718_fu_67962_p1.read().is_01() || !sext_ln703_2717_fu_67958_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2718_fu_67962_p1.read()) + sc_bigint<29>(sext_ln703_2717_fu_67958_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1380_fu_68053_p2() {
    add_ln1192_1380_fu_68053_p2 = (!sext_ln703_2720_fu_68050_p1.read().is_01() || !sext_ln703_2719_fu_68046_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2720_fu_68050_p1.read()) + sc_bigint<29>(sext_ln703_2719_fu_68046_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1381_fu_68141_p2() {
    add_ln1192_1381_fu_68141_p2 = (!sext_ln703_2722_fu_68138_p1.read().is_01() || !sext_ln703_2721_fu_68134_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2722_fu_68138_p1.read()) + sc_bigint<29>(sext_ln703_2721_fu_68134_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1382_fu_68230_p2() {
    add_ln1192_1382_fu_68230_p2 = (!sext_ln703_2724_fu_68226_p1.read().is_01() || !sext_ln703_2723_fu_68222_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2724_fu_68226_p1.read()) + sc_bigint<29>(sext_ln703_2723_fu_68222_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1383_fu_68319_p2() {
    add_ln1192_1383_fu_68319_p2 = (!sext_ln703_2726_fu_68316_p1.read().is_01() || !sext_ln703_2725_fu_68312_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2726_fu_68316_p1.read()) + sc_bigint<29>(sext_ln703_2725_fu_68312_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1384_fu_68407_p2() {
    add_ln1192_1384_fu_68407_p2 = (!sext_ln703_2728_fu_68404_p1.read().is_01() || !sext_ln703_2727_fu_68400_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2728_fu_68404_p1.read()) + sc_bigint<29>(sext_ln703_2727_fu_68400_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1385_fu_68495_p2() {
    add_ln1192_1385_fu_68495_p2 = (!sext_ln703_2730_fu_68492_p1.read().is_01() || !sext_ln703_2729_fu_68488_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2730_fu_68492_p1.read()) + sc_bigint<29>(sext_ln703_2729_fu_68488_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1386_fu_68584_p2() {
    add_ln1192_1386_fu_68584_p2 = (!sext_ln703_2732_fu_68580_p1.read().is_01() || !sext_ln703_2731_fu_68576_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2732_fu_68580_p1.read()) + sc_bigint<29>(sext_ln703_2731_fu_68576_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1387_fu_68673_p2() {
    add_ln1192_1387_fu_68673_p2 = (!sext_ln703_2734_fu_68670_p1.read().is_01() || !sext_ln703_2733_fu_68666_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2734_fu_68670_p1.read()) + sc_bigint<29>(sext_ln703_2733_fu_68666_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1388_fu_68761_p2() {
    add_ln1192_1388_fu_68761_p2 = (!sext_ln703_2736_fu_68758_p1.read().is_01() || !sext_ln703_2735_fu_68754_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2736_fu_68758_p1.read()) + sc_bigint<29>(sext_ln703_2735_fu_68754_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1389_fu_68850_p2() {
    add_ln1192_1389_fu_68850_p2 = (!sext_ln703_2738_fu_68846_p1.read().is_01() || !sext_ln703_2737_fu_68842_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2738_fu_68846_p1.read()) + sc_bigint<29>(sext_ln703_2737_fu_68842_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1390_fu_68940_p2() {
    add_ln1192_1390_fu_68940_p2 = (!sext_ln703_2740_fu_68936_p1.read().is_01() || !sext_ln703_2739_fu_68932_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2740_fu_68936_p1.read()) + sc_bigint<29>(sext_ln703_2739_fu_68932_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1391_fu_69030_p2() {
    add_ln1192_1391_fu_69030_p2 = (!sext_ln703_2742_fu_69026_p1.read().is_01() || !sext_ln703_2741_fu_69022_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2742_fu_69026_p1.read()) + sc_bigint<29>(sext_ln703_2741_fu_69022_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1392_fu_69120_p2() {
    add_ln1192_1392_fu_69120_p2 = (!sext_ln703_2744_fu_69116_p1.read().is_01() || !sext_ln703_2743_fu_69112_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2744_fu_69116_p1.read()) + sc_bigint<29>(sext_ln703_2743_fu_69112_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1393_fu_69210_p2() {
    add_ln1192_1393_fu_69210_p2 = (!sext_ln703_2746_fu_69206_p1.read().is_01() || !sext_ln703_2745_fu_69202_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2746_fu_69206_p1.read()) + sc_bigint<29>(sext_ln703_2745_fu_69202_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1394_fu_69266_p2() {
    add_ln1192_1394_fu_69266_p2 = (!sext_ln703_2748_fu_69262_p1.read().is_01() || !sext_ln703_2747_fu_69258_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2748_fu_69262_p1.read()) + sc_bigint<29>(sext_ln703_2747_fu_69258_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1395_fu_69322_p2() {
    add_ln1192_1395_fu_69322_p2 = (!sext_ln703_2750_fu_69318_p1.read().is_01() || !sext_ln703_2749_fu_69314_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2750_fu_69318_p1.read()) + sc_bigint<29>(sext_ln703_2749_fu_69314_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1396_fu_69378_p2() {
    add_ln1192_1396_fu_69378_p2 = (!sext_ln703_2752_fu_69374_p1.read().is_01() || !sext_ln703_2751_fu_69370_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2752_fu_69374_p1.read()) + sc_bigint<29>(sext_ln703_2751_fu_69370_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1397_fu_73833_p2() {
    add_ln1192_1397_fu_73833_p2 = (!sext_ln703_2754_fu_73830_p1.read().is_01() || !sext_ln703_2753_fu_73826_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2754_fu_73830_p1.read()) + sc_bigint<29>(sext_ln703_2753_fu_73826_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1398_fu_73921_p2() {
    add_ln1192_1398_fu_73921_p2 = (!sext_ln703_2756_fu_73918_p1.read().is_01() || !sext_ln703_2755_fu_73914_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2756_fu_73918_p1.read()) + sc_bigint<29>(sext_ln703_2755_fu_73914_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1399_fu_74009_p2() {
    add_ln1192_1399_fu_74009_p2 = (!sext_ln703_2758_fu_74006_p1.read().is_01() || !sext_ln703_2757_fu_74002_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2758_fu_74006_p1.read()) + sc_bigint<29>(sext_ln703_2757_fu_74002_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1400_fu_74097_p2() {
    add_ln1192_1400_fu_74097_p2 = (!sext_ln703_2760_fu_74094_p1.read().is_01() || !sext_ln703_2759_fu_74090_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2760_fu_74094_p1.read()) + sc_bigint<29>(sext_ln703_2759_fu_74090_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1401_fu_74186_p2() {
    add_ln1192_1401_fu_74186_p2 = (!sext_ln703_2762_fu_74182_p1.read().is_01() || !sext_ln703_2761_fu_74178_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2762_fu_74182_p1.read()) + sc_bigint<29>(sext_ln703_2761_fu_74178_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1402_fu_74275_p2() {
    add_ln1192_1402_fu_74275_p2 = (!sext_ln703_2764_fu_74272_p1.read().is_01() || !sext_ln703_2763_fu_74268_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2764_fu_74272_p1.read()) + sc_bigint<29>(sext_ln703_2763_fu_74268_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1403_fu_74363_p2() {
    add_ln1192_1403_fu_74363_p2 = (!sext_ln703_2766_fu_74360_p1.read().is_01() || !sext_ln703_2765_fu_74356_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2766_fu_74360_p1.read()) + sc_bigint<29>(sext_ln703_2765_fu_74356_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1404_fu_74451_p2() {
    add_ln1192_1404_fu_74451_p2 = (!sext_ln703_2768_fu_74448_p1.read().is_01() || !sext_ln703_2767_fu_74444_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2768_fu_74448_p1.read()) + sc_bigint<29>(sext_ln703_2767_fu_74444_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1405_fu_74539_p2() {
    add_ln1192_1405_fu_74539_p2 = (!sext_ln703_2770_fu_74536_p1.read().is_01() || !sext_ln703_2769_fu_74532_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2770_fu_74536_p1.read()) + sc_bigint<29>(sext_ln703_2769_fu_74532_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1406_fu_74627_p2() {
    add_ln1192_1406_fu_74627_p2 = (!sext_ln703_2772_fu_74624_p1.read().is_01() || !sext_ln703_2771_fu_74620_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2772_fu_74624_p1.read()) + sc_bigint<29>(sext_ln703_2771_fu_74620_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1407_fu_74715_p2() {
    add_ln1192_1407_fu_74715_p2 = (!sext_ln703_2774_fu_74712_p1.read().is_01() || !sext_ln703_2773_fu_74708_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2774_fu_74712_p1.read()) + sc_bigint<29>(sext_ln703_2773_fu_74708_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1408_fu_74803_p2() {
    add_ln1192_1408_fu_74803_p2 = (!sext_ln703_2776_fu_74800_p1.read().is_01() || !sext_ln703_2775_fu_74796_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2776_fu_74800_p1.read()) + sc_bigint<29>(sext_ln703_2775_fu_74796_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1409_fu_74891_p2() {
    add_ln1192_1409_fu_74891_p2 = (!sext_ln703_2778_fu_74888_p1.read().is_01() || !sext_ln703_2777_fu_74884_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2778_fu_74888_p1.read()) + sc_bigint<29>(sext_ln703_2777_fu_74884_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1410_fu_74980_p2() {
    add_ln1192_1410_fu_74980_p2 = (!sext_ln703_2780_fu_74976_p1.read().is_01() || !sext_ln703_2779_fu_74972_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2780_fu_74976_p1.read()) + sc_bigint<29>(sext_ln703_2779_fu_74972_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1411_fu_75070_p2() {
    add_ln1192_1411_fu_75070_p2 = (!sext_ln703_2782_fu_75066_p1.read().is_01() || !sext_ln703_2781_fu_75062_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2782_fu_75066_p1.read()) + sc_bigint<29>(sext_ln703_2781_fu_75062_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1412_fu_75160_p2() {
    add_ln1192_1412_fu_75160_p2 = (!sext_ln703_2784_fu_75156_p1.read().is_01() || !sext_ln703_2783_fu_75152_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2784_fu_75156_p1.read()) + sc_bigint<29>(sext_ln703_2783_fu_75152_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1413_fu_75250_p2() {
    add_ln1192_1413_fu_75250_p2 = (!sext_ln703_2786_fu_75246_p1.read().is_01() || !sext_ln703_2785_fu_75242_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2786_fu_75246_p1.read()) + sc_bigint<29>(sext_ln703_2785_fu_75242_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1414_fu_75340_p2() {
    add_ln1192_1414_fu_75340_p2 = (!sext_ln703_2788_fu_75336_p1.read().is_01() || !sext_ln703_2787_fu_75332_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2788_fu_75336_p1.read()) + sc_bigint<29>(sext_ln703_2787_fu_75332_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1415_fu_75430_p2() {
    add_ln1192_1415_fu_75430_p2 = (!sext_ln703_2790_fu_75426_p1.read().is_01() || !sext_ln703_2789_fu_75422_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2790_fu_75426_p1.read()) + sc_bigint<29>(sext_ln703_2789_fu_75422_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1416_fu_75520_p2() {
    add_ln1192_1416_fu_75520_p2 = (!sext_ln703_2792_fu_75516_p1.read().is_01() || !sext_ln703_2791_fu_75512_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2792_fu_75516_p1.read()) + sc_bigint<29>(sext_ln703_2791_fu_75512_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1417_fu_75610_p2() {
    add_ln1192_1417_fu_75610_p2 = (!sext_ln703_2794_fu_75606_p1.read().is_01() || !sext_ln703_2793_fu_75602_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2794_fu_75606_p1.read()) + sc_bigint<29>(sext_ln703_2793_fu_75602_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1418_fu_75646_p2() {
    add_ln1192_1418_fu_75646_p2 = (!sext_ln703_2796_fu_75642_p1.read().is_01() || !sext_ln703_2795_fu_75638_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2796_fu_75642_p1.read()) + sc_bigint<29>(sext_ln703_2795_fu_75638_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1419_fu_75682_p2() {
    add_ln1192_1419_fu_75682_p2 = (!sext_ln703_2798_fu_75678_p1.read().is_01() || !sext_ln703_2797_fu_75674_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2798_fu_75678_p1.read()) + sc_bigint<29>(sext_ln703_2797_fu_75674_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1420_fu_75718_p2() {
    add_ln1192_1420_fu_75718_p2 = (!sext_ln703_2800_fu_75714_p1.read().is_01() || !sext_ln703_2799_fu_75710_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2800_fu_75714_p1.read()) + sc_bigint<29>(sext_ln703_2799_fu_75710_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1421_fu_80971_p2() {
    add_ln1192_1421_fu_80971_p2 = (!sext_ln703_2802_fu_80968_p1.read().is_01() || !sext_ln703_2801_fu_80964_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2802_fu_80968_p1.read()) + sc_bigint<29>(sext_ln703_2801_fu_80964_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1422_fu_81059_p2() {
    add_ln1192_1422_fu_81059_p2 = (!sext_ln703_2804_fu_81056_p1.read().is_01() || !sext_ln703_2803_fu_81052_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2804_fu_81056_p1.read()) + sc_bigint<29>(sext_ln703_2803_fu_81052_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1423_fu_81147_p2() {
    add_ln1192_1423_fu_81147_p2 = (!sext_ln703_2806_fu_81144_p1.read().is_01() || !sext_ln703_2805_fu_81140_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2806_fu_81144_p1.read()) + sc_bigint<29>(sext_ln703_2805_fu_81140_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1424_fu_81235_p2() {
    add_ln1192_1424_fu_81235_p2 = (!sext_ln703_2808_fu_81232_p1.read().is_01() || !sext_ln703_2807_fu_81228_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2808_fu_81232_p1.read()) + sc_bigint<29>(sext_ln703_2807_fu_81228_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1425_fu_81323_p2() {
    add_ln1192_1425_fu_81323_p2 = (!sext_ln703_2810_fu_81320_p1.read().is_01() || !sext_ln703_2809_fu_81316_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2810_fu_81320_p1.read()) + sc_bigint<29>(sext_ln703_2809_fu_81316_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1426_fu_81411_p2() {
    add_ln1192_1426_fu_81411_p2 = (!sext_ln703_2812_fu_81408_p1.read().is_01() || !sext_ln703_2811_fu_81404_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2812_fu_81408_p1.read()) + sc_bigint<29>(sext_ln703_2811_fu_81404_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1427_fu_81499_p2() {
    add_ln1192_1427_fu_81499_p2 = (!sext_ln703_2814_fu_81496_p1.read().is_01() || !sext_ln703_2813_fu_81492_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2814_fu_81496_p1.read()) + sc_bigint<29>(sext_ln703_2813_fu_81492_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1428_fu_81587_p2() {
    add_ln1192_1428_fu_81587_p2 = (!sext_ln703_2816_fu_81584_p1.read().is_01() || !sext_ln703_2815_fu_81580_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2816_fu_81584_p1.read()) + sc_bigint<29>(sext_ln703_2815_fu_81580_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1429_fu_81676_p2() {
    add_ln1192_1429_fu_81676_p2 = (!sext_ln703_2818_fu_81672_p1.read().is_01() || !sext_ln703_2817_fu_81668_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2818_fu_81672_p1.read()) + sc_bigint<29>(sext_ln703_2817_fu_81668_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1430_fu_81765_p2() {
    add_ln1192_1430_fu_81765_p2 = (!sext_ln703_2820_fu_81762_p1.read().is_01() || !sext_ln703_2819_fu_81758_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2820_fu_81762_p1.read()) + sc_bigint<29>(sext_ln703_2819_fu_81758_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1431_fu_81853_p2() {
    add_ln1192_1431_fu_81853_p2 = (!sext_ln703_2822_fu_81850_p1.read().is_01() || !sext_ln703_2821_fu_81846_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2822_fu_81850_p1.read()) + sc_bigint<29>(sext_ln703_2821_fu_81846_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1432_fu_81942_p2() {
    add_ln1192_1432_fu_81942_p2 = (!sext_ln703_2824_fu_81938_p1.read().is_01() || !sext_ln703_2823_fu_81934_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2824_fu_81938_p1.read()) + sc_bigint<29>(sext_ln703_2823_fu_81934_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1433_fu_82032_p2() {
    add_ln1192_1433_fu_82032_p2 = (!sext_ln703_2826_fu_82028_p1.read().is_01() || !sext_ln703_2825_fu_82024_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2826_fu_82028_p1.read()) + sc_bigint<29>(sext_ln703_2825_fu_82024_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1434_fu_82122_p2() {
    add_ln1192_1434_fu_82122_p2 = (!sext_ln703_2828_fu_82118_p1.read().is_01() || !sext_ln703_2827_fu_82114_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2828_fu_82118_p1.read()) + sc_bigint<29>(sext_ln703_2827_fu_82114_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1435_fu_82212_p2() {
    add_ln1192_1435_fu_82212_p2 = (!sext_ln703_2830_fu_82208_p1.read().is_01() || !sext_ln703_2829_fu_82204_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2830_fu_82208_p1.read()) + sc_bigint<29>(sext_ln703_2829_fu_82204_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1436_fu_82302_p2() {
    add_ln1192_1436_fu_82302_p2 = (!sext_ln703_2832_fu_82298_p1.read().is_01() || !sext_ln703_2831_fu_82294_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2832_fu_82298_p1.read()) + sc_bigint<29>(sext_ln703_2831_fu_82294_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1437_fu_82392_p2() {
    add_ln1192_1437_fu_82392_p2 = (!sext_ln703_2834_fu_82388_p1.read().is_01() || !sext_ln703_2833_fu_82384_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2834_fu_82388_p1.read()) + sc_bigint<29>(sext_ln703_2833_fu_82384_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1438_fu_82482_p2() {
    add_ln1192_1438_fu_82482_p2 = (!sext_ln703_2836_fu_82478_p1.read().is_01() || !sext_ln703_2835_fu_82474_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2836_fu_82478_p1.read()) + sc_bigint<29>(sext_ln703_2835_fu_82474_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1439_fu_82572_p2() {
    add_ln1192_1439_fu_82572_p2 = (!sext_ln703_2838_fu_82568_p1.read().is_01() || !sext_ln703_2837_fu_82564_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2838_fu_82568_p1.read()) + sc_bigint<29>(sext_ln703_2837_fu_82564_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1440_fu_82662_p2() {
    add_ln1192_1440_fu_82662_p2 = (!sext_ln703_2840_fu_82658_p1.read().is_01() || !sext_ln703_2839_fu_82654_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2840_fu_82658_p1.read()) + sc_bigint<29>(sext_ln703_2839_fu_82654_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1441_fu_86882_p2() {
    add_ln1192_1441_fu_86882_p2 = (!sext_ln703_2842_fu_86879_p1.read().is_01() || !sext_ln703_2841_fu_86876_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2842_fu_86879_p1.read()) + sc_bigint<29>(sext_ln703_2841_fu_86876_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1442_fu_86968_p2() {
    add_ln1192_1442_fu_86968_p2 = (!sext_ln703_2844_fu_86965_p1.read().is_01() || !sext_ln703_2843_fu_86962_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2844_fu_86965_p1.read()) + sc_bigint<29>(sext_ln703_2843_fu_86962_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1443_fu_87054_p2() {
    add_ln1192_1443_fu_87054_p2 = (!sext_ln703_2846_fu_87051_p1.read().is_01() || !sext_ln703_2845_fu_87048_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2846_fu_87051_p1.read()) + sc_bigint<29>(sext_ln703_2845_fu_87048_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1444_fu_87140_p2() {
    add_ln1192_1444_fu_87140_p2 = (!sext_ln703_2848_fu_87137_p1.read().is_01() || !sext_ln703_2847_fu_87134_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2848_fu_87137_p1.read()) + sc_bigint<29>(sext_ln703_2847_fu_87134_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1445_fu_87227_p2() {
    add_ln1192_1445_fu_87227_p2 = (!sext_ln703_2850_fu_87224_p1.read().is_01() || !sext_ln703_2849_fu_87220_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2850_fu_87224_p1.read()) + sc_bigint<29>(sext_ln703_2849_fu_87220_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1446_fu_87315_p2() {
    add_ln1192_1446_fu_87315_p2 = (!sext_ln703_2852_fu_87312_p1.read().is_01() || !sext_ln703_2851_fu_87308_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2852_fu_87312_p1.read()) + sc_bigint<29>(sext_ln703_2851_fu_87308_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1447_fu_87403_p2() {
    add_ln1192_1447_fu_87403_p2 = (!sext_ln703_2854_fu_87400_p1.read().is_01() || !sext_ln703_2853_fu_87396_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2854_fu_87400_p1.read()) + sc_bigint<29>(sext_ln703_2853_fu_87396_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1448_fu_87491_p2() {
    add_ln1192_1448_fu_87491_p2 = (!sext_ln703_2856_fu_87488_p1.read().is_01() || !sext_ln703_2855_fu_87484_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2856_fu_87488_p1.read()) + sc_bigint<29>(sext_ln703_2855_fu_87484_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1449_fu_87579_p2() {
    add_ln1192_1449_fu_87579_p2 = (!sext_ln703_2858_fu_87576_p1.read().is_01() || !sext_ln703_2857_fu_87572_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2858_fu_87576_p1.read()) + sc_bigint<29>(sext_ln703_2857_fu_87572_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1450_fu_87667_p2() {
    add_ln1192_1450_fu_87667_p2 = (!sext_ln703_2860_fu_87664_p1.read().is_01() || !sext_ln703_2859_fu_87660_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2860_fu_87664_p1.read()) + sc_bigint<29>(sext_ln703_2859_fu_87660_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1451_fu_87756_p2() {
    add_ln1192_1451_fu_87756_p2 = (!sext_ln703_2862_fu_87752_p1.read().is_01() || !sext_ln703_2861_fu_87748_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2862_fu_87752_p1.read()) + sc_bigint<29>(sext_ln703_2861_fu_87748_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1452_fu_87846_p2() {
    add_ln1192_1452_fu_87846_p2 = (!sext_ln703_2864_fu_87842_p1.read().is_01() || !sext_ln703_2863_fu_87838_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2864_fu_87842_p1.read()) + sc_bigint<29>(sext_ln703_2863_fu_87838_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1453_fu_87935_p2() {
    add_ln1192_1453_fu_87935_p2 = (!sext_ln703_2866_fu_87932_p1.read().is_01() || !sext_ln703_2865_fu_87928_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2866_fu_87932_p1.read()) + sc_bigint<29>(sext_ln703_2865_fu_87928_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1454_fu_88023_p2() {
    add_ln1192_1454_fu_88023_p2 = (!sext_ln703_2868_fu_88020_p1.read().is_01() || !sext_ln703_2867_fu_88016_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2868_fu_88020_p1.read()) + sc_bigint<29>(sext_ln703_2867_fu_88016_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1455_fu_88111_p2() {
    add_ln1192_1455_fu_88111_p2 = (!sext_ln703_2870_fu_88108_p1.read().is_01() || !sext_ln703_2869_fu_88104_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2870_fu_88108_p1.read()) + sc_bigint<29>(sext_ln703_2869_fu_88104_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1456_fu_88199_p2() {
    add_ln1192_1456_fu_88199_p2 = (!sext_ln703_2872_fu_88196_p1.read().is_01() || !sext_ln703_2871_fu_88192_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2872_fu_88196_p1.read()) + sc_bigint<29>(sext_ln703_2871_fu_88192_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1457_fu_88288_p2() {
    add_ln1192_1457_fu_88288_p2 = (!sext_ln703_2874_fu_88284_p1.read().is_01() || !sext_ln703_2873_fu_88280_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2874_fu_88284_p1.read()) + sc_bigint<29>(sext_ln703_2873_fu_88280_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1458_fu_88378_p2() {
    add_ln1192_1458_fu_88378_p2 = (!sext_ln703_2876_fu_88374_p1.read().is_01() || !sext_ln703_2875_fu_88370_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2876_fu_88374_p1.read()) + sc_bigint<29>(sext_ln703_2875_fu_88370_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1459_fu_88468_p2() {
    add_ln1192_1459_fu_88468_p2 = (!sext_ln703_2878_fu_88464_p1.read().is_01() || !sext_ln703_2877_fu_88460_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2878_fu_88464_p1.read()) + sc_bigint<29>(sext_ln703_2877_fu_88460_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1460_fu_88558_p2() {
    add_ln1192_1460_fu_88558_p2 = (!sext_ln703_2880_fu_88554_p1.read().is_01() || !sext_ln703_2879_fu_88550_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2880_fu_88554_p1.read()) + sc_bigint<29>(sext_ln703_2879_fu_88550_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1461_fu_88648_p2() {
    add_ln1192_1461_fu_88648_p2 = (!sext_ln703_2882_fu_88644_p1.read().is_01() || !sext_ln703_2881_fu_88640_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2882_fu_88644_p1.read()) + sc_bigint<29>(sext_ln703_2881_fu_88640_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1462_fu_88704_p2() {
    add_ln1192_1462_fu_88704_p2 = (!sext_ln703_2884_fu_88700_p1.read().is_01() || !sext_ln703_2883_fu_88696_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2884_fu_88700_p1.read()) + sc_bigint<29>(sext_ln703_2883_fu_88696_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1463_fu_88740_p2() {
    add_ln1192_1463_fu_88740_p2 = (!sext_ln703_2886_fu_88736_p1.read().is_01() || !sext_ln703_2885_fu_88732_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2886_fu_88736_p1.read()) + sc_bigint<29>(sext_ln703_2885_fu_88732_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1464_fu_88776_p2() {
    add_ln1192_1464_fu_88776_p2 = (!sext_ln703_2888_fu_88772_p1.read().is_01() || !sext_ln703_2887_fu_88768_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2888_fu_88772_p1.read()) + sc_bigint<29>(sext_ln703_2887_fu_88768_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1465_fu_93961_p2() {
    add_ln1192_1465_fu_93961_p2 = (!sext_ln703_2890_fu_93958_p1.read().is_01() || !sext_ln703_2889_fu_93954_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2890_fu_93958_p1.read()) + sc_bigint<29>(sext_ln703_2889_fu_93954_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1466_fu_94049_p2() {
    add_ln1192_1466_fu_94049_p2 = (!sext_ln703_2892_fu_94046_p1.read().is_01() || !sext_ln703_2891_fu_94042_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2892_fu_94046_p1.read()) + sc_bigint<29>(sext_ln703_2891_fu_94042_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1467_fu_94137_p2() {
    add_ln1192_1467_fu_94137_p2 = (!sext_ln703_2894_fu_94134_p1.read().is_01() || !sext_ln703_2893_fu_94130_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2894_fu_94134_p1.read()) + sc_bigint<29>(sext_ln703_2893_fu_94130_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1468_fu_94225_p2() {
    add_ln1192_1468_fu_94225_p2 = (!sext_ln703_2896_fu_94222_p1.read().is_01() || !sext_ln703_2895_fu_94218_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2896_fu_94222_p1.read()) + sc_bigint<29>(sext_ln703_2895_fu_94218_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1469_fu_94313_p2() {
    add_ln1192_1469_fu_94313_p2 = (!sext_ln703_2898_fu_94310_p1.read().is_01() || !sext_ln703_2897_fu_94306_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2898_fu_94310_p1.read()) + sc_bigint<29>(sext_ln703_2897_fu_94306_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1470_fu_94401_p2() {
    add_ln1192_1470_fu_94401_p2 = (!sext_ln703_2900_fu_94398_p1.read().is_01() || !sext_ln703_2899_fu_94394_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2900_fu_94398_p1.read()) + sc_bigint<29>(sext_ln703_2899_fu_94394_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1471_fu_94489_p2() {
    add_ln1192_1471_fu_94489_p2 = (!sext_ln703_2902_fu_94486_p1.read().is_01() || !sext_ln703_2901_fu_94482_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2902_fu_94486_p1.read()) + sc_bigint<29>(sext_ln703_2901_fu_94482_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1472_fu_94577_p2() {
    add_ln1192_1472_fu_94577_p2 = (!sext_ln703_2904_fu_94574_p1.read().is_01() || !sext_ln703_2903_fu_94570_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2904_fu_94574_p1.read()) + sc_bigint<29>(sext_ln703_2903_fu_94570_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1473_fu_94665_p2() {
    add_ln1192_1473_fu_94665_p2 = (!sext_ln703_2906_fu_94662_p1.read().is_01() || !sext_ln703_2905_fu_94658_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2906_fu_94662_p1.read()) + sc_bigint<29>(sext_ln703_2905_fu_94658_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1474_fu_94754_p2() {
    add_ln1192_1474_fu_94754_p2 = (!sext_ln703_2908_fu_94750_p1.read().is_01() || !sext_ln703_2907_fu_94746_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2908_fu_94750_p1.read()) + sc_bigint<29>(sext_ln703_2907_fu_94746_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1475_fu_94843_p2() {
    add_ln1192_1475_fu_94843_p2 = (!sext_ln703_2910_fu_94840_p1.read().is_01() || !sext_ln703_2909_fu_94836_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2910_fu_94840_p1.read()) + sc_bigint<29>(sext_ln703_2909_fu_94836_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1476_fu_94931_p2() {
    add_ln1192_1476_fu_94931_p2 = (!sext_ln703_2912_fu_94928_p1.read().is_01() || !sext_ln703_2911_fu_94924_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2912_fu_94928_p1.read()) + sc_bigint<29>(sext_ln703_2911_fu_94924_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1477_fu_95020_p2() {
    add_ln1192_1477_fu_95020_p2 = (!sext_ln703_2914_fu_95016_p1.read().is_01() || !sext_ln703_2913_fu_95012_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2914_fu_95016_p1.read()) + sc_bigint<29>(sext_ln703_2913_fu_95012_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1478_fu_95110_p2() {
    add_ln1192_1478_fu_95110_p2 = (!sext_ln703_2916_fu_95106_p1.read().is_01() || !sext_ln703_2915_fu_95102_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2916_fu_95106_p1.read()) + sc_bigint<29>(sext_ln703_2915_fu_95102_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1479_fu_95200_p2() {
    add_ln1192_1479_fu_95200_p2 = (!sext_ln703_2918_fu_95196_p1.read().is_01() || !sext_ln703_2917_fu_95192_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2918_fu_95196_p1.read()) + sc_bigint<29>(sext_ln703_2917_fu_95192_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1480_fu_95290_p2() {
    add_ln1192_1480_fu_95290_p2 = (!sext_ln703_2920_fu_95286_p1.read().is_01() || !sext_ln703_2919_fu_95282_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2920_fu_95286_p1.read()) + sc_bigint<29>(sext_ln703_2919_fu_95282_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1481_fu_95380_p2() {
    add_ln1192_1481_fu_95380_p2 = (!sext_ln703_2922_fu_95376_p1.read().is_01() || !sext_ln703_2921_fu_95372_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2922_fu_95376_p1.read()) + sc_bigint<29>(sext_ln703_2921_fu_95372_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1482_fu_95470_p2() {
    add_ln1192_1482_fu_95470_p2 = (!sext_ln703_2924_fu_95466_p1.read().is_01() || !sext_ln703_2923_fu_95462_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2924_fu_95466_p1.read()) + sc_bigint<29>(sext_ln703_2923_fu_95462_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1483_fu_95560_p2() {
    add_ln1192_1483_fu_95560_p2 = (!sext_ln703_2926_fu_95556_p1.read().is_01() || !sext_ln703_2925_fu_95552_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2926_fu_95556_p1.read()) + sc_bigint<29>(sext_ln703_2925_fu_95552_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1484_fu_95650_p2() {
    add_ln1192_1484_fu_95650_p2 = (!sext_ln703_2928_fu_95646_p1.read().is_01() || !sext_ln703_2927_fu_95642_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2928_fu_95646_p1.read()) + sc_bigint<29>(sext_ln703_2927_fu_95642_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1485_fu_95740_p2() {
    add_ln1192_1485_fu_95740_p2 = (!sext_ln703_2930_fu_95736_p1.read().is_01() || !sext_ln703_2929_fu_95732_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2930_fu_95736_p1.read()) + sc_bigint<29>(sext_ln703_2929_fu_95732_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1486_fu_99475_p2() {
    add_ln1192_1486_fu_99475_p2 = (!sext_ln703_2932_fu_99472_p1.read().is_01() || !sext_ln703_2931_fu_99469_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2932_fu_99472_p1.read()) + sc_bigint<29>(sext_ln703_2931_fu_99469_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1487_fu_99561_p2() {
    add_ln1192_1487_fu_99561_p2 = (!sext_ln703_2934_fu_99558_p1.read().is_01() || !sext_ln703_2933_fu_99555_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2934_fu_99558_p1.read()) + sc_bigint<29>(sext_ln703_2933_fu_99555_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1488_fu_99647_p2() {
    add_ln1192_1488_fu_99647_p2 = (!sext_ln703_2936_fu_99644_p1.read().is_01() || !sext_ln703_2935_fu_99641_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2936_fu_99644_p1.read()) + sc_bigint<29>(sext_ln703_2935_fu_99641_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1489_fu_99734_p2() {
    add_ln1192_1489_fu_99734_p2 = (!sext_ln703_2938_fu_99731_p1.read().is_01() || !sext_ln703_2937_fu_99727_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2938_fu_99731_p1.read()) + sc_bigint<29>(sext_ln703_2937_fu_99727_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1490_fu_99822_p2() {
    add_ln1192_1490_fu_99822_p2 = (!sext_ln703_2940_fu_99819_p1.read().is_01() || !sext_ln703_2939_fu_99815_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2940_fu_99819_p1.read()) + sc_bigint<29>(sext_ln703_2939_fu_99815_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1491_fu_99910_p2() {
    add_ln1192_1491_fu_99910_p2 = (!sext_ln703_2942_fu_99907_p1.read().is_01() || !sext_ln703_2941_fu_99903_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2942_fu_99907_p1.read()) + sc_bigint<29>(sext_ln703_2941_fu_99903_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1492_fu_99998_p2() {
    add_ln1192_1492_fu_99998_p2 = (!sext_ln703_2944_fu_99995_p1.read().is_01() || !sext_ln703_2943_fu_99991_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2944_fu_99995_p1.read()) + sc_bigint<29>(sext_ln703_2943_fu_99991_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1493_fu_100086_p2() {
    add_ln1192_1493_fu_100086_p2 = (!sext_ln703_2946_fu_100083_p1.read().is_01() || !sext_ln703_2945_fu_100079_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2946_fu_100083_p1.read()) + sc_bigint<29>(sext_ln703_2945_fu_100079_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1494_fu_100174_p2() {
    add_ln1192_1494_fu_100174_p2 = (!sext_ln703_2948_fu_100171_p1.read().is_01() || !sext_ln703_2947_fu_100167_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2948_fu_100171_p1.read()) + sc_bigint<29>(sext_ln703_2947_fu_100167_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1495_fu_100262_p2() {
    add_ln1192_1495_fu_100262_p2 = (!sext_ln703_2950_fu_100259_p1.read().is_01() || !sext_ln703_2949_fu_100255_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2950_fu_100259_p1.read()) + sc_bigint<29>(sext_ln703_2949_fu_100255_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1496_fu_100350_p2() {
    add_ln1192_1496_fu_100350_p2 = (!sext_ln703_2952_fu_100347_p1.read().is_01() || !sext_ln703_2951_fu_100343_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2952_fu_100347_p1.read()) + sc_bigint<29>(sext_ln703_2951_fu_100343_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1497_fu_100438_p2() {
    add_ln1192_1497_fu_100438_p2 = (!sext_ln703_2954_fu_100435_p1.read().is_01() || !sext_ln703_2953_fu_100431_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2954_fu_100435_p1.read()) + sc_bigint<29>(sext_ln703_2953_fu_100431_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1498_fu_100527_p2() {
    add_ln1192_1498_fu_100527_p2 = (!sext_ln703_2956_fu_100523_p1.read().is_01() || !sext_ln703_2955_fu_100519_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2956_fu_100523_p1.read()) + sc_bigint<29>(sext_ln703_2955_fu_100519_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1499_fu_100616_p2() {
    add_ln1192_1499_fu_100616_p2 = (!sext_ln703_2958_fu_100613_p1.read().is_01() || !sext_ln703_2957_fu_100609_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2958_fu_100613_p1.read()) + sc_bigint<29>(sext_ln703_2957_fu_100609_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1500_fu_100704_p2() {
    add_ln1192_1500_fu_100704_p2 = (!sext_ln703_2960_fu_100701_p1.read().is_01() || !sext_ln703_2959_fu_100697_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2960_fu_100701_p1.read()) + sc_bigint<29>(sext_ln703_2959_fu_100697_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1501_fu_100793_p2() {
    add_ln1192_1501_fu_100793_p2 = (!sext_ln703_2962_fu_100789_p1.read().is_01() || !sext_ln703_2961_fu_100785_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2962_fu_100789_p1.read()) + sc_bigint<29>(sext_ln703_2961_fu_100785_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1502_fu_100883_p2() {
    add_ln1192_1502_fu_100883_p2 = (!sext_ln703_2964_fu_100879_p1.read().is_01() || !sext_ln703_2963_fu_100875_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2964_fu_100879_p1.read()) + sc_bigint<29>(sext_ln703_2963_fu_100875_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1503_fu_100973_p2() {
    add_ln1192_1503_fu_100973_p2 = (!sext_ln703_2966_fu_100969_p1.read().is_01() || !sext_ln703_2965_fu_100965_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2966_fu_100969_p1.read()) + sc_bigint<29>(sext_ln703_2965_fu_100965_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1504_fu_101063_p2() {
    add_ln1192_1504_fu_101063_p2 = (!sext_ln703_2968_fu_101059_p1.read().is_01() || !sext_ln703_2967_fu_101055_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2968_fu_101059_p1.read()) + sc_bigint<29>(sext_ln703_2967_fu_101055_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1505_fu_101153_p2() {
    add_ln1192_1505_fu_101153_p2 = (!sext_ln703_2970_fu_101149_p1.read().is_01() || !sext_ln703_2969_fu_101145_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2970_fu_101149_p1.read()) + sc_bigint<29>(sext_ln703_2969_fu_101145_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1506_fu_101243_p2() {
    add_ln1192_1506_fu_101243_p2 = (!sext_ln703_2972_fu_101239_p1.read().is_01() || !sext_ln703_2971_fu_101235_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2972_fu_101239_p1.read()) + sc_bigint<29>(sext_ln703_2971_fu_101235_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1507_fu_101279_p2() {
    add_ln1192_1507_fu_101279_p2 = (!sext_ln703_2974_fu_101275_p1.read().is_01() || !sext_ln703_2973_fu_101271_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2974_fu_101275_p1.read()) + sc_bigint<29>(sext_ln703_2973_fu_101271_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1508_fu_101315_p2() {
    add_ln1192_1508_fu_101315_p2 = (!sext_ln703_2976_fu_101311_p1.read().is_01() || !sext_ln703_2975_fu_101307_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2976_fu_101311_p1.read()) + sc_bigint<29>(sext_ln703_2975_fu_101307_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1509_fu_102551_p2() {
    add_ln1192_1509_fu_102551_p2 = (!sext_ln703_2978_fu_102547_p1.read().is_01() || !sext_ln703_2977_fu_102544_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2978_fu_102547_p1.read()) + sc_bigint<29>(sext_ln703_2977_fu_102544_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1510_fu_102640_p2() {
    add_ln1192_1510_fu_102640_p2 = (!sext_ln703_2980_fu_102636_p1.read().is_01() || !sext_ln703_2979_fu_102632_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2980_fu_102636_p1.read()) + sc_bigint<29>(sext_ln703_2979_fu_102632_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1511_fu_102730_p2() {
    add_ln1192_1511_fu_102730_p2 = (!sext_ln703_2982_fu_102726_p1.read().is_01() || !sext_ln703_2981_fu_102722_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2982_fu_102726_p1.read()) + sc_bigint<29>(sext_ln703_2981_fu_102722_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1512_fu_102819_p2() {
    add_ln1192_1512_fu_102819_p2 = (!sext_ln703_2984_fu_102816_p1.read().is_01() || !sext_ln703_2983_fu_102812_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2984_fu_102816_p1.read()) + sc_bigint<29>(sext_ln703_2983_fu_102812_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1513_fu_102907_p2() {
    add_ln1192_1513_fu_102907_p2 = (!sext_ln703_2986_fu_102904_p1.read().is_01() || !sext_ln703_2985_fu_102900_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2986_fu_102904_p1.read()) + sc_bigint<29>(sext_ln703_2985_fu_102900_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1514_fu_102995_p2() {
    add_ln1192_1514_fu_102995_p2 = (!sext_ln703_2988_fu_102992_p1.read().is_01() || !sext_ln703_2987_fu_102988_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2988_fu_102992_p1.read()) + sc_bigint<29>(sext_ln703_2987_fu_102988_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1515_fu_103083_p2() {
    add_ln1192_1515_fu_103083_p2 = (!sext_ln703_2990_fu_103080_p1.read().is_01() || !sext_ln703_2989_fu_103076_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2990_fu_103080_p1.read()) + sc_bigint<29>(sext_ln703_2989_fu_103076_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1516_fu_103171_p2() {
    add_ln1192_1516_fu_103171_p2 = (!sext_ln703_2992_fu_103168_p1.read().is_01() || !sext_ln703_2991_fu_103164_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2992_fu_103168_p1.read()) + sc_bigint<29>(sext_ln703_2991_fu_103164_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1517_fu_103259_p2() {
    add_ln1192_1517_fu_103259_p2 = (!sext_ln703_2994_fu_103256_p1.read().is_01() || !sext_ln703_2993_fu_103252_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2994_fu_103256_p1.read()) + sc_bigint<29>(sext_ln703_2993_fu_103252_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1518_fu_103347_p2() {
    add_ln1192_1518_fu_103347_p2 = (!sext_ln703_2996_fu_103344_p1.read().is_01() || !sext_ln703_2995_fu_103340_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2996_fu_103344_p1.read()) + sc_bigint<29>(sext_ln703_2995_fu_103340_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1519_fu_103435_p2() {
    add_ln1192_1519_fu_103435_p2 = (!sext_ln703_2998_fu_103432_p1.read().is_01() || !sext_ln703_2997_fu_103428_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_2998_fu_103432_p1.read()) + sc_bigint<29>(sext_ln703_2997_fu_103428_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1520_fu_103524_p2() {
    add_ln1192_1520_fu_103524_p2 = (!sext_ln703_3000_fu_103520_p1.read().is_01() || !sext_ln703_2999_fu_103516_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_3000_fu_103520_p1.read()) + sc_bigint<29>(sext_ln703_2999_fu_103516_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1521_fu_103615_p2() {
    add_ln1192_1521_fu_103615_p2 = (!sext_ln703_3002_fu_103611_p1.read().is_01() || !sext_ln703_3001_fu_103607_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_3002_fu_103611_p1.read()) + sc_bigint<29>(sext_ln703_3001_fu_103607_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1522_fu_103706_p2() {
    add_ln1192_1522_fu_103706_p2 = (!sext_ln703_3004_fu_103702_p1.read().is_01() || !sext_ln703_3003_fu_103698_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_3004_fu_103702_p1.read()) + sc_bigint<29>(sext_ln703_3003_fu_103698_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_1523_fu_103797_p2() {
    add_ln1192_1523_fu_103797_p2 = (!sext_ln703_3006_fu_103793_p1.read().is_01() || !sext_ln703_3005_fu_103789_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(sext_ln703_3006_fu_103793_p1.read()) + sc_bigint<29>(sext_ln703_3005_fu_103789_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln1192_fu_61915_p2() {
    add_ln1192_fu_61915_p2 = (!ap_const_lv29_1FFFFF3C.is_01() || !sext_ln703_fu_61911_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(ap_const_lv29_1FFFFF3C) + sc_bigint<29>(sext_ln703_fu_61911_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln389_fu_62621_p2() {
    add_ln389_fu_62621_p2 = (!pX_2.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(pX_2.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln391_fu_62633_p2() {
    add_ln391_fu_62633_p2 = (!ap_sig_allocacmp_sX_2_load.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(ap_sig_allocacmp_sX_2_load.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1350_fu_57470_p2() {
    add_ln415_1350_fu_57470_p2 = (!sext_ln708_fu_57424_p1.read().is_01() || !zext_ln415_1350_fu_57466_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_fu_57424_p1.read()) + sc_biguint<28>(zext_ln415_1350_fu_57466_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1351_fu_57666_p2() {
    add_ln415_1351_fu_57666_p2 = (!sext_ln713_587_fu_57620_p1.read().is_01() || !zext_ln415_1351_fu_57662_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_587_fu_57620_p1.read()) + sc_biguint<27>(zext_ln415_1351_fu_57662_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1352_fu_57866_p2() {
    add_ln415_1352_fu_57866_p2 = (!sext_ln713_588_fu_57820_p1.read().is_01() || !zext_ln415_1352_fu_57862_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln713_588_fu_57820_p1.read()) + sc_biguint<26>(zext_ln415_1352_fu_57862_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1353_fu_58110_p2() {
    add_ln415_1353_fu_58110_p2 = (!sext_ln713_589_fu_58064_p1.read().is_01() || !zext_ln415_1353_fu_58106_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_589_fu_58064_p1.read()) + sc_biguint<27>(zext_ln415_1353_fu_58106_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1354_fu_58310_p2() {
    add_ln415_1354_fu_58310_p2 = (!sext_ln708_378_fu_58264_p1.read().is_01() || !zext_ln415_1354_fu_58306_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_378_fu_58264_p1.read()) + sc_biguint<28>(zext_ln415_1354_fu_58306_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1355_fu_58506_p2() {
    add_ln415_1355_fu_58506_p2 = (!sext_ln713_590_fu_58460_p1.read().is_01() || !zext_ln415_1355_fu_58502_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_590_fu_58460_p1.read()) + sc_biguint<27>(zext_ln415_1355_fu_58502_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1356_fu_58724_p2() {
    add_ln415_1356_fu_58724_p2 = (!sext_ln713_591_fu_58678_p1.read().is_01() || !zext_ln415_1356_fu_58720_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln713_591_fu_58678_p1.read()) + sc_biguint<25>(zext_ln415_1356_fu_58720_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1357_fu_58936_p2() {
    add_ln415_1357_fu_58936_p2 = (!trunc_ln708_1353_fu_58884_p4.read().is_01() || !zext_ln415_1357_fu_58932_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1353_fu_58884_p4.read()) + sc_biguint<28>(zext_ln415_1357_fu_58932_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1358_fu_59128_p2() {
    add_ln415_1358_fu_59128_p2 = (!trunc_ln708_1354_fu_59076_p4.read().is_01() || !zext_ln415_1358_fu_59124_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1354_fu_59076_p4.read()) + sc_biguint<28>(zext_ln415_1358_fu_59124_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1359_fu_59324_p2() {
    add_ln415_1359_fu_59324_p2 = (!sext_ln708_379_fu_59278_p1.read().is_01() || !zext_ln415_1359_fu_59320_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_379_fu_59278_p1.read()) + sc_biguint<28>(zext_ln415_1359_fu_59320_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1360_fu_59520_p2() {
    add_ln415_1360_fu_59520_p2 = (!sext_ln713_592_fu_59474_p1.read().is_01() || !zext_ln415_1360_fu_59516_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_592_fu_59474_p1.read()) + sc_biguint<27>(zext_ln415_1360_fu_59516_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1361_fu_59732_p2() {
    add_ln415_1361_fu_59732_p2 = (!sext_ln713_593_fu_59686_p1.read().is_01() || !zext_ln415_1361_fu_59728_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_593_fu_59686_p1.read()) + sc_biguint<27>(zext_ln415_1361_fu_59728_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1362_fu_59928_p2() {
    add_ln415_1362_fu_59928_p2 = (!trunc_ln708_1358_fu_59876_p4.read().is_01() || !zext_ln415_1362_fu_59924_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1358_fu_59876_p4.read()) + sc_biguint<28>(zext_ln415_1362_fu_59924_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1363_fu_60120_p2() {
    add_ln415_1363_fu_60120_p2 = (!trunc_ln708_1359_fu_60068_p4.read().is_01() || !zext_ln415_1363_fu_60116_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1359_fu_60068_p4.read()) + sc_biguint<28>(zext_ln415_1363_fu_60116_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1364_fu_60312_p2() {
    add_ln415_1364_fu_60312_p2 = (!trunc_ln708_1360_fu_60260_p4.read().is_01() || !zext_ln415_1364_fu_60308_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1360_fu_60260_p4.read()) + sc_biguint<28>(zext_ln415_1364_fu_60308_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1365_fu_60575_p2() {
    add_ln415_1365_fu_60575_p2 = (!sext_ln713_594_fu_60523_p1.read().is_01() || !zext_ln415_1365_fu_60571_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln713_594_fu_60523_p1.read()) + sc_biguint<26>(zext_ln415_1365_fu_60571_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1366_fu_60775_p2() {
    add_ln415_1366_fu_60775_p2 = (!sext_ln713_595_fu_60729_p1.read().is_01() || !zext_ln415_1366_fu_60771_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln713_595_fu_60729_p1.read()) + sc_biguint<24>(zext_ln415_1366_fu_60771_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1367_fu_60873_p2() {
    add_ln415_1367_fu_60873_p2 = (!sext_ln708_380_fu_60827_p1.read().is_01() || !zext_ln415_1367_fu_60869_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_380_fu_60827_p1.read()) + sc_biguint<28>(zext_ln415_1367_fu_60869_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1368_fu_61069_p2() {
    add_ln415_1368_fu_61069_p2 = (!sext_ln713_596_fu_61023_p1.read().is_01() || !zext_ln415_1368_fu_61065_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln713_596_fu_61023_p1.read()) + sc_biguint<26>(zext_ln415_1368_fu_61065_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1369_fu_61285_p2() {
    add_ln415_1369_fu_61285_p2 = (!trunc_ln708_1365_fu_61233_p4.read().is_01() || !zext_ln415_1369_fu_61281_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1365_fu_61233_p4.read()) + sc_biguint<28>(zext_ln415_1369_fu_61281_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1370_fu_61481_p2() {
    add_ln415_1370_fu_61481_p2 = (!sext_ln713_597_fu_61435_p1.read().is_01() || !zext_ln415_1370_fu_61477_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln713_597_fu_61435_p1.read()) + sc_biguint<25>(zext_ln415_1370_fu_61477_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1371_fu_61579_p2() {
    add_ln415_1371_fu_61579_p2 = (!sext_ln708_381_fu_61533_p1.read().is_01() || !zext_ln415_1371_fu_61575_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_381_fu_61533_p1.read()) + sc_biguint<28>(zext_ln415_1371_fu_61575_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1372_fu_61775_p2() {
    add_ln415_1372_fu_61775_p2 = (!sext_ln713_598_fu_61729_p1.read().is_01() || !zext_ln415_1372_fu_61771_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln713_598_fu_61729_p1.read()) + sc_biguint<26>(zext_ln415_1372_fu_61771_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1373_fu_62987_p2() {
    add_ln415_1373_fu_62987_p2 = (!sext_ln713_599_fu_62941_p1.read().is_01() || !zext_ln415_1373_fu_62983_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_599_fu_62941_p1.read()) + sc_biguint<27>(zext_ln415_1373_fu_62983_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1374_fu_63187_p2() {
    add_ln415_1374_fu_63187_p2 = (!sext_ln718_fu_63141_p1.read().is_01() || !zext_ln415_1374_fu_63183_p1.read().is_01())? sc_lv<23>(): (sc_bigint<23>(sext_ln718_fu_63141_p1.read()) + sc_biguint<23>(zext_ln415_1374_fu_63183_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1375_fu_63387_p2() {
    add_ln415_1375_fu_63387_p2 = (!sext_ln708_382_fu_63341_p1.read().is_01() || !zext_ln415_1375_fu_63383_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_382_fu_63341_p1.read()) + sc_biguint<28>(zext_ln415_1375_fu_63383_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1376_fu_63583_p2() {
    add_ln415_1376_fu_63583_p2 = (!sext_ln713_600_fu_63537_p1.read().is_01() || !zext_ln415_1376_fu_63579_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln713_600_fu_63537_p1.read()) + sc_biguint<26>(zext_ln415_1376_fu_63579_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1377_fu_63834_p2() {
    add_ln415_1377_fu_63834_p2 = (!sext_ln713_601_fu_63788_p1.read().is_01() || !zext_ln415_1377_fu_63830_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_601_fu_63788_p1.read()) + sc_biguint<27>(zext_ln415_1377_fu_63830_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1378_fu_64034_p2() {
    add_ln415_1378_fu_64034_p2 = (!sext_ln713_602_fu_63988_p1.read().is_01() || !zext_ln415_1378_fu_64030_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_602_fu_63988_p1.read()) + sc_biguint<27>(zext_ln415_1378_fu_64030_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1379_fu_64234_p2() {
    add_ln415_1379_fu_64234_p2 = (!sext_ln708_383_fu_64188_p1.read().is_01() || !zext_ln415_1379_fu_64230_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_383_fu_64188_p1.read()) + sc_biguint<28>(zext_ln415_1379_fu_64230_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1380_fu_64426_p2() {
    add_ln415_1380_fu_64426_p2 = (!trunc_ln708_1376_fu_64374_p4.read().is_01() || !zext_ln415_1380_fu_64422_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1376_fu_64374_p4.read()) + sc_biguint<28>(zext_ln415_1380_fu_64422_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1381_fu_64634_p2() {
    add_ln415_1381_fu_64634_p2 = (!sext_ln713_603_fu_64588_p1.read().is_01() || !zext_ln415_1381_fu_64630_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_603_fu_64588_p1.read()) + sc_biguint<27>(zext_ln415_1381_fu_64630_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1382_fu_64834_p2() {
    add_ln415_1382_fu_64834_p2 = (!sext_ln713_604_fu_64788_p1.read().is_01() || !zext_ln415_1382_fu_64830_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_604_fu_64788_p1.read()) + sc_biguint<27>(zext_ln415_1382_fu_64830_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1383_fu_65034_p2() {
    add_ln415_1383_fu_65034_p2 = (!sext_ln708_384_fu_64988_p1.read().is_01() || !zext_ln415_1383_fu_65030_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_384_fu_64988_p1.read()) + sc_biguint<28>(zext_ln415_1383_fu_65030_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1384_fu_65230_p2() {
    add_ln415_1384_fu_65230_p2 = (!sext_ln713_605_fu_65184_p1.read().is_01() || !zext_ln415_1384_fu_65226_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_605_fu_65184_p1.read()) + sc_biguint<27>(zext_ln415_1384_fu_65226_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1385_fu_65473_p2() {
    add_ln415_1385_fu_65473_p2 = (!sext_ln713_606_fu_65427_p1.read().is_01() || !zext_ln415_1385_fu_65469_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln713_606_fu_65427_p1.read()) + sc_biguint<25>(zext_ln415_1385_fu_65469_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1386_fu_65571_p2() {
    add_ln415_1386_fu_65571_p2 = (!sext_ln713_607_fu_65525_p1.read().is_01() || !zext_ln415_1386_fu_65567_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_607_fu_65525_p1.read()) + sc_biguint<27>(zext_ln415_1386_fu_65567_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1387_fu_65771_p2() {
    add_ln415_1387_fu_65771_p2 = (!sext_ln713_608_fu_65725_p1.read().is_01() || !zext_ln415_1387_fu_65767_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_608_fu_65725_p1.read()) + sc_biguint<27>(zext_ln415_1387_fu_65767_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1388_fu_65971_p2() {
    add_ln415_1388_fu_65971_p2 = (!sext_ln713_609_fu_65925_p1.read().is_01() || !zext_ln415_1388_fu_65967_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_609_fu_65925_p1.read()) + sc_biguint<27>(zext_ln415_1388_fu_65967_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1389_fu_66183_p2() {
    add_ln415_1389_fu_66183_p2 = (!sext_ln713_610_fu_66137_p1.read().is_01() || !zext_ln415_1389_fu_66179_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln713_610_fu_66137_p1.read()) + sc_biguint<26>(zext_ln415_1389_fu_66179_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1390_fu_66383_p2() {
    add_ln415_1390_fu_66383_p2 = (!sext_ln713_611_fu_66337_p1.read().is_01() || !zext_ln415_1390_fu_66379_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln713_611_fu_66337_p1.read()) + sc_biguint<26>(zext_ln415_1390_fu_66379_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1391_fu_66583_p2() {
    add_ln415_1391_fu_66583_p2 = (!sext_ln713_612_fu_66537_p1.read().is_01() || !zext_ln415_1391_fu_66579_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln713_612_fu_66537_p1.read()) + sc_biguint<26>(zext_ln415_1391_fu_66579_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1392_fu_66783_p2() {
    add_ln415_1392_fu_66783_p2 = (!sext_ln708_385_fu_66737_p1.read().is_01() || !zext_ln415_1392_fu_66779_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_385_fu_66737_p1.read()) + sc_biguint<28>(zext_ln415_1392_fu_66779_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1393_fu_66994_p2() {
    add_ln415_1393_fu_66994_p2 = (!sext_ln708_386_fu_66948_p1.read().is_01() || !zext_ln415_1393_fu_66990_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_386_fu_66948_p1.read()) + sc_biguint<28>(zext_ln415_1393_fu_66990_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1394_fu_67208_p2() {
    add_ln415_1394_fu_67208_p2 = (!sext_ln713_613_fu_67162_p1.read().is_01() || !zext_ln415_1394_fu_67204_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln713_613_fu_67162_p1.read()) + sc_biguint<24>(zext_ln415_1394_fu_67204_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1395_fu_67306_p2() {
    add_ln415_1395_fu_67306_p2 = (!sext_ln713_614_fu_67260_p1.read().is_01() || !zext_ln415_1395_fu_67302_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln713_614_fu_67260_p1.read()) + sc_biguint<24>(zext_ln415_1395_fu_67302_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1396_fu_67404_p2() {
    add_ln415_1396_fu_67404_p2 = (!sext_ln713_615_fu_67358_p1.read().is_01() || !zext_ln415_1396_fu_67400_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln713_615_fu_67358_p1.read()) + sc_biguint<25>(zext_ln415_1396_fu_67400_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1397_fu_69949_p2() {
    add_ln415_1397_fu_69949_p2 = (!sext_ln708_387_fu_69903_p1.read().is_01() || !zext_ln415_1397_fu_69945_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_387_fu_69903_p1.read()) + sc_biguint<28>(zext_ln415_1397_fu_69945_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1398_fu_70145_p2() {
    add_ln415_1398_fu_70145_p2 = (!sext_ln708_388_fu_70099_p1.read().is_01() || !zext_ln415_1398_fu_70141_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_388_fu_70099_p1.read()) + sc_biguint<28>(zext_ln415_1398_fu_70141_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1399_fu_70337_p2() {
    add_ln415_1399_fu_70337_p2 = (!trunc_ln708_1395_fu_70285_p4.read().is_01() || !zext_ln415_1399_fu_70333_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1395_fu_70285_p4.read()) + sc_biguint<28>(zext_ln415_1399_fu_70333_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1400_fu_70561_p2() {
    add_ln415_1400_fu_70561_p2 = (!sext_ln713_616_fu_70515_p1.read().is_01() || !zext_ln415_1400_fu_70557_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln713_616_fu_70515_p1.read()) + sc_biguint<24>(zext_ln415_1400_fu_70557_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1401_fu_70774_p2() {
    add_ln415_1401_fu_70774_p2 = (!sext_ln708_389_fu_70728_p1.read().is_01() || !zext_ln415_1401_fu_70770_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_389_fu_70728_p1.read()) + sc_biguint<28>(zext_ln415_1401_fu_70770_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1402_fu_70970_p2() {
    add_ln415_1402_fu_70970_p2 = (!sext_ln708_390_fu_70924_p1.read().is_01() || !zext_ln415_1402_fu_70966_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_390_fu_70924_p1.read()) + sc_biguint<28>(zext_ln415_1402_fu_70966_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1403_fu_71166_p2() {
    add_ln415_1403_fu_71166_p2 = (!sext_ln713_617_fu_71120_p1.read().is_01() || !zext_ln415_1403_fu_71162_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln713_617_fu_71120_p1.read()) + sc_biguint<26>(zext_ln415_1403_fu_71162_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1404_fu_71366_p2() {
    add_ln415_1404_fu_71366_p2 = (!sext_ln713_618_fu_71320_p1.read().is_01() || !zext_ln415_1404_fu_71362_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_618_fu_71320_p1.read()) + sc_biguint<27>(zext_ln415_1404_fu_71362_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1405_fu_71582_p2() {
    add_ln415_1405_fu_71582_p2 = (!sext_ln713_619_fu_71536_p1.read().is_01() || !zext_ln415_1405_fu_71578_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_619_fu_71536_p1.read()) + sc_biguint<27>(zext_ln415_1405_fu_71578_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1406_fu_71782_p2() {
    add_ln415_1406_fu_71782_p2 = (!sext_ln708_391_fu_71736_p1.read().is_01() || !zext_ln415_1406_fu_71778_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_391_fu_71736_p1.read()) + sc_biguint<28>(zext_ln415_1406_fu_71778_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1407_fu_71974_p2() {
    add_ln415_1407_fu_71974_p2 = (!trunc_ln708_1403_fu_71922_p4.read().is_01() || !zext_ln415_1407_fu_71970_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1403_fu_71922_p4.read()) + sc_biguint<28>(zext_ln415_1407_fu_71970_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1408_fu_72170_p2() {
    add_ln415_1408_fu_72170_p2 = (!sext_ln708_392_fu_72124_p1.read().is_01() || !zext_ln415_1408_fu_72166_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_392_fu_72124_p1.read()) + sc_biguint<28>(zext_ln415_1408_fu_72166_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1409_fu_72382_p2() {
    add_ln415_1409_fu_72382_p2 = (!sext_ln708_393_fu_72336_p1.read().is_01() || !zext_ln415_1409_fu_72378_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_393_fu_72336_p1.read()) + sc_biguint<28>(zext_ln415_1409_fu_72378_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1410_fu_72578_p2() {
    add_ln415_1410_fu_72578_p2 = (!sext_ln713_620_fu_72532_p1.read().is_01() || !zext_ln415_1410_fu_72574_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_620_fu_72532_p1.read()) + sc_biguint<27>(zext_ln415_1410_fu_72574_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1411_fu_72774_p2() {
    add_ln415_1411_fu_72774_p2 = (!trunc_ln708_1407_fu_72722_p4.read().is_01() || !zext_ln415_1411_fu_72770_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1407_fu_72722_p4.read()) + sc_biguint<28>(zext_ln415_1411_fu_72770_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1412_fu_72970_p2() {
    add_ln415_1412_fu_72970_p2 = (!sext_ln713_621_fu_72924_p1.read().is_01() || !zext_ln415_1412_fu_72966_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_621_fu_72924_p1.read()) + sc_biguint<27>(zext_ln415_1412_fu_72966_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1413_fu_73186_p2() {
    add_ln415_1413_fu_73186_p2 = (!sext_ln713_622_fu_73140_p1.read().is_01() || !zext_ln415_1413_fu_73182_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln713_622_fu_73140_p1.read()) + sc_biguint<25>(zext_ln415_1413_fu_73182_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1414_fu_73284_p2() {
    add_ln415_1414_fu_73284_p2 = (!sext_ln713_623_fu_73238_p1.read().is_01() || !zext_ln415_1414_fu_73280_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln713_623_fu_73238_p1.read()) + sc_biguint<26>(zext_ln415_1414_fu_73280_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1415_fu_73484_p2() {
    add_ln415_1415_fu_73484_p2 = (!sext_ln708_394_fu_73438_p1.read().is_01() || !zext_ln415_1415_fu_73480_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_394_fu_73438_p1.read()) + sc_biguint<28>(zext_ln415_1415_fu_73480_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1416_fu_73680_p2() {
    add_ln415_1416_fu_73680_p2 = (!sext_ln713_624_fu_73634_p1.read().is_01() || !zext_ln415_1416_fu_73676_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln713_624_fu_73634_p1.read()) + sc_biguint<25>(zext_ln415_1416_fu_73676_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1417_fu_76080_p2() {
    add_ln415_1417_fu_76080_p2 = (!sext_ln708_395_fu_76034_p1.read().is_01() || !zext_ln415_1417_fu_76076_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_395_fu_76034_p1.read()) + sc_biguint<28>(zext_ln415_1417_fu_76076_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1418_fu_76310_p2() {
    add_ln415_1418_fu_76310_p2 = (!sext_ln713_625_fu_76264_p1.read().is_01() || !zext_ln415_1418_fu_76306_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_625_fu_76264_p1.read()) + sc_biguint<27>(zext_ln415_1418_fu_76306_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1419_fu_76506_p2() {
    add_ln415_1419_fu_76506_p2 = (!trunc_ln708_1415_fu_76454_p4.read().is_01() || !zext_ln415_1419_fu_76502_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1415_fu_76454_p4.read()) + sc_biguint<28>(zext_ln415_1419_fu_76502_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1420_fu_76751_p2() {
    add_ln415_1420_fu_76751_p2 = (!sext_ln713_626_fu_76699_p1.read().is_01() || !zext_ln415_1420_fu_76747_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln713_626_fu_76699_p1.read()) + sc_biguint<24>(zext_ln415_1420_fu_76747_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1421_fu_76964_p2() {
    add_ln415_1421_fu_76964_p2 = (!sext_ln708_396_fu_76918_p1.read().is_01() || !zext_ln415_1421_fu_76960_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_396_fu_76918_p1.read()) + sc_biguint<28>(zext_ln415_1421_fu_76960_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1422_fu_77160_p2() {
    add_ln415_1422_fu_77160_p2 = (!sext_ln713_627_fu_77114_p1.read().is_01() || !zext_ln415_1422_fu_77156_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln713_627_fu_77114_p1.read()) + sc_biguint<26>(zext_ln415_1422_fu_77156_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1423_fu_77360_p2() {
    add_ln415_1423_fu_77360_p2 = (!sext_ln713_628_fu_77314_p1.read().is_01() || !zext_ln415_1423_fu_77356_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_628_fu_77314_p1.read()) + sc_biguint<27>(zext_ln415_1423_fu_77356_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1424_fu_77560_p2() {
    add_ln415_1424_fu_77560_p2 = (!sext_ln713_629_fu_77514_p1.read().is_01() || !zext_ln415_1424_fu_77556_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_629_fu_77514_p1.read()) + sc_biguint<27>(zext_ln415_1424_fu_77556_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1425_fu_77769_p2() {
    add_ln415_1425_fu_77769_p2 = (!sext_ln713_630_fu_77723_p1.read().is_01() || !zext_ln415_1425_fu_77765_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln713_630_fu_77723_p1.read()) + sc_biguint<25>(zext_ln415_1425_fu_77765_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1426_fu_77997_p2() {
    add_ln415_1426_fu_77997_p2 = (!sext_ln713_631_fu_77951_p1.read().is_01() || !zext_ln415_1426_fu_77993_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln713_631_fu_77951_p1.read()) + sc_biguint<24>(zext_ln415_1426_fu_77993_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1427_fu_78197_p2() {
    add_ln415_1427_fu_78197_p2 = (!sext_ln713_632_fu_78151_p1.read().is_01() || !zext_ln415_1427_fu_78193_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_632_fu_78151_p1.read()) + sc_biguint<27>(zext_ln415_1427_fu_78193_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1428_fu_78397_p2() {
    add_ln415_1428_fu_78397_p2 = (!sext_ln713_633_fu_78351_p1.read().is_01() || !zext_ln415_1428_fu_78393_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln713_633_fu_78351_p1.read()) + sc_biguint<25>(zext_ln415_1428_fu_78393_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1429_fu_78610_p2() {
    add_ln415_1429_fu_78610_p2 = (!sext_ln708_397_fu_78564_p1.read().is_01() || !zext_ln415_1429_fu_78606_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_397_fu_78564_p1.read()) + sc_biguint<28>(zext_ln415_1429_fu_78606_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1430_fu_78806_p2() {
    add_ln415_1430_fu_78806_p2 = (!sext_ln713_634_fu_78760_p1.read().is_01() || !zext_ln415_1430_fu_78802_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_634_fu_78760_p1.read()) + sc_biguint<27>(zext_ln415_1430_fu_78802_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1431_fu_79002_p2() {
    add_ln415_1431_fu_79002_p2 = (!trunc_ln708_1427_fu_78950_p4.read().is_01() || !zext_ln415_1431_fu_78998_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1427_fu_78950_p4.read()) + sc_biguint<28>(zext_ln415_1431_fu_78998_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1432_fu_79198_p2() {
    add_ln415_1432_fu_79198_p2 = (!sext_ln708_398_fu_79152_p1.read().is_01() || !zext_ln415_1432_fu_79194_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_398_fu_79152_p1.read()) + sc_biguint<28>(zext_ln415_1432_fu_79194_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1433_fu_79402_p2() {
    add_ln415_1433_fu_79402_p2 = (!sext_ln713_635_fu_79356_p1.read().is_01() || !zext_ln415_1433_fu_79398_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_635_fu_79356_p1.read()) + sc_biguint<27>(zext_ln415_1433_fu_79398_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1434_fu_79598_p2() {
    add_ln415_1434_fu_79598_p2 = (!trunc_ln708_1430_fu_79546_p4.read().is_01() || !zext_ln415_1434_fu_79594_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1430_fu_79546_p4.read()) + sc_biguint<28>(zext_ln415_1434_fu_79594_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1435_fu_79836_p2() {
    add_ln415_1435_fu_79836_p2 = (!sext_ln713_636_fu_79784_p1.read().is_01() || !zext_ln415_1435_fu_79832_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln713_636_fu_79784_p1.read()) + sc_biguint<22>(zext_ln415_1435_fu_79832_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1436_fu_79946_p2() {
    add_ln415_1436_fu_79946_p2 = (!sext_ln718_26_fu_79900_p1.read().is_01() || !zext_ln415_1436_fu_79942_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln718_26_fu_79900_p1.read()) + sc_biguint<22>(zext_ln415_1436_fu_79942_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1437_fu_80060_p2() {
    add_ln415_1437_fu_80060_p2 = (!sext_ln713_637_fu_80014_p1.read().is_01() || !zext_ln415_1437_fu_80056_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_637_fu_80014_p1.read()) + sc_biguint<27>(zext_ln415_1437_fu_80056_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1438_fu_80260_p2() {
    add_ln415_1438_fu_80260_p2 = (!sext_ln708_399_fu_80214_p1.read().is_01() || !zext_ln415_1438_fu_80256_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_399_fu_80214_p1.read()) + sc_biguint<28>(zext_ln415_1438_fu_80256_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1439_fu_80452_p2() {
    add_ln415_1439_fu_80452_p2 = (!trunc_ln708_1435_fu_80400_p4.read().is_01() || !zext_ln415_1439_fu_80448_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1435_fu_80400_p4.read()) + sc_biguint<28>(zext_ln415_1439_fu_80448_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1440_fu_80648_p2() {
    add_ln415_1440_fu_80648_p2 = (!sext_ln708_400_fu_80602_p1.read().is_01() || !zext_ln415_1440_fu_80644_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_400_fu_80602_p1.read()) + sc_biguint<28>(zext_ln415_1440_fu_80644_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1441_fu_83106_p2() {
    add_ln415_1441_fu_83106_p2 = (!sext_ln713_638_fu_83060_p1.read().is_01() || !zext_ln415_1441_fu_83102_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln713_638_fu_83060_p1.read()) + sc_biguint<25>(zext_ln415_1441_fu_83102_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1442_fu_83306_p2() {
    add_ln415_1442_fu_83306_p2 = (!sext_ln713_639_fu_83260_p1.read().is_01() || !zext_ln415_1442_fu_83302_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_639_fu_83260_p1.read()) + sc_biguint<27>(zext_ln415_1442_fu_83302_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1443_fu_83506_p2() {
    add_ln415_1443_fu_83506_p2 = (!sext_ln713_640_fu_83460_p1.read().is_01() || !zext_ln415_1443_fu_83502_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln713_640_fu_83460_p1.read()) + sc_biguint<26>(zext_ln415_1443_fu_83502_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1444_fu_83702_p2() {
    add_ln415_1444_fu_83702_p2 = (!trunc_ln708_1440_fu_83650_p4.read().is_01() || !zext_ln415_1444_fu_83698_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1440_fu_83650_p4.read()) + sc_biguint<28>(zext_ln415_1444_fu_83698_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1445_fu_83910_p2() {
    add_ln415_1445_fu_83910_p2 = (!sext_ln708_401_fu_83864_p1.read().is_01() || !zext_ln415_1445_fu_83906_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_401_fu_83864_p1.read()) + sc_biguint<28>(zext_ln415_1445_fu_83906_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1446_fu_84143_p2() {
    add_ln415_1446_fu_84143_p2 = (!sext_ln713_641_fu_84091_p1.read().is_01() || !zext_ln415_1446_fu_84139_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln713_641_fu_84091_p1.read()) + sc_biguint<24>(zext_ln415_1446_fu_84139_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1447_fu_84339_p2() {
    add_ln415_1447_fu_84339_p2 = (!trunc_ln708_1443_fu_84287_p4.read().is_01() || !zext_ln415_1447_fu_84335_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1443_fu_84287_p4.read()) + sc_biguint<28>(zext_ln415_1447_fu_84335_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1448_fu_84535_p2() {
    add_ln415_1448_fu_84535_p2 = (!sext_ln708_402_fu_84489_p1.read().is_01() || !zext_ln415_1448_fu_84531_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_402_fu_84489_p1.read()) + sc_biguint<28>(zext_ln415_1448_fu_84531_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1449_fu_84737_p2() {
    add_ln415_1449_fu_84737_p2 = (!sext_ln708_403_fu_84691_p1.read().is_01() || !zext_ln415_1449_fu_84733_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_403_fu_84691_p1.read()) + sc_biguint<28>(zext_ln415_1449_fu_84733_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1450_fu_84950_p2() {
    add_ln415_1450_fu_84950_p2 = (!sext_ln713_642_fu_84904_p1.read().is_01() || !zext_ln415_1450_fu_84946_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln713_642_fu_84904_p1.read()) + sc_biguint<26>(zext_ln415_1450_fu_84946_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1451_fu_85150_p2() {
    add_ln415_1451_fu_85150_p2 = (!sext_ln708_404_fu_85104_p1.read().is_01() || !zext_ln415_1451_fu_85146_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_404_fu_85104_p1.read()) + sc_biguint<28>(zext_ln415_1451_fu_85146_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1452_fu_85346_p2() {
    add_ln415_1452_fu_85346_p2 = (!sext_ln708_405_fu_85300_p1.read().is_01() || !zext_ln415_1452_fu_85342_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_405_fu_85300_p1.read()) + sc_biguint<28>(zext_ln415_1452_fu_85342_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1453_fu_85555_p2() {
    add_ln415_1453_fu_85555_p2 = (!sext_ln713_643_fu_85509_p1.read().is_01() || !zext_ln415_1453_fu_85551_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_643_fu_85509_p1.read()) + sc_biguint<27>(zext_ln415_1453_fu_85551_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1454_fu_85755_p2() {
    add_ln415_1454_fu_85755_p2 = (!sext_ln713_644_fu_85709_p1.read().is_01() || !zext_ln415_1454_fu_85751_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_644_fu_85709_p1.read()) + sc_biguint<27>(zext_ln415_1454_fu_85751_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1455_fu_85955_p2() {
    add_ln415_1455_fu_85955_p2 = (!sext_ln708_406_fu_85909_p1.read().is_01() || !zext_ln415_1455_fu_85951_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_406_fu_85909_p1.read()) + sc_biguint<28>(zext_ln415_1455_fu_85951_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1456_fu_86151_p2() {
    add_ln415_1456_fu_86151_p2 = (!sext_ln713_645_fu_86105_p1.read().is_01() || !zext_ln415_1456_fu_86147_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln713_645_fu_86105_p1.read()) + sc_biguint<26>(zext_ln415_1456_fu_86147_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1457_fu_86360_p2() {
    add_ln415_1457_fu_86360_p2 = (!sext_ln708_407_fu_86314_p1.read().is_01() || !zext_ln415_1457_fu_86356_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_407_fu_86314_p1.read()) + sc_biguint<28>(zext_ln415_1457_fu_86356_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1458_fu_88902_p2() {
    add_ln415_1458_fu_88902_p2 = (!sext_ln713_646_fu_88856_p1.read().is_01() || !zext_ln415_1458_fu_88898_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_646_fu_88856_p1.read()) + sc_biguint<27>(zext_ln415_1458_fu_88898_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1459_fu_86552_p2() {
    add_ln415_1459_fu_86552_p2 = (!trunc_ln708_1455_fu_86500_p4.read().is_01() || !zext_ln415_1459_fu_86548_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1455_fu_86500_p4.read()) + sc_biguint<28>(zext_ln415_1459_fu_86548_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1460_fu_86744_p2() {
    add_ln415_1460_fu_86744_p2 = (!trunc_ln708_1456_fu_86692_p4.read().is_01() || !zext_ln415_1460_fu_86740_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1456_fu_86692_p4.read()) + sc_biguint<28>(zext_ln415_1460_fu_86740_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1461_fu_89152_p2() {
    add_ln415_1461_fu_89152_p2 = (!sext_ln713_647_fu_89100_p1.read().is_01() || !zext_ln415_1461_fu_89148_p1.read().is_01())? sc_lv<23>(): (sc_bigint<23>(sext_ln713_647_fu_89100_p1.read()) + sc_biguint<23>(zext_ln415_1461_fu_89148_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1462_fu_89352_p2() {
    add_ln415_1462_fu_89352_p2 = (!sext_ln713_648_fu_89306_p1.read().is_01() || !zext_ln415_1462_fu_89348_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln713_648_fu_89306_p1.read()) + sc_biguint<26>(zext_ln415_1462_fu_89348_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1463_fu_89552_p2() {
    add_ln415_1463_fu_89552_p2 = (!sext_ln713_649_fu_89506_p1.read().is_01() || !zext_ln415_1463_fu_89548_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_649_fu_89506_p1.read()) + sc_biguint<27>(zext_ln415_1463_fu_89548_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1464_fu_89752_p2() {
    add_ln415_1464_fu_89752_p2 = (!sext_ln708_408_fu_89706_p1.read().is_01() || !zext_ln415_1464_fu_89748_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_408_fu_89706_p1.read()) + sc_biguint<28>(zext_ln415_1464_fu_89748_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1465_fu_89958_p2() {
    add_ln415_1465_fu_89958_p2 = (!sext_ln708_409_fu_89912_p1.read().is_01() || !zext_ln415_1465_fu_89954_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_409_fu_89912_p1.read()) + sc_biguint<28>(zext_ln415_1465_fu_89954_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1466_fu_90150_p2() {
    add_ln415_1466_fu_90150_p2 = (!trunc_ln708_1462_fu_90098_p4.read().is_01() || !zext_ln415_1466_fu_90146_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1462_fu_90098_p4.read()) + sc_biguint<28>(zext_ln415_1466_fu_90146_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1467_fu_90346_p2() {
    add_ln415_1467_fu_90346_p2 = (!sext_ln708_410_fu_90300_p1.read().is_01() || !zext_ln415_1467_fu_90342_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_410_fu_90300_p1.read()) + sc_biguint<28>(zext_ln415_1467_fu_90342_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1468_fu_90538_p2() {
    add_ln415_1468_fu_90538_p2 = (!trunc_ln708_1464_fu_90486_p4.read().is_01() || !zext_ln415_1468_fu_90534_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1464_fu_90486_p4.read()) + sc_biguint<28>(zext_ln415_1468_fu_90534_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1469_fu_90744_p2() {
    add_ln415_1469_fu_90744_p2 = (!sext_ln713_650_fu_90698_p1.read().is_01() || !zext_ln415_1469_fu_90740_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_650_fu_90698_p1.read()) + sc_biguint<27>(zext_ln415_1469_fu_90740_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1470_fu_90944_p2() {
    add_ln415_1470_fu_90944_p2 = (!sext_ln708_411_fu_90898_p1.read().is_01() || !zext_ln415_1470_fu_90940_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_411_fu_90898_p1.read()) + sc_biguint<28>(zext_ln415_1470_fu_90940_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1471_fu_91140_p2() {
    add_ln415_1471_fu_91140_p2 = (!sext_ln708_412_fu_91094_p1.read().is_01() || !zext_ln415_1471_fu_91136_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_412_fu_91094_p1.read()) + sc_biguint<28>(zext_ln415_1471_fu_91136_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1472_fu_91336_p2() {
    add_ln415_1472_fu_91336_p2 = (!sext_ln708_413_fu_91290_p1.read().is_01() || !zext_ln415_1472_fu_91332_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_413_fu_91290_p1.read()) + sc_biguint<28>(zext_ln415_1472_fu_91332_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1473_fu_91545_p2() {
    add_ln415_1473_fu_91545_p2 = (!sext_ln708_414_fu_91499_p1.read().is_01() || !zext_ln415_1473_fu_91541_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_414_fu_91499_p1.read()) + sc_biguint<28>(zext_ln415_1473_fu_91541_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1474_fu_91737_p2() {
    add_ln415_1474_fu_91737_p2 = (!trunc_ln708_1470_fu_91685_p4.read().is_01() || !zext_ln415_1474_fu_91733_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1470_fu_91685_p4.read()) + sc_biguint<28>(zext_ln415_1474_fu_91733_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1475_fu_91933_p2() {
    add_ln415_1475_fu_91933_p2 = (!sext_ln708_415_fu_91887_p1.read().is_01() || !zext_ln415_1475_fu_91929_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_415_fu_91887_p1.read()) + sc_biguint<28>(zext_ln415_1475_fu_91929_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1476_fu_92129_p2() {
    add_ln415_1476_fu_92129_p2 = (!sext_ln713_651_fu_92083_p1.read().is_01() || !zext_ln415_1476_fu_92125_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln713_651_fu_92083_p1.read()) + sc_biguint<26>(zext_ln415_1476_fu_92125_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1477_fu_92342_p2() {
    add_ln415_1477_fu_92342_p2 = (!sext_ln708_416_fu_92296_p1.read().is_01() || !zext_ln415_1477_fu_92338_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_416_fu_92296_p1.read()) + sc_biguint<28>(zext_ln415_1477_fu_92338_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1478_fu_92538_p2() {
    add_ln415_1478_fu_92538_p2 = (!sext_ln713_652_fu_92492_p1.read().is_01() || !zext_ln415_1478_fu_92534_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln713_652_fu_92492_p1.read()) + sc_biguint<26>(zext_ln415_1478_fu_92534_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1479_fu_92734_p2() {
    add_ln415_1479_fu_92734_p2 = (!trunc_ln708_1475_fu_92682_p4.read().is_01() || !zext_ln415_1479_fu_92730_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1475_fu_92682_p4.read()) + sc_biguint<28>(zext_ln415_1479_fu_92730_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1480_fu_92930_p2() {
    add_ln415_1480_fu_92930_p2 = (!sext_ln708_417_fu_92884_p1.read().is_01() || !zext_ln415_1480_fu_92926_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_417_fu_92884_p1.read()) + sc_biguint<28>(zext_ln415_1480_fu_92926_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1481_fu_93138_p2() {
    add_ln415_1481_fu_93138_p2 = (!sext_ln713_653_fu_93092_p1.read().is_01() || !zext_ln415_1481_fu_93134_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_653_fu_93092_p1.read()) + sc_biguint<27>(zext_ln415_1481_fu_93134_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1482_fu_93366_p2() {
    add_ln415_1482_fu_93366_p2 = (!sext_ln713_654_fu_93320_p1.read().is_01() || !zext_ln415_1482_fu_93362_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln713_654_fu_93320_p1.read()) + sc_biguint<24>(zext_ln415_1482_fu_93362_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1483_fu_93460_p2() {
    add_ln415_1483_fu_93460_p2 = (!trunc_ln708_1479_fu_93408_p4.read().is_01() || !zext_ln415_1483_fu_93456_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1479_fu_93408_p4.read()) + sc_biguint<28>(zext_ln415_1483_fu_93456_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1484_fu_93656_p2() {
    add_ln415_1484_fu_93656_p2 = (!sext_ln708_418_fu_93610_p1.read().is_01() || !zext_ln415_1484_fu_93652_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_418_fu_93610_p1.read()) + sc_biguint<28>(zext_ln415_1484_fu_93652_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1485_fu_95932_p2() {
    add_ln415_1485_fu_95932_p2 = (!sext_ln713_655_fu_95886_p1.read().is_01() || !zext_ln415_1485_fu_95928_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln713_655_fu_95886_p1.read()) + sc_biguint<26>(zext_ln415_1485_fu_95928_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1486_fu_96132_p2() {
    add_ln415_1486_fu_96132_p2 = (!sext_ln708_419_fu_96086_p1.read().is_01() || !zext_ln415_1486_fu_96128_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_419_fu_96086_p1.read()) + sc_biguint<28>(zext_ln415_1486_fu_96128_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1487_fu_96351_p2() {
    add_ln415_1487_fu_96351_p2 = (!sext_ln713_656_fu_96305_p1.read().is_01() || !zext_ln415_1487_fu_96347_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(sext_ln713_656_fu_96305_p1.read()) + sc_biguint<26>(zext_ln415_1487_fu_96347_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1488_fu_96551_p2() {
    add_ln415_1488_fu_96551_p2 = (!sext_ln708_420_fu_96505_p1.read().is_01() || !zext_ln415_1488_fu_96547_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_420_fu_96505_p1.read()) + sc_biguint<28>(zext_ln415_1488_fu_96547_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1489_fu_96760_p2() {
    add_ln415_1489_fu_96760_p2 = (!sext_ln713_657_fu_96714_p1.read().is_01() || !zext_ln415_1489_fu_96756_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln713_657_fu_96714_p1.read()) + sc_biguint<25>(zext_ln415_1489_fu_96756_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1490_fu_96960_p2() {
    add_ln415_1490_fu_96960_p2 = (!sext_ln708_421_fu_96914_p1.read().is_01() || !zext_ln415_1490_fu_96956_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_421_fu_96914_p1.read()) + sc_biguint<28>(zext_ln415_1490_fu_96956_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1491_fu_97152_p2() {
    add_ln415_1491_fu_97152_p2 = (!trunc_ln708_1487_fu_97100_p4.read().is_01() || !zext_ln415_1491_fu_97148_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1487_fu_97100_p4.read()) + sc_biguint<28>(zext_ln415_1491_fu_97148_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1492_fu_97348_p2() {
    add_ln415_1492_fu_97348_p2 = (!sext_ln708_422_fu_97302_p1.read().is_01() || !zext_ln415_1492_fu_97344_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_422_fu_97302_p1.read()) + sc_biguint<28>(zext_ln415_1492_fu_97344_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1493_fu_97553_p2() {
    add_ln415_1493_fu_97553_p2 = (!sext_ln713_658_fu_97507_p1.read().is_01() || !zext_ln415_1493_fu_97549_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln713_658_fu_97507_p1.read()) + sc_biguint<25>(zext_ln415_1493_fu_97549_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1494_fu_97700_p2() {
    add_ln415_1494_fu_97700_p2 = (!sext_ln713_659_fu_97648_p1.read().is_01() || !zext_ln415_1494_fu_97696_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln713_659_fu_97648_p1.read()) + sc_biguint<24>(zext_ln415_1494_fu_97696_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1495_fu_97798_p2() {
    add_ln415_1495_fu_97798_p2 = (!sext_ln713_660_fu_97752_p1.read().is_01() || !zext_ln415_1495_fu_97794_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln713_660_fu_97752_p1.read()) + sc_biguint<25>(zext_ln415_1495_fu_97794_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1496_fu_97896_p2() {
    add_ln415_1496_fu_97896_p2 = (!sext_ln708_423_fu_97850_p1.read().is_01() || !zext_ln415_1496_fu_97892_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_423_fu_97850_p1.read()) + sc_biguint<28>(zext_ln415_1496_fu_97892_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1497_fu_98097_p2() {
    add_ln415_1497_fu_98097_p2 = (!trunc_ln708_1493_fu_98045_p4.read().is_01() || !zext_ln415_1497_fu_98093_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1493_fu_98045_p4.read()) + sc_biguint<28>(zext_ln415_1497_fu_98093_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1498_fu_98293_p2() {
    add_ln415_1498_fu_98293_p2 = (!sext_ln708_424_fu_98247_p1.read().is_01() || !zext_ln415_1498_fu_98289_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_424_fu_98247_p1.read()) + sc_biguint<28>(zext_ln415_1498_fu_98289_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1499_fu_98485_p2() {
    add_ln415_1499_fu_98485_p2 = (!trunc_ln708_1495_fu_98433_p4.read().is_01() || !zext_ln415_1499_fu_98481_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1495_fu_98433_p4.read()) + sc_biguint<28>(zext_ln415_1499_fu_98481_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1500_fu_98691_p2() {
    add_ln415_1500_fu_98691_p2 = (!sext_ln713_661_fu_98645_p1.read().is_01() || !zext_ln415_1500_fu_98687_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_661_fu_98645_p1.read()) + sc_biguint<27>(zext_ln415_1500_fu_98687_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1501_fu_98891_p2() {
    add_ln415_1501_fu_98891_p2 = (!sext_ln713_662_fu_98845_p1.read().is_01() || !zext_ln415_1501_fu_98887_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_662_fu_98845_p1.read()) + sc_biguint<27>(zext_ln415_1501_fu_98887_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1502_fu_99091_p2() {
    add_ln415_1502_fu_99091_p2 = (!sext_ln713_663_fu_99045_p1.read().is_01() || !zext_ln415_1502_fu_99087_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_663_fu_99045_p1.read()) + sc_biguint<27>(zext_ln415_1502_fu_99087_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1503_fu_99291_p2() {
    add_ln415_1503_fu_99291_p2 = (!sext_ln708_425_fu_99245_p1.read().is_01() || !zext_ln415_1503_fu_99287_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_425_fu_99245_p1.read()) + sc_biguint<28>(zext_ln415_1503_fu_99287_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1504_fu_101690_p2() {
    add_ln415_1504_fu_101690_p2 = (!sext_ln708_426_fu_101644_p1.read().is_01() || !zext_ln415_1504_fu_101686_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_426_fu_101644_p1.read()) + sc_biguint<28>(zext_ln415_1504_fu_101686_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1505_fu_101886_p2() {
    add_ln415_1505_fu_101886_p2 = (!sext_ln708_427_fu_101840_p1.read().is_01() || !zext_ln415_1505_fu_101882_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_427_fu_101840_p1.read()) + sc_biguint<28>(zext_ln415_1505_fu_101882_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1506_fu_102082_p2() {
    add_ln415_1506_fu_102082_p2 = (!sext_ln708_428_fu_102036_p1.read().is_01() || !zext_ln415_1506_fu_102078_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(sext_ln708_428_fu_102036_p1.read()) + sc_biguint<28>(zext_ln415_1506_fu_102078_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_1507_fu_102274_p2() {
    add_ln415_1507_fu_102274_p2 = (!trunc_ln708_1503_fu_102222_p4.read().is_01() || !zext_ln415_1507_fu_102270_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(trunc_ln708_1503_fu_102222_p4.read()) + sc_biguint<28>(zext_ln415_1507_fu_102270_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln415_fu_57270_p2() {
    add_ln415_fu_57270_p2 = (!sext_ln713_fu_57224_p1.read().is_01() || !zext_ln415_fu_57266_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(sext_ln713_fu_57224_p1.read()) + sc_biguint<27>(zext_ln415_fu_57266_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_add_ln713_fu_97652_p2() {
    add_ln713_fu_97652_p2 = (!trunc_ln1118_125_fu_97616_p3.read().is_01() || !zext_ln1118_61_fu_97609_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(trunc_ln1118_125_fu_97616_p3.read()) + sc_biguint<32>(zext_ln1118_61_fu_97609_p1.read()));
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln360_fu_57184_p2() {
    and_ln360_fu_57184_p2 = (icmp_ln360_fu_57158_p2.read() & icmp_ln360_3_fu_57178_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1350_fu_57460_p2() {
    and_ln415_1350_fu_57460_p2 = (or_ln406_1350_fu_57446_p2.read() & tmp_9547_fu_57452_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1351_fu_57656_p2() {
    and_ln415_1351_fu_57656_p2 = (or_ln406_1351_fu_57642_p2.read() & tmp_9552_fu_57648_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1352_fu_57856_p2() {
    and_ln415_1352_fu_57856_p2 = (or_ln406_1352_fu_57842_p2.read() & tmp_9557_fu_57848_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1353_fu_58100_p2() {
    and_ln415_1353_fu_58100_p2 = (or_ln406_1353_fu_58086_p2.read() & tmp_9562_fu_58092_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1354_fu_58300_p2() {
    and_ln415_1354_fu_58300_p2 = (or_ln406_1354_fu_58286_p2.read() & tmp_9567_fu_58292_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1355_fu_58496_p2() {
    and_ln415_1355_fu_58496_p2 = (or_ln406_1355_fu_58482_p2.read() & tmp_9572_fu_58488_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1356_fu_58714_p2() {
    and_ln415_1356_fu_58714_p2 = (or_ln406_1356_fu_58700_p2.read() & tmp_9577_fu_58706_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1357_fu_58926_p2() {
    and_ln415_1357_fu_58926_p2 = (or_ln406_1357_fu_58912_p2.read() & tmp_9582_fu_58918_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1358_fu_59118_p2() {
    and_ln415_1358_fu_59118_p2 = (or_ln406_1358_fu_59104_p2.read() & tmp_9587_fu_59110_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1359_fu_59314_p2() {
    and_ln415_1359_fu_59314_p2 = (or_ln406_1359_fu_59300_p2.read() & tmp_9592_fu_59306_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1360_fu_59510_p2() {
    and_ln415_1360_fu_59510_p2 = (or_ln406_1360_fu_59496_p2.read() & tmp_9597_fu_59502_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1361_fu_59722_p2() {
    and_ln415_1361_fu_59722_p2 = (or_ln406_1361_fu_59708_p2.read() & tmp_9602_fu_59714_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1362_fu_59918_p2() {
    and_ln415_1362_fu_59918_p2 = (or_ln406_1362_fu_59904_p2.read() & tmp_9607_fu_59910_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1363_fu_60110_p2() {
    and_ln415_1363_fu_60110_p2 = (or_ln406_1363_fu_60096_p2.read() & tmp_9612_fu_60102_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1364_fu_60302_p2() {
    and_ln415_1364_fu_60302_p2 = (or_ln406_1364_fu_60288_p2.read() & tmp_9617_fu_60294_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1365_fu_60565_p2() {
    and_ln415_1365_fu_60565_p2 = (or_ln406_1365_fu_60551_p2.read() & tmp_9622_fu_60557_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1366_fu_60765_p2() {
    and_ln415_1366_fu_60765_p2 = (or_ln406_1366_fu_60751_p2.read() & tmp_9627_fu_60757_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1367_fu_60863_p2() {
    and_ln415_1367_fu_60863_p2 = (or_ln406_1367_fu_60849_p2.read() & tmp_9632_fu_60855_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1368_fu_61059_p2() {
    and_ln415_1368_fu_61059_p2 = (or_ln406_1368_fu_61045_p2.read() & tmp_9637_fu_61051_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1369_fu_61275_p2() {
    and_ln415_1369_fu_61275_p2 = (or_ln406_1369_fu_61261_p2.read() & tmp_9642_fu_61267_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1370_fu_61471_p2() {
    and_ln415_1370_fu_61471_p2 = (or_ln406_1370_fu_61457_p2.read() & tmp_9647_fu_61463_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1371_fu_61569_p2() {
    and_ln415_1371_fu_61569_p2 = (or_ln406_1371_fu_61555_p2.read() & tmp_9652_fu_61561_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1372_fu_61765_p2() {
    and_ln415_1372_fu_61765_p2 = (or_ln406_1372_fu_61751_p2.read() & tmp_9657_fu_61757_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1373_fu_62977_p2() {
    and_ln415_1373_fu_62977_p2 = (or_ln406_1373_fu_62963_p2.read() & tmp_9662_fu_62969_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1374_fu_63177_p2() {
    and_ln415_1374_fu_63177_p2 = (or_ln406_1374_fu_63163_p2.read() & tmp_9667_fu_63169_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1375_fu_63377_p2() {
    and_ln415_1375_fu_63377_p2 = (or_ln406_1375_fu_63363_p2.read() & tmp_9672_fu_63369_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1376_fu_63573_p2() {
    and_ln415_1376_fu_63573_p2 = (or_ln406_1376_fu_63559_p2.read() & tmp_9677_fu_63565_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1377_fu_63824_p2() {
    and_ln415_1377_fu_63824_p2 = (or_ln406_1377_fu_63810_p2.read() & tmp_9682_fu_63816_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1378_fu_64024_p2() {
    and_ln415_1378_fu_64024_p2 = (or_ln406_1378_fu_64010_p2.read() & tmp_9687_fu_64016_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1379_fu_64224_p2() {
    and_ln415_1379_fu_64224_p2 = (or_ln406_1379_fu_64210_p2.read() & tmp_9692_fu_64216_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1380_fu_64416_p2() {
    and_ln415_1380_fu_64416_p2 = (or_ln406_1380_fu_64402_p2.read() & tmp_9697_fu_64408_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1381_fu_64624_p2() {
    and_ln415_1381_fu_64624_p2 = (or_ln406_1381_fu_64610_p2.read() & tmp_9702_fu_64616_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1382_fu_64824_p2() {
    and_ln415_1382_fu_64824_p2 = (or_ln406_1382_fu_64810_p2.read() & tmp_9707_fu_64816_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1383_fu_65024_p2() {
    and_ln415_1383_fu_65024_p2 = (or_ln406_1383_fu_65010_p2.read() & tmp_9712_fu_65016_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1384_fu_65220_p2() {
    and_ln415_1384_fu_65220_p2 = (or_ln406_1384_fu_65206_p2.read() & tmp_9717_fu_65212_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1385_fu_65463_p2() {
    and_ln415_1385_fu_65463_p2 = (or_ln406_1385_fu_65449_p2.read() & tmp_9722_fu_65455_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1386_fu_65561_p2() {
    and_ln415_1386_fu_65561_p2 = (or_ln406_1386_fu_65547_p2.read() & tmp_9727_fu_65553_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1387_fu_65761_p2() {
    and_ln415_1387_fu_65761_p2 = (or_ln406_1387_fu_65747_p2.read() & tmp_9732_fu_65753_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1388_fu_65961_p2() {
    and_ln415_1388_fu_65961_p2 = (or_ln406_1388_fu_65947_p2.read() & tmp_9737_fu_65953_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1389_fu_66173_p2() {
    and_ln415_1389_fu_66173_p2 = (or_ln406_1389_fu_66159_p2.read() & tmp_9742_fu_66165_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1390_fu_66373_p2() {
    and_ln415_1390_fu_66373_p2 = (or_ln406_1390_fu_66359_p2.read() & tmp_9747_fu_66365_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1391_fu_66573_p2() {
    and_ln415_1391_fu_66573_p2 = (or_ln406_1391_fu_66559_p2.read() & tmp_9752_fu_66565_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1392_fu_66773_p2() {
    and_ln415_1392_fu_66773_p2 = (or_ln406_1392_fu_66759_p2.read() & tmp_9757_fu_66765_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1393_fu_66984_p2() {
    and_ln415_1393_fu_66984_p2 = (or_ln406_1393_fu_66970_p2.read() & tmp_9762_fu_66976_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1394_fu_67198_p2() {
    and_ln415_1394_fu_67198_p2 = (or_ln406_1394_fu_67184_p2.read() & tmp_9767_fu_67190_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1395_fu_67296_p2() {
    and_ln415_1395_fu_67296_p2 = (or_ln406_1395_fu_67282_p2.read() & tmp_9772_fu_67288_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1396_fu_67394_p2() {
    and_ln415_1396_fu_67394_p2 = (or_ln406_1396_fu_67380_p2.read() & tmp_9777_fu_67386_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1397_fu_69939_p2() {
    and_ln415_1397_fu_69939_p2 = (or_ln406_1397_fu_69925_p2.read() & tmp_9782_fu_69931_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1398_fu_70135_p2() {
    and_ln415_1398_fu_70135_p2 = (or_ln406_1398_fu_70121_p2.read() & tmp_9787_fu_70127_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1399_fu_70327_p2() {
    and_ln415_1399_fu_70327_p2 = (or_ln406_1399_fu_70313_p2.read() & tmp_9792_fu_70319_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1400_fu_70551_p2() {
    and_ln415_1400_fu_70551_p2 = (or_ln406_1400_fu_70537_p2.read() & tmp_9797_fu_70543_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1401_fu_70764_p2() {
    and_ln415_1401_fu_70764_p2 = (or_ln406_1401_fu_70750_p2.read() & tmp_9802_fu_70756_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1402_fu_70960_p2() {
    and_ln415_1402_fu_70960_p2 = (or_ln406_1402_fu_70946_p2.read() & tmp_9807_fu_70952_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1403_fu_71156_p2() {
    and_ln415_1403_fu_71156_p2 = (or_ln406_1403_fu_71142_p2.read() & tmp_9812_fu_71148_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1404_fu_71356_p2() {
    and_ln415_1404_fu_71356_p2 = (or_ln406_1404_fu_71342_p2.read() & tmp_9817_fu_71348_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1405_fu_71572_p2() {
    and_ln415_1405_fu_71572_p2 = (or_ln406_1405_fu_71558_p2.read() & tmp_9822_fu_71564_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1406_fu_71772_p2() {
    and_ln415_1406_fu_71772_p2 = (or_ln406_1406_fu_71758_p2.read() & tmp_9827_fu_71764_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1407_fu_71964_p2() {
    and_ln415_1407_fu_71964_p2 = (or_ln406_1407_fu_71950_p2.read() & tmp_9832_fu_71956_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1408_fu_72160_p2() {
    and_ln415_1408_fu_72160_p2 = (or_ln406_1408_fu_72146_p2.read() & tmp_9837_fu_72152_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1409_fu_72372_p2() {
    and_ln415_1409_fu_72372_p2 = (or_ln406_1409_fu_72358_p2.read() & tmp_9842_fu_72364_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1410_fu_72568_p2() {
    and_ln415_1410_fu_72568_p2 = (or_ln406_1410_fu_72554_p2.read() & tmp_9847_fu_72560_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1411_fu_72764_p2() {
    and_ln415_1411_fu_72764_p2 = (or_ln406_1411_fu_72750_p2.read() & tmp_9852_fu_72756_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1412_fu_72960_p2() {
    and_ln415_1412_fu_72960_p2 = (or_ln406_1412_fu_72946_p2.read() & tmp_9857_fu_72952_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1413_fu_73176_p2() {
    and_ln415_1413_fu_73176_p2 = (or_ln406_1413_fu_73162_p2.read() & tmp_9862_fu_73168_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1414_fu_73274_p2() {
    and_ln415_1414_fu_73274_p2 = (or_ln406_1414_fu_73260_p2.read() & tmp_9867_fu_73266_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1415_fu_73474_p2() {
    and_ln415_1415_fu_73474_p2 = (or_ln406_1415_fu_73460_p2.read() & tmp_9872_fu_73466_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1416_fu_73670_p2() {
    and_ln415_1416_fu_73670_p2 = (or_ln406_1416_fu_73656_p2.read() & tmp_9877_fu_73662_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1417_fu_76070_p2() {
    and_ln415_1417_fu_76070_p2 = (or_ln406_1417_fu_76056_p2.read() & tmp_9882_fu_76062_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1418_fu_76300_p2() {
    and_ln415_1418_fu_76300_p2 = (or_ln406_1418_fu_76286_p2.read() & tmp_9887_fu_76292_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1419_fu_76496_p2() {
    and_ln415_1419_fu_76496_p2 = (or_ln406_1419_fu_76482_p2.read() & tmp_9892_fu_76488_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1420_fu_76741_p2() {
    and_ln415_1420_fu_76741_p2 = (or_ln406_1420_fu_76727_p2.read() & tmp_9897_fu_76733_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1421_fu_76954_p2() {
    and_ln415_1421_fu_76954_p2 = (or_ln406_1421_fu_76940_p2.read() & tmp_9902_fu_76946_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1422_fu_77150_p2() {
    and_ln415_1422_fu_77150_p2 = (or_ln406_1422_fu_77136_p2.read() & tmp_9907_fu_77142_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1423_fu_77350_p2() {
    and_ln415_1423_fu_77350_p2 = (or_ln406_1423_fu_77336_p2.read() & tmp_9912_fu_77342_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1424_fu_77550_p2() {
    and_ln415_1424_fu_77550_p2 = (or_ln406_1424_fu_77536_p2.read() & tmp_9917_fu_77542_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1425_fu_77759_p2() {
    and_ln415_1425_fu_77759_p2 = (or_ln406_1425_fu_77745_p2.read() & tmp_9922_fu_77751_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1426_fu_77987_p2() {
    and_ln415_1426_fu_77987_p2 = (or_ln406_1426_fu_77973_p2.read() & tmp_9927_fu_77979_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1427_fu_78187_p2() {
    and_ln415_1427_fu_78187_p2 = (or_ln406_1427_fu_78173_p2.read() & tmp_9932_fu_78179_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1428_fu_78387_p2() {
    and_ln415_1428_fu_78387_p2 = (or_ln406_1428_fu_78373_p2.read() & tmp_9937_fu_78379_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1429_fu_78600_p2() {
    and_ln415_1429_fu_78600_p2 = (or_ln406_1429_fu_78586_p2.read() & tmp_9942_fu_78592_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1430_fu_78796_p2() {
    and_ln415_1430_fu_78796_p2 = (or_ln406_1430_fu_78782_p2.read() & tmp_9947_fu_78788_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1431_fu_78992_p2() {
    and_ln415_1431_fu_78992_p2 = (or_ln406_1431_fu_78978_p2.read() & tmp_9952_fu_78984_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1432_fu_79188_p2() {
    and_ln415_1432_fu_79188_p2 = (or_ln406_1432_fu_79174_p2.read() & tmp_9957_fu_79180_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1433_fu_79392_p2() {
    and_ln415_1433_fu_79392_p2 = (or_ln406_1433_fu_79378_p2.read() & tmp_9962_fu_79384_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1434_fu_79588_p2() {
    and_ln415_1434_fu_79588_p2 = (or_ln406_1434_fu_79574_p2.read() & tmp_9967_fu_79580_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1435_fu_79826_p2() {
    and_ln415_1435_fu_79826_p2 = (or_ln406_1435_fu_79812_p2.read() & tmp_9972_fu_79818_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1436_fu_79936_p2() {
    and_ln415_1436_fu_79936_p2 = (or_ln406_1436_fu_79922_p2.read() & tmp_9977_fu_79928_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1437_fu_80050_p2() {
    and_ln415_1437_fu_80050_p2 = (or_ln406_1437_fu_80036_p2.read() & tmp_9982_fu_80042_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1438_fu_80250_p2() {
    and_ln415_1438_fu_80250_p2 = (or_ln406_1438_fu_80236_p2.read() & tmp_9987_fu_80242_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1439_fu_80442_p2() {
    and_ln415_1439_fu_80442_p2 = (or_ln406_1439_fu_80428_p2.read() & tmp_9992_fu_80434_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1440_fu_80638_p2() {
    and_ln415_1440_fu_80638_p2 = (or_ln406_1440_fu_80624_p2.read() & tmp_9997_fu_80630_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1441_fu_83096_p2() {
    and_ln415_1441_fu_83096_p2 = (or_ln406_1441_fu_83082_p2.read() & tmp_10002_fu_83088_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1442_fu_83296_p2() {
    and_ln415_1442_fu_83296_p2 = (or_ln406_1442_fu_83282_p2.read() & tmp_10007_fu_83288_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1443_fu_83496_p2() {
    and_ln415_1443_fu_83496_p2 = (or_ln406_1443_fu_83482_p2.read() & tmp_10012_fu_83488_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1444_fu_83692_p2() {
    and_ln415_1444_fu_83692_p2 = (or_ln406_1444_fu_83678_p2.read() & tmp_10017_fu_83684_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1445_fu_83900_p2() {
    and_ln415_1445_fu_83900_p2 = (or_ln406_1445_fu_83886_p2.read() & tmp_10022_fu_83892_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1446_fu_84133_p2() {
    and_ln415_1446_fu_84133_p2 = (or_ln406_1446_fu_84119_p2.read() & tmp_10027_fu_84125_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1447_fu_84329_p2() {
    and_ln415_1447_fu_84329_p2 = (or_ln406_1447_fu_84315_p2.read() & tmp_10032_fu_84321_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1448_fu_84525_p2() {
    and_ln415_1448_fu_84525_p2 = (or_ln406_1448_fu_84511_p2.read() & tmp_10037_fu_84517_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1449_fu_84727_p2() {
    and_ln415_1449_fu_84727_p2 = (or_ln406_1449_fu_84713_p2.read() & tmp_10042_fu_84719_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1450_fu_84940_p2() {
    and_ln415_1450_fu_84940_p2 = (or_ln406_1450_fu_84926_p2.read() & tmp_10047_fu_84932_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1451_fu_85140_p2() {
    and_ln415_1451_fu_85140_p2 = (or_ln406_1451_fu_85126_p2.read() & tmp_10052_fu_85132_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1452_fu_85336_p2() {
    and_ln415_1452_fu_85336_p2 = (or_ln406_1452_fu_85322_p2.read() & tmp_10057_fu_85328_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1453_fu_85545_p2() {
    and_ln415_1453_fu_85545_p2 = (or_ln406_1453_fu_85531_p2.read() & tmp_10062_fu_85537_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1454_fu_85745_p2() {
    and_ln415_1454_fu_85745_p2 = (or_ln406_1454_fu_85731_p2.read() & tmp_10067_fu_85737_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1455_fu_85945_p2() {
    and_ln415_1455_fu_85945_p2 = (or_ln406_1455_fu_85931_p2.read() & tmp_10072_fu_85937_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1456_fu_86141_p2() {
    and_ln415_1456_fu_86141_p2 = (or_ln406_1456_fu_86127_p2.read() & tmp_10077_fu_86133_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1457_fu_86350_p2() {
    and_ln415_1457_fu_86350_p2 = (or_ln406_1457_fu_86336_p2.read() & tmp_10082_fu_86342_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1458_fu_88892_p2() {
    and_ln415_1458_fu_88892_p2 = (or_ln406_1458_fu_88878_p2.read() & tmp_10087_fu_88884_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1459_fu_86542_p2() {
    and_ln415_1459_fu_86542_p2 = (or_ln406_1459_fu_86528_p2.read() & tmp_10092_fu_86534_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1460_fu_86734_p2() {
    and_ln415_1460_fu_86734_p2 = (or_ln406_1460_fu_86720_p2.read() & tmp_10097_fu_86726_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1461_fu_89142_p2() {
    and_ln415_1461_fu_89142_p2 = (or_ln406_1461_fu_89128_p2.read() & tmp_10102_fu_89134_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1462_fu_89342_p2() {
    and_ln415_1462_fu_89342_p2 = (or_ln406_1462_fu_89328_p2.read() & tmp_10107_fu_89334_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1463_fu_89542_p2() {
    and_ln415_1463_fu_89542_p2 = (or_ln406_1463_fu_89528_p2.read() & tmp_10112_fu_89534_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1464_fu_89742_p2() {
    and_ln415_1464_fu_89742_p2 = (or_ln406_1464_fu_89728_p2.read() & tmp_10117_fu_89734_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1465_fu_89948_p2() {
    and_ln415_1465_fu_89948_p2 = (or_ln406_1465_fu_89934_p2.read() & tmp_10122_fu_89940_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1466_fu_90140_p2() {
    and_ln415_1466_fu_90140_p2 = (or_ln406_1466_fu_90126_p2.read() & tmp_10127_fu_90132_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1467_fu_90336_p2() {
    and_ln415_1467_fu_90336_p2 = (or_ln406_1467_fu_90322_p2.read() & tmp_10132_fu_90328_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1468_fu_90528_p2() {
    and_ln415_1468_fu_90528_p2 = (or_ln406_1468_fu_90514_p2.read() & tmp_10137_fu_90520_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1469_fu_90734_p2() {
    and_ln415_1469_fu_90734_p2 = (or_ln406_1469_fu_90720_p2.read() & tmp_10142_fu_90726_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1470_fu_90934_p2() {
    and_ln415_1470_fu_90934_p2 = (or_ln406_1470_fu_90920_p2.read() & tmp_10147_fu_90926_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1471_fu_91130_p2() {
    and_ln415_1471_fu_91130_p2 = (or_ln406_1471_fu_91116_p2.read() & tmp_10152_fu_91122_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1472_fu_91326_p2() {
    and_ln415_1472_fu_91326_p2 = (or_ln406_1472_fu_91312_p2.read() & tmp_10157_fu_91318_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1473_fu_91535_p2() {
    and_ln415_1473_fu_91535_p2 = (or_ln406_1473_fu_91521_p2.read() & tmp_10162_fu_91527_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1474_fu_91727_p2() {
    and_ln415_1474_fu_91727_p2 = (or_ln406_1474_fu_91713_p2.read() & tmp_10167_fu_91719_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1475_fu_91923_p2() {
    and_ln415_1475_fu_91923_p2 = (or_ln406_1475_fu_91909_p2.read() & tmp_10172_fu_91915_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1476_fu_92119_p2() {
    and_ln415_1476_fu_92119_p2 = (or_ln406_1476_fu_92105_p2.read() & tmp_10177_fu_92111_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1477_fu_92332_p2() {
    and_ln415_1477_fu_92332_p2 = (or_ln406_1477_fu_92318_p2.read() & tmp_10182_fu_92324_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1478_fu_92528_p2() {
    and_ln415_1478_fu_92528_p2 = (or_ln406_1478_fu_92514_p2.read() & tmp_10187_fu_92520_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1479_fu_92724_p2() {
    and_ln415_1479_fu_92724_p2 = (or_ln406_1479_fu_92710_p2.read() & tmp_10192_fu_92716_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1480_fu_92920_p2() {
    and_ln415_1480_fu_92920_p2 = (or_ln406_1480_fu_92906_p2.read() & tmp_10197_fu_92912_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1481_fu_93128_p2() {
    and_ln415_1481_fu_93128_p2 = (or_ln406_1481_fu_93114_p2.read() & tmp_10202_fu_93120_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1482_fu_93356_p2() {
    and_ln415_1482_fu_93356_p2 = (or_ln406_1482_fu_93342_p2.read() & tmp_10207_fu_93348_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1483_fu_93450_p2() {
    and_ln415_1483_fu_93450_p2 = (or_ln406_1483_fu_93436_p2.read() & tmp_10212_fu_93442_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1484_fu_93646_p2() {
    and_ln415_1484_fu_93646_p2 = (or_ln406_1484_fu_93632_p2.read() & tmp_10217_fu_93638_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1485_fu_95922_p2() {
    and_ln415_1485_fu_95922_p2 = (or_ln406_1485_fu_95908_p2.read() & tmp_10222_fu_95914_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1486_fu_96122_p2() {
    and_ln415_1486_fu_96122_p2 = (or_ln406_1486_fu_96108_p2.read() & tmp_10227_fu_96114_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1487_fu_96341_p2() {
    and_ln415_1487_fu_96341_p2 = (or_ln406_1487_fu_96327_p2.read() & tmp_10232_fu_96333_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1488_fu_96541_p2() {
    and_ln415_1488_fu_96541_p2 = (or_ln406_1488_fu_96527_p2.read() & tmp_10237_fu_96533_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1489_fu_96750_p2() {
    and_ln415_1489_fu_96750_p2 = (or_ln406_1489_fu_96736_p2.read() & tmp_10242_fu_96742_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1490_fu_96950_p2() {
    and_ln415_1490_fu_96950_p2 = (or_ln406_1490_fu_96936_p2.read() & tmp_10247_fu_96942_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1491_fu_97142_p2() {
    and_ln415_1491_fu_97142_p2 = (or_ln406_1491_fu_97128_p2.read() & tmp_10252_fu_97134_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1492_fu_97338_p2() {
    and_ln415_1492_fu_97338_p2 = (or_ln406_1492_fu_97324_p2.read() & tmp_10257_fu_97330_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1493_fu_97543_p2() {
    and_ln415_1493_fu_97543_p2 = (or_ln406_1493_fu_97529_p2.read() & tmp_10262_fu_97535_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1494_fu_97690_p2() {
    and_ln415_1494_fu_97690_p2 = (or_ln406_1494_fu_97676_p2.read() & tmp_10267_fu_97682_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1495_fu_97788_p2() {
    and_ln415_1495_fu_97788_p2 = (or_ln406_1495_fu_97774_p2.read() & tmp_10272_fu_97780_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1496_fu_97886_p2() {
    and_ln415_1496_fu_97886_p2 = (or_ln406_1496_fu_97872_p2.read() & tmp_10277_fu_97878_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1497_fu_98087_p2() {
    and_ln415_1497_fu_98087_p2 = (or_ln406_1497_fu_98073_p2.read() & tmp_10282_fu_98079_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1498_fu_98283_p2() {
    and_ln415_1498_fu_98283_p2 = (or_ln406_1498_fu_98269_p2.read() & tmp_10287_fu_98275_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1499_fu_98475_p2() {
    and_ln415_1499_fu_98475_p2 = (or_ln406_1499_fu_98461_p2.read() & tmp_10292_fu_98467_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1500_fu_98681_p2() {
    and_ln415_1500_fu_98681_p2 = (or_ln406_1500_fu_98667_p2.read() & tmp_10297_fu_98673_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1501_fu_98881_p2() {
    and_ln415_1501_fu_98881_p2 = (or_ln406_1501_fu_98867_p2.read() & tmp_10302_fu_98873_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1502_fu_99081_p2() {
    and_ln415_1502_fu_99081_p2 = (or_ln406_1502_fu_99067_p2.read() & tmp_10307_fu_99073_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1503_fu_99281_p2() {
    and_ln415_1503_fu_99281_p2 = (or_ln406_1503_fu_99267_p2.read() & tmp_10312_fu_99273_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1504_fu_101680_p2() {
    and_ln415_1504_fu_101680_p2 = (or_ln406_1504_fu_101666_p2.read() & tmp_10317_fu_101672_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1505_fu_101876_p2() {
    and_ln415_1505_fu_101876_p2 = (or_ln406_1505_fu_101862_p2.read() & tmp_10322_fu_101868_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1506_fu_102072_p2() {
    and_ln415_1506_fu_102072_p2 = (or_ln406_1506_fu_102058_p2.read() & tmp_10327_fu_102064_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_1507_fu_102264_p2() {
    and_ln415_1507_fu_102264_p2 = (or_ln406_1507_fu_102250_p2.read() & tmp_10332_fu_102256_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln415_fu_57260_p2() {
    and_ln415_fu_57260_p2 = (or_ln406_fu_57246_p2.read() & tmp_9542_fu_57252_p3.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1335_fu_57490_p2() {
    and_ln416_1335_fu_57490_p2 = (tmp_9546_fu_57438_p3.read() & xor_ln416_1335_fu_57484_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1336_fu_57690_p2() {
    and_ln416_1336_fu_57690_p2 = (tmp_9551_fu_57634_p3.read() & xor_ln416_1336_fu_57684_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1337_fu_57890_p2() {
    and_ln416_1337_fu_57890_p2 = (tmp_9556_fu_57834_p3.read() & xor_ln416_1337_fu_57884_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1338_fu_58134_p2() {
    and_ln416_1338_fu_58134_p2 = (tmp_9561_fu_58078_p3.read() & xor_ln416_1338_fu_58128_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1339_fu_58330_p2() {
    and_ln416_1339_fu_58330_p2 = (tmp_9566_fu_58278_p3.read() & xor_ln416_1339_fu_58324_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1340_fu_58530_p2() {
    and_ln416_1340_fu_58530_p2 = (tmp_9571_fu_58474_p3.read() & xor_ln416_1340_fu_58524_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1341_fu_58748_p2() {
    and_ln416_1341_fu_58748_p2 = (tmp_9576_fu_58692_p3.read() & xor_ln416_1341_fu_58742_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1342_fu_58956_p2() {
    and_ln416_1342_fu_58956_p2 = (tmp_9581_fu_58904_p3.read() & xor_ln416_1342_fu_58950_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1343_fu_59148_p2() {
    and_ln416_1343_fu_59148_p2 = (tmp_9586_fu_59096_p3.read() & xor_ln416_1343_fu_59142_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1344_fu_59344_p2() {
    and_ln416_1344_fu_59344_p2 = (tmp_9591_fu_59292_p3.read() & xor_ln416_1344_fu_59338_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1345_fu_59544_p2() {
    and_ln416_1345_fu_59544_p2 = (tmp_9596_fu_59488_p3.read() & xor_ln416_1345_fu_59538_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1346_fu_59756_p2() {
    and_ln416_1346_fu_59756_p2 = (tmp_9601_fu_59700_p3.read() & xor_ln416_1346_fu_59750_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1347_fu_59948_p2() {
    and_ln416_1347_fu_59948_p2 = (tmp_9606_fu_59896_p3.read() & xor_ln416_1347_fu_59942_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1348_fu_60140_p2() {
    and_ln416_1348_fu_60140_p2 = (tmp_9611_fu_60088_p3.read() & xor_ln416_1348_fu_60134_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1349_fu_60332_p2() {
    and_ln416_1349_fu_60332_p2 = (tmp_9616_fu_60280_p3.read() & xor_ln416_1349_fu_60326_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1350_fu_60599_p2() {
    and_ln416_1350_fu_60599_p2 = (tmp_9621_fu_60543_p3.read() & xor_ln416_1350_fu_60593_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1351_fu_60795_p2() {
    and_ln416_1351_fu_60795_p2 = (tmp_9626_fu_60743_p3.read() & xor_ln416_1351_fu_60789_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1352_fu_60893_p2() {
    and_ln416_1352_fu_60893_p2 = (tmp_9631_fu_60841_p3.read() & xor_ln416_1352_fu_60887_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1353_fu_61093_p2() {
    and_ln416_1353_fu_61093_p2 = (tmp_9636_fu_61037_p3.read() & xor_ln416_1353_fu_61087_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1354_fu_61305_p2() {
    and_ln416_1354_fu_61305_p2 = (tmp_9641_fu_61253_p3.read() & xor_ln416_1354_fu_61299_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1355_fu_61501_p2() {
    and_ln416_1355_fu_61501_p2 = (tmp_9646_fu_61449_p3.read() & xor_ln416_1355_fu_61495_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1356_fu_61599_p2() {
    and_ln416_1356_fu_61599_p2 = (tmp_9651_fu_61547_p3.read() & xor_ln416_1356_fu_61593_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1357_fu_61799_p2() {
    and_ln416_1357_fu_61799_p2 = (tmp_9656_fu_61743_p3.read() & xor_ln416_1357_fu_61793_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1358_fu_63011_p2() {
    and_ln416_1358_fu_63011_p2 = (tmp_9661_fu_62955_p3.read() & xor_ln416_1358_fu_63005_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1359_fu_63211_p2() {
    and_ln416_1359_fu_63211_p2 = (tmp_9666_fu_63155_p3.read() & xor_ln416_1359_fu_63205_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1360_fu_63407_p2() {
    and_ln416_1360_fu_63407_p2 = (tmp_9671_fu_63355_p3.read() & xor_ln416_1360_fu_63401_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1361_fu_63607_p2() {
    and_ln416_1361_fu_63607_p2 = (tmp_9676_fu_63551_p3.read() & xor_ln416_1361_fu_63601_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1362_fu_63858_p2() {
    and_ln416_1362_fu_63858_p2 = (tmp_9681_fu_63802_p3.read() & xor_ln416_1362_fu_63852_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1363_fu_64058_p2() {
    and_ln416_1363_fu_64058_p2 = (tmp_9686_fu_64002_p3.read() & xor_ln416_1363_fu_64052_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1364_fu_64254_p2() {
    and_ln416_1364_fu_64254_p2 = (tmp_9691_fu_64202_p3.read() & xor_ln416_1364_fu_64248_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1365_fu_64446_p2() {
    and_ln416_1365_fu_64446_p2 = (tmp_9696_fu_64394_p3.read() & xor_ln416_1365_fu_64440_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1366_fu_64658_p2() {
    and_ln416_1366_fu_64658_p2 = (tmp_9701_fu_64602_p3.read() & xor_ln416_1366_fu_64652_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1367_fu_64858_p2() {
    and_ln416_1367_fu_64858_p2 = (tmp_9706_fu_64802_p3.read() & xor_ln416_1367_fu_64852_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1368_fu_65054_p2() {
    and_ln416_1368_fu_65054_p2 = (tmp_9711_fu_65002_p3.read() & xor_ln416_1368_fu_65048_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1369_fu_65254_p2() {
    and_ln416_1369_fu_65254_p2 = (tmp_9716_fu_65198_p3.read() & xor_ln416_1369_fu_65248_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1370_fu_65493_p2() {
    and_ln416_1370_fu_65493_p2 = (tmp_9721_fu_65441_p3.read() & xor_ln416_1370_fu_65487_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1371_fu_65595_p2() {
    and_ln416_1371_fu_65595_p2 = (tmp_9726_fu_65539_p3.read() & xor_ln416_1371_fu_65589_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1372_fu_65795_p2() {
    and_ln416_1372_fu_65795_p2 = (tmp_9731_fu_65739_p3.read() & xor_ln416_1372_fu_65789_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1373_fu_65995_p2() {
    and_ln416_1373_fu_65995_p2 = (tmp_9736_fu_65939_p3.read() & xor_ln416_1373_fu_65989_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1374_fu_66207_p2() {
    and_ln416_1374_fu_66207_p2 = (tmp_9741_fu_66151_p3.read() & xor_ln416_1374_fu_66201_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1375_fu_66407_p2() {
    and_ln416_1375_fu_66407_p2 = (tmp_9746_fu_66351_p3.read() & xor_ln416_1375_fu_66401_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1376_fu_66607_p2() {
    and_ln416_1376_fu_66607_p2 = (tmp_9751_fu_66551_p3.read() & xor_ln416_1376_fu_66601_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1377_fu_66803_p2() {
    and_ln416_1377_fu_66803_p2 = (tmp_9756_fu_66751_p3.read() & xor_ln416_1377_fu_66797_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1378_fu_67014_p2() {
    and_ln416_1378_fu_67014_p2 = (tmp_9761_fu_66962_p3.read() & xor_ln416_1378_fu_67008_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1379_fu_67228_p2() {
    and_ln416_1379_fu_67228_p2 = (tmp_9766_fu_67176_p3.read() & xor_ln416_1379_fu_67222_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1380_fu_67326_p2() {
    and_ln416_1380_fu_67326_p2 = (tmp_9771_fu_67274_p3.read() & xor_ln416_1380_fu_67320_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1381_fu_67424_p2() {
    and_ln416_1381_fu_67424_p2 = (tmp_9776_fu_67372_p3.read() & xor_ln416_1381_fu_67418_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1382_fu_69969_p2() {
    and_ln416_1382_fu_69969_p2 = (tmp_9781_fu_69917_p3.read() & xor_ln416_1382_fu_69963_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1383_fu_70165_p2() {
    and_ln416_1383_fu_70165_p2 = (tmp_9786_fu_70113_p3.read() & xor_ln416_1383_fu_70159_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1384_fu_70357_p2() {
    and_ln416_1384_fu_70357_p2 = (tmp_9791_fu_70305_p3.read() & xor_ln416_1384_fu_70351_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1385_fu_70585_p2() {
    and_ln416_1385_fu_70585_p2 = (tmp_9796_fu_70529_p3.read() & xor_ln416_1385_fu_70579_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1386_fu_70794_p2() {
    and_ln416_1386_fu_70794_p2 = (tmp_9801_fu_70742_p3.read() & xor_ln416_1386_fu_70788_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1387_fu_70990_p2() {
    and_ln416_1387_fu_70990_p2 = (tmp_9806_fu_70938_p3.read() & xor_ln416_1387_fu_70984_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1388_fu_71190_p2() {
    and_ln416_1388_fu_71190_p2 = (tmp_9811_fu_71134_p3.read() & xor_ln416_1388_fu_71184_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1389_fu_71390_p2() {
    and_ln416_1389_fu_71390_p2 = (tmp_9816_fu_71334_p3.read() & xor_ln416_1389_fu_71384_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1390_fu_71606_p2() {
    and_ln416_1390_fu_71606_p2 = (tmp_9821_fu_71550_p3.read() & xor_ln416_1390_fu_71600_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1391_fu_71802_p2() {
    and_ln416_1391_fu_71802_p2 = (tmp_9826_fu_71750_p3.read() & xor_ln416_1391_fu_71796_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1392_fu_71994_p2() {
    and_ln416_1392_fu_71994_p2 = (tmp_9831_fu_71942_p3.read() & xor_ln416_1392_fu_71988_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1393_fu_72190_p2() {
    and_ln416_1393_fu_72190_p2 = (tmp_9836_fu_72138_p3.read() & xor_ln416_1393_fu_72184_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1394_fu_72402_p2() {
    and_ln416_1394_fu_72402_p2 = (tmp_9841_fu_72350_p3.read() & xor_ln416_1394_fu_72396_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1395_fu_72602_p2() {
    and_ln416_1395_fu_72602_p2 = (tmp_9846_fu_72546_p3.read() & xor_ln416_1395_fu_72596_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1396_fu_72794_p2() {
    and_ln416_1396_fu_72794_p2 = (tmp_9851_fu_72742_p3.read() & xor_ln416_1396_fu_72788_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1397_fu_72994_p2() {
    and_ln416_1397_fu_72994_p2 = (tmp_9856_fu_72938_p3.read() & xor_ln416_1397_fu_72988_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1398_fu_73206_p2() {
    and_ln416_1398_fu_73206_p2 = (tmp_9861_fu_73154_p3.read() & xor_ln416_1398_fu_73200_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1399_fu_73308_p2() {
    and_ln416_1399_fu_73308_p2 = (tmp_9866_fu_73252_p3.read() & xor_ln416_1399_fu_73302_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1400_fu_73504_p2() {
    and_ln416_1400_fu_73504_p2 = (tmp_9871_fu_73452_p3.read() & xor_ln416_1400_fu_73498_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1401_fu_73700_p2() {
    and_ln416_1401_fu_73700_p2 = (tmp_9876_fu_73648_p3.read() & xor_ln416_1401_fu_73694_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1402_fu_76100_p2() {
    and_ln416_1402_fu_76100_p2 = (tmp_9881_fu_76048_p3.read() & xor_ln416_1402_fu_76094_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1403_fu_76334_p2() {
    and_ln416_1403_fu_76334_p2 = (tmp_9886_fu_76278_p3.read() & xor_ln416_1403_fu_76328_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1404_fu_76526_p2() {
    and_ln416_1404_fu_76526_p2 = (tmp_9891_fu_76474_p3.read() & xor_ln416_1404_fu_76520_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1405_fu_76775_p2() {
    and_ln416_1405_fu_76775_p2 = (tmp_9896_fu_76719_p3.read() & xor_ln416_1405_fu_76769_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1406_fu_76984_p2() {
    and_ln416_1406_fu_76984_p2 = (tmp_9901_fu_76932_p3.read() & xor_ln416_1406_fu_76978_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1407_fu_77184_p2() {
    and_ln416_1407_fu_77184_p2 = (tmp_9906_fu_77128_p3.read() & xor_ln416_1407_fu_77178_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1408_fu_77384_p2() {
    and_ln416_1408_fu_77384_p2 = (tmp_9911_fu_77328_p3.read() & xor_ln416_1408_fu_77378_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1409_fu_77584_p2() {
    and_ln416_1409_fu_77584_p2 = (tmp_9916_fu_77528_p3.read() & xor_ln416_1409_fu_77578_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1410_fu_77793_p2() {
    and_ln416_1410_fu_77793_p2 = (tmp_9921_fu_77737_p3.read() & xor_ln416_1410_fu_77787_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1411_fu_78021_p2() {
    and_ln416_1411_fu_78021_p2 = (tmp_9926_fu_77965_p3.read() & xor_ln416_1411_fu_78015_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1412_fu_78221_p2() {
    and_ln416_1412_fu_78221_p2 = (tmp_9931_fu_78165_p3.read() & xor_ln416_1412_fu_78215_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1413_fu_78421_p2() {
    and_ln416_1413_fu_78421_p2 = (tmp_9936_fu_78365_p3.read() & xor_ln416_1413_fu_78415_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1414_fu_78630_p2() {
    and_ln416_1414_fu_78630_p2 = (tmp_9941_fu_78578_p3.read() & xor_ln416_1414_fu_78624_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1415_fu_78830_p2() {
    and_ln416_1415_fu_78830_p2 = (tmp_9946_fu_78774_p3.read() & xor_ln416_1415_fu_78824_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1416_fu_79022_p2() {
    and_ln416_1416_fu_79022_p2 = (tmp_9951_fu_78970_p3.read() & xor_ln416_1416_fu_79016_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1417_fu_79218_p2() {
    and_ln416_1417_fu_79218_p2 = (tmp_9956_fu_79166_p3.read() & xor_ln416_1417_fu_79212_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1418_fu_79426_p2() {
    and_ln416_1418_fu_79426_p2 = (tmp_9961_fu_79370_p3.read() & xor_ln416_1418_fu_79420_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1419_fu_79618_p2() {
    and_ln416_1419_fu_79618_p2 = (tmp_9966_fu_79566_p3.read() & xor_ln416_1419_fu_79612_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1420_fu_79856_p2() {
    and_ln416_1420_fu_79856_p2 = (tmp_9971_fu_79804_p3.read() & xor_ln416_1420_fu_79850_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1421_fu_79966_p2() {
    and_ln416_1421_fu_79966_p2 = (tmp_9976_fu_79914_p3.read() & xor_ln416_1421_fu_79960_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1422_fu_80084_p2() {
    and_ln416_1422_fu_80084_p2 = (tmp_9981_fu_80028_p3.read() & xor_ln416_1422_fu_80078_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1423_fu_80280_p2() {
    and_ln416_1423_fu_80280_p2 = (tmp_9986_fu_80228_p3.read() & xor_ln416_1423_fu_80274_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1424_fu_80472_p2() {
    and_ln416_1424_fu_80472_p2 = (tmp_9991_fu_80420_p3.read() & xor_ln416_1424_fu_80466_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1425_fu_80668_p2() {
    and_ln416_1425_fu_80668_p2 = (tmp_9996_fu_80616_p3.read() & xor_ln416_1425_fu_80662_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1426_fu_83130_p2() {
    and_ln416_1426_fu_83130_p2 = (tmp_10001_fu_83074_p3.read() & xor_ln416_1426_fu_83124_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1427_fu_83330_p2() {
    and_ln416_1427_fu_83330_p2 = (tmp_10006_fu_83274_p3.read() & xor_ln416_1427_fu_83324_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1428_fu_83530_p2() {
    and_ln416_1428_fu_83530_p2 = (tmp_10011_fu_83474_p3.read() & xor_ln416_1428_fu_83524_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1429_fu_83722_p2() {
    and_ln416_1429_fu_83722_p2 = (tmp_10016_fu_83670_p3.read() & xor_ln416_1429_fu_83716_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1430_fu_83930_p2() {
    and_ln416_1430_fu_83930_p2 = (tmp_10021_fu_83878_p3.read() & xor_ln416_1430_fu_83924_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1431_fu_84167_p2() {
    and_ln416_1431_fu_84167_p2 = (tmp_10026_fu_84111_p3.read() & xor_ln416_1431_fu_84161_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1432_fu_84359_p2() {
    and_ln416_1432_fu_84359_p2 = (tmp_10031_fu_84307_p3.read() & xor_ln416_1432_fu_84353_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1433_fu_84555_p2() {
    and_ln416_1433_fu_84555_p2 = (tmp_10036_fu_84503_p3.read() & xor_ln416_1433_fu_84549_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1434_fu_84757_p2() {
    and_ln416_1434_fu_84757_p2 = (tmp_10041_fu_84705_p3.read() & xor_ln416_1434_fu_84751_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1435_fu_84974_p2() {
    and_ln416_1435_fu_84974_p2 = (tmp_10046_fu_84918_p3.read() & xor_ln416_1435_fu_84968_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1436_fu_85170_p2() {
    and_ln416_1436_fu_85170_p2 = (tmp_10051_fu_85118_p3.read() & xor_ln416_1436_fu_85164_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1437_fu_85366_p2() {
    and_ln416_1437_fu_85366_p2 = (tmp_10056_fu_85314_p3.read() & xor_ln416_1437_fu_85360_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1438_fu_85579_p2() {
    and_ln416_1438_fu_85579_p2 = (tmp_10061_fu_85523_p3.read() & xor_ln416_1438_fu_85573_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1439_fu_85779_p2() {
    and_ln416_1439_fu_85779_p2 = (tmp_10066_fu_85723_p3.read() & xor_ln416_1439_fu_85773_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1440_fu_85975_p2() {
    and_ln416_1440_fu_85975_p2 = (tmp_10071_fu_85923_p3.read() & xor_ln416_1440_fu_85969_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1441_fu_86175_p2() {
    and_ln416_1441_fu_86175_p2 = (tmp_10076_fu_86119_p3.read() & xor_ln416_1441_fu_86169_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1442_fu_86380_p2() {
    and_ln416_1442_fu_86380_p2 = (tmp_10081_fu_86328_p3.read() & xor_ln416_1442_fu_86374_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1443_fu_88926_p2() {
    and_ln416_1443_fu_88926_p2 = (tmp_10086_fu_88870_p3.read() & xor_ln416_1443_fu_88920_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1444_fu_86572_p2() {
    and_ln416_1444_fu_86572_p2 = (tmp_10091_fu_86520_p3.read() & xor_ln416_1444_fu_86566_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1445_fu_86764_p2() {
    and_ln416_1445_fu_86764_p2 = (tmp_10096_fu_86712_p3.read() & xor_ln416_1445_fu_86758_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1446_fu_89176_p2() {
    and_ln416_1446_fu_89176_p2 = (tmp_10101_fu_89120_p3.read() & xor_ln416_1446_fu_89170_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1447_fu_89376_p2() {
    and_ln416_1447_fu_89376_p2 = (tmp_10106_fu_89320_p3.read() & xor_ln416_1447_fu_89370_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1448_fu_89576_p2() {
    and_ln416_1448_fu_89576_p2 = (tmp_10111_fu_89520_p3.read() & xor_ln416_1448_fu_89570_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1449_fu_89772_p2() {
    and_ln416_1449_fu_89772_p2 = (tmp_10116_fu_89720_p3.read() & xor_ln416_1449_fu_89766_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1450_fu_89978_p2() {
    and_ln416_1450_fu_89978_p2 = (tmp_10121_fu_89926_p3.read() & xor_ln416_1450_fu_89972_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1451_fu_90170_p2() {
    and_ln416_1451_fu_90170_p2 = (tmp_10126_fu_90118_p3.read() & xor_ln416_1451_fu_90164_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1452_fu_90366_p2() {
    and_ln416_1452_fu_90366_p2 = (tmp_10131_fu_90314_p3.read() & xor_ln416_1452_fu_90360_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1453_fu_90558_p2() {
    and_ln416_1453_fu_90558_p2 = (tmp_10136_fu_90506_p3.read() & xor_ln416_1453_fu_90552_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1454_fu_90768_p2() {
    and_ln416_1454_fu_90768_p2 = (tmp_10141_fu_90712_p3.read() & xor_ln416_1454_fu_90762_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1455_fu_90964_p2() {
    and_ln416_1455_fu_90964_p2 = (tmp_10146_fu_90912_p3.read() & xor_ln416_1455_fu_90958_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1456_fu_91160_p2() {
    and_ln416_1456_fu_91160_p2 = (tmp_10151_fu_91108_p3.read() & xor_ln416_1456_fu_91154_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1457_fu_91356_p2() {
    and_ln416_1457_fu_91356_p2 = (tmp_10156_fu_91304_p3.read() & xor_ln416_1457_fu_91350_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1458_fu_91565_p2() {
    and_ln416_1458_fu_91565_p2 = (tmp_10161_fu_91513_p3.read() & xor_ln416_1458_fu_91559_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1459_fu_91757_p2() {
    and_ln416_1459_fu_91757_p2 = (tmp_10166_fu_91705_p3.read() & xor_ln416_1459_fu_91751_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1460_fu_91953_p2() {
    and_ln416_1460_fu_91953_p2 = (tmp_10171_fu_91901_p3.read() & xor_ln416_1460_fu_91947_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1461_fu_92153_p2() {
    and_ln416_1461_fu_92153_p2 = (tmp_10176_fu_92097_p3.read() & xor_ln416_1461_fu_92147_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1462_fu_92362_p2() {
    and_ln416_1462_fu_92362_p2 = (tmp_10181_fu_92310_p3.read() & xor_ln416_1462_fu_92356_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1463_fu_92562_p2() {
    and_ln416_1463_fu_92562_p2 = (tmp_10186_fu_92506_p3.read() & xor_ln416_1463_fu_92556_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1464_fu_92754_p2() {
    and_ln416_1464_fu_92754_p2 = (tmp_10191_fu_92702_p3.read() & xor_ln416_1464_fu_92748_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1465_fu_92950_p2() {
    and_ln416_1465_fu_92950_p2 = (tmp_10196_fu_92898_p3.read() & xor_ln416_1465_fu_92944_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1466_fu_93162_p2() {
    and_ln416_1466_fu_93162_p2 = (tmp_10201_fu_93106_p3.read() & xor_ln416_1466_fu_93156_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1467_fu_93386_p2() {
    and_ln416_1467_fu_93386_p2 = (tmp_10206_fu_93334_p3.read() & xor_ln416_1467_fu_93380_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1468_fu_93480_p2() {
    and_ln416_1468_fu_93480_p2 = (tmp_10211_fu_93428_p3.read() & xor_ln416_1468_fu_93474_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1469_fu_93676_p2() {
    and_ln416_1469_fu_93676_p2 = (tmp_10216_fu_93624_p3.read() & xor_ln416_1469_fu_93670_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1470_fu_95956_p2() {
    and_ln416_1470_fu_95956_p2 = (tmp_10221_fu_95900_p3.read() & xor_ln416_1470_fu_95950_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1471_fu_96152_p2() {
    and_ln416_1471_fu_96152_p2 = (tmp_10226_fu_96100_p3.read() & xor_ln416_1471_fu_96146_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1472_fu_96375_p2() {
    and_ln416_1472_fu_96375_p2 = (tmp_10231_fu_96319_p3.read() & xor_ln416_1472_fu_96369_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1473_fu_96571_p2() {
    and_ln416_1473_fu_96571_p2 = (tmp_10236_fu_96519_p3.read() & xor_ln416_1473_fu_96565_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1474_fu_96784_p2() {
    and_ln416_1474_fu_96784_p2 = (tmp_10241_fu_96728_p3.read() & xor_ln416_1474_fu_96778_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1475_fu_96980_p2() {
    and_ln416_1475_fu_96980_p2 = (tmp_10246_fu_96928_p3.read() & xor_ln416_1475_fu_96974_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1476_fu_97172_p2() {
    and_ln416_1476_fu_97172_p2 = (tmp_10251_fu_97120_p3.read() & xor_ln416_1476_fu_97166_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1477_fu_97368_p2() {
    and_ln416_1477_fu_97368_p2 = (tmp_10256_fu_97316_p3.read() & xor_ln416_1477_fu_97362_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1478_fu_97573_p2() {
    and_ln416_1478_fu_97573_p2 = (tmp_10261_fu_97521_p3.read() & xor_ln416_1478_fu_97567_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1479_fu_97720_p2() {
    and_ln416_1479_fu_97720_p2 = (tmp_10266_fu_97668_p3.read() & xor_ln416_1479_fu_97714_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1480_fu_97818_p2() {
    and_ln416_1480_fu_97818_p2 = (tmp_10271_fu_97766_p3.read() & xor_ln416_1480_fu_97812_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1481_fu_97916_p2() {
    and_ln416_1481_fu_97916_p2 = (tmp_10276_fu_97864_p3.read() & xor_ln416_1481_fu_97910_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1482_fu_98117_p2() {
    and_ln416_1482_fu_98117_p2 = (tmp_10281_fu_98065_p3.read() & xor_ln416_1482_fu_98111_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1483_fu_98313_p2() {
    and_ln416_1483_fu_98313_p2 = (tmp_10286_fu_98261_p3.read() & xor_ln416_1483_fu_98307_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1484_fu_98505_p2() {
    and_ln416_1484_fu_98505_p2 = (tmp_10291_fu_98453_p3.read() & xor_ln416_1484_fu_98499_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1485_fu_98715_p2() {
    and_ln416_1485_fu_98715_p2 = (tmp_10296_fu_98659_p3.read() & xor_ln416_1485_fu_98709_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1486_fu_98915_p2() {
    and_ln416_1486_fu_98915_p2 = (tmp_10301_fu_98859_p3.read() & xor_ln416_1486_fu_98909_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1487_fu_99115_p2() {
    and_ln416_1487_fu_99115_p2 = (tmp_10306_fu_99059_p3.read() & xor_ln416_1487_fu_99109_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1488_fu_99311_p2() {
    and_ln416_1488_fu_99311_p2 = (tmp_10311_fu_99259_p3.read() & xor_ln416_1488_fu_99305_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1489_fu_101710_p2() {
    and_ln416_1489_fu_101710_p2 = (tmp_10316_fu_101658_p3.read() & xor_ln416_1489_fu_101704_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1490_fu_101906_p2() {
    and_ln416_1490_fu_101906_p2 = (tmp_10321_fu_101854_p3.read() & xor_ln416_1490_fu_101900_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1491_fu_102102_p2() {
    and_ln416_1491_fu_102102_p2 = (tmp_10326_fu_102050_p3.read() & xor_ln416_1491_fu_102096_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_1492_fu_102294_p2() {
    and_ln416_1492_fu_102294_p2 = (tmp_10331_fu_102242_p3.read() & xor_ln416_1492_fu_102288_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln416_fu_57294_p2() {
    and_ln416_fu_57294_p2 = (tmp_9541_fu_57238_p3.read() & xor_ln416_fu_57288_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1335_fu_57530_p2() {
    and_ln785_1335_fu_57530_p2 = (or_ln785_1358_fu_57524_p2.read() & xor_ln779_1335_fu_57504_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1336_fu_57730_p2() {
    and_ln785_1336_fu_57730_p2 = (or_ln785_1359_fu_57724_p2.read() & xor_ln779_1336_fu_57704_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1337_fu_57930_p2() {
    and_ln785_1337_fu_57930_p2 = (or_ln785_1360_fu_57924_p2.read() & xor_ln779_1337_fu_57904_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1338_fu_58174_p2() {
    and_ln785_1338_fu_58174_p2 = (or_ln785_1361_fu_58168_p2.read() & xor_ln779_1338_fu_58148_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1339_fu_58370_p2() {
    and_ln785_1339_fu_58370_p2 = (or_ln785_1362_fu_58364_p2.read() & xor_ln779_1339_fu_58344_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1340_fu_58570_p2() {
    and_ln785_1340_fu_58570_p2 = (or_ln785_1363_fu_58564_p2.read() & xor_ln779_1340_fu_58544_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1341_fu_58788_p2() {
    and_ln785_1341_fu_58788_p2 = (or_ln785_1364_fu_58782_p2.read() & xor_ln779_1341_fu_58762_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1342_fu_58996_p2() {
    and_ln785_1342_fu_58996_p2 = (or_ln785_1365_fu_58990_p2.read() & xor_ln779_1342_fu_58970_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1343_fu_59188_p2() {
    and_ln785_1343_fu_59188_p2 = (or_ln785_1366_fu_59182_p2.read() & xor_ln779_1343_fu_59162_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1344_fu_59384_p2() {
    and_ln785_1344_fu_59384_p2 = (or_ln785_1367_fu_59378_p2.read() & xor_ln779_1344_fu_59358_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1345_fu_59584_p2() {
    and_ln785_1345_fu_59584_p2 = (or_ln785_1368_fu_59578_p2.read() & xor_ln779_1345_fu_59558_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1346_fu_59796_p2() {
    and_ln785_1346_fu_59796_p2 = (or_ln785_1369_fu_59790_p2.read() & xor_ln779_1346_fu_59770_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1347_fu_59988_p2() {
    and_ln785_1347_fu_59988_p2 = (or_ln785_1370_fu_59982_p2.read() & xor_ln779_1347_fu_59962_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1348_fu_60180_p2() {
    and_ln785_1348_fu_60180_p2 = (or_ln785_1371_fu_60174_p2.read() & xor_ln779_1348_fu_60154_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1349_fu_60372_p2() {
    and_ln785_1349_fu_60372_p2 = (or_ln785_1372_fu_60366_p2.read() & xor_ln779_1349_fu_60346_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1350_fu_60639_p2() {
    and_ln785_1350_fu_60639_p2 = (or_ln785_1373_fu_60633_p2.read() & xor_ln779_1350_fu_60613_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1351_fu_62744_p2() {
    and_ln785_1351_fu_62744_p2 = (or_ln785_1374_fu_62739_p2.read() & xor_ln779_1351_fu_62724_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1352_fu_60933_p2() {
    and_ln785_1352_fu_60933_p2 = (or_ln785_1375_fu_60927_p2.read() & xor_ln779_1352_fu_60907_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1353_fu_61133_p2() {
    and_ln785_1353_fu_61133_p2 = (or_ln785_1376_fu_61127_p2.read() & xor_ln779_1353_fu_61107_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1354_fu_61345_p2() {
    and_ln785_1354_fu_61345_p2 = (or_ln785_1377_fu_61339_p2.read() & xor_ln779_1354_fu_61319_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1355_fu_62835_p2() {
    and_ln785_1355_fu_62835_p2 = (or_ln785_1378_fu_62830_p2.read() & xor_ln779_1355_fu_62815_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1356_fu_61639_p2() {
    and_ln785_1356_fu_61639_p2 = (or_ln785_1379_fu_61633_p2.read() & xor_ln779_1356_fu_61613_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1357_fu_61839_p2() {
    and_ln785_1357_fu_61839_p2 = (or_ln785_1380_fu_61833_p2.read() & xor_ln779_1357_fu_61813_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1358_fu_63051_p2() {
    and_ln785_1358_fu_63051_p2 = (or_ln785_1381_fu_63045_p2.read() & xor_ln779_1358_fu_63025_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1359_fu_63251_p2() {
    and_ln785_1359_fu_63251_p2 = (or_ln785_1382_fu_63245_p2.read() & xor_ln779_1359_fu_63225_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1360_fu_63447_p2() {
    and_ln785_1360_fu_63447_p2 = (or_ln785_1383_fu_63441_p2.read() & xor_ln779_1360_fu_63421_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1361_fu_63647_p2() {
    and_ln785_1361_fu_63647_p2 = (or_ln785_1384_fu_63641_p2.read() & xor_ln779_1361_fu_63621_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1362_fu_63898_p2() {
    and_ln785_1362_fu_63898_p2 = (or_ln785_1385_fu_63892_p2.read() & xor_ln779_1362_fu_63872_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1363_fu_64098_p2() {
    and_ln785_1363_fu_64098_p2 = (or_ln785_1386_fu_64092_p2.read() & xor_ln779_1363_fu_64072_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1364_fu_64294_p2() {
    and_ln785_1364_fu_64294_p2 = (or_ln785_1387_fu_64288_p2.read() & xor_ln779_1364_fu_64268_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1365_fu_64486_p2() {
    and_ln785_1365_fu_64486_p2 = (or_ln785_1388_fu_64480_p2.read() & xor_ln779_1365_fu_64460_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1366_fu_64698_p2() {
    and_ln785_1366_fu_64698_p2 = (or_ln785_1389_fu_64692_p2.read() & xor_ln779_1366_fu_64672_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1367_fu_64898_p2() {
    and_ln785_1367_fu_64898_p2 = (or_ln785_1390_fu_64892_p2.read() & xor_ln779_1367_fu_64872_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1368_fu_65094_p2() {
    and_ln785_1368_fu_65094_p2 = (or_ln785_1391_fu_65088_p2.read() & xor_ln779_1368_fu_65068_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1369_fu_65294_p2() {
    and_ln785_1369_fu_65294_p2 = (or_ln785_1392_fu_65288_p2.read() & xor_ln779_1369_fu_65268_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1370_fu_69535_p2() {
    and_ln785_1370_fu_69535_p2 = (or_ln785_1393_fu_69530_p2.read() & xor_ln779_1370_fu_69515_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1371_fu_65635_p2() {
    and_ln785_1371_fu_65635_p2 = (or_ln785_1394_fu_65629_p2.read() & xor_ln779_1371_fu_65609_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1372_fu_65835_p2() {
    and_ln785_1372_fu_65835_p2 = (or_ln785_1395_fu_65829_p2.read() & xor_ln779_1372_fu_65809_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1373_fu_66035_p2() {
    and_ln785_1373_fu_66035_p2 = (or_ln785_1396_fu_66029_p2.read() & xor_ln779_1373_fu_66009_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1374_fu_66247_p2() {
    and_ln785_1374_fu_66247_p2 = (or_ln785_1397_fu_66241_p2.read() & xor_ln779_1374_fu_66221_p2.read());
}

void conv_1d_cl_array_ap_fixed_8u_array_ap_fixed_28_16_1_0_0_4u_config8_s::thread_and_ln785_1375_fu_66447_p2() {
    and_ln785_1375_fu_66447_p2 = (or_ln785_1398_fu_66441_p2.read() & xor_ln779_1375_fu_66421_p2.read());
}

}

