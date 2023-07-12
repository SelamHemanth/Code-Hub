#include<stdio.h>

int sum(int c,int i)
{
int y=0;
for(int j=0;j<i;j++)
{
y=y+c;
}
return y;
}

int fact(int a)
{
	int i,c=1;
	for(i=1;i<=a;i++)
	c=sum(c,i);
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
