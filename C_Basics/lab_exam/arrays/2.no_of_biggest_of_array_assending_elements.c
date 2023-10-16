#include<stdio.h>

int main()
{
	int n,j=0,count=0,res=0;
	printf("Enter array size: ");
	scanf("%d",&n);
	int arr[n],temp[n];
	printf("Enter array elements: ");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n;i++)
	{
		if(arr[i]<arr[i+1])
			count++;
		else
		{
			temp[j]=count+1;
			count=0;
			j++;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(res<temp[i])
			res=temp[i];
	}
	printf("Output: %d\n",res);
}
