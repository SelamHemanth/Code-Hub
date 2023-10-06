#include<stdio.h>

int main()
{
	int row;
	printf("Enter number of names:");
	scanf("%d",&row);
	char arr[row][10];
	for(int i=0;i<5;i++)
	{
	printf("Enter name-%d -> ",i+1);
	scanf("%s",arr[i]);
	getchar();
	}
	printf("\nString as Charecters\n");
	for(int i=0;i<5;i++)
	{
		for(int j=0;arr[i][j]!='\0';j++)
			printf("%c\t",arr[i][j]);
		printf("\n");
	}

}
