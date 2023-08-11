#include<stdio.h>

int currentstock(int);

extern int sa,iso,cv;

int sell(int a)
{
cv++;
	int b,s,o;
	printf("\n\t\tSELL\n\n1.Sell\n2.Cancel\n\nChoose an option:");
	scanf("%d",&o);
	if(o==1)
	{
	sa++;
		printf("\nEnter number of items:");
		scanf("%d",&b);
		if(b<=a)
		{
			iso=iso+b;
			a=currentstock(currentstock(a)-b);
			printf("\nPurchase done is %d\n\n",b);
			return a;
		}
		else if(b>currentstock(1))
			printf("\nSorry!.\nOut of stock\n");
	}
	else if(o==2)
		return 0;
}

