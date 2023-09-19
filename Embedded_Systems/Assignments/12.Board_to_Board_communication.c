//Name   : S.Hemanth
//Reg.No : KM50BESD14


//Macros
#define RCC_AHB1ENR *((int *)0x40023830)
#define RCC_APB2ENR *((int *)0x40023844)
	
#define GPIOA_MODER *((int *)0x40020000)
#define GPIOA_AFRH	*((int *)0x40020024)
#define GPIOB_MODER *((int *)0x40020400)
#define GPIOB_ODR   *((int *)0x40020414)
#define GPIOC_MODER *((int *)0x40020800)
#define GPIOC_IDR   *((int *)0x40020810)
#define GPIOC_PUPDR *((int *)0x4002080C)

#define UART1_BRR   *((int *)0x40011008)
#define UART1_CR1   *((int *)0x4001100C)
#define UART1_SR    *((int *)0x40011000)
#define UART1_DR    *((int *)0x40011004)

//Function Declaration
void UART1_OutChar (unsigned char TX);			//Transmit character function declaration
unsigned char UART1_InChar (void);			//Receive character function declaration
void DELAY(void);					//Delay function declaration
void MSEC(int);						//msec function declaration

//Gloabal Variables
//int a;						//Intiger Global Variable
unsigned char ch;					//Global charecter variable

//GPIOA INITIALIZATION 
void GPIOA_INIT()
{
	RCC_AHB1ENR |=0x07;				//set clock for AHB1 bus GPIOA
	while(!(RCC_AHB1ENR & 0x07));			//check until clock is ON for AHB1ENR
	GPIOA_MODER&=~(0x03C0000);			//clear PA9 & PA10 ports in GPOIOA
	GPIOA_MODER |= (0x0280000);			//set PA9 & PA10 in GPOIOA as a UART(load '10')
	GPIOB_MODER &= ~((0xF<<26));			//clear port-13 and port-14 for RED LED and Green LED 
	GPIOB_MODER |=  ((0x5<<26)); 			//set port-13 and port-14 for RED LED and Green LED 
	GPIOC_MODER |=  0x00;				//clear GPIOC_MODER register
	GPIOC_PUPDR |= (0x1<<18); 			//set GPIOC_PUPDR register for PC-9
	GPIOC_PUPDR |= (0x1<<16);			//set GPIOC_PUPDR register for PC-8
	GPIOA_AFRH &=~(0x00000770);			//clear GPIOA_AFRH register port-9 and port-10 with '7'
	GPIOA_AFRH |=(0x00000770);			//set GPIOA_AFRH register port-9 and port-10 with '7' as a alternate function
}

//UART1 CQNFIGURATION
void UART1_CONIF()
{
	RCC_APB2ENR |=(0x01<<4);			//set clock for USART1ENR register 
	while(!(RCC_APB2ENR & (0x01<<4)));		//check until clock is ON in APB2ENR
	UART1_BRR = 0x683;				//Set 9600 baud rate in BRR (0x683)
	UART1_CR1 &=~(0x200C);				//Clear 13th, 2nd and 3rd bits in CR1 register
	UART1_CR1 |=0x200C;				//Set 13th, 2nd and 3rd bits in CR1 register to enable USART 2 enable
}

//UART1 OPERATIN
int main()
{
	GPIOA_INIT();
	UART1_CONIF();
	GPIOB_ODR |= ((0x1<<13));			//clear GPIOB_ODR Register for RED_LED
	GPIOB_ODR |= ((0x1<<14));			//clear GPIOB_ODR Register for GREEN_LED
	while(1)
	{
		ch=UART1_InChar();			//store UART recerive data into a gloabal variable
		if (!(GPIOC_IDR & (1<<8)))		//check PB8 pin in GPIOC_IDR, (switch up) 
			UART1_OutChar('R');		//transmit 'R' to UART data register
		else if (!(GPIOC_IDR & (1<<9)))		//check PB9 pin in GPIOC_IDR, (switch down)
			UART1_OutChar('G');		//transmit 'G' to UART data register
		else if(UART1_InChar()=='R')		//check, If recieving data is equal to 'R', Glow RED LED.			
			GPIOB_ODR &= ~(0x1<<13);
		else if(UART1_InChar()=='G')		//check, If recieving data is equal to 'G', Glow GREEN LED.
			GPIOB_ODR &= ~(0x1<<14);
	}
}

//Transmit character
void UART1_OutChar (unsigned char T)
{
	while(!(UART1_SR & (0x01<<7)));			//Read UART1_SR register and check 7th bit (TXE) value, If TXE=0, go to loop otherwise next statement
	UART1_DR = T;					//Load input in to USART1_DR register
}

//Receive character
unsigned char UART1_InChar (void)
{
	int a;
	while(!(UART1_SR & (0x01<<5)))			//Read UART1_SR register and check 5th bit (RXNE) value, If RXNE=0 (empty), go to loop otherwise next statement.
	{
		if(a==2)
			break;
		a++;  
	}
	return (UART1_DR & 0xFF);			//return UART1_DR value
}

