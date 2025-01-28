/*
 * WS2812B_LIBRARY.h
 *
 *  Created on: Jan 28, 2025
 *      Author: HP
 */

#ifndef INC_WS2812B_LIBRARY_H_
#define INC_WS2812B_LIBRARY_H_

#include "stm32f1xx_hal.h"
#include "main.h"

void Set_LED (int LEDnum, int Red, int Green, int Blue);
void Set_Brightness (int brightness);
void WS2812_Send (void);
#endif /* INC_WS2812B_LIBRARY_H_ */
