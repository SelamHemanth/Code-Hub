#include<stdio.h>

void rotate(int *a,int *b,int *c);

int main()
{
int a,b,c;
int *x=&a,*y=&b,*z=&c;
printf("Enter three values:\n");
scanf("%d%d%d",x,y,z);
rotate(x,y,z);
printf("Rotate: %d %d %d\n",*x,*y,*z);
}

void rotate(int *a,int *b,int *c)
{
int d;
d=*a;
*a=*b;
*b=*c;
*c=d;
}
