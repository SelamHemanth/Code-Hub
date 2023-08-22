#include<stdio.h>
#include<stdlib.h>

int main()
{
int a=10,*x=NULL;
x=&a;
printf("Adress of variable is %p\nits value is %d\nits size is %ld\n",&a,a,sizeof(a));
printf("\nAdress of pointer is %p\nits value is %d\nits size is %ld\n",x,*x,sizeof(*x));
}
