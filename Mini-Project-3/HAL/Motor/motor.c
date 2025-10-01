#include "Motor/motor.h"
#include "PWM/pwm.h"
#include <avr/io.h>

#define IN1 PB0
#define IN2 PB1

void DcMotor_Init(void){
    DDRB |= (1<<IN1)|(1<<IN2);
    PORTB &= ~((1<<IN1)|(1<<IN2));
}

void DcMotor_Rotate(DcMotor_State state,uint8 speed){
    switch(state){
        case STOP: PORTB &= ~((1<<IN1)|(1<<IN2)); break;
        case CW: PORTB |= (1<<IN1); PORTB &= ~(1<<IN2); break;
        case ACW: PORTB |= (1<<IN2); PORTB &= ~(1<<IN1); break;
    }
    PWM_Timer0_Start(speed);
}
