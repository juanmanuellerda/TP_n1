/*
 * bsp.h
 *
 *  Created on: 11 de ago. de 2016
 *      Author: LCSR-AF
 */

#ifndef BSPTP1_BSPTP1_H_
#define BSPTP1_BSPTP1_H_

#include "stdint.h"

#define LEDS_PORT GPIOB

enum{
	LED_ROJO,
	LED_VERDE,
	LED_AZUL
}leds;


#define EXP_BOARD_POT_PIN				   GPIO_PIN_2
#define EXP_BOARD_POT_PORT                   GPIOC
#define EXP_BOARD_POT_PIN_CLK_ENABLE()           __GPIOC_CLK_ENABLE()
#define EXP_BOARD_POT_ADC_CLK_ENABLE()		__ADC1_CLK_ENABLE()
#define EXP_BOARD_POT_CLK_DISABLE()          __GPIOB_CLK_DISABLE()
#define EXP_BOARD_POT_CHANNEL				   ADC_CHANNEL_12


void BSP_Init(void);

void BSP_ADC_Init(void);

uint8_t BSP_GetBrightness(void);

void led_setBrightRojo(uint8_t ledRojo, uint8_t value);

void led_setBrightVerde(uint8_t ledVerde, uint8_t value);

void led_setBrightAzul(uint8_t ledAzul, uint8_t value);

#endif /* BSPTP1_BSPTP1_H_ */
