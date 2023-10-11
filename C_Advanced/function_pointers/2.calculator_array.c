#include<stdio.h>

int add(int a,int b)
{return a+b;}

int sub(int a,int b)
{return a-b;}

int mul(int a,int b)
{return a*b;}

int div(int a,int b)
{return a/b;}

int mod(int a,int b)
{return a%b;}

int main()
{
int (*p[5])(int,int)={add,sub,mul,div,mod};
int a,b,c;
printf("Enter first value: ");
scanf("%d",&a);
printf("Enter second value: ");
scanf("%d",&b);
printf("\nAddition->0\nSubtraction->1\nMultiplication->2\nDivision->3\nModulation->4\n\nChoose an option: ");
scanf("%d",&c);
printf("Result= %d\n",p[c](a,b));
}
