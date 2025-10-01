#include "LDR/ldr.h"
#include "ADC/adc.h"

uint16 LDR_getLightIntensity(void){
    uint16 adc_value = ADC_readChannel(0);
    return (uint16)((adc_value*100UL)/1023UL);
}
