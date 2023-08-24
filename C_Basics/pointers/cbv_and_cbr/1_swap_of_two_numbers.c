#include<stdio.h>

int swapcbr(int *p1,int *p2);
int swapcbv(int,int);

int main()
{
	int a,b;
	printf("Enter a value:");
	scanf("%d",&a);
	printf("Enter b value:");
	scanf("%d",&b);
	swapcbr(&a,&b);
	printf("\nmain program:\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	swapcbv(a,b);
	printf("\nmain program:\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}

int swapcbr(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
	printf("\nCall by reference:\n");
	printf("a=%d\n",*a);
	printf("b=%d\n",*b);
}
int swapcbv(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("\nCall by value:\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}
