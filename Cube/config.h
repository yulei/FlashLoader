/**
 * @file config.h
 * @author astro
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once

#include "stm32f4xx_hal.h"

#define FlashCS_Pin GPIO_PIN_4
#define FlashCS_GPIO_Port GPIOA

extern SPI_HandleTypeDef hspi1;

void fl411_init(void);
void fl_udelay(const uint32_t usec);
void fl_mdelay(const uint32_t msec);
