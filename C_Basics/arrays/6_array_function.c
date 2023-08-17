#include<stdio.h>

int func(int arr[] ,int n,int a);

int main()
{
	int a,n,s;
	printf("Enter a array size:");
	scanf("%d",&a);
	int arr[a];
	for(int i=0;i<a;i++)
	scanf("%d",&arr[i]);
	printf("\nEnter array elements:\n");
	for(int i=0;i<a;i++)
	printf("%d ",arr[i]);
	printf("\nEnter number key:");
	scanf("%d",&n);
	a=sizeof(arr)/4;
	s=func(arr,n,a);
	if(s==-1)
	printf("Element not found\n");
	else
	printf("%d index is %d\n",n,s);
}

int func(int arr[ ],int n, int a)
{
	for(int i=0;i<a;i++)
	{
		if(arr[i]==n)
		{
			return i;
		}
	}
return -1;
}
