#include<stdio.h>

void rotate(int arr[],int d,int n);

int main()
{
	int arr[]={1,2,3,4,5,6,7};
	int l=sizeof(arr)/4;
	int d;
	for(int i=0;i<l;i++)
		printf("%d ",arr[i]);
	printf("\nEnter number of times you want to rotate: ");
	scanf("%d",&d);
	rotate(arr,d,l);
	for(int i=0;i<l;i++)
		printf("%d ",arr[i]);
}

void rotate(int arr[],int d,int n)
{
	for(int i=0;i<d;i++)
	{
	int temp;
		temp=arr[0];
		for(int j=1;j<n;j++)
		{
			arr[j-1]=arr[j];
		}
		arr[n-1]=temp;
	}
}
