#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include "ap_fixed.h"
#include "ap_int.h"

#include "nnet_utils/nnet_code_gen.h"
#include "nnet_utils/nnet_helpers.h"
// hls-fpga-machine-learning insert includes
#include "nnet_utils/nnet_activation.h"
#include "nnet_utils/nnet_activation_stream.h"
#include "nnet_utils/nnet_conv1d.h"
#include "nnet_utils/nnet_conv1d_stream.h"
#include "nnet_utils/nnet_dense.h"
#include "nnet_utils/nnet_dense_compressed.h"
#include "nnet_utils/nnet_dense_stream.h"
#include "nnet_utils/nnet_padding.h"
#include "nnet_utils/nnet_padding_stream.h"

// hls-fpga-machine-learning insert weights
#include "weights/w2.h"
#include "weights/b2.h"
#include "weights/w5.h"
#include "weights/b5.h"
#include "weights/w8.h"
#include "weights/b8.h"
#include "weights/w11.h"
#include "weights/b11.h"
#include "weights/w15.h"
#include "weights/b15.h"

// hls-fpga-machine-learning insert layer-config
// zp1d_q_conv1d_4
struct config18 : nnet::padding1d_config {
    static const unsigned in_width = 64;
    static const unsigned n_chan = 1;
    static const unsigned out_width = 66;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// q_conv1d_4
struct config2_mult : nnet::dense_config {
    static const unsigned n_in = 3;
    static const unsigned n_out = 8;
    static const unsigned reuse_factor = 3;
    static const unsigned strategy = nnet::resource;
    static const unsigned n_zeros = 0;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    typedef model_default_t accum_t;
    typedef bias2_t bias_t;
    typedef weight2_t weight_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

struct config2 : nnet::conv1d_config {
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_width = 66;
    static const unsigned n_chan = 1;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_width;
    static const unsigned n_filt = 8;
    static const unsigned stride_width = 1;
    static const unsigned dilation = 1;
    static const unsigned out_width = 64;
    static const unsigned reuse_factor = 3;
    static const unsigned n_zeros = 0;
    static const unsigned multiplier_limit =
        DIV_ROUNDUP(kernel_size * n_chan * n_filt, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_width = 5;
    static const ap_uint<filt_width> pixels[min_width];
    static const unsigned n_partitions = 64;
    static const unsigned n_pixels = out_width / n_partitions;
    template<class data_T, class CONFIG_T>
    using fill_buffer = nnet::FillConv1DBuffer<data_T, CONFIG_T>;
    typedef model_default_t accum_t;
    typedef bias2_t bias_t;
    typedef weight2_t weight_t;
    typedef config2_mult mult_config;
    template<unsigned K, unsigned S, unsigned W>
    using scale_index = nnet::scale_index_regular<K, S, W>;
};
const ap_uint<config2::filt_width> config2::pixels[] = {1,3,7,6,4};

// zp1d_q_conv1d_5
struct config19 : nnet::padding1d_config {
    static const unsigned in_width = 64;
    static const unsigned n_chan = 8;
    static const unsigned out_width = 68;
    static const unsigned pad_left = 2;
    static const unsigned pad_right = 2;
};

// q_conv1d_5
struct config5_mult : nnet::dense_config {
    static const unsigned n_in = 40;
    static const unsigned n_out = 8;
    static const unsigned reuse_factor = 2;
    static const unsigned strategy = nnet::resource;
    static const unsigned n_zeros = 4;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    typedef model_default_t accum_t;
    typedef bias5_t bias_t;
    typedef weight5_t weight_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

struct config5 : nnet::conv1d_config {
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_width = 68;
    static const unsigned n_chan = 8;
    static const unsigned filt_width = 5;
    static const unsigned kernel_size = filt_width;
    static const unsigned n_filt = 8;
    static const unsigned stride_width = 1;
    static const unsigned dilation = 1;
    static const unsigned out_width = 64;
    static const unsigned reuse_factor = 2;
    static const unsigned n_zeros = 4;
    static const unsigned multiplier_limit =
        DIV_ROUNDUP(kernel_size * n_chan * n_filt, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_width = 9;
    static const ap_uint<filt_width> pixels[min_width];
    static const unsigned n_partitions = 64;
    static const unsigned n_pixels = out_width / n_partitions;
    template<class data_T, class CONFIG_T>
    using fill_buffer = nnet::FillConv1DBuffer<data_T, CONFIG_T>;
    typedef model_default_t accum_t;
    typedef bias5_t bias_t;
    typedef weight5_t weight_t;
    typedef config5_mult mult_config;
    template<unsigned K, unsigned S, unsigned W>
    using scale_index = nnet::scale_index_regular<K, S, W>;
};
const ap_uint<config5::filt_width> config5::pixels[] = {1,3,7,15,31,30,28,24,16};

// zp1d_q_conv1d_6
struct config20 : nnet::padding1d_config {
    static const unsigned in_width = 64;
    static const unsigned n_chan = 8;
    static const unsigned out_width = 67;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 2;
};

// q_conv1d_6
struct config8_mult : nnet::dense_config {
    static const unsigned n_in = 40;
    static const unsigned n_out = 4;
    static const unsigned reuse_factor = 2;
    static const unsigned strategy = nnet::resource;
    static const unsigned n_zeros = 2;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    typedef model_default_t accum_t;
    typedef bias8_t bias_t;
    typedef weight8_t weight_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

struct config8 : nnet::conv1d_config {
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_width = 67;
    static const unsigned n_chan = 8;
    static const unsigned filt_width = 5;
    static const unsigned kernel_size = filt_width;
    static const unsigned n_filt = 4;
    static const unsigned stride_width = 2;
    static const unsigned dilation = 1;
    static const unsigned out_width = 32;
    static const unsigned reuse_factor = 2;
    static const unsigned n_zeros = 2;
    static const unsigned multiplier_limit =
        DIV_ROUNDUP(kernel_size * n_chan * n_filt, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_width = 9;
    static const ap_uint<filt_width> pixels[min_width];
    static const unsigned n_partitions = 32;
    static const unsigned n_pixels = out_width / n_partitions;
    template<class data_T, class CONFIG_T>
    using fill_buffer = nnet::FillConv1DBuffer<data_T, CONFIG_T>;
    typedef model_default_t accum_t;
    typedef bias8_t bias_t;
    typedef weight8_t weight_t;
    typedef config8_mult mult_config;
    template<unsigned K, unsigned S, unsigned W>
    using scale_index = nnet::scale_index_regular<K, S, W>;
};
const ap_uint<config8::filt_width> config8::pixels[] = {1,2,5,10,21,10,20,8,16};

// zp1d_q_conv1d_7
struct config21 : nnet::padding1d_config {
    static const unsigned in_width = 32;
    static const unsigned n_chan = 4;
    static const unsigned out_width = 35;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 2;
};

// q_conv1d_7
struct config11_mult : nnet::dense_config {
    static const unsigned n_in = 20;
    static const unsigned n_out = 4;
    static const unsigned reuse_factor = 2;
    static const unsigned strategy = nnet::resource;
    static const unsigned n_zeros = 1;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    typedef model_default_t accum_t;
    typedef bias11_t bias_t;
    typedef weight11_t weight_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

struct config11 : nnet::conv1d_config {
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_width = 35;
    static const unsigned n_chan = 4;
    static const unsigned filt_width = 5;
    static const unsigned kernel_size = filt_width;
    static const unsigned n_filt = 4;
    static const unsigned stride_width = 2;
    static const unsigned dilation = 1;
    static const unsigned out_width = 16;
    static const unsigned reuse_factor = 2;
    static const unsigned n_zeros = 1;
    static const unsigned multiplier_limit =
        DIV_ROUNDUP(kernel_size * n_chan * n_filt, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_width = 9;
    static const ap_uint<filt_width> pixels[min_width];
    static const unsigned n_partitions = 16;
    static const unsigned n_pixels = out_width / n_partitions;
    template<class data_T, class CONFIG_T>
    using fill_buffer = nnet::FillConv1DBuffer<data_T, CONFIG_T>;
    typedef model_default_t accum_t;
    typedef bias11_t bias_t;
    typedef weight11_t weight_t;
    typedef config11_mult mult_config;
    template<unsigned K, unsigned S, unsigned W>
    using scale_index = nnet::scale_index_regular<K, S, W>;
};
const ap_uint<config11::filt_width> config11::pixels[] = {1,2,5,10,21,10,20,8,16};

// q_dense_1
struct config15 : nnet::dense_config {
    static const unsigned n_in = 64;
    static const unsigned n_out = 16;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 2;
    static const unsigned n_zeros = 15;
    static const unsigned n_nonzeros = 1009;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef bias15_t bias_t;
    typedef weight15_t weight_t;
    typedef layer15_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// q_activation_8
struct linear_config17 : nnet::activ_config {
    static const unsigned n_in = 16;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 3;
    typedef q_activation_8_table_t table_t;
};


#endif
