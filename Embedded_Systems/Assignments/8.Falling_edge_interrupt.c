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
#define NVIC_ISER1     *((int *) 0xE000E104)

int counter=0;

//Intialisation function
void INTIALIZATION(void)
{
	RCC_AHB1ENR |= (0x01<<1);   //Set the Clock to AHB1ENR
	while(!(RCC_AHB1ENR & (0x01<<1)))//Confirming the clock is ON or OFF
	{;}
  RCC_AHB1ENR |= (0x01<<2);   //Set the Clock to AHB1ENR
	while(!(RCC_AHB1ENR & (0x01<<2)));//Confirming the clock is ON or OFF
	RCC_APB2ENR |= (0x01<<14);   //Set the Clock to APB2ENR
	while(!(RCC_APB2ENR & (0x01<<14)));//Confirming the clock is ON or OFF
}	


//Configuration function
void CONFIGURATION(void)
{
	GPIOB_MODER &= ~(0x01<<26); //clear PB13th pin ,positon is 27,26  (01)
	GPIOB_MODER |=(0x01<<26);		//set PB13th pin ,positon is 27,26  (01)
	GPIOC_MODER &= ~(0x01<<20);
	GPIOC_MODER |=(0x00);
	GPIOC_PUPDR |= (0X01<<20);
	
	SYSCFG_EXTICR3 |= 0x200;		//set system configuration in pin 10 position (PCx -> 0010)
	EXTI_IMR   |= (0x01<<10);			//set external interrupt for PC10 in maskable register
	EXTI_FTSR  |= (0x01<<10);		//set external interrupt for PC10 in falling trigger set register
	NVIC_ISER1 |= (0X01<<8);		// set interrupt set enable register in NVIC in 40th position
	//EXTI_PR |=(0x400);
}

//Operation
int main()
{
  INTIALIZATION();
	CONFIGURATION();
	GPIOB_ODR |=(1<<13);
	while(1);
	return 0;
}

void EXTI15_10_IRQHandler(void)
{
	if(EXTI_PR & (0x400))
	{
		GPIOB_ODR &=~(0x01<<13);
		counter++;
		EXTI_PR |=(0x400);
	}
}
