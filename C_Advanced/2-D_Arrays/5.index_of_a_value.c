#include<stdio.h>
int row,column;

int array(int arr[row][column],int num,int *p1,int *p2)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			if(num==arr[i][j])
			{
				*p1=i;
				*p2=j;
				return 1;
			}
		}
	}
	return 0;
}

int main()
{
	printf("Enter rows: ");
	scanf("%d",&row);
	printf("Enter columns: ");
	scanf("%d",&column);

	int arr[row][column],num,r,c,check;
	printf("Enter %d elements for array:\n",row*column);
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
			scanf("%d",&arr[i][j]);
	}
	printf("\nMatrix\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
			printf("%d\t",arr[i][j]);
		printf("\n");
	}
	printf("\nEnter a number: ");
	scanf("%d",&num);
	check=array(arr,num,&r,&c);
	if(check==1)
		printf("Row -> %d\nColumn -> %d\n",r,c);
	else
		printf("Number not found!\n");
}

