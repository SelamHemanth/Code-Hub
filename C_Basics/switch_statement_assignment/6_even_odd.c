#include<stdio.h>
int main()
{
int a;
printf("Enter a number:");
scanf("%d",&a);
switch(a%2==0)
{
case 1:printf("%d is even\n",a);
	break;
default:printf("%d is odd\n",a);
	break;
}
return 0;
}

