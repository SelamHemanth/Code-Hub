#include<stdio.h>
int main()
{
	int array1[5]={1,2,3,4,5},array2[5]={6,7,8,9,10},temp;
	for(int i=0,j=4;i<5;i++,j--)
	{
		temp=array1[i];
		array1[i]=array2[j];
		array2[j]=temp;
	}
	printf("array1:");
	for(int i=0;i<5;i++)
		printf("%d ",array1[i]);
	printf("\narray2:");
	for(int i=0;i<5;i++)
		printf("%d ",array2[i]);
	printf("\n");
}
