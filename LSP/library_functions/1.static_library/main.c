#include<stdio.h>

void add (int,int);
void sub (int,int);
void mul (int,int);
void div (int,int);
void mod (int,int);

int main()
{
int a,b;
char c;
printf("Enter expression (x <operator> y): ");
scanf("%d%c%d",&a,&c,&b);
switch(c)
{
case '+':add(a,b);break;
case '-':sub(a,b);break;
case '*':mul(a,b);break;
case '/':div(a,b);break;
case '%':mod(a,b);break;
}
return 0;
}
