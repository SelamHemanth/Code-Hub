#include<stdio.h>

#define my_sizeof(n) (int)(((long int)(n+1))-((long int)n))
int main()
{
int a=10,*e;
char b='A';
float c=2.0;
double d=4.0;
printf("sizeof int=%d\n",my_sizeof(&a));
printf("sizeof char=%d\n",my_sizeof(&b));
printf("sizeof float=%d\n",my_sizeof(&c));
printf("sizeof double=%d\n",my_sizeof(&d));
printf("sizeof pointer=%d\n",my_sizeof(&e));
}
