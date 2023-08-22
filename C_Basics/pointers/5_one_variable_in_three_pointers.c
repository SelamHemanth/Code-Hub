#include<stdio.h>

int fun(int *a,int *b,int *c);


int main()
{
int *a=0,*b=0,*c=0,d;
d=10;
a=&d;
b=&d;
c=&d;
fun(a,b,c);
printf("change value by variable: \n");
scanf("%d",&d);
fun(a,b,c);
printf("change value by pointer-A: \n");
scanf("%d",a);
fun(a,b,c);
printf("change value by pointer-B: \n");
scanf("%d",a);
fun(a,b,c);
printf("change value by pointer-C: \n");
scanf("%d",a);
fun(a,b,c);
}

int fun(int *a,int *b,int *c)
{
printf("A pointer value=%d\nB pointer value=%d\nC pointer value=%d\n",*a,*b,*c);
}
