#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			(i+j)%2==0?printf("1"):printf("0");
		}
		if(i==n)
			break;	
		printf("\n");
	}
	printf("\n");
}
