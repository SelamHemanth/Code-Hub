#include<stdio.h>

int fact(int a)
{
	int i,c=1;
	for(i=1;i<=a;i++)
		c=c*i;
	return c;
}

int main()
{
	int n,c;
	printf("enter a number:\n");
	scanf("%d",&n);
	c=fact(n);
	printf("%d\n",c);
	return 0;
}
