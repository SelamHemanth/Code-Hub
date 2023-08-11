#include<stdio.h>
int currentstock(int);
int purchase();
int sell();
int sa,iso=0,pu,ipu=0,cv=0;

int main()
{
int o,c=0,p=0,s=0;
static int a=100;
printf("Welcome To Super Market\n");
printf("***********************\n\n");
do
{
printf("\n1.Sell items\n2.Purchase new items\n3.Check AvailableStock\n4.Quit\n\n");
printf("Choose an option:");
scanf("%d",&o);
if(o==1)
{
a=sell(a);
}
else if(o==2)
{
a=purchase(a);
}
else if(o==3)
{
a=currentstock(a);
printf("\n\t\tSTOCK\n\nCurrent Stock is %d\n\n",a);
}
}while(o<4);
printf("\n\nClosing stock :%d\n",a);
printf("No of sales :%d\n",sa);
printf("No of items sold :%d\n",iso);
printf("No of purchases :%d\n",pu);
printf("No of items purchases :%d\n",ipu);
printf("No of total customers visited :%d\n",cv);
printf("\nThank You\n");
}

