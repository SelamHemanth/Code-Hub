#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter 3 numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
printf("%d is biggest",a);
}
if(b>c)
{
if(b>a)
printf("%d is biggest",b);
}
if(c>a)
{
if(c>b)
printf("%d is biggest",c);
}
return 0;
}
