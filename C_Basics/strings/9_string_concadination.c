#include<stdio.h>

int length(char str[]);
void concadination(char str[],char str1[],int);

int main()
{
int l;
char str[50],str1[50];
printf("Enter 1st string: ");
scanf("%s",str);
l=length(str);
printf("Enter 2nd string: ");
scanf("%s",str1);
concadination(str,str1,l);
printf("%s\n",str);
}

void concadination(char str[],char str1[],int l)
{
int i;
for(i=0;str1[i]!='\0';i++,l++)
{
str[l]=str1[i];
}
str1[i]='\0';
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

