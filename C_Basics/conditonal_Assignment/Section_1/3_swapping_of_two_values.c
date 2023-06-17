#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter a value:");
scanf("%d",&a);
printf("Enter a value:");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("A value is %d and B value is %d",a,b);
return 0;
}
