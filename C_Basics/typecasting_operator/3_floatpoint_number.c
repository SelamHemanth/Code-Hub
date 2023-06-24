#include<stdio.h>
int main()
{
int a,b;
float n;
printf("Enter a number:");
scanf("%f",&n);
a=(int)n;
a=a%10;
printf("%d\n",a);
b=(n*10);
b=(b%10);
printf("%d\n",b);
return 0;
}
