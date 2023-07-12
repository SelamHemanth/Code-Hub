#include<stdio.h>
int main()
{
	int n, i=1, k=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(i <= n)
	{
		if(k<i)
		{
			printf("*");
			k++;
		}
		else
		{
			printf(" ");
			k=0;
			i++;
			printf("\n");
		}
	}
}
