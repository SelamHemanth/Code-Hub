#include <stdarg.h>

char* convert(unsigned int, int); //Convert integer number into octal, hex, etc.
void UART1_TX_Outchar(unsigned char out);
void UART1_TX_Outstr(unsigned char ch[]);

void Myprintf(char* format,...) 
	{
		char *traverse; 
		unsigned int i; 
		char *s; 
		
//Module 1: Initializing Myprintf's arguments 
		va_list arg; 
    va_start(arg, format); 
		for(traverse = format; *traverse != '\0'; traverse++) 
		{ 
			while( *traverse != '%' )
			{
				UART1_TX_Outchar(*traverse);
				traverse++; 
			}
			traverse++;
			
//Module 2: Fetching and executing arguments 
 switch(*traverse) 
	 {
		 case 'c' : i = va_arg(arg,int); //Fetch char argument
											UART1_TX_Outchar(i); 
											break; 
		 
		 case 'd' : i = va_arg(arg,int); //Fetch Decimal/Integer argument
											if(i<0) 
													{ 
														i = -i;
															UART1_TX_Outchar('-'); 
													} 
											UART1_TX_Outstr(convert(i,10)); 
											break; 
													
			case 'o': i = va_arg(arg,unsigned int); //Fetch Octal representation 
													UART1_TX_Outstr(convert(i,8)); 
													break;
													
			case 's': s = va_arg(arg,char *); //Fetch string 
													UART1_TX_Outstr(s); 
													break;
													
			case 'x': i = va_arg(arg,unsigned int); //Fetch Hexadecimal representation 
													UART1_TX_Outstr(convert(i,16)); 
												break; 
		}
	} 

//Module 3: Closing argument list to necessary clean-up 
 va_end(arg); 
}
	

char *convert(unsigned int num, int base) 
	{
		char Representation[]= "0123456789ABCDEF"; 
		char buffer[50]; 
		char *ptr; 
		ptr = &buffer[49]; 
		*ptr = '\0'; 
		do 
		{ 
			*--ptr = Representation[num%base]; 
			num /= base; 
		}while(num != 0); 
	return(ptr); 
	}
