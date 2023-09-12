/*Whenever SW_UP is pressed RED LED is ON, whenever SW_DN is pressed GREEN LED is ON.
Assign breakpoints after if condition and click run button in debugger window. Whenever SW1/SW2 presses program stops at any one of the breakpoint.
*/


#define RCC_AHB1ENR  *((int *)0x40023830)
#define GPIOB_MODER  *((int *)0x40020400)
#define GPIOB_ODR    *((int *)0x40020414)
#define GPIOC_MODER  *((int *)0x40020800)
#define GPIOC_IDR		 *((int *)0x40020810)
#define GPIOC_PUPDR	 *((int *)0x4002080C)	

//Dealy function
void DELAY(int n)
{
	int i=0,j;
	while(i<n)
	{
		for(j=0;j<=2010;j++);
		i++;
	}
}


//Intialisation function
void GPIOB_INIT(void)
{
	RCC_AHB1ENR |= (0x01<<1);   //Set the Clock to AHB1ENR
	while(!(RCC_AHB1ENR & (0x01<<1)))	//Confirming the clock is ON or OFF
	{
		;
	}
}	
void GPIOC_INIT(void)
{
	RCC_AHB1ENR |= (0x01<<2);   //Set the Clock to AHB1ENR
	while(!(RCC_AHB1ENR & (0x01<<2)))	//Confirming the clock is ON or OFF
	{
		;
	}
}	

//Configuration function
void GPIOB_CONFIG(void)
{
	GPIOB_MODER &= ~(0x01<<26); //clear PB13th pin ,positon is 27,26  (01)
	GPIOB_MODER |=(0x01<<26);		//set PB13th pin ,positon is 27,26  (01)
	GPIOB_ODR |=(0x01<<13);			//set RED LED to OFF State
}
void GPIOC_CONFIG(void)
{
GPIOC_PUPDR |=(0X01<<20);		//switch ENTER
GPIOC_MODER |= 0x00;				//set PC8th pin &,PC9th pin(00)
}
	//Operation
int main()
{
	GPIOB_INIT();
	GPIOC_INIT();
	GPIOB_CONFIG();
	GPIOC_CONFIG();
	GPIOC_IDR |= 0x01<<10;			//set PC10 to IDR
	while(1)
	{
if(!(GPIOC_IDR & 0x01<<10))		//check PC10 is ON
{
	GPIOB_ODR ^=(0X01<<13);		//RED LED ON
}
//else GPIOB_ODR |=(0X01<<13);	//Set RED LED OFF
	
	/*if(!(GPIOC_IDR & 0x01<<9))	//Check PC9 is ON
{
	GPIOB_ODR &=~(0X01<<14);		//GREEN LED ON
}	
//else GPIOB_ODR |=(0X01<<14);	//Set GREEN LED OFF*/
}
	return 0;
}

