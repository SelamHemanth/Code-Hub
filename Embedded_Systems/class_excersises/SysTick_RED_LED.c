//Name   :  S.Hemanth
//Reg.No : KM50BESD14



/* Write a embedded C code for the following lab experiments.
   Toggles PB13 (RED LED) every 100msec delay using SysTick timer With Polling using 16MHZ system clock source. 
   And also test minimum and maximum delays of 16MHZ timer.*/

#define RCC_AHB1ENR  *((int *)0x40023830)
#define GPIOB_MODER  *((int *)0x40020400)
#define GPIOB_ODR    *((int *)0x40020414)
#define STK_CTRL     *((int *)0xE000E010)
#define STK_LOAD     *((int *)0xE000E014)
#define STK_VAL	     *((int *)0xE000E018)

//milli Second Delay
void MSEC(int n)
{
	STK_LOAD = n*16000;			//Load Register				
	while((STK_CTRL & (0x01<<16)) == 0)	
	{
		;
	}
}	


//SysTick function
void DELAY(void)
{
	STK_CTRL |= 0X05;     			// Control Register
	STK_VAL = 0X123;      			// Value Register
}

//Intialisation function
void RED_LED_INIT(void)
{
	RCC_AHB1ENR |= (0x01<<1);               //Set the Clock to AHB1ENR
	while(!(RCC_AHB1ENR & (0x01<<1)))	//Confirming the clock is ON or OFF
	{
		;
	}
}	


//Configuration function
void RED_LED_CONFIG(void)
{
	GPIOB_MODER &= ~(0x01<<26);             //clear PB13th pin ,positon is 27,26  (01)
	GPIOB_MODER |=(0x01<<26);		//set PB13th pin ,positon is 27,26  (01)
}

//Operation
int main()
{
	RED_LED_INIT();				//Initialazation function calling
	RED_LED_CONFIG();			//Configuration function calling
	DELAY();				//Delay function calling
	while(1)
	{
		GPIOB_ODR |=(0X01<<13); 	//RED LED is OFF in PB13 
		MSEC(100);			//100msec delay
		GPIOB_ODR &=~(0X01<<13);	//RED LED is ON in PB13
		MSEC(100);			//100msec delay
	}
	return 0;
}

