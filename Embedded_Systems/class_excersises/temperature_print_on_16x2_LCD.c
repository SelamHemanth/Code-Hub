//LM-35 temperature sensor by using Interrupt method 

#define RCC_AHB1ENR	*((int *)0x40023830)
#define	RCC_APB2ENR *((int *)0x40023844)

#define GPIOC_MODER	*((int *)0x40020800)
#define GPIOB_MODER  *((int *)0x40020400)
#define GPIOB_ODR		*((int *)0x40020414)

#define STK_CTRL		*((int *)0xE000E010)
#define STK_LOAD		*((int *)0xE000E014)
#define STK_VAL			*((int *)0xE000E018)

#define ADC_SMPR1		*((int *)0x4001200C)
#define ADC_SQR3		*((int *)0x40012034)
#define ADC_CR1			*((int *)0x40012004)
#define ADC_CR2			*((int *)0x40012008)
#define ADC_SR			*((int *)0x40012000)
#define ADC_DR			*((int *)0x4001204C)

#define NVIC_ISER0  *((int *)0xE000E100)

int LM_35=0;	                         //	Global variable for store LM-35 readings
char str1[10];

void  ADC_READ(void);									// ADC_READ function declaration
void ADC_INIT(void);									// ADC_INIT function declaration
void GPIOC_INIT(void);								// GPIOC_INIT function declaration
void DELAY(void);											// DELAY function declaration
void MSEC(int);												// MSEC function declaration

void write_high_nibble( unsigned char );
void write_low_nibble( unsigned char );
void KM_LCD_Init(void);
void KM_LCD_Write_Cmd( unsigned char );
void KM_LCD_Write_Data(unsigned char );
void KM_LCD_string(char *);
int LCD_Print();												

//Dealy function
void MSEC(int n)
{
	STK_LOAD = n*16000;										// n (msec) * 16000 ()
	while((STK_CTRL & (0x01<<16)) == 0);
}	
void DELAY(void)
{
	STK_CTRL |= 0X05;
	STK_VAL = 0X123;
}
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

void GPIOC_INIT(void)
{
	RCC_AHB1ENR |=0x4;										//set RCC clock enable for AHBENR register
	while(!(RCC_AHB1ENR & 0x4));					//wait until check	
	GPIOC_MODER &= ~0x3;	 								// Clear Mode reg for 10th
	GPIOC_MODER |=0x3<<2;									// Set ADC10th pin as ADC
}	

void ADC_INIT(void)
{
	RCC_APB2ENR |= (0x1<<8);						 // RCC enable to APB2 bus
	while(!(RCC_APB2ENR & 0x1<<8));			 // wait until set
	ADC_SMPR1 |= 0x7;									 // set sample time 480 cycles
	ADC_SQR3 |=0x0A;										 // squence reg as 1 for ADC10
	ADC_CR1  &=~(0x3<<24);							 // resolution as 12bit
	ADC_CR2		|=(0x01<<10);							 // EOC ON
	ADC_CR2		|= 0X1;										 // ADC ON
	ADC_CR1		|= 0x01<<5;								 // set EOCIE in CR1
	NVIC_ISER0 |=0x01<<18;							 // set 10th position in interrupt set enable register
}
void  ADC_READ()
{
	ADC_CR2		|=0x1<<30;								// start convertion
												
}

int main()
{
	int a,b;
	char str[] ="LM35_Temperature:-";
	GPIOC_INIT();
	ADC_INIT();
	INIT();
	CONFIG();
	DELAY();
	KM_LCD_Init();
	KM_LCD_Write_Cmd (0x80);
  KM_LCD_string(str);


	while(1)
	{
	ADC_READ(); 								     //call ADC read
	KM_LCD_Write_Cmd (0xC3);
	a=LM_35/10;
	b=LM_35%10;
	str1[0]=((char)a)+48;
	str1[1]=((char)b)+48;
	str1[2]=' ';
	str1[3]='C';
	KM_LCD_string(str1);
	}
}



void ADC_IRQHandler()									// ADC interrupt handler
{
								
	LM_35 =ADC_DR;	// data into LM_35 variable
	ADC_CR2 &=~(0x1<<30);								// stop conversion
	MSEC(500);						// wait for 50ms for each convertion
}


