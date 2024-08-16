#ifndef ENCODER_H_
#define ENCODER_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "hls_stream.h"

#include "defines.h"

// Prototype of top level function for C-synthesis
void Encoder(
    hls::stream<input_t> &input_time_series,
    hls::stream<result_t> &layer17_out
);

#endif
