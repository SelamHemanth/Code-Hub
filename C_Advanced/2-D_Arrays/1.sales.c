#include<stdio.h>
int main ()
{
	int man=0,sale=0,item=0,row,column;
	printf("Enter number of salesmens: ");
	scanf("%d",&row);
	printf("Enter number of items: ");
	scanf("%d",&column);

	int arr[row][column];
	printf("\n");
	for(int i=0;i<row;i++)
	{
		printf("Enter %d items quantities for salesmen-%d -> ",column,i+1);
		for(int j=0;j<column;j++)
			scanf("%d%*c",&arr[i][j]);
	}
	printf("\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			man=man+arr[i][j];
		}
		printf("Total sales by sales man-%d -> %d\n",i+1,man);
		item=item+man;
		man=0;
	}
	printf("\n");

	for(int j=0;j<column;j++)
	{
		for(int i=0;i<row;i++)
		{
			sale=sale+arr[i][j];
		}
		printf("Total sales for a item-%d -> %d\n",j+1,sale);
		sale=0;
	}

	printf("\nTotal sales-> %d\n",item);
}
