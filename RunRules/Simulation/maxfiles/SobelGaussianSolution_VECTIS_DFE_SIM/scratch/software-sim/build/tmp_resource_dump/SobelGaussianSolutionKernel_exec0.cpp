#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SobelGaussianSolutionKernel.h"

namespace maxcompilersim {

void SobelGaussianSolutionKernel::execute0() {
  { // Node ID: 94 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id95out_result;

  { // Node ID: 95 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id95in_a = id94out_io_outImage_force_disabled;

    id95out_result = (not_fixed(id95in_a));
  }
  { // Node ID: 75 (NodeConstantRawBits)
  }
  { // Node ID: 141 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (270l)))
  { // Node ID: 79 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id79in_enable = id75out_value;
    const HWOffsetFix<10,0,UNSIGNED> &id79in_max = id141out_value;

    HWOffsetFix<10,0,UNSIGNED> id79x_1;
    HWOffsetFix<1,0,UNSIGNED> id79x_2;
    HWOffsetFix<1,0,UNSIGNED> id79x_3;
    HWOffsetFix<10,0,UNSIGNED> id79x_4t_1e_1;

    id79out_count = (cast_fixed2fixed<9,0,UNSIGNED,TRUNCATE>((id79st_count)));
    (id79x_1) = (add_fixed<10,0,UNSIGNED,TRUNCATE>((id79st_count),(c_hw_fix_10_0_uns_bits_2)));
    (id79x_2) = (gte_fixed((id79x_1),id79in_max));
    (id79x_3) = (and_fixed((id79x_2),id79in_enable));
    id79out_wrap = (id79x_3);
    if((id79in_enable.getValueAsBool())) {
      if(((id79x_3).getValueAsBool())) {
        (id79st_count) = (c_hw_fix_10_0_uns_bits_1);
      }
      else {
        (id79x_4t_1e_1) = (id79x_1);
        (id79st_count) = (id79x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 140 (NodeConstantRawBits)
  }
  { // Node ID: 81 (NodeGt)
    const HWOffsetFix<9,0,UNSIGNED> &id81in_a = id79out_count;
    const HWOffsetFix<9,0,UNSIGNED> &id81in_b = id140out_value;

    id81out_result[(getCycle()+1)%2] = (gt_fixed(id81in_a,id81in_b));
  }
  { // Node ID: 139 (NodeConstantRawBits)
  }
  { // Node ID: 83 (NodeLt)
    const HWOffsetFix<9,0,UNSIGNED> &id83in_a = id79out_count;
    const HWOffsetFix<9,0,UNSIGNED> &id83in_b = id139out_value;

    id83out_result[(getCycle()+1)%2] = (lt_fixed(id83in_a,id83in_b));
  }
  { // Node ID: 84 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id84in_a = id81out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id84in_b = id83out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id84x_1;

    (id84x_1) = (and_fixed(id84in_a,id84in_b));
    id84out_result[(getCycle()+1)%2] = (id84x_1);
  }
  { // Node ID: 138 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (270l)))
  { // Node ID: 77 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id77in_enable = id79out_wrap;
    const HWOffsetFix<10,0,UNSIGNED> &id77in_max = id138out_value;

    HWOffsetFix<10,0,UNSIGNED> id77x_1;
    HWOffsetFix<1,0,UNSIGNED> id77x_2;
    HWOffsetFix<1,0,UNSIGNED> id77x_3;
    HWOffsetFix<10,0,UNSIGNED> id77x_4t_1e_1;

    id77out_count = (cast_fixed2fixed<9,0,UNSIGNED,TRUNCATE>((id77st_count)));
    (id77x_1) = (add_fixed<10,0,UNSIGNED,TRUNCATE>((id77st_count),(c_hw_fix_10_0_uns_bits_2)));
    (id77x_2) = (gte_fixed((id77x_1),id77in_max));
    (id77x_3) = (and_fixed((id77x_2),id77in_enable));
    id77out_wrap = (id77x_3);
    if((id77in_enable.getValueAsBool())) {
      if(((id77x_3).getValueAsBool())) {
        (id77st_count) = (c_hw_fix_10_0_uns_bits_1);
      }
      else {
        (id77x_4t_1e_1) = (id77x_1);
        (id77st_count) = (id77x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 137 (NodeConstantRawBits)
  }
  { // Node ID: 86 (NodeGt)
    const HWOffsetFix<9,0,UNSIGNED> &id86in_a = id77out_count;
    const HWOffsetFix<9,0,UNSIGNED> &id86in_b = id137out_value;

    id86out_result[(getCycle()+1)%2] = (gt_fixed(id86in_a,id86in_b));
  }
  { // Node ID: 136 (NodeConstantRawBits)
  }
  { // Node ID: 88 (NodeLt)
    const HWOffsetFix<9,0,UNSIGNED> &id88in_a = id77out_count;
    const HWOffsetFix<9,0,UNSIGNED> &id88in_b = id136out_value;

    id88out_result[(getCycle()+1)%2] = (lt_fixed(id88in_a,id88in_b));
  }
  { // Node ID: 89 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id89in_a = id86out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id89in_b = id88out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id89x_1;

    (id89x_1) = (and_fixed(id89in_a,id89in_b));
    id89out_result[(getCycle()+1)%2] = (id89x_1);
  }
  { // Node ID: 90 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id90in_a = id84out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id90in_b = id89out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id90x_1;

    (id90x_1) = (and_fixed(id90in_a,id90in_b));
    id90out_result[(getCycle()+1)%2] = (id90x_1);
  }
  { // Node ID: 91 (NodeConstantRawBits)
  }
  { // Node ID: 0 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id1out_result;

  { // Node ID: 1 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1in_a = id0out_io_inImage_force_disabled;

    id1out_result = (not_fixed(id1in_a));
  }
  if ( (getFillLevel() >= (4l)))
  { // Node ID: 2 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id2in_enable = id1out_result;

    (id2st_read_next_cycle) = ((id2in_enable.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    queueReadRequest(m_inImage, id2st_read_next_cycle.getValueAsBool());
  }
  { // Node ID: 122 (NodeFIFO)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id122in_input = id2out_data;

    id122out_output[(getCycle()+2)%3] = id122in_input;
  }
  { // Node ID: 130 (NodeFIFO)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id130in_input = id122out_output[getCycle()%3];

    id130out_output[(getCycle()+250)%251] = id130in_input;
  }
  { // Node ID: 131 (NodeFIFO)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id131in_input = id130out_output[getCycle()%251];

    id131out_output[(getCycle()+1)%2] = id131in_input;
  }
  { // Node ID: 55 (NodeMul)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id55in_a = id131out_output[getCycle()%2];
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id55in_b = id131out_output[getCycle()%2];

    id55out_result[(getCycle()+6)%7] = (mul_fixed<32,0,TWOSCOMPLEMENT,TONEAREVEN>(id55in_a,id55in_b));
  }
  HWOffsetFix<32,2,TWOSCOMPLEMENT> id110out_output;

  { // Node ID: 110 (NodeReinterpret)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id110in_input = id55out_result[getCycle()%7];

    id110out_output = (cast_bits2fixed<32,2,TWOSCOMPLEMENT>((cast_fixed2bits(id110in_input))));
  }
  { // Node ID: 111 (NodeAdd)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id111in_a = id55out_result[getCycle()%7];
    const HWOffsetFix<32,2,TWOSCOMPLEMENT> &id111in_b = id110out_output;

    id111out_result[(getCycle()+1)%2] = (add_fixed<35,0,TWOSCOMPLEMENT,TONEAREVEN>(id111in_a,id111in_b));
  }
  HWOffsetFix<32,0,TWOSCOMPLEMENT> id112out_o;

  { // Node ID: 112 (NodeCast)
    const HWOffsetFix<35,0,TWOSCOMPLEMENT> &id112in_i = id111out_result[getCycle()%2];

    id112out_o = (cast_fixed2fixed<32,0,TWOSCOMPLEMENT,TONEAREVEN>(id112in_i));
  }
  HWOffsetFix<32,0,TWOSCOMPLEMENT> id5out_output;

  { // Node ID: 5 (NodeStreamOffset)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id5in_input = id2out_data;

    id5out_output = id5in_input;
  }
  HWOffsetFix<32,0,TWOSCOMPLEMENT> id7out_output;

  { // Node ID: 7 (NodeStreamOffset)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id7in_input = id122out_output[getCycle()%3];

    id7out_output = id7in_input;
  }
  { // Node ID: 8 (NodeAdd)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id8in_a = id5out_output;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id8in_b = id7out_output;

    id8out_result[(getCycle()+1)%2] = (add_fixed<32,0,TWOSCOMPLEMENT,TONEAREVEN>(id8in_a,id8in_b));
  }
  HWOffsetFix<32,0,TWOSCOMPLEMENT> id12out_output;

  { // Node ID: 12 (NodeStreamOffset)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id12in_input = id8out_result[getCycle()%2];

    id12out_output = id12in_input;
  }
  { // Node ID: 123 (NodeFIFO)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id123in_input = id8out_result[getCycle()%2];

    id123out_output[(getCycle()+257)%258] = id123in_input;
  }
  HWOffsetFix<32,0,TWOSCOMPLEMENT> id14out_output;

  { // Node ID: 14 (NodeStreamOffset)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id14in_input = id123out_output[getCycle()%258];

    id14out_output = id14in_input;
  }
  { // Node ID: 124 (NodeFIFO)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id124in_input = id14out_output;

    id124out_output[(getCycle()+255)%256] = id124in_input;
  }
  { // Node ID: 15 (NodeAdd)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id15in_a = id12out_output;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id15in_b = id124out_output[getCycle()%256];

    id15out_result[(getCycle()+1)%2] = (add_fixed<32,0,TWOSCOMPLEMENT,TONEAREVEN>(id15in_a,id15in_b));
  }
  { // Node ID: 17 (NodeAdd)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id17in_a = id15out_result[getCycle()%2];
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id17in_b = id123out_output[getCycle()%258];

    id17out_result[(getCycle()+1)%2] = (add_fixed<32,0,TWOSCOMPLEMENT,TONEAREVEN>(id17in_a,id17in_b));
  }
  HWOffsetFix<32,1,TWOSCOMPLEMENT> id113out_output;

  { // Node ID: 113 (NodeReinterpret)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id113in_input = id17out_result[getCycle()%2];

    id113out_output = (cast_bits2fixed<32,1,TWOSCOMPLEMENT>((cast_fixed2bits(id113in_input))));
  }
  HWOffsetFix<32,0,TWOSCOMPLEMENT> id114out_o;

  { // Node ID: 114 (NodeCast)
    const HWOffsetFix<32,1,TWOSCOMPLEMENT> &id114in_i = id113out_output;

    id114out_o = (cast_fixed2fixed<32,0,TWOSCOMPLEMENT,TONEAREVEN>(id114in_i));
  }
  { // Node ID: 60 (NodeSub)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id60in_a = id112out_o;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id60in_b = id114out_o;

    id60out_result[(getCycle()+1)%2] = (sub_fixed<32,0,TWOSCOMPLEMENT,TONEAREVEN>(id60in_a,id60in_b));
  }
  { // Node ID: 129 (NodeFIFO)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id129in_input = id60out_result[getCycle()%2];

    id129out_output[(getCycle()+1)%2] = id129in_input;
  }
  { // Node ID: 135 (NodeConstantRawBits)
  }
  { // Node ID: 62 (NodeSub)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id62in_a = id135out_value;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id62in_b = id130out_output[getCycle()%251];

    id62out_result[(getCycle()+1)%2] = (sub_fixed<32,0,TWOSCOMPLEMENT,TONEAREVEN>(id62in_a,id62in_b));
  }
  { // Node ID: 63 (NodeMul)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id63in_a = id131out_output[getCycle()%2];
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id63in_b = id62out_result[getCycle()%2];

    id63out_result[(getCycle()+6)%7] = (mul_fixed<32,0,TWOSCOMPLEMENT,TONEAREVEN>(id63in_a,id63in_b));
  }
  HWOffsetFix<32,2,TWOSCOMPLEMENT> id115out_output;

  { // Node ID: 115 (NodeReinterpret)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id115in_input = id63out_result[getCycle()%7];

    id115out_output = (cast_bits2fixed<32,2,TWOSCOMPLEMENT>((cast_fixed2bits(id115in_input))));
  }
  { // Node ID: 116 (NodeAdd)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id116in_a = id63out_result[getCycle()%7];
    const HWOffsetFix<32,2,TWOSCOMPLEMENT> &id116in_b = id115out_output;

    id116out_result[(getCycle()+1)%2] = (add_fixed<35,0,TWOSCOMPLEMENT,TONEAREVEN>(id116in_a,id116in_b));
  }
  HWOffsetFix<32,0,TWOSCOMPLEMENT> id117out_o;

  { // Node ID: 117 (NodeCast)
    const HWOffsetFix<35,0,TWOSCOMPLEMENT> &id117in_i = id116out_result[getCycle()%2];

    id117out_o = (cast_fixed2fixed<32,0,TWOSCOMPLEMENT,TONEAREVEN>(id117in_i));
  }
  { // Node ID: 128 (NodeFIFO)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id128in_input = id117out_o;

    id128out_output[(getCycle()+1)%2] = id128in_input;
  }
  { // Node ID: 134 (NodeConstantRawBits)
  }
  { // Node ID: 67 (NodeSub)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id67in_a = id134out_value;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id67in_b = id17out_result[getCycle()%2];

    id67out_result[(getCycle()+1)%2] = (sub_fixed<32,0,TWOSCOMPLEMENT,TONEAREVEN>(id67in_a,id67in_b));
  }
  HWOffsetFix<32,1,TWOSCOMPLEMENT> id118out_output;

  { // Node ID: 118 (NodeReinterpret)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id118in_input = id67out_result[getCycle()%2];

    id118out_output = (cast_bits2fixed<32,1,TWOSCOMPLEMENT>((cast_fixed2bits(id118in_input))));
  }
  HWOffsetFix<32,0,TWOSCOMPLEMENT> id119out_o;

  { // Node ID: 119 (NodeCast)
    const HWOffsetFix<32,1,TWOSCOMPLEMENT> &id119in_i = id118out_output;

    id119out_o = (cast_fixed2fixed<32,0,TWOSCOMPLEMENT,TONEAREVEN>(id119in_i));
  }
  { // Node ID: 70 (NodeSub)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id70in_a = id128out_output[getCycle()%2];
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id70in_b = id119out_o;

    id70out_result[(getCycle()+1)%2] = (sub_fixed<32,0,TWOSCOMPLEMENT,TONEAREVEN>(id70in_a,id70in_b));
  }
  { // Node ID: 71 (NodeLt)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id71in_a = id129out_output[getCycle()%2];
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id71in_b = id70out_result[getCycle()%2];

    id71out_result[(getCycle()+1)%2] = (lt_fixed(id71in_a,id71in_b));
  }
  { // Node ID: 73 (NodeConstantRawBits)
  }
  { // Node ID: 72 (NodeConstantRawBits)
  }
  { // Node ID: 74 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id74in_sel = id71out_result[getCycle()%2];
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id74in_option0 = id73out_value;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id74in_option1 = id72out_value;

    HWOffsetFix<32,0,TWOSCOMPLEMENT> id74x_1;

    switch((id74in_sel.getValueAsLong())) {
      case 0l:
        id74x_1 = id74in_option0;
        break;
      case 1l:
        id74x_1 = id74in_option1;
        break;
      default:
        id74x_1 = (c_hw_fix_32_0_sgn_undef);
        break;
    }
    id74out_result[(getCycle()+1)%2] = (id74x_1);
  }
  { // Node ID: 92 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id92in_sel = id90out_result[getCycle()%2];
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id92in_option0 = id91out_value;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id92in_option1 = id74out_result[getCycle()%2];

    HWOffsetFix<32,0,TWOSCOMPLEMENT> id92x_1;

    switch((id92in_sel.getValueAsLong())) {
      case 0l:
        id92x_1 = id92in_option0;
        break;
      case 1l:
        id92x_1 = id92in_option1;
        break;
      default:
        id92x_1 = (c_hw_fix_32_0_sgn_undef);
        break;
    }
    id92out_result[(getCycle()+1)%2] = (id92x_1);
  }
  if ( (getFillLevel() >= (274l)) && (getFlushLevel() < (274l)|| !isFlushingActive() ))
  { // Node ID: 97 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id97in_output_control = id95out_result;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id97in_data = id92out_result[getCycle()%2];

    bool id97x_1;

    (id97x_1) = ((id97in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(274l))&(isFlushingActive()))));
    if((id97x_1)) {
      writeOutput(m_outImage, id97in_data);
    }
  }
  { // Node ID: 102 (NodeConstantRawBits)
  }
  { // Node ID: 133 (NodeConstantRawBits)
  }
  { // Node ID: 99 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (3l)))
  { // Node ID: 100 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id100in_enable = id133out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id100in_max = id99out_value;

    HWOffsetFix<49,0,UNSIGNED> id100x_1;
    HWOffsetFix<1,0,UNSIGNED> id100x_2;
    HWOffsetFix<1,0,UNSIGNED> id100x_3;
    HWOffsetFix<49,0,UNSIGNED> id100x_4t_1e_1;

    id100out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id100st_count)));
    (id100x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id100st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id100x_2) = (gte_fixed((id100x_1),id100in_max));
    (id100x_3) = (and_fixed((id100x_2),id100in_enable));
    id100out_wrap = (id100x_3);
    if((id100in_enable.getValueAsBool())) {
      if(((id100x_3).getValueAsBool())) {
        (id100st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id100x_4t_1e_1) = (id100x_1);
        (id100st_count) = (id100x_4t_1e_1);
      }
    }
    else {
    }
  }
  HWOffsetFix<48,0,UNSIGNED> id101out_output;

  { // Node ID: 101 (NodeStreamOffset)
    const HWOffsetFix<48,0,UNSIGNED> &id101in_input = id100out_count;

    id101out_output = id101in_input;
  }
  if ( (getFillLevel() >= (4l)) && (getFlushLevel() < (4l)|| !isFlushingActive() ))
  { // Node ID: 103 (NodeOutputMappedReg)
    const HWOffsetFix<1,0,UNSIGNED> &id103in_load = id102out_value;
    const HWOffsetFix<48,0,UNSIGNED> &id103in_data = id101out_output;

    bool id103x_1;

    (id103x_1) = ((id103in_load.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    if((id103x_1)) {
      setMappedRegValue("current_run_cycle_count", id103in_data);
    }
  }
  { // Node ID: 132 (NodeConstantRawBits)
  }
  { // Node ID: 105 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (0l)))
  { // Node ID: 106 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id106in_enable = id132out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id106in_max = id105out_value;

    HWOffsetFix<49,0,UNSIGNED> id106x_1;
    HWOffsetFix<1,0,UNSIGNED> id106x_2;
    HWOffsetFix<1,0,UNSIGNED> id106x_3;
    HWOffsetFix<49,0,UNSIGNED> id106x_4t_1e_1;

    id106out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id106st_count)));
    (id106x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id106st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id106x_2) = (gte_fixed((id106x_1),id106in_max));
    (id106x_3) = (and_fixed((id106x_2),id106in_enable));
    id106out_wrap = (id106x_3);
    if((id106in_enable.getValueAsBool())) {
      if(((id106x_3).getValueAsBool())) {
        (id106st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id106x_4t_1e_1) = (id106x_1);
        (id106st_count) = (id106x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 108 (NodeInputMappedReg)
  }
  { // Node ID: 109 (NodeEq)
    const HWOffsetFix<48,0,UNSIGNED> &id109in_a = id106out_count;
    const HWOffsetFix<48,0,UNSIGNED> &id109in_b = id108out_run_cycle_count;

    id109out_result[(getCycle()+1)%2] = (eq_fixed(id109in_a,id109in_b));
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 107 (NodeFlush)
    const HWOffsetFix<1,0,UNSIGNED> &id107in_start = id109out_result[getCycle()%2];

    if((id107in_start.getValueAsBool())) {
      startFlushing();
    }
  }
};

};
