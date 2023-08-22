#include<stdio.h>

int main()
{
int a=10,b=20,c=30,*p=0;
p=&a;
printf("values of A =%d\n",*p);
p=&b;
printf("values of B =%d\n",*p);
p=&c;
printf("values of C =%d\n",*p);
}
