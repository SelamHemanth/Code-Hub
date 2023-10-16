#include<stdio.h>

int main()
{
	int n,j,a;
	printf("Enter array size: ");
	scanf("%d",&n);
	int arr[n],prob[n];
	printf("Enter array elements: ");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n;i++)
	{
		a=1;
		for(j=0;j<n;j++)
		{
			if(arr[j]==arr[i])
				continue;
			else
			{
				a=a*arr[j];
			}
		}
		prob[i]=a;
	}
	printf("Output: ");
	for(int i=0;i<n;i++)
		printf("%d ",prob[i]);
	printf("\n");
}
