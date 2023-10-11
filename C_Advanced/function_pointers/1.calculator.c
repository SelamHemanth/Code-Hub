#include<stdio.h>
int add(int a,int b)
{printf("Result=%d\n",a+b);}

int sub(int a,int b)
{printf("Result=%d\n",a-b);}

int mul(int a,int b)
{printf("Result=%d\n",a*b);}

int div(int a,int b)
{printf("Result=%d\n",a/b);}

int mod(int a,int b)
{printf("Result=%d\n",a%b);}

int main()
{
int a,b;
char c;
printf("Addition-> +\nSubtraction-> -\nMultiplication-> *\nDivision-> /\nModuloation-> %%\n");
printf("Enter values with expression: ");
scanf("%d%c%d",&a,&c,&b);
int (*p)(int,int);

switch(c)
{
case '+':p=add;add(a,b);break;
case '-':p=sub;sub(a,b);break;
case '*':p=mul;mul(a,b);break;
case '/':p=div;div(a,b);break;
case '%':p=mod;mod(a,b);break;
default :printf("Choose correct expression\n");			
}
}
