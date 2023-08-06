#include<stdio.h>

extern int stock;

int sell(int a)
{
int b;
printf("\n\t\tSELL\n\nEnter number of items:");
scanf("%d",&b);
if(b<=stock)
{
stock=stock-b;
printf("\nPurchase done is %d\n\n",b);
}
else if(b>stock)
printf("\nSorry!.\nOut of Stock\n");
return b;
}

