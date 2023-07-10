#include<stdio.h>
int main()
{
	int n, i, j, k;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i = 1; i <= n; i++)
	{
		j=i;
LBL1:

		if(j<n)
		{
			printf(" ");
			j++;
			goto LBL1;		
		}

		k=1;
LBL2:
		if(k<(i*2))
		{
			printf("*");
			k++;
			goto LBL2;
		}
		printf("\n");
	}
}
