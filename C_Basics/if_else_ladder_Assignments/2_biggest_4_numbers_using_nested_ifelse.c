#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("Enter 4 numbers");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b)
{
if(a>c)
{
if(a>d)
e=a;
else 
{
e=d;
}
}
else
{
{
if (c>d)
{
e=c;
}
else
{
e=d;
}
}
}
}
else
{
{
if(d>c)
{
if(b>d)
{
e=b;
}
else
{
e=d;
}
}
else
{
if(c>d)
{
e=c;
}
else
{
e=d;
}
}
}
printf("%d is big number\n",e);
return 0;
}
return 0;
}
