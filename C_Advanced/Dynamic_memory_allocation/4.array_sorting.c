#include<stdio.h>
#include<stdlib.h>

void swap(int *p,int i,int j)
{
	int temp;
	temp=p[i];
	p[i]=p[j];
	p[j]=temp;
}

void sort(int *p,int s)
{
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<s-i;j++)
		{
			if(p[j]>p[j+1])
				swap(p,j,j+1);
		}
	}
}

int main()
{
	int s;
	printf("Enter array size: ");
	scanf("%d",&s);
	int *p=(int *)calloc(s,sizeof(int));
	printf("Enter %d elemnts:\n",s);
	for(int i=0;i<s;i++)
		scanf("%d",&p[i]);
	sort(p,s-1);
	for(int i=0;i<s;i++)
		printf("%d ",p[i]);
	printf("\n");
	free(p); 
}
