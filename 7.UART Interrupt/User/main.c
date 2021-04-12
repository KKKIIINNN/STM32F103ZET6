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
	USART_Config();
	//Usart_SendByte(DEBUG_USARTx, 'A');
	//Usart_SendHalfWord(DEBUG_USARTx, 0xff56);
	//Usart_SendArray(DEBUG_USARTx, a, 10);
	//Usart_SendStr(DEBUG_USARTx, "fuck \n");
	
	//printf("Fuck you \n");
	//putchar('p');
	
	while(1)
	{

	}
}
