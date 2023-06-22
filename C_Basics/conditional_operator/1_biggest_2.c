#include<stdio.h>
int main()
{
int a,b;
printf("Enter 2 numbers:");
scanf("%d%d",&a,&b);
a>b ? printf("%d is big\n",a) : printf("%d is big\n",b);
return 0;
}
