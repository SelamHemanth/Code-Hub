#include"header.h"

#define RCC_AHB1ENR	*((int *)0x40023830)

#define GPIOB_MODER  *((int *)0x40020400)
#define GPIOB_ODR		*((int *)0x40020414)

char str1[10];

//Intialisation function
void INIT(void)
{
	RCC_AHB1ENR |= (0x01<<1);   //Set the Clock to AHB1ENR
	while(!(RCC_AHB1ENR & (0x01<<1)));	//Confirming the clock is ON or OFF
}
//Configuration function
void CONFIG(void)
{
GPIOB_MODER &=(0xFFFCF000);
GPIOB_MODER |=(0x00010555);
}

/*LCD Initialization*/
void KM_LCD_Init(void)
{
	MSEC(20);
	KM_LCD_Write_Cmd (0x33);
	MSEC(1);
	KM_LCD_Write_Cmd (0x32);
	KM_LCD_Write_Cmd (0x0C);
	KM_LCD_Write_Cmd (0x01);
}

/*Write Higher Nibble data in to LCD.*/
void write_high_nibble( unsigned char data )
{
	GPIOB_ODR &=~(0XFEF);
	data = data>>4;
	GPIOB_ODR |= data;
	GPIOB_ODR |=(0x01<<8);
	MSEC(5);
	GPIOB_ODR &=~(0x01<<8);
}



/*Write Lower Nibble data in to LCD.*/
void write_low_nibble( unsigned char data )
{
	GPIOB_ODR &=~(0XFEF);
	data &=(0x0F);
	GPIOB_ODR |= data;
	GPIOB_ODR |=(0x01<<8);
	MSEC(5);
	GPIOB_ODR &=~(0x01<<8);
}


/*Write a LCD command.*/
void KM_LCD_Write_Cmd( unsigned char Cdata)
{
	GPIOB_ODR &=~(0X01<<4);
	write_high_nibble(Cdata);
	write_low_nibble(Cdata);
	
}


/*Write a LCD Data (single character).*/
void KM_LCD_Write_Data(unsigned char temp)
{
	GPIOB_ODR |=(0X01<<4);
	write_high_nibble(temp);
	write_low_nibble(temp);
}

void KM_LCD_string(char *str)
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
	KM_LCD_Write_Data(str[i]);	
	}
}

