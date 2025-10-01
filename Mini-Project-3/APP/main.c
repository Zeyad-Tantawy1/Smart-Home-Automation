#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include "ADC/adc.h"
#include "LCD/lcd.h"
#include "LED/led.h"
#include "Motor/motor.h"
#include "Buzzer/buzzer.h"
#include "Flame/flame.h"
#include "LDR/ldr.h"
#include "LM35/lm35.h"

int main(void){
    char buffer[16];
    ADC_init();
    LCD_init();
    LEDS_init();
    DcMotor_Init();
    Buzzer_init();
    FlameSensor_init();

    while(1){
        uint16 temp = LM35_getTemperature();
        uint16 ldr  = LDR_getLightIntensity();
        uint8 flame = FlameSensor_getValue();

        if(temp>=40) DcMotor_Rotate(CW,100);
        else if(temp>=35) DcMotor_Rotate(CW,75);
        else if(temp>=30) DcMotor_Rotate(CW,50);
        else if(temp>=25) DcMotor_Rotate(CW,25);
        else DcMotor_Rotate(STOP,0);

        if(ldr<15){ LED_on(RED_LED); LED_on(GREEN_LED); LED_on(BLUE_LED); }
        else if(ldr<=50){ LED_on(RED_LED); LED_on(GREEN_LED); LED_off(BLUE_LED); }
        else if(ldr<=70){ LED_on(RED_LED); LED_off(GREEN_LED); LED_off(BLUE_LED); }
        else { LED_off(RED_LED); LED_off(GREEN_LED); LED_off(BLUE_LED); }

        LCD_clearScreen();
        if(temp>=25) LCD_displayStringRowColumn(0,0,"FAN is ON");
        else LCD_displayStringRowColumn(0,0,"FAN is OFF");
        sprintf(buffer,"Temp=%uC LDR=%u%%",temp,ldr);
        LCD_displayStringRowColumn(1,0,buffer);

        if(flame == 1) {
            Buzzer_on();
            LCD_clearScreen();
            LCD_displayStringRowColumn(0,0,"Critical alert!");
        } else {
            Buzzer_off();
        }


        _delay_ms(500);
    }
}
