
#include<stdio.h>
#define Base_Address_RCC  0x40021000
#define Base_Address_GPIO_PORTA 0x40610800
#define APB2ERN *((volatile unsigned long*)(Base_Address_RCC + 0x18))
#define PORTA_CRH *((volatile unsigned long*)(Base_Address_GPIO_PORTA + 0x04))
#define PORTA_DDR *((volatile unsigned long*)(Base_Address_GPIO_PORTA + 0x0c))

int main()
{
APB2ERN |= 1<<2;
PORTA_CRH &= 0xff0fffff;
PORTA_CRH |= 0x00200000;

while(1){
	PORTA_DDR |= 1<<13;
	for(int i=0;i<5000;i++);
	PORTA_DDR &= ~(1<<13);
	for(int i=0;i<5000;i++);

}

