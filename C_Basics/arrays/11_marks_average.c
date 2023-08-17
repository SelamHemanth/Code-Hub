#include<stdio.h>
int fun(int arr[]);

int main()
{
	int arr[5],sum=0,a;
	for(int i=0;i<5;i++)
	{
		printf("Enter student-%d marks:\n",i+1);
		for(int i=0;i<5;i++)
		{
			scanf("%d",&arr[i]);
		}
		a=fun(arr);
		sum=sum+a;
	}
	printf("\nAverage of class is %d%%\n",sum/5);
}

int fun(int arr[])
{
	int sum=0;
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	return sum/5;
}
