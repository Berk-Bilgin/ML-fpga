#include <iostream>

#include "Encoder.h"
#include "parameters.h"

void Encoder(
    hls::stream<input_t> &input_time_series,
    hls::stream<result_t> &layer17_out
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS INTERFACE axis port=input_time_series,layer17_out 
    #pragma HLS DATAFLOW 

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        // hls-fpga-machine-learning insert load weights
        nnet::load_weights_from_txt<weight2_t, 24>(w2, "w2.txt");
        nnet::load_weights_from_txt<bias2_t, 8>(b2, "b2.txt");
        nnet::load_weights_from_txt<weight5_t, 320>(w5, "w5.txt");
        nnet::load_weights_from_txt<bias5_t, 8>(b5, "b5.txt");
        nnet::load_weights_from_txt<weight8_t, 160>(w8, "w8.txt");
        nnet::load_weights_from_txt<bias8_t, 4>(b8, "b8.txt");
        nnet::load_weights_from_txt<weight11_t, 80>(w11, "w11.txt");
        nnet::load_weights_from_txt<bias11_t, 4>(b11, "b11.txt");
        nnet::load_weights_from_txt<weight15_t, 1024>(w15, "w15.txt");
        nnet::load_weights_from_txt<bias15_t, 16>(b15, "b15.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers

    hls::stream<layer18_t> layer18_out("layer18_out");
    #pragma HLS STREAM variable=layer18_out depth=66
    nnet::zeropad1d_cl<input_t, layer18_t, config18>(input_time_series, layer18_out); // zp1d_q_conv1d_16

    hls::stream<layer2_t> layer2_out("layer2_out");
    #pragma HLS STREAM variable=layer2_out depth=64
    nnet::conv_1d_cl<layer18_t, layer2_t, config2>(layer18_out, layer2_out, w2, b2); // q_conv1d_16

    hls::stream<layer19_t> layer19_out("layer19_out");
    #pragma HLS STREAM variable=layer19_out depth=68
    nnet::zeropad1d_cl<layer2_t, layer19_t, config19>(layer2_out, layer19_out); // zp1d_q_conv1d_17

    hls::stream<layer5_t> layer5_out("layer5_out");
    #pragma HLS STREAM variable=layer5_out depth=64
    nnet::conv_1d_cl<layer19_t, layer5_t, config5>(layer19_out, layer5_out, w5, b5); // q_conv1d_17

    hls::stream<layer20_t> layer20_out("layer20_out");
    #pragma HLS STREAM variable=layer20_out depth=67
    nnet::zeropad1d_cl<layer5_t, layer20_t, config20>(layer5_out, layer20_out); // zp1d_q_conv1d_18

    hls::stream<layer8_t> layer8_out("layer8_out");
    #pragma HLS STREAM variable=layer8_out depth=32
    nnet::conv_1d_cl<layer20_t, layer8_t, config8>(layer20_out, layer8_out, w8, b8); // q_conv1d_18

    hls::stream<layer21_t> layer21_out("layer21_out");
    #pragma HLS STREAM variable=layer21_out depth=35
    nnet::zeropad1d_cl<layer8_t, layer21_t, config21>(layer8_out, layer21_out); // zp1d_q_conv1d_19

    hls::stream<layer11_t> layer11_out("layer11_out");
    #pragma HLS STREAM variable=layer11_out depth=16
    nnet::conv_1d_cl<layer21_t, layer11_t, config11>(layer21_out, layer11_out, w11, b11); // q_conv1d_19

    auto& layer14_out = layer11_out;
    hls::stream<layer15_t> layer15_out("layer15_out");
    #pragma HLS STREAM variable=layer15_out depth=1
    nnet::dense<layer11_t, layer15_t, config15>(layer14_out, layer15_out, w15, b15); // q_dense_4

    nnet::linear<layer15_t, result_t, linear_config17>(layer15_out, layer17_out); // q_activation_24

}
