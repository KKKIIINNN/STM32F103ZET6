#include "stm32f10x.h"

int main(void)
{
	//��GPIO_B��GPIO_E�˿�ʱ��
	
	RCC_APB2ENR |= (9<<3);
	
	//����PB5��PE5Ϊ�������ģʽ
	
	GPIOB->CRL |= (1<<21);
	GPIOE->CRL |= (1<<21);
	
	//����BSRR�Ĵ���
	//����
	GPIOB->ODR &= ~(1<<5);
	GPIOE->ODR &= ~(1<<5);
	//�ص�
	//GPIOB->ODR |= (1<<5);
	//GPIOE->ODR |= (1<<5);

	
}
