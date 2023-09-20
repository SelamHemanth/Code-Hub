#include<stdio.h>

#define RCC_AHB1ENR *((int *)0x40023830)
#define RCC_APB2ENR *((int *)0x40023844)
	
#define GPIOC_MODER *((int *)0x40020800)
#define GPIOC_AFRL	*((int *)0x40020820)
	
#define UART6_BRR		*((int *)0x40011408)
#define UART6_CR1		*((int *)0x4001140C)
#define UART6_SR		*((int *)0x40011400)
#define UART6_DR		*((int *)0x40011404)
	
#define STK_CTRL		*((int *)0xE000E010)
#define STK_LOAD		*((int *)0xE000E014)
#define STK_VAL			*((int *)0xE000E018)
	

void outstring(char str[]);	
void UART6_OutChar (unsigned char TX);			//Transmit character function declaration
unsigned char UART6_InChar (void);					//Receive character function declaration
void SEC(int);
void DELAY(void);
	
//Global variable
unsigned char ch;												


//GPIOA INITIALIZATION 
void GPIOA_INIT()
{
	RCC_AHB1ENR |=0x04;								//set clock for AHB1 bus GPIOA
	while(!(RCC_AHB1ENR & 0x04));			//check until clock is ON for AHB1ENR
	GPIOC_MODER&=~(0xF<<12);					// clear PC6 & PC7 ports in GPOIOC
	GPIOC_MODER |= (0xA<<12);				// set PA6 & PA7 in GPOIOC as a UART(load '10')
	GPIOC_AFRL &=~(0x88<<24);					//clear GPIOC_AFRL register port-6 and port-7 with '8'
	GPIOC_AFRL |=(0x88<<24);					//set GPIOA_AFRL register port-6 and port-7 with '8' as a alternate function
}

//UART1 CQNFIGURATION
void UART1_CONIF()
{
	RCC_APB2ENR |=(0x01<<5);					//set clock for USART1ENR register 
	while(!(RCC_APB2ENR & (0x01<<5)));		//check until clock is ON in APB2ENR
	UART6_BRR |= 0x8A;								//Set 115200 baud rate in BRR (0x89)
	UART6_CR1 &=~(0x200C);								//Clear 13th, 2nd and 3rd bits in CR1 register
	UART6_CR1 |=0x200C;								//Set 13th, 2nd and 3rd bits in CR1 register to enable USART 2 enable
}

//Dealy function
void SEC(int n)
{
	int i;
	for(i=0;i<n;i++)
{	
	STK_LOAD =16000000;										// n (SEC) * 16000000 ()
	while((STK_CTRL & (0x01<<16)) == 0);
}
}	
void DELAY(void)
{
	STK_CTRL |= 0X05;
	STK_VAL = 0X123;
}

//UART1 OPERATIN
int main()
{
	int i;
	int temp=28,hum=75;
	char Fetch[50],str1[50];
	sprintf(Fetch,"GET /page.php?temp=%d&hum=%d&dev=534\r\n\r\n", temp, hum); // Step 3: ESP8266_SendTcp
	sprintf(str1, "AT+CIPSEND=%d\r\n",40);

	GPIOA_INIT();
	UART1_CONIF();
	DELAY();
	outstring("AT+RST\r\n");
	SEC(3);
	outstring("AT+CWMODE=3\r\n");
	SEC(3);
	outstring("AT+CWJAP=\"KM-2.4G\",\"9963111084\"\r\n");
	SEC(3);
	outstring("AT+CIFSR\r\n");
	SEC(3);
	outstring("AT+CIPMUX=0\r\n");
	SEC(3);
	outstring("AT+CWLAP\r\n");
	SEC(3);
	outstring("AT+CIPMODE=0\r\n");
	SEC(3);
	while(1)
	{
		outstring("AT+CIPSTATUS\r\n");
		SEC(3);
		outstring("AT+CIPSTART=\"TCP\",\"142.93.218.33\",80\r\n");
		SEC(3);
	  outstring(str1);
		SEC(3);
		outstring(Fetch);
		SEC(3);
		outstring("AT+CIPCLOSE\r\n");
		SEC(3);
	}
}

void outstring(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++)
		{
		UART6_OutChar(str[i]);					//Transmiting character
		}	
		//ch=UART6_InChar();					//Receiving character
}

//Transmit character
void UART6_OutChar (unsigned char TX)
{
	while(!(UART6_SR & (0x01<<7)));			//Read UART1_SR register and check 7th bit (TXE) value, If TXE=0, go to loop otherwise next statement
	UART6_DR = TX;									//Load input in to USART1_DR register
}

//Receive character
unsigned char UART6_InChar (void)
{
	while((UART6_SR & (0x01<<5)));		//Read UART1_SR register and check 5th bit (RXNE) value, If RXNE=0 (empty), go to loop otherwise next statement.
return (UART6_DR & 0xFF);				//return UART1_DR value
}


