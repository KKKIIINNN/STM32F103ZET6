#include "stm32f10x.h"
#include "bsp_led.h"
#include "dma_mtm.h"

extern const uint32_t aSRC_Const_Buffer[BUFFER_SIZE];
extern uint32_t aDST_Buffer[BUFFER_SIZE];
void Delay(uint32_t i)
{
	for(; i!=0; i--);
}

int main(void)
{
	uint8_t status=0;
  LED_0_GPIO_Config();
	LED_1_GPIO_Config();
  LED_1(ON);
	MtM_DMA_Config();
	status=Buffercmp(aSRC_Const_Buffer, aDST_Buffer, BUFFER_SIZE);
	if( status==0 )
	{
		LED_0(OFF);
	}
	else
	{
		LED_0(ON);
	}
	while(1)
	{

	}
}
