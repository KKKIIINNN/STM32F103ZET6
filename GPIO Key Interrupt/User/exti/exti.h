#ifndef   __EXTI_H
#define   __EXTI_H

#include "stm32f10x.h"

#define KEY_INT_GPIO_PIN    GPIO_Pin_3
#define KEY_INT_GPIO_PORT   GPIOE
#define KEY_INT_GPIO_CLK    RCC_APB2Periph_GPIOE

void EXTI_Key_Config(void);
#endif   /* __EXTI_H */
