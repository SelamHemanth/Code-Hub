#include<stdio.h>
#include"header.h"
volatile extern int LM_35;
extern char str1[10];

//UART1 OPERATIN
int main()
{
	int a,b;
	char str[] ="LM35_Temperature:-";
	int i;
	int hum=75;
	char Fetch[50],strsend[50];
	
	GPIOC_INIT();
	ADC_INIT();
	INIT();
	CONFIG();
	DELAY();
	KM_LCD_Init();
	KM_LCD_Write_Cmd (0x80);
  KM_LCD_string(str);
	
	
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
	ADC_READ(); 								     //call ADC read
	KM_LCD_Write_Cmd (0xC3);
	a=LM_35/10;
	b=LM_35%10;
	str1[0]=((char)a)+48;
	str1[1]=((char)b)+48;
	str1[2]=' ';
	str1[3]='C';
	KM_LCD_string(str1);
		
    outstring("AT+CIPSTATUS\r\n");
		SEC(1);
		outstring("AT+CIPSTART=\"TCP\",\"142.93.218.33\",80\r\n");
		SEC(1);
	  outstring(strsend);
		SEC(1);
		sprintf(Fetch,"GET /page.php?temp=%d&hum=%d&dev=534\r\n\r\n",LM_35,hum); // Step 3: ESP8266_SendTcp
	  sprintf(strsend, "AT+CIPSEND=%d\r\n",40);
		outstring(Fetch);
		SEC(1);
		outstring("AT+CIPCLOSE\r\n");
		SEC(1);
	}
}


