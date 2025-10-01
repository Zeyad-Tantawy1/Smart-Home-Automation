#ifndef LCD_H_
#define LCD_H_

#include <avr/io.h>
#include "std_types.h"

void LCD_init(void);
void LCD_sendCommand(uint8 cmd);
void LCD_displayChar(uint8 data);
void LCD_displayString(const char *Str);
void LCD_goToRowColumn(uint8 row,uint8 col);
void LCD_displayStringRowColumn(uint8 row,uint8 col,const char *Str);
void LCD_clearScreen(void);

#endif
