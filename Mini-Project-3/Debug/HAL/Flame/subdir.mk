################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/Flame/flame.c 

OBJS += \
./HAL/Flame/flame.o 

C_DEPS += \
./HAL/Flame/flame.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/Flame/%.o: ../HAL/Flame/%.c HAL/Flame/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"W:\eclipse repo\Mini-Project-3\HAL" -I"W:\eclipse repo\Mini-Project-3\APP" -I"W:\eclipse repo\Mini-Project-3\LIB" -I"W:\eclipse repo\Mini-Project-3\MCAL" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


