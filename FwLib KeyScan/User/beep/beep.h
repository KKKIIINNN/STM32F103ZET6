#ifndef __BEEP_H
#define __BEEP_H

#include "stm32f10x.h"

#define BEEP_GPIO_PIN    GPIO_Pin_8
#define BEEP_GPIO_PORT   GPIOB
#define BEEP_GPIO_CLK    RCC_APB2Periph_GPIOB

#define ON    1
#define OFF   0

#define BEEP_TOGGLE   {BEEP_GPIO_PORT->ODR ^= BEEP_GPIO_PIN;}

#define BEEP(a)   if(a) GPIO_ResetBits(GPIOB, GPIO_Pin_8); \
                   else  GPIO_SetBits(GPIOB, GPIO_Pin_8);

void BEEP_GPIO_Config(void);
	
#endif /* __BEEP_H */
