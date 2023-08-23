#include<stdio.h>

int swap(int,int);

int main()
{
int a,b;
printf("Enter a value:");
scanf("%d",&a);
printf("Enter b value:");
scanf("%d",&b);
swap(a,b);
printf("\nmain program:\n");
printf("a=%d\n",a);
printf("b=%d\n",b);
}

int swap(int a,int b)
{
int c;
c=a;
a=b;
b=c;
printf("\nCall by value:\n");
printf("a=%d\n",a);
printf("b=%d\n",b);
}
