#include<stdio.h>

void lower(char str[],int);
int length(char str[]);

int main()
{
int l;
char str[10];
printf("Enter a string: ");
scanf("%s",str);
l=length(str);
lower(str,l);
printf("%s\n",str);
}

void lower(char str[],int l)
{
for(int i=0;i<l;i++)
{
if(str[i]>='A' && str[i]<='Z')
str[i]=(char)str[i]+32;
}
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

