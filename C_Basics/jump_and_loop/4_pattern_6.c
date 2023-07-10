#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if((i+j)%2==0)
				printf("1");
			else
				printf("0");
		}
		printf("\n");
	}
}

