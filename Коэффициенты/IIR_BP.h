/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.9 and Signal Processing Toolbox 8.5.
 * Generated on: 22-May-2023 20:05:46
 */

/*
 * Discrete-Time IIR Filter (real)
 * -------------------------------
 * Filter Structure    : Direct-Form II
 * Numerator Length    : 13
 * Denominator Length  : 13
 * Stable              : Yes
 * Linear Phase        : No
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * C:\Program Files\Polyspace\R2020b\extern\include\tmwtypes.h 
 */
const int NL = 13;
const real64_T NUM[13] = {
  0.0001094121489672,-0.001169444304055, 0.005831739854419, -0.01797278937861,
    0.03818599420524, -0.05899943894389,   0.0680290528374, -0.05899943894389,
    0.03818599420524, -0.01797278937861, 0.005831739854419,-0.001169444304055,
  0.0001094121489672
};
const int DL = 13;
const real64_T DEN[13] = {
                   1,   -11.31597635198,    58.98074258964,   -187.2237227519,
      403.0978087271,   -620.1230874924,     698.946669827,   -581.5483573272,
      354.5087106516,   -154.4141688569,    45.61926648432,   -8.208139750746,
     0.6802542668519
};
