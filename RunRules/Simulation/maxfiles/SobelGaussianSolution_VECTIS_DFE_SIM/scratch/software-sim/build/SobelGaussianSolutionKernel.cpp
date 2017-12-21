#include "stdsimheader.h"
#include "SobelGaussianSolutionKernel.h"

namespace maxcompilersim {

SobelGaussianSolutionKernel::SobelGaussianSolutionKernel(const std::string &instance_name) : 
  ManagerBlockSync(instance_name),
  KernelManagerBlockSync(instance_name, 274, 2, 0, 0, "",1)
, c_hw_fix_1_0_uns_bits((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x1l))))
, c_hw_fix_10_0_uns_bits((HWOffsetFix<10,0,UNSIGNED>(varint_u<10>(0x100l))))
, c_hw_fix_10_0_uns_bits_1((HWOffsetFix<10,0,UNSIGNED>(varint_u<10>(0x000l))))
, c_hw_fix_10_0_uns_bits_2((HWOffsetFix<10,0,UNSIGNED>(varint_u<10>(0x001l))))
, c_hw_fix_9_0_uns_bits((HWOffsetFix<9,0,UNSIGNED>(varint_u<9>(0x000l))))
, c_hw_fix_9_0_uns_bits_1((HWOffsetFix<9,0,UNSIGNED>(varint_u<9>(0x0ffl))))
, c_hw_fix_32_0_sgn_bits((HWOffsetFix<32,0,TWOSCOMPLEMENT>(varint_u<32>(0x00000000l))))
, c_hw_fix_1_0_uns_bits_1((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x0l))))
, c_hw_fix_32_0_sgn_undef((HWOffsetFix<32,0,TWOSCOMPLEMENT>()))
, c_hw_fix_32_0_sgn_bits_1((HWOffsetFix<32,0,TWOSCOMPLEMENT>(varint_u<32>(0x00000001l))))
, c_hw_fix_32_0_sgn_bits_2((HWOffsetFix<32,0,TWOSCOMPLEMENT>(varint_u<32>(0x00000008l))))
, c_hw_fix_32_0_sgn_bits_3((HWOffsetFix<32,0,TWOSCOMPLEMENT>(varint_u<32>(0x000000ffl))))
, c_hw_fix_49_0_uns_bits((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x1000000000000l))))
, c_hw_fix_49_0_uns_bits_1((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000000l))))
, c_hw_fix_49_0_uns_bits_2((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000001l))))
{
  { // Node ID: 94 (NodeInputMappedReg)
    registerMappedRegister("io_outImage_force_disabled", Data(1));
  }
  { // Node ID: 75 (NodeConstantRawBits)
    id75out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 141 (NodeConstantRawBits)
    id141out_value = (c_hw_fix_10_0_uns_bits);
  }
  { // Node ID: 140 (NodeConstantRawBits)
    id140out_value = (c_hw_fix_9_0_uns_bits);
  }
  { // Node ID: 139 (NodeConstantRawBits)
    id139out_value = (c_hw_fix_9_0_uns_bits_1);
  }
  { // Node ID: 138 (NodeConstantRawBits)
    id138out_value = (c_hw_fix_10_0_uns_bits);
  }
  { // Node ID: 137 (NodeConstantRawBits)
    id137out_value = (c_hw_fix_9_0_uns_bits);
  }
  { // Node ID: 136 (NodeConstantRawBits)
    id136out_value = (c_hw_fix_9_0_uns_bits_1);
  }
  { // Node ID: 91 (NodeConstantRawBits)
    id91out_value = (c_hw_fix_32_0_sgn_bits);
  }
  { // Node ID: 0 (NodeInputMappedReg)
    registerMappedRegister("io_inImage_force_disabled", Data(1));
  }
  { // Node ID: 2 (NodeInput)
     m_inImage =  registerInput("inImage",0,5);
  }
  { // Node ID: 135 (NodeConstantRawBits)
    id135out_value = (c_hw_fix_32_0_sgn_bits_1);
  }
  { // Node ID: 134 (NodeConstantRawBits)
    id134out_value = (c_hw_fix_32_0_sgn_bits_2);
  }
  { // Node ID: 73 (NodeConstantRawBits)
    id73out_value = (c_hw_fix_32_0_sgn_bits);
  }
  { // Node ID: 72 (NodeConstantRawBits)
    id72out_value = (c_hw_fix_32_0_sgn_bits_3);
  }
  { // Node ID: 97 (NodeOutput)
    m_outImage = registerOutput("outImage",0 );
  }
  { // Node ID: 102 (NodeConstantRawBits)
    id102out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 133 (NodeConstantRawBits)
    id133out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 99 (NodeConstantRawBits)
    id99out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 103 (NodeOutputMappedReg)
    registerMappedRegister("current_run_cycle_count", Data(48), true);
  }
  { // Node ID: 132 (NodeConstantRawBits)
    id132out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 105 (NodeConstantRawBits)
    id105out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 108 (NodeInputMappedReg)
    registerMappedRegister("run_cycle_count", Data(48));
  }
}

void SobelGaussianSolutionKernel::resetComputation() {
  resetComputationAfterFlush();
}

void SobelGaussianSolutionKernel::resetComputationAfterFlush() {
  { // Node ID: 94 (NodeInputMappedReg)
    id94out_io_outImage_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_outImage_force_disabled");
  }
  { // Node ID: 79 (NodeCounterV1)

    (id79st_count) = (c_hw_fix_10_0_uns_bits_1);
  }
  { // Node ID: 77 (NodeCounterV1)

    (id77st_count) = (c_hw_fix_10_0_uns_bits_1);
  }
  { // Node ID: 0 (NodeInputMappedReg)
    id0out_io_inImage_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_inImage_force_disabled");
  }
  { // Node ID: 2 (NodeInput)

    (id2st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id2st_last_read_value) = (c_hw_fix_32_0_sgn_undef);
  }
  { // Node ID: 122 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id122out_output[i] = (c_hw_fix_32_0_sgn_undef);
    }
  }
  { // Node ID: 130 (NodeFIFO)

    for(int i=0; i<251; i++)
    {
      id130out_output[i] = (c_hw_fix_32_0_sgn_undef);
    }
  }
  { // Node ID: 131 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id131out_output[i] = (c_hw_fix_32_0_sgn_undef);
    }
  }
  { // Node ID: 123 (NodeFIFO)

    for(int i=0; i<258; i++)
    {
      id123out_output[i] = (c_hw_fix_32_0_sgn_undef);
    }
  }
  { // Node ID: 124 (NodeFIFO)

    for(int i=0; i<256; i++)
    {
      id124out_output[i] = (c_hw_fix_32_0_sgn_undef);
    }
  }
  { // Node ID: 129 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id129out_output[i] = (c_hw_fix_32_0_sgn_undef);
    }
  }
  { // Node ID: 128 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id128out_output[i] = (c_hw_fix_32_0_sgn_undef);
    }
  }
  { // Node ID: 100 (NodeCounterV1)

    (id100st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 106 (NodeCounterV1)

    (id106st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 108 (NodeInputMappedReg)
    id108out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void SobelGaussianSolutionKernel::updateState() {
  { // Node ID: 94 (NodeInputMappedReg)
    id94out_io_outImage_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_outImage_force_disabled");
  }
  { // Node ID: 0 (NodeInputMappedReg)
    id0out_io_inImage_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_inImage_force_disabled");
  }
  { // Node ID: 108 (NodeInputMappedReg)
    id108out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void SobelGaussianSolutionKernel::preExecute() {
  { // Node ID: 2 (NodeInput)
    if(((needsToReadInput(m_inImage))&(((getFlushLevel())<((4l)+(5)))|(!(isFlushingActive()))))) {
      (id2st_last_read_value) = (readInput<HWOffsetFix<32,0,TWOSCOMPLEMENT> >(m_inImage));
    }
    id2out_data = (id2st_last_read_value);
  }
}

void SobelGaussianSolutionKernel::runComputationCycle() {
  if (m_mappedElementsChanged) {
    m_mappedElementsChanged = false;
    updateState();
    std::cout << "SobelGaussianSolutionKernel: Mapped Elements Changed: Reloaded" << std::endl;
  }
  preExecute();
  execute0();
}

int SobelGaussianSolutionKernel::getFlushLevelStart() {
  return ((1l)+(3l));
}

}
