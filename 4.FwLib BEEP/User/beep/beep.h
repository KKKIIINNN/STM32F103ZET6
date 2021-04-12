#ifndef __BEEP_H
#define __BEEP_H

#include "stm32f10x.h"

#define ON    1
#define OFF   0

#define BEEP(a)   if(a) GPIO_ResetBits(GPIOB, GPIO_Pin_8); \
                   else  GPIO_SetBits(GPIOB, GPIO_Pin_8);

void BEEP_GPIO_Config(void);
	
#endif /* __BEEP_H */
