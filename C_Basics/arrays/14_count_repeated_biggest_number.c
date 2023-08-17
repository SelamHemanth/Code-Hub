#include<stdio.h>
int big(int arr[]);
int main()
{
	int arr[10],a,c=0;
	printf("Enter 10 numbers:\n");
	for(int i=0;i<10;i++)
		scanf("%d",&arr[i]);
	a=big(arr);
	for(int i=0;i<10;i++)
	{
		if(a==arr[i])
			c++;
	}
	printf("\nBiggest number is %d, repeated %d times\n",a,c);
}

int big(int arr[])
{
	int a=0;
	for(int i=0;i<10;i++)
	{
		if(arr[i]>a)
			a=arr[i];
	}
	return a;
}
