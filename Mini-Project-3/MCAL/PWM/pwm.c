#include "PWM/pwm.h"

void PWM_Timer0_Start(uint8 duty_cycle){
    DDRB |= (1<<PB3);
    TCNT0 = 0;
    OCR0 = (uint8)((duty_cycle*255)/100);
    TCCR0 = (1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS02)|(1<<CS00);
}
