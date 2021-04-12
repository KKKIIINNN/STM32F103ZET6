#include "stm32f10x.h"
#include "bsp_led.h"

void Delay(uint32_t i)
{
	for(; i!=0; i--);
}

int main(void)
{
  LED_GPIO_Config();
	while(1)
	{
		//GPIO_SetBits(LED_0_GPIO_PORT, LED_0_GPIO_PIN);
		LED_0(ON)
		Delay(0xFFFFF);
		//GPIO_ResetBits(LED_0_GPIO_PORT, LED_0_GPIO_PIN);
		LED_0(OFF)
		Delay(0xFFFFF);
	}
}
