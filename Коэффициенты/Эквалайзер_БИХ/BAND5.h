/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.9 and Signal Processing Toolbox 8.5.
 * Generated on: 29-May-2023 00:25:31
 */

/*
 * Discrete-Time IIR Filter (real)
 * -------------------------------
 * Filter Structure    : Direct-Form II
 * Numerator Length    : 37
 * Denominator Length  : 37
 * Stable              : Yes
 * Linear Phase        : No
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * C:\Program Files\Polyspace\R2020b\extern\include\tmwtypes.h 
 */
const int NL = 37;
const real64_T NUM[37] = {
   0.001187373762976, 0.009444282828852,  0.03651624180235,  0.09546777461801,
     0.1990591731582,   0.3582093479124,   0.5662683507447,    0.793497030795,
       1.00912715199,    1.182366379123,    1.270825348454,    1.257866489848,
      1.168313368115,    1.017591948501,   0.8208536051118,   0.6337636062986,
     0.4928220991634,   0.3897333957104,   0.3459359598288,   0.3897333957104,
     0.4928220991634,   0.6337636062986,   0.8208536051118,    1.017591948501,
      1.168313368115,    1.257866489848,    1.270825348454,    1.182366379122,
       1.00912715199,    0.793497030795,   0.5662683507447,   0.3582093479124,
     0.1990591731582,  0.09546777461801,  0.03651624180235, 0.009444282828852,
   0.001187373762976
};
const int DL = 37;
const real64_T DEN[37] = {
                   1,    10.30371595508,    55.92833316308,    211.2651817533,
      621.2360999552,    1508.823381206,    3136.967880866,    5715.740969248,
      9277.624098338,    13575.72824732,    18067.55206385,    22017.40557567,
      24694.74726145,    25593.86323055,    24584.95243494,    21937.03678716,
      18211.67719672,    14080.67542228,    10143.99467036,    6809.297380267,
      4256.850488487,     2475.91735629,    1337.783290064,    670.0809807485,
      310.2875117936,    132.3613407245,    51.78166352358,    18.47391876739,
      5.967382751314,    1.729102261032,   0.4440884246872,  0.09948841887128,
    0.01899651660199, 0.002994837407037,0.0003802561217438, 3.92146143425e-05,
  2.865490805505e-06
};
