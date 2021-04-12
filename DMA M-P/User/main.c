#include "stm32f10x.h"
#include "bsp_led.h"
#include "dma_mtp.h"

extern uint8_t SendBuff[SENDBUFF_SIZE];

void Delay(uint32_t i)
{
	for(; i!=0; i--);
}

int main(void)
{
	uint16_t i=0;
  LED_0_GPIO_Config();
	LED_1_GPIO_Config();
	
	for( i=0; i<SENDBUFF_SIZE; i++ )
	{
		SendBuff[i] = 'p';
	}
	
	USART_Config();
  USARTx_DMA_Config();
	USART_DMACmd(DEBUG_USARTx, USART_DMAReq_Tx, ENABLE);
	while(1)
	{
		//GPIO_SetBits(LED_0_GPIO_PORT, LED_0_GPIO_PIN);
		LED_0(ON);LED_1(ON);
		Delay(0xFFFFF);
		//GPIO_ResetBits(LED_0_GPIO_PORT, LED_0_GPIO_PIN);
		LED_0(OFF);LED_1(OFF);
		Delay(0xFFFFF);
	}
}
