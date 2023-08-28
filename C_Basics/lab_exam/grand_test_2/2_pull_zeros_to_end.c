#include<stdio.h>

int main()
{
	int arr[10],size=sizeof(arr)/4,temp;
	printf("Enter 10 elements into array:\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int x=0;x<size;x++)
	{
		if(arr[x]==0)
		{
			temp=arr[x];
			for(int j=x;j<size-1;j++)
			{
				arr[j]=arr[j+1];
			}
			arr[size-1]=temp;
		}
	}
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
}
