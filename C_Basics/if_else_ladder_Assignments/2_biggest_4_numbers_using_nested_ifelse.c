#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter 4 numbers");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b)
{
if(a>c)
{
if(a>d)
printf("%d is big",a);
}
}
if(b>a)
{
if(b>c)
{
if(b>d)
printf("%d is big",b);
}
}
if(c>a)
{
if(c>b)
{
if(c>d)
printf("%d is big",c);
}
}
if(d>a)
{
if(d>b)
{
if(d>c)
printf("%d is big",d);
}
}
else
printf("All are equal\n");
return 0;
}
