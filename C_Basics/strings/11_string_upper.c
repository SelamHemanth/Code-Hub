#include<stdio.h>

void upper(char str[]);

int main()
{
char str[50];
printf("Enter a string: ");
scanf("%s",str);
upper(str);
printf("%s\n",str);
}

void upper(char str[])
{
for(int i=0;str[i]!='\0';i++)
{
if(str[i]>='a' && str[i]<='z')
str[i]=(char)str[i]-32;
}
}
