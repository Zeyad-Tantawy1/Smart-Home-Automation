#ifndef GPIO_H_
#define GPIO_H_

#include <avr/io.h>
#include "std_types.h"

void GPIO_setupPinDirection(uint8 port_num, uint8 pin_num, uint8 direction);
void GPIO_writePin(uint8 port_num, uint8 pin_num, uint8 value);
uint8 GPIO_readPin(uint8 port_num, uint8 pin_num);

#endif
