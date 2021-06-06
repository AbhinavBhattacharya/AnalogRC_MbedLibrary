#ifndef ANALOG_RC_H
#define ANALOG_RC_H
 
#include "mbed.h"

class Analog_RC{
    Analog_RC(float f_c, float T_s);
    float coeff[2];
    float out[2];
    public:
    float filter_update(float inp);
    };

#endif
