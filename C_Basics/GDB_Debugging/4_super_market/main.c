#include<stdio.h>
int currentstock(int);
int purchase(int);
int sell(int);

int stock=100;

int main()
{
int o,a=1;
printf("Welcome To Super Market\n");
printf("***********************\n\n");
do
{
printf("1.Sell items\n2.Purchase new items\n3.Check AvailableStock\n4.Quit\n\n");
printf("Choose an option:");
scanf("%d",&o);
if(o==1)
{
sell(a);
}
else if(o==2)
{
purchase(a);
}
else if(o==3)
{
currentstock(a);
}
}while(o<4);
printf("\nThank You\n");
}

