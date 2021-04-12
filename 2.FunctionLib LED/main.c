#include "stm32f10x.h"

int main(void)
{
	//打开GPIO_B和GPIO_E端口时钟
	
	RCC_APB2ENR |= (9<<3);
	
	//设置PB5、PE5为推挽输出模式
	
	GPIOB->CRL |= (1<<21);
	GPIOE->CRL |= (1<<21);
	
	//设置BSRR寄存器
	//开灯
	GPIOB->ODR &= ~(1<<5);
	GPIOE->ODR &= ~(1<<5);
	//关灯
	//GPIOB->ODR |= (1<<5);
	//GPIOE->ODR |= (1<<5);

	
}
