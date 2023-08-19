#include<stdio.h>
int length(char str[]);

int main()
{
	int l;
	char str[10];
	printf("Enter a number: ");
	scanf("%s",str);
	l=length(str);
	for(int i=0;i<l;i++)
	{
	
		if(str[i]=='0')
			printf("Zero ");
		else if(str[i]=='1')
			printf("One ");
		else if(str[i]=='2')
			printf("Two ");
		else if(str[i]=='3')
			printf("Three ");
		else if(str[i]=='4')
			printf("Four ");
		else if(str[i]=='5')
			printf("Five ");
		else if(str[i]=='6')
			printf("Six ");
		else if(str[i]=='7')
			printf("Seven ");
		else if(str[i]=='8')
			printf("Eight ");
		else if(str[i]=='9')
			printf("Nine ");
	}
	printf("\n");
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

