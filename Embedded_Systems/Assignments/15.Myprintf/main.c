void Myprintf(char *,...); //Myprintf function declaration


//RCC
#define RCC_AHB1ENR (*(int *)0x40023830)
#define RCC_APB2ENR (*(int *)0x40023844)
//PORTA
#define GPIO_PORTA_MODE (*(int *)0x40020000)
#define GPIO_PORTA_AFRH (*(int *)0x40020024)
//UART1
#define UART1_SR (*(int *)0x40011000)
#define UART1_DR (*(int *)0x40011004)
#define UART1_BRR (*(int *)0x40011008)
#define UART1_CR1 (*(int *)0x4001100C)
	
volatile char ch,l;
int m,c;

//delay function
void delay(int n)
{
int i;
for(i=0;i<n*2100;i++);
}	
	
	
//GPIO Intialization
void GPIO_PORTA_Init(void)
{
	RCC_AHB1ENR|=(0x01);
	while(!(RCC_AHB1ENR&0x01));
	GPIO_PORTA_MODE&=~(0x3C0000);//clear PA9,PA10 bit positions
	GPIO_PORTA_MODE|=0x00280000;	//set 	PA9 & PA10 MODE to Alternate function mode
	GPIO_PORTA_AFRH&=~(0x00000770);	//clear only the corresponding fields
	GPIO_PORTA_AFRH|=0x00000770;	//select the alternate functionality UART1
}


//UART1 intialization and configuration
void UART1_Init_Config(void)
{
	RCC_APB2ENR|=(0x1<<4);
	while(!(RCC_APB2ENR&0x10));
	UART1_BRR=0x683;				//set boudrate 0x683
	UART1_CR1&=~(0x200C);	//clear the fields
	UART1_CR1|=0x200C;	//UART EN-1, TX EN-1, RX EN-1
}


//outchar function
void UART1_TX_Outchar(unsigned char out)
{
	while(!(UART1_SR&(0x1<<7))){
	;	
	}
	UART1_DR=out;
		
}

//outstr function
void UART1_TX_Outstr(unsigned char ch[])
	{ 
	int j;
	for(j=0;ch[j];j++){
		while(!(UART1_SR &(0x1<<7)));           		// Wait Until Status Register(TXE bit) is 0, Then we can load Data to USART1_DR Reg
		UART1_DR = ch[j];											     		// Load Data as 'A' to Data Register
	}
}


unsigned char UART1_RX_Inchar(void)
{
	c++;
	while(!(UART1_SR&0x5))
	{
	;	
	}
	return (UART1_DR&0xFF);
}



int main()
{
	GPIO_PORTA_Init();

	UART1_Init_Config();	//Initialize and Configure UART1

	Myprintf("Today Date:- %d-%d-%d",03,10,2023);
	Myprintf("  Hexadecimal value:- %x",65);
	Myprintf("  Octal value:- %o",45);

}
