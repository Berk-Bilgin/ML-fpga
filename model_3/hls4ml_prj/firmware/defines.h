#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

// hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 64
#define N_INPUT_2_1 1
#define OUT_WIDTH_18 66
#define N_CHAN_18 1
#define N_OUTPUTS_2 64
#define N_FILT_2 8
#define OUT_WIDTH_19 68
#define N_CHAN_19 8
#define N_OUTPUTS_5 64
#define N_FILT_5 8
#define OUT_WIDTH_20 67
#define N_CHAN_20 8
#define N_OUTPUTS_8 32
#define N_FILT_8 4
#define OUT_WIDTH_21 35
#define N_CHAN_21 4
#define N_OUTPUTS_11 16
#define N_FILT_11 4
#define N_SIZE_0_14 64
#define N_LAYER_15 16
#define N_LAYER_15 16

// hls-fpga-machine-learning insert layer-precision
typedef nnet::array<ap_int<16>, 1*1> input_t;
typedef nnet::array<ap_int<16>, 1*1> layer18_t;
typedef ap_fixed<24,16,AP_RND,AP_SAT> model_default_t;
typedef nnet::array<ap_fixed<24,16,AP_RND,AP_SAT>, 8*1> layer2_t;
typedef ap_fixed<8,1> weight2_t;
typedef ap_fixed<8,1> bias2_t;
typedef nnet::array<ap_fixed<24,16,AP_RND,AP_SAT>, 8*1> layer19_t;
typedef nnet::array<ap_fixed<24,16,AP_RND,AP_SAT>, 8*1> layer5_t;
typedef ap_fixed<8,1> weight5_t;
typedef ap_fixed<8,1> bias5_t;
typedef nnet::array<ap_fixed<24,16,AP_RND,AP_SAT>, 8*1> layer20_t;
typedef nnet::array<ap_fixed<24,16,AP_RND,AP_SAT>, 4*1> layer8_t;
typedef ap_fixed<8,1> weight8_t;
typedef ap_fixed<8,1> bias8_t;
typedef nnet::array<ap_fixed<24,16,AP_RND,AP_SAT>, 4*1> layer21_t;
typedef nnet::array<ap_fixed<24,16,AP_RND,AP_SAT>, 4*1> layer11_t;
typedef ap_fixed<8,1> weight11_t;
typedef ap_fixed<8,1> bias11_t;
typedef nnet::array<ap_fixed<24,16,AP_RND,AP_SAT>, 16*1> layer15_t;
typedef ap_fixed<8,1> weight15_t;
typedef ap_fixed<8,1> bias15_t;
typedef ap_uint<1> layer15_index;
typedef nnet::array<ap_fixed<16,16,AP_RND,AP_SAT>, 16*1> result_t;
typedef ap_fixed<18,8> q_activation_8_table_t;

#endif
