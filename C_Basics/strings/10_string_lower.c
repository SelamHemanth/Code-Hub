#include<stdio.h>

void lower(char str[]);

int main()
{
char str[50];
printf("Enter a string: ");
scanf("%s",str);
lower(str);
printf("%s\n",str);
}

void lower(char str[])
{
for(int i=0;str[i]!='\0';i++)
{
if(str[i]>='A' && str[i]<='Z')
str[i]=(char)str[i]+32;
}
}
