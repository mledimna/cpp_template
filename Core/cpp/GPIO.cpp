/*
 * GPIO.cpp
 *
 *  Created on: Oct 21, 2024
 *      Author: mathi
 */

#include "GPIO.hpp"

GPIO::GPIO(GPIO_TypeDef *_port, uint16_t _pin) :
		port(_port), pin(_pin) {
	printf("Creating class GPIO %p with pin %d\r\n", this->port, this->pin);
}

void GPIO::write(GPIO_PinState _state){
	HAL_GPIO_WritePin(this->port, this->pin, _state);
}

HAL_StatusTypeDef GPIO::on(void) {
	HAL_StatusTypeDef ret = HAL_OK;

	GPIO_InitTypeDef gpio_init = {0};

	// Activate peripheral clock
	if(this->port == GPIOA) __HAL_RCC_GPIOA_CLK_ENABLE();
	else if(this->port == GPIOB) __HAL_RCC_GPIOB_CLK_ENABLE();
	else if(this->port == GPIOC) __HAL_RCC_GPIOC_CLK_ENABLE();
	else if(this->port == GPIOD) __HAL_RCC_GPIOD_CLK_ENABLE();
	else if(this->port == GPIOH) __HAL_RCC_GPIOH_CLK_ENABLE();
	else return HAL_ERROR;

	// Init peripheral registers
	gpio_init.Pin = this->pin;
	gpio_init.Mode = GPIO_MODE_OUTPUT_PP;
	gpio_init.Alternate = 0;
	gpio_init.Pull = GPIO_NOPULL;
	gpio_init.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(this->port, &gpio_init);

	return ret;
}

HAL_StatusTypeDef GPIO::off(void) {
	HAL_StatusTypeDef ret = HAL_OK;
	HAL_GPIO_DeInit(this->port, this->pin);
	return ret;
}
