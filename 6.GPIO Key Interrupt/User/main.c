#include "stm32f10x.h"
#include "beep.h"
#include "led.h"
#include "exti.h"


void Delay(uint32_t i)
{
	for(; i!=0; i--);
}

int main(void)
{
	BEEP_GPIO_Config();
	LED_GPIO_Config();
	EXTI_Key_Config();
		
	while(1)
	{
		
	}
	
}
