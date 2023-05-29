/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.9 and Signal Processing Toolbox 8.5.
 * Generated on: 29-May-2023 16:09:10
 */

/*
 * Discrete-Time IIR Filter (real)
 * -------------------------------
 * Filter Structure    : Direct-Form II
 * Numerator Length    : 11
 * Denominator Length  : 11
 * Stable              : Yes
 * Linear Phase        : No
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * C:\Program Files\Polyspace\R2020b\extern\include\tmwtypes.h 
 */
const int NL = 11;
const real64_T NUM[11] = {
  0.0001617473181233,-0.001074019480271, 0.003114119242312,-0.004950859247234,
   0.004046702531021,                 0,-0.004046702531021, 0.004950859247234,
  -0.003114119242312, 0.001074019480271,-0.0001617473181233
};
const int DL = 11;
const real64_T DEN[11] = {
                   1,   -9.255477660553,    38.75394932459,   -96.66585022917,
      159.0627898676,   -180.4133472244,     142.845522274,   -77.96041134568,
      28.06922596168,   -6.020651950302,   0.5842511077529
};
