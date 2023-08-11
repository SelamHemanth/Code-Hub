#include<stdio.h>

int currentstock(int);

extern int pu,ipu;

int purchase(int a)
{
int o,b;
printf("\n\t\tPURCHASE\n\n1.Purchase\n2.Cancel\n\nChoose an option:");
scanf("%d",&o);
if(o==1)
{
pu++;
printf("Enter number of items:");
scanf("%d",&b);
ipu=ipu+b;
if(a+b>500)
printf("Storage Place is Full\nStorage Space is 500 units only\n");
else if(a+b<=500)
a=currentstock(currentstock(a)+b);
return a;
}
else if(o==2)
{
return 0;
}
}
