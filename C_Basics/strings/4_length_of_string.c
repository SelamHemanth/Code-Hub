#include<stdio.h>
int length(char str[]);

int main()
{
	int l;
	char str[10];
	printf("Enter a string: ");
	scanf("%s",str);
	l=length(str);
	printf("Length of the string is %d\n",l);
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

