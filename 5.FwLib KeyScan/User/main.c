#include "stm32f10x.h"
#include "led.h"
#include "key.h"
#include "beep.h"

int main(void)
{
	LED_GPIO_Config();
	BEEP_GPIO_Config();
	Key_Config();
	
	while(1)
	{
		if( Key_Scan( KEY_1_GPIO_PORT, KEY_1_GPIO_PIN ) == KEY_ON )
			LED_0_TOGGLE;
		  BEEP_TOGGLE;
	}
    
}
