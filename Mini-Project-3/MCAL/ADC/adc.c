#include "ADC/adc.h"

void ADC_init(void){
    ADMUX = (1<<REFS1)|(1<<REFS0);
    ADCSRA = (1<<ADEN)|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);
}

uint16 ADC_readChannel(uint8 channel_num){
    ADMUX = (ADMUX & 0xF0) | (channel_num & 0x0F);
    ADCSRA |= (1<<ADSC);
    while(ADCSRA & (1<<ADSC));
    return ADC;
}
