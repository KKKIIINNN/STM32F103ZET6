#ifndef __KEY_H
#define __KEY_H

#include "stm32f10x.h"

#define KEY_1_GPIO_PIN    GPIO_Pin_4
#define KEY_1_GPIO_PORT   GPIOE
#define KEY_1_GPIO_CLK    RCC_APB2Periph_GPIOE

#define KEY_ON      1
#define KEY_OFF     0

void Key_Config(void);
uint8_t Key_Scan( GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin );

#endif /* __KEY_H */
