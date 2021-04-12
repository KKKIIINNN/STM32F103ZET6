#include "stm32f10x.h"
#include "bsp_led.h"
#include "uart.h"
#include "stdio.h"

/* void Delay(uint32_t i)
{
	for(; i!=0; i--);
}
*/
int main(void)
{
	//uint8_t a[10]={1,2,3,4,5,6,7,8,9,10};
	uint8_t ch;
	USART_Config();
	LED_0_GPIO_Config();
	LED_1_GPIO_Config();
	LED_0(OFF);
	LED_1(OFF);
	//Usart_SendByte(DEBUG_USARTx, 'A');
	//Usart_SendHalfWord(DEBUG_USARTx, 0xff56);
	//Usart_SendArray(DEBUG_USARTx, a, 10);
	//Usart_SendStr(DEBUG_USARTx, "fuck \n");
	
	//printf("Fuck you \n");
	//putchar('p');
	
	while(1)
	{
		ch = getchar();
		//printf("ch=%c \n",ch);
		
		switch(ch)
		{
			case '1': LED_0(ON);LED_1(OFF);
				break;
			case '2': LED_0(OFF);LED_1(ON);
				break;
			case '3': LED_0(ON);LED_1(ON);
				break;
			case '4': LED_0(OFF);LED_1(OFF);
				break;
			default : LED_0(OFF);LED_1(OFF);
		}
	}
}
