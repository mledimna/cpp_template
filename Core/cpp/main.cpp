/*
 * main_cpp.cpp
 *
 *  Created on: Oct 16, 2024
 *      Author: mathi
 */
#include <main.hpp>
#include "main.h"
#include "GPIO.hpp"

void main_cpp(void){
	// User C++ code
	HAL_StatusTypeDef LED_Status = HAL_OK;
	GPIO LD0(LD0_GPIO_Port, LD0_Pin);

	LED_Status = LD0.on();
	if (LED_Status != HAL_OK) printf("AAAAAAAAAAAAAH\r\n");

	LD0.write(GPIO_PIN_SET);

	LED_Status = LD0.off();
	if (LED_Status != HAL_OK) printf("AAAAAAAAAAAAAH\r\n");

	while(1) {
		__NOP();
	}
}


