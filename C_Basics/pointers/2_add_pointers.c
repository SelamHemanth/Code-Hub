#include<stdio.h>

int main()
{
int x=10,y=20,c;
int *a=&x,*b=&y;
c=(*a)+(*b);
printf("Result: %d\n",c);
}
