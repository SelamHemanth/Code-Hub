/*Write a program Request an interrupt on the Falling edge of ENTER Switch,
whenever the user button is pressed and increment a counter in the interrupt and RED LED is ON.*/
	
	
#define RCC_AHB1ENR *((int *) 0x40023830)
#define RCC_APB2ENR *((int *) 0x40023844)
	
#define GPIOB_MODER *((int *) 0x40020400)
#define GPIOB_ODR   *((int *) 0x40020414)

#define GPIOC_MODER *((int *) 0x40020800)
#define GPIOC_PUPDR *((int *) 0x4002080C)
	
#define SYSCFG_EXTICR3 *((int *) 0x40013810)
#define EXTI_IMR			 *((int *) 0x40013C00)
#define EXTI_FTSR			 *((int *) 0x40013C0C)
#define EXTI_PR 			 *((int *) 0x40013C14)
#define NVIC_ISER0     *((int *) 0xE000E100)

int counter=0;

//Intialisation function
void INTIALIZATION(void)
{
	RCC_AHB1ENR |= (0x01<<1);   			//Set the Clock to AHB1ENR
	while(!(RCC_AHB1ENR & (0x01<<1))) //Confirming the clock is ON or OFF
	{;}
  RCC_AHB1ENR |= (0x01<<2);         //Set the Clock to AHB1ENR
	while(!(RCC_AHB1ENR & (0x01<<2)));//Confirming the clock is ON or OFF
	RCC_APB2ENR |= (0x01<<14);         //Set the Clock to APB2ENR
	while(!(RCC_APB2ENR & (0x01<<14)));//Confirming the clock is ON or OFF
}	


//Configuration function
void CONFIGURATION(void)
{
	GPIOB_MODER &= ~(0x01<<26); //clear PB13th pin ,positon is 27,26  (01)
	GPIOB_MODER |=(0x01<<26);		//set PB13th pin ,positon is 27,26  (01)
	GPIOB_MODER &= ~(0x01<<28);	//clear PB14th pin ,positon is 28,29  (01)
	GPIOB_MODER |=(0x01<<28);		//set PB14th pin ,positon is 28,29  (01)
	
	GPIOC_MODER &= ~(0x01<<18);		//clear PC9th pin ,positon is 19,18  (01)
	GPIOC_MODER |=(0x00);					//set PC9th pin ,positon is 19,18  (00)
	GPIOC_MODER &= ~(0x01<<16);		//clear PC8th pin ,positon is 17,16  (01)
	GPIOC_MODER |=(0x00);					//set PC8th pin ,positon is 17,16  (00)
	GPIOC_PUPDR |= (0X01<<18);
	GPIOC_PUPDR |= (0X01<<16);		
	
	SYSCFG_EXTICR3 |= 0x20;		//set system configuration in pin 8 position (PCx -> 0010)
	SYSCFG_EXTICR3 |= 0x2;	//set system configuration in pin 9 position (PCx -> 0010)
	EXTI_IMR   |= (0x01<<8);			//set external interrupt for PC8 in maskable register
	EXTI_IMR   |= (0x01<<9);			//set external interrupt for PC9 in maskable register
	EXTI_FTSR  |= (0x01<<8);			//set external interrupt for PC8 in falling trigger set register
	EXTI_FTSR  |= (0x01<<9);		//set external interrupt for PC9 in falling trigger set register
	
	NVIC_ISER0 |= (0X01<<23);		// set interrupt set enable register in NVIC in 23th position
	
}

//Operation
int main()
{
  INTIALIZATION();			//intialization function calling
	CONFIGURATION();			//confuguration function calling
	GPIOB_ODR |=(1<<13);		//RED LED PB13 is OFF
	GPIOB_ODR |=(1<<14);		//GREEN LED PB14 is OFF
	while(1);
	return 0;
}

void EXTI9_5_IRQHandler(void)		
{
	if(EXTI_PR & (0x200))			//checking pending register PR9
	{
		GPIOB_ODR &=~(0x01<<13);		//RED LED PB13 is ON
		counter++;
		EXTI_PR |=(0x200);
	}
	if(EXTI_PR & (0x100))			//checking pending register PR8
	{
		GPIOB_ODR &=~(0x01<<14);		//GREEN LED PB14 is ON
		counter++;
		EXTI_PR |=(0x100);
	}
}
