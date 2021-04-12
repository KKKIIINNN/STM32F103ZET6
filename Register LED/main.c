#include "stm32f10x.h"

int main(void)
{
	
	//打开GPIO_B和GPIO_E端口时钟
	
	*(unsigned int *)0x40021018 |= (9<<3);
	
	//设置PB5、PE5为推挽输出模式
	
	*(unsigned int *)0x40010C00 |= (1<<21);
	*(unsigned int *)0x40011800 |= (1<<21);
	
	//设置BSRR寄存器
	
	*(unsigned int *)0x40010C10 |= (1<<21);
	*(unsigned int *)0x40011810 |= (1<<21);
	
}
