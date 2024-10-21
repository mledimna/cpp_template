/*
 * Peripheral.hpp
 *
 *  Created on: Oct 21, 2024
 *      Author: mathi
 */

#ifndef CPP_PERIPHERAL_HPP_
#define CPP_PERIPHERAL_HPP_

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32l1xx_hal.h"

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

class Peripheral{
public:
	virtual HAL_StatusTypeDef on(void)=0;
	virtual HAL_StatusTypeDef off(void)=0;
};

#endif



#endif /* CPP_PERIPHERAL_HPP_ */
