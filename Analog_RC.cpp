#include "Analog_RC.h"


Analog_RC::Analog_RC(float f_c, float sampleTime){
    
    //compute RC from cutoff frequency
    
    float RC = 1.0/(2*3.1415*f_c);
    coeff[0] = sampleTime/(sampleTime+RC);
    coeff[1] = RC/(sampleTime+RC);
    
    }


float Analog_RC::filter_update(float inp){

    //shift output sample
    out[1]=out[0];
    out[0] = coeff[0]*inp + coeff[1]*out[1];

    return (out[0]); 

}

