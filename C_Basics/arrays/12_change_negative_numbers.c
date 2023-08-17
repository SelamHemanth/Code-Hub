#include<stdio.h>
int fun(int arr[]);

int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
	fun(arr);
	printf("After change an array:");
	for(int i=0;i<5;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

int fun(int arr[])
{
	for(int i=0;i<5;i++)
	{
		if(arr[i]<0)
		{
			arr[i]=(arr[i]*-1);
		}
	}
	return 0;
}
