#include "LM35/lm35.h"
#include "ADC/adc.h"

uint16 LM35_getTemperature(void){
    uint16 adc_value = ADC_readChannel(1);
    return (uint16)((adc_value * 2.56 * 100.0) / 1023.0);
}

