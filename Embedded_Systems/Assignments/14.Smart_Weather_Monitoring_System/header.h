//Delay
void DELAY(void);
void SEC(int n);
void MSEC(int n);

//ADC
int ADC();
void  ADC_READ(void);									// ADC_READ function declaration
void ADC_INIT(void);									// ADC_INIT function declaration
void GPIOC_INIT(void);								// GPIOC_INIT function declaration

//LCD
void INIT(void);
void CONFIG();
void write_high_nibble( unsigned char );
void write_low_nibble( unsigned char );
void KM_LCD_Init(void);
void KM_LCD_Write_Cmd( unsigned char );
void KM_LCD_Write_Data(unsigned char );
void KM_LCD_string(char *);
int LCD_Print();

//WiFi
void GPIOA_INIT();
void UART1_CONIF();
void outstring(char str[]);	
void UART6_OutChar (unsigned char TX);			//Transmit character function declaration
unsigned char UART6_InChar (void);					//Receive character function declaration

