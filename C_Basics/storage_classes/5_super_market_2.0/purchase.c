#include<stdio.h>

int currentstock(int);

extern int pu,ipu;

int purchase(int a)
{
	int o,b;
	printf("\n\t\tPURCHASE\n");
	printf("Enter number of items:");
	scanf("%d",&b);
	if(b+currentstock(a)<=500)
	{
		pu++;
		ipu=ipu+b;
		a=currentstock(currentstock(a)+b);
		return a;
	}
	else if(b+currentstock(a)>500)
	{
	printf("\n\nOut of space!\nSpace is 500 units only,current stock is %d\n\n",currentstock(a));
	printf("1.Purchase\n2.Cancel\n\nChoose an option:");
	scanf("%d",&o);
	if(o==1)
	{
		printf("Enter number of items:");
		scanf("%d",&b);
		pu++;
		ipu=ipu+b;
		a=currentstock(currentstock(a)+b);
		return a;
	}
	else if(o==2)
	{
		return a;
	}
	}
}
