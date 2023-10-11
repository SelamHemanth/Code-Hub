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

void pointer(int (*p[5])(int,int),int x,int y,char z)
{
switch(z)
{
case '+':p[0](x,y);break;
case '-':p[1](x,y);break;
case '*':p[2](x,y);break;
case '/':p[3](x,y);break;
case '%':p[4](x,y);break;
default :printf("Choose correct expression\n");    
}

}


int main()
{
int a,b;
char c;
printf("Addition-> +\nSubtraction-> -\nMultiplication-> *\nDivision-> /\nModuloation-> %%\n");
printf("Enter values with expression: ");
scanf("%d%c%d",&a,&c,&b);
int (*p[5])(int,int)={add,sub,mul,div,mod};
pointer(p,a,b,c);
}

