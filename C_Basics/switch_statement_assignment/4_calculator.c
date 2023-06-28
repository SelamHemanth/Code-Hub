#include<stdio.h>
int main()
{
int a,c;
char b;
printf("Enter 2 values with operation:");
scanf("%d%c%d",&a,&b,&c);
switch(b)
{
case '+':printf("Result=%d\n",a+c);
	break;
case '-':printf("Result=%d\n",a-c);
         break;
case '*':printf("Result=%d\n",a*c);
         break;
case '/':printf("Result=%d\n",a/c);
         break;
default:printf("Invalid operation\n");
}
return 0;
}
