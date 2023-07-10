#include<stdio.h>
int main()
{
	int i,j,n,k,temp=1;
	printf("Enter number:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(k=temp;k>=0;k--)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("*");
		}
		temp = temp+1;
		printf("\n");
	}
}
