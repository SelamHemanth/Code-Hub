#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter 3 numbers:");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b && a>c && a>d)
printf("%d is big\n",a);
if(b>a && b>c && b>d)
printf("%d is big\n",b);
if(c>a && c>b && c>d)
printf("%d is big\n",c);
if(d>a && d>b && d>c)
printf("%d is big\n",d);
return 0;
}

