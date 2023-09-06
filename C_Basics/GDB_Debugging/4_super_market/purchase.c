#include<stdio.h>

extern int stock;

int purchase(int a)
{
int b;
printf("\n\t\tPURCHASE\n\nEnter number of items:\n");
scanf("%d",&b);
if(stock+b>500)
printf("Storage Place is Full\nStorage Space is 500 units only\n");
else if(stock+b<=500)
stock=stock+b;
return b;
}

