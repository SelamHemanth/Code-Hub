#include<stdio.h>
int main()
{
	int a[100],c;
	c=(sizeof(a)/4);
	for(int i=0;i<c;i++)
	{
		a[i]=i+1;
	}
	printf("1-100 numbers:");
	for(int i=0;i<c;i++)
	{
		printf("%d, ",a[i]);
	}
	printf("\n\n1-100 even numbers:");
	for(int i=0;i<c;i++)
	{
		if(a[i]%2==0)
			printf("%d, ",a[i]);
	}
	printf("\n\n1-100 odd numbers:");
	for(int i=0;i<c;i++)
	{
		if(a[i]%2!=0)
			printf("%d, ",a[i]);
	}
	printf("\n\n1-100 numbers add with 5: ");
	for(int i=0;i<c;i++)
	{
		printf("%d, ",a[i]+5);
	}
	printf("\n");
}
