#include<stdio.h>
#include<stdlib.h>

void swap(int *p,int i,int j)
{
	int temp;
	temp=p[i];
	p[i]=p[j];
	p[j]=temp;
}

int sort(int *p,int s)
{
	int count=0;
	for(int i=0;i<s;i++)
	{

		for(int j=0;j<s-i;j++)
		{
			if(p[j]>p[j+1])
				swap(p,j,j+1);
		}
	}
	for(int i=0;i<s;i++)
	{
		if(p[i]==p[i+1])
		{	p[i+1]='z';count++;}
	}
	return s-count+1;
}

int main()
{
	int j,*arr4,s1,s2;
	printf("Enter size of first array: ");
	scanf("%d",&s1);
	printf("Enter size of second array: ");
	scanf("%d",&s2);
	int *arr1=(int *)calloc(s1,sizeof(int));
	int *arr2=(int *)calloc(s2,sizeof(int));
	printf("Enter first array elements: ");
	for(int i=0;i<s1;i++)
		scanf("%d",&arr1[i]);
	printf("Enter second array elements: ");
	for(int i=0;i<s2;i++)
		scanf("%d",&arr2[i]);
	int *arr3=(int *)calloc(s1+s2,sizeof(int));
	for(j=0;j<s1;j++)
		arr3[j]=arr1[j];
	for(int i=0;i<s2;i++,j++)
		arr3[j]=arr2[i];
	int c=sort(arr3,(s1+s2)-1);
	sort(arr3,(s1+s2)-1);
	arr4=(int *)realloc(arr3,c*sizeof(int));
//if(arr3==arr4)
//printf("Both address are equal\n");	
	if(arr4==NULL)
		printf("Memory not allocated\n");
	else
	{
		for(int i=0;i<c;i++)
			printf("%d ",arr4[i]);
		printf("\n");

	}
//free(arr1);free(arr2);free(arr3);free(arr4);
}
