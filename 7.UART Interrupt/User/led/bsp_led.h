#ifndef __BSP_LED_H
#define __BSP_LED_H

#include "stm32f10x.h"

#define LED_0_GPIO_PIN    GPIO_Pin_5
#define LED_0_GPIO_PORT   GPIOB
#define LED_0_GPIO_CLK    RCC_APB2Periph_GPIOB

#define ON    1
#define OFF   0

// \ C语言续行符，后面不能有任何东西
#define LED_0(a)   if(a) GPIO_ResetBits(LED_0_GPIO_PORT, LED_0_GPIO_PIN); \
                   else  GPIO_SetBits(LED_0_GPIO_PORT, LED_0_GPIO_PIN);
									 
void LED_GPIO_Config(void);

#endif /* __BSP_LED_H */
