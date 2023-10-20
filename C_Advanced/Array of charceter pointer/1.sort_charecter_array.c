#include<stdio.h>
#include<string.h>

int main()
{
	char *q=NULL;
	char *p[7]={"sunday","monday","tusday","wendsday","thursday","friday","saturday"};
	printf("Before sorting of an array\n\n");
	for(int i=0;i<7;i++)
		printf("%s\n",p[i]);
	for(int i=0;i<7;i++)
	{
		for(int j=i+1;j<7;j++)
		{
			if(strcmp(p[i],p[j])>0)
			{
				q=p[i];
				p[i]=p[j];
				p[j]=q;
			}
		}
	}
	printf("\nAfter sorting an array\n\n");
	for(int i=0;i<7;i++)
		printf("%s\n",p[i]);
}
