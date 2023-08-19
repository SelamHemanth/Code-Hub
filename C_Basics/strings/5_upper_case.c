#include<stdio.h>

int length(char str[]);
void upper(char str[],int);

int main()
{
int l;
char str[10];
printf("Enter a string: ");
scanf("%s",str);
l=length(str);
upper(str,l);
printf("%s\n",str);
}

void upper(char str[],int l)
{
for(int i=0;i<l;i++)
{
if(str[i]>='a' && str[i]<='z')
str[i]=(char)str[i]-32;
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

