#include<stdio.h>
int main()
{
int a,b;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
switch(a>b)
{
case 1:printf("%d is big\n",a);
	break;
default:printf("%d is big\n",b);
	break;
}
return 0;
}

