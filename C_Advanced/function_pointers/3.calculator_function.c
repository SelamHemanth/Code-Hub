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

void pointer(int (*p)(int,int),int x,int y)
{
p(x,y);
}


int main()
{
int a,b;
char c;
printf("Addition-> +\nSubtraction-> -\nMultiplication-> *\nDivision-> /\nModuloation-> %%\n");
printf("Enter values with expression: ");
scanf("%d%c%d",&a,&c,&b);

switch(c)
{
case '+':pointer(add,a,b);break;
case '-':pointer(sub,a,b);break;
case '*':pointer(mul,a,b);break;
case '/':pointer(add,a,b);break;
case '%':pointer(add,a,b);break;
default :printf("Choose correct expression\n");			
}
}

