#include<stdio.h>

int  main()
{
	int arr[10],n,s;
	printf("Enter a value:");
	scanf("%d",&n);
	for(int i=0;n>0;i++)
	{
		arr[i]=n%2;
		n=n/2;
		s=i;
	}
	printf("\nBinary number is ");
	for(int i=s;i>=0;i--)
		printf("%d ",arr[i]);
	printf("\n");
}
