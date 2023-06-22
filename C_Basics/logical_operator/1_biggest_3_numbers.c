#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter 3 numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("%d is big\n",a);
if(b>a && b>c)
printf("%d is big\n",b);
if(c>a && c>b)
printf("%d is big\n",c);
return 0;
}
