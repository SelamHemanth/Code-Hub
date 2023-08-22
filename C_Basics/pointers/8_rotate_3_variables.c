#include<stdio.h>

int main()
{
int a,b,c,*x=&a,*y=&b,*z=&c;
printf("Enter 3 values:\n");
scanf("%d%d%d",x,y,z);
printf("x=%d\ny=%d\nz=%d\n",*x,*y,*z);
*x=(*x)+(*y);
*y=(*x)-(*y);
*x=(*x)-(*y);
*y=(*y)+(*z);
*z=(*y)-(*z);
*y=(*y)-(*z);
printf("\nx=%d\ny=%d\nz=%d\n",*x,*y,*z);
}
