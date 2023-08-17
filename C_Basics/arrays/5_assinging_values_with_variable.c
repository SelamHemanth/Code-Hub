#include<stdio.h>

int main()
{
	int a,arr[a];
	printf("Enter range of an array:");
	scanf("%d",&a);
	for(int i=0;i<a;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<a;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
