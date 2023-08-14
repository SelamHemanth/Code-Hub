#include<stdio.h>

int currentstock(int);

extern int sa,iso,cv;

int sell(int a)
{
	cv++;
	int b,s,o;
	printf("\n\t\tSELL\n");
	printf("\nEnter number of items:");
	scanf("%d",&b);
	if(b<=a)
	{
		sa++;
		iso=iso+b;
		a=currentstock(currentstock(a)-b);
		printf("\nPurchase done is %d\n\n",b);
		return a;
	}
	else if(b>currentstock(1))
	{
		printf("\nSorry,Out of stock!\nAvailable stock is %d only\n\n1.Sell\n2.Cancel\n\nChoose an option:",currentstock(a));
		scanf("%d",&o);
		if(o==1)
		{
			printf("Enter number of items:");
			scanf("%d",&b);
			sa++;
			iso=iso+b;
			a=currentstock(currentstock(a)-b);
			printf("\nPurchase done is %d\n\n",b);
			return a;
		}
		else if(o==2);
		{
			return a;
		}
	}
	else 
	return 0;
}
