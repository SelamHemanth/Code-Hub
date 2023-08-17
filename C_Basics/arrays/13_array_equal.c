#include<stdio.h>
int fun(int arr1[],int arr2[],int);
int main()
{
	int arr1[5],arr2[5],a;
	printf("Enter array 1 :\n");
	for(int i=0;i<5;i++)
		scanf("%d",&arr1[i]);
	printf("\nEnter array 2 :\n");
	for(int i=0;i<5;i++)
		scanf("%d",&arr2[i]);
	a=fun(arr1,arr2,5);
	if(a==1)
		printf("\nBoth are equal\n");
	else
		printf("\nBoth are different\n");
}

int fun(int arr1[],int arr2[],int a)
{
	for(int i=0;i<a;i++)
	{
		if(arr1[i]!=arr2[i])
			return 0;
	}
	return 1;
}
