/*Take a string as an input, and count the number of words in the string. Take space, comma,exclamation, question mark and fullstop as delimitters for word counting.*/

#include<stdio.h>

int main()
{
	int c=0;
	char str[100];
	printf("Enter a sentance:\n");
	scanf("%[^\n]s",str);
	for(int i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9'))
		{
			 if(str[i+1]<'0' || (str[i+1]>'9' && str[i+1]<'A') || (str[i+1]>'Z' && str[i+1]<'a') || str[i+1]>'z')
				c++;
		}	
	}
	printf("\nNumber of word = %d\n",c);
}
