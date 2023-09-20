#define STK_CTRL		*((int *)0xE000E010)
#define STK_LOAD		*((int *)0xE000E014)
#define STK_VAL			*((int *)0xE000E018)
	
//Dealy function
void MSEC(int n)
{
	STK_LOAD = n*16000;										// n (msec) * 16000 ()
	while((STK_CTRL & (0x01<<16)) == 0);
}	
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
