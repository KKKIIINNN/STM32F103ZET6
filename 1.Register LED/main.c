#include "stm32f10x.h"

int main(void)
{
	
	//��GPIO_B��GPIO_E�˿�ʱ��
	
	*(unsigned int *)0x40021018 |= (9<<3);
	
	//����PB5��PE5Ϊ�������ģʽ
	
	*(unsigned int *)0x40010C00 |= (1<<21);
	*(unsigned int *)0x40011800 |= (1<<21);
	
	//����BSRR�Ĵ���
	
	*(unsigned int *)0x40010C10 |= (1<<21);
	*(unsigned int *)0x40011810 |= (1<<21);
	
}
