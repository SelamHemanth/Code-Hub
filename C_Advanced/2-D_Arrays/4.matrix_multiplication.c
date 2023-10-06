#include<stdio.h>

int main()
{
	int row,column,row1,column1;
	printf("Enter first array size:\n");
	printf("Number of rows -> ");
	scanf("%d",&row);
	printf("Number of columns -> ");
	scanf("%d",&column);
	printf("Enter second array size:\n");
	printf("Number of rows -> ");
	scanf("%d",&row1);
	printf("Number of columns -> ");
	scanf("%d",&column1);
	if((column==row1) && (row==column1))
	{
		int arr1[row][column],arr2[row][column],res[row][column];
		printf("\nEnter first array elements:\n");
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<column;j++)
				scanf("%d",&arr1[i][j]);
		}
		printf("\nEnter second array elements:\n");
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<column;j++)
				scanf("%d",&arr2[i][j]);
		}

		printf("\nMATRIX-1\n");
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<column;j++)
				printf("%d\t",arr1[i][j]);
			printf("\n");
		}
		printf("\nMATRIX-2\n");
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<column;j++)
				printf("%d\t",arr2[i][j]);
			printf("\n");
		}

		for(int i=0;i<row;i++)
		{
			for(int j=0;j<column;j++)
			{
				res[i][j]=0;
				for(int k=0;k<column;k++)
				{
					res[i][j]=arr1[i][k]*arr2[k][j];
				}
			}
		}
		printf("\nRESULT\n");
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<column;j++)
				printf("%d\t",res[i][j]);
			printf("\n");
		}
	}
	else
		printf("Multiplication not possible foe these array sizes\n");
}
