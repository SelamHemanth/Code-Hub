#include<stdio.h>

void swap(int a,int b)
{
int c;
c=a;
a=b;
b=c;
printf("Value A ->%d\n",a);
printf("Value B ->%d\n",b);
}

int main()
{
int a,b;
printf("Enter A value:");
scanf("%d",&a);
printf("Enter B values:");
scanf("%d",&b);
swap(a,b);
}
