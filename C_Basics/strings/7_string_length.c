#include<stdio.h>

int length(char str[]);

int main()
{
char str[10];
printf("Enter a string :");
scanf("%s",str);
printf("String length is %d\n",length(str));
}

int length(char str[])
{
	int c=0;
	for(int i=0;str[i]!='\0';i++)
	{
		c++;
	}
	return c;
}
