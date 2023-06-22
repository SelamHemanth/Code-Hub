#include<stdio.h>
int main()
{
int a;
printf("Enter a number:");
scanf("%d",&a);
a>0?printf("%d is positive\n",a):(a<0?printf("%d is negative\n",a):printf("%d is zero\n",a));
return 0;
}

