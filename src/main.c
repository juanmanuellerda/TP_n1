/**
 ******************************************************************************
 * @file    main.c
 * @author  Ac6
 * @version V1.0
 * @date    01-December-2013
 * @brief   Default main function.
 ******************************************************************************
 */

#include "bspTP1/bspTP1.h"

uint8_t colorRGB = 0;

int main(void) {

	BSP_Init(); //llamo a la función de configuración del micro

	while (1) {

		colorRGB = BSP_GetBrightness(); //leo el ADC/posición del potenciometro y lo guardo en brighness

		led_setBrightRojo(LED_ROJO, colorRGB); //llamo a la funcion de la curva de cada color, le paso el "color del LED" y la posición porcentual del potenciometro
		led_setBrightVerde(LED_VERDE, colorRGB); //idem anterio
		led_setBrightAzul(LED_AZUL, colorRGB); //idem a anterior
		}
}

