#include<stdio.h>

extern int stock;

int purchase(int a)
{
int b;
printf("\n\t\tPURCHASE\n\nEnter number of items:");
scanf("%d",&b);
stock=stock+b;
return b;
}

