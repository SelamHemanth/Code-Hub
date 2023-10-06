#include<stdio.h>

int main()
{
	int row,column;
	printf("Number of rows -> ");
	scanf("%d",&row);
	printf("Number of columns -> ");
	scanf("%d",&column);
	int arr1[row][column],arr2[row][column];
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
	printf("\nMatrix Addiion\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
			printf("%d\t",arr1[i][j]+arr2[i][j]);
		printf("\n");
	}
	printf("\nMatrix Subtraction\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
			printf("%d\t",arr1[i][j]-arr2[i][j]);
		printf("\n");
	}
	return 0;
}
