//RCC_AHB1ENR -> 0X40023800 + 0X30 = 0X40023830
//GPIOB_MODER -> 0X40020400 + 0X00 = 0X40020400
//GPIOB_ODR   -> 0X40020400 + 0X14 = 0X40020414

#define RCC_AHB1ENR  *((int *)0x40023830)
#define GPIOB_MODER  *((int *)0x40020400)
#define GPIOB_ODR		*((int *)0x40020414)


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
	GPIOB_MODER &= ~(0x01<<24); //clear PB13th pin ,positon is 27,26  (01)
	GPIOB_MODER |=(0x01<<24);		//set PB13th pin ,positon is 27,26  (01)
}

//Operation
int main()
{
	RED_LED_INIT();
	RED_LED_CONFIG();
	while(1)
	{
GPIOB_ODR &= ~(0X01<<12); 	//LED is ON in PB13  (The LED is connected in negative level. So,passing 0 into the position)
	DELAY(500);									//delay
GPIOB_ODR |= (0X01<<12);		//LED is OFF in PB13
	DELAY(250);
}
	return 0;
}

