#define RCC_AHB1ENR *((int *)0x40023830)
#define RCC_APB2ENR *((int *)0x40023844)
#define GPIOA_MODER *((int *)0x40020000)
#define GPIOA_AFRH	*((int *)0x40020024)
#define UART1_BRR		*((int *)0x40011008)
#define UART1_CR1		*((int *)0x4001100C)
#define UART1_SR		*((int *)0x40011000)
#define UART1_DR		*((int *)0x40011004)
	
void UART1_OutChar (unsigned char TX);			//Transmit character function declaration
unsigned char UART2_InChar (void);					//Receive character function declaration
	
unsigned char ch;												//Global variable

//GPIOA INITIALIZATION 
void GPIOA_INIT()
{
	RCC_AHB1ENR |=0x01;								//set clock for AHB1 bus GPIOA
	while(!(RCC_AHB1ENR & 0x01));			//check until clock is ON for AHB1ENR
	GPIOA_MODER&=~(0x03C0000);					// clear PA9 & PA10 ports in GPOIOA
	GPIOA_MODER |= (0x0280000);				// set PA9 & PA10 in GPOIOA as a UART(load '10')
	GPIOA_AFRH &=~(0x00000770);					//clear GPIOA_AFRH register port-9 and port-10 with '7'
	GPIOA_AFRH |=(0x00000770);					//set GPIOA_AFRH register port-9 and port-10 with '7' as a alternate function
}

//UART1 CQNFIGURATION
void UART1_CONIF()
{
	RCC_APB2ENR |=(0x01<<4);					//set clock for USART1ENR register 
	while(!(RCC_APB2ENR & (0x01<<4)));		//check until clock is ON in APB2ENR
	UART1_BRR = 0x683;								//Set 9600 baud rate in BRR (0x683)
	UART1_CR1 &=~(0x200C);								//Clear 13th, 2nd and 3rd bits in CR1 register
	UART1_CR1 |=0x200C;								//Set 13th, 2nd and 3rd bits in CR1 register to enable USART 2 enable
}

//UART1 OPERATIN
int main()
{
	GPIOA_INIT();
	UART1_CONIF();
	while(1)
	{
		UART1_OutChar('A');					//Transmiting character
		//ch++;												//Increment by one
		ch=UART2_InChar();					//Receiving character
	}
}

//Transmit character
void UART1_OutChar (unsigned char TX)
{
	while(!(UART1_SR & (0x01<<7)));			//Read UART1_SR register and check 7th bit (TXE) value, If TXE=0, go to loop otherwise next statement
	UART1_DR = TX;									//Load input in to USART1_DR register
}

//Receive character
unsigned char UART2_InChar (void)
{
	while((UART1_SR & (0x01<<5)));		//Read UART1_SR register and check 5th bit (RXNE) value, If RXNE=0 (empty), go to loop otherwise next statement.
return (UART1_DR & 0xFF);				//return UART1_DR value
}

