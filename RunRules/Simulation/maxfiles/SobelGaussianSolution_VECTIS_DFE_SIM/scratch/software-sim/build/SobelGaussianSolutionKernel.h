#ifndef SOBELGAUSSIANSOLUTIONKERNEL_H_
#define SOBELGAUSSIANSOLUTIONKERNEL_H_

// #include "KernelManagerBlockSync.h"


namespace maxcompilersim {

class SobelGaussianSolutionKernel : public KernelManagerBlockSync {
public:
  SobelGaussianSolutionKernel(const std::string &instance_name);

protected:
  virtual void runComputationCycle();
  virtual void resetComputation();
  virtual void resetComputationAfterFlush();
          void updateState();
          void preExecute();
  virtual int  getFlushLevelStart();

private:
  t_port_number m_inImage;
  t_port_number m_outImage;
  HWOffsetFix<1,0,UNSIGNED> id94out_io_outImage_force_disabled;

  HWOffsetFix<1,0,UNSIGNED> id75out_value;

  HWOffsetFix<10,0,UNSIGNED> id141out_value;

  HWOffsetFix<9,0,UNSIGNED> id79out_count;
  HWOffsetFix<1,0,UNSIGNED> id79out_wrap;

  HWOffsetFix<10,0,UNSIGNED> id79st_count;

  HWOffsetFix<9,0,UNSIGNED> id140out_value;

  HWOffsetFix<1,0,UNSIGNED> id81out_result[2];

  HWOffsetFix<9,0,UNSIGNED> id139out_value;

  HWOffsetFix<1,0,UNSIGNED> id83out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id84out_result[2];

  HWOffsetFix<10,0,UNSIGNED> id138out_value;

  HWOffsetFix<9,0,UNSIGNED> id77out_count;
  HWOffsetFix<1,0,UNSIGNED> id77out_wrap;

  HWOffsetFix<10,0,UNSIGNED> id77st_count;

  HWOffsetFix<9,0,UNSIGNED> id137out_value;

  HWOffsetFix<1,0,UNSIGNED> id86out_result[2];

  HWOffsetFix<9,0,UNSIGNED> id136out_value;

  HWOffsetFix<1,0,UNSIGNED> id88out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id89out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id90out_result[2];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id91out_value;

  HWOffsetFix<1,0,UNSIGNED> id0out_io_inImage_force_disabled;

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id2out_data;

  HWOffsetFix<1,0,UNSIGNED> id2st_read_next_cycle;
  HWOffsetFix<32,0,TWOSCOMPLEMENT> id2st_last_read_value;

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id122out_output[3];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id130out_output[251];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id131out_output[2];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id55out_result[7];

  HWOffsetFix<35,0,TWOSCOMPLEMENT> id111out_result[2];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id8out_result[2];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id123out_output[258];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id124out_output[256];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id15out_result[2];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id17out_result[2];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id60out_result[2];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id129out_output[2];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id135out_value;

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id62out_result[2];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id63out_result[7];

  HWOffsetFix<35,0,TWOSCOMPLEMENT> id116out_result[2];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id128out_output[2];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id134out_value;

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id67out_result[2];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id70out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id71out_result[2];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id73out_value;

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id72out_value;

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id74out_result[2];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id92out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id102out_value;

  HWOffsetFix<1,0,UNSIGNED> id133out_value;

  HWOffsetFix<49,0,UNSIGNED> id99out_value;

  HWOffsetFix<48,0,UNSIGNED> id100out_count;
  HWOffsetFix<1,0,UNSIGNED> id100out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id100st_count;

  HWOffsetFix<1,0,UNSIGNED> id132out_value;

  HWOffsetFix<49,0,UNSIGNED> id105out_value;

  HWOffsetFix<48,0,UNSIGNED> id106out_count;
  HWOffsetFix<1,0,UNSIGNED> id106out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id106st_count;

  HWOffsetFix<48,0,UNSIGNED> id108out_run_cycle_count;

  HWOffsetFix<1,0,UNSIGNED> id109out_result[2];

  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_bits;
  const HWOffsetFix<10,0,UNSIGNED> c_hw_fix_10_0_uns_bits;
  const HWOffsetFix<10,0,UNSIGNED> c_hw_fix_10_0_uns_bits_1;
  const HWOffsetFix<10,0,UNSIGNED> c_hw_fix_10_0_uns_bits_2;
  const HWOffsetFix<9,0,UNSIGNED> c_hw_fix_9_0_uns_bits;
  const HWOffsetFix<9,0,UNSIGNED> c_hw_fix_9_0_uns_bits_1;
  const HWOffsetFix<32,0,TWOSCOMPLEMENT> c_hw_fix_32_0_sgn_bits;
  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_bits_1;
  const HWOffsetFix<32,0,TWOSCOMPLEMENT> c_hw_fix_32_0_sgn_undef;
  const HWOffsetFix<32,0,TWOSCOMPLEMENT> c_hw_fix_32_0_sgn_bits_1;
  const HWOffsetFix<32,0,TWOSCOMPLEMENT> c_hw_fix_32_0_sgn_bits_2;
  const HWOffsetFix<32,0,TWOSCOMPLEMENT> c_hw_fix_32_0_sgn_bits_3;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_1;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_2;

  void execute0();
};

}

#endif /* SOBELGAUSSIANSOLUTIONKERNEL_H_ */
