#include<stdio.h>

int length(char str[]);
void reverse(char str[],int);

int main()
{
int l;
char str[50];
printf("Enter a string: ");
scanf("%s",str);
l=length(str);
reverse(str,l);
printf("%s\n",str);
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


void reverse(char str[],int size)
{
	char temp;
	int s=size-1;
	for(int i=0;i<size/2;i++)
	{
		temp=str[i];
		str[i]=str[s-i];
		str[s-i]=temp;
	}
}

