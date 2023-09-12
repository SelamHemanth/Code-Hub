//RCC_AHB1ENR -> 0X40023800 + 0X30 = 0X40023830
//GPIOB_MODER -> 0X40020400 + 0X00 = 0X40020400
//GPIOB_ODR   -> 0X40020400 + 0X14 = 0X40020414

#define RCC_AHB1ENR  *((int *)0x40023830)
#define GPIOB_MODER  *((int *)0x40020400)
#define GPIOB_ODR		*((int *)0x40020414)
#define STK_CTRL		*((int *)0xE000E010)
#define STK_LOAD		*((int *)0xE000E014)
#define STK_VAL		*((int *)0xE000E018)

void MSEC(int n)
{
	STK_LOAD = n*16000;
	while((STK_CTRL & (0x01<<16)) == 0)
	{
		;
	}
}	


//Dealy function
void DELAY(void)
{
	STK_CTRL |= 0X05;
	STK_VAL = 0X123;
	//STK_LOAD = 1600000;
	/*while((STK_CTRL & (0x01<<16)) == 0)
	{
		;
	}*/
	}

//Intialisation function
void RED_LED_INIT(void)
{
	RCC_AHB1ENR |= (0x01<<1);   //Set the Clock to AHB1ENR
	while(!(RCC_AHB1ENR & (0x01<<1)))	//Confirming the clock is ON or OFF
	{
		;
	}
}	


//Configuration function
void RED_LED_CONFIG(void)
{
	GPIOB_MODER &= ~(0x01<<26); //clear PB13th pin ,positon is 27,26  (01)
	GPIOB_MODER |=(0x01<<26);		//set PB13th pin ,positon is 27,26  (01)
}

//Operation
int main()
{
	RED_LED_INIT();
	RED_LED_CONFIG();
	DELAY();
	MSEC(1);
	//GPIOB_MODER &=~(0x01<<26);
	while(1)
	{
GPIOB_ODR |=(0X01<<13); 	//LED is ON in PB13  (The LED is connected in negative level. So,passing 0 into the position)
//while((STK_CTRL & 0x1<<16)==0);
		MSEC(100);
		GPIOB_ODR &=~(0X01<<13);
		MSEC(100);
}
	return 0;
}

