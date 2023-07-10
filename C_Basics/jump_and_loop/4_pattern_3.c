#include<stdio.h>
int main()
{
	int i,j,n,k,temp=1;
	printf("Enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=temp;k<=n;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		temp = temp+1;
		printf("\n");
	}
}
