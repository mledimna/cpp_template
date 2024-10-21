/*
 * GPIO.hpp
 *
 *  Created on: Oct 21, 2024
 *      Author: mathi
 */

#ifndef CPP_GPIO_HPP_
#define CPP_GPIO_HPP_


#ifdef __cplusplus
extern "C" {
#endif

#include "stm32l1xx_hal.h"
#include <stdio.h>

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
#include "Peripheral.hpp"

class GPIO : public Peripheral{
public:
	// GPIO_TypeDef  *GPIOx, GPIO_InitTypeDef *GPIO_Init
	GPIO(GPIO_TypeDef *_port, uint16_t _pin);

	HAL_StatusTypeDef on(void) override;
	HAL_StatusTypeDef off(void) override;

	void write(GPIO_PinState _state);

private:
	GPIO_TypeDef * port = NULL;
	uint16_t pin = GPIO_PIN_0;
};

#endif


#endif /* CPP_GPIO_HPP_ */
