#include<stdio.h>

int main()
{
	int a,b,c,*x=&a,*y=&b,*z=&c;
	printf("Enter 3 values:\n");
	scanf("%d%d%d",x,y,z);
	if(*x>*y)
	{
		if(*x>*z)
			printf("%d is big\n",*x);
	}
	if(*y>*z)
	{
		if(*y>*x)
			printf("%d id big\n",*y);
	}
	if(*z>*x)
	{
		if(*z>*y)
			printf("%d is big\n",*z);
	}

}
