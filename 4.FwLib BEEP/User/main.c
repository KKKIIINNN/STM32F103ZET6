#include "stm32f10x.h"
#include "beep.h"

void Delay(uint32_t i)
{
	for(; i!=0; i--);
}

int main(void)
{
	BEEP_GPIO_Config();
	while(1)
	{
		BEEP(ON);
		Delay(0xFFFFF);
		BEEP(OFF);
		Delay(0xFFFFF);
	}
	
}
