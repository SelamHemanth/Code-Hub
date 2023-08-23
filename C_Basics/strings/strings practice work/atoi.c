#include<stdio.h>
//#include<stdlib.h>

int fun(char str[]);

int main()
{
char str[10];
int a;
printf("Enter a numarical string: ");
scanf("%s",str);
a=fun(str);
//a=atoi(str);
printf("%d\n",a);
}

int fun(char str[])
{
int a,b=0;
for(int i=0;str[i]!='\0';i++)
{
a=str[i]-48;
b=(b*10)+a;
}
return b;
}
