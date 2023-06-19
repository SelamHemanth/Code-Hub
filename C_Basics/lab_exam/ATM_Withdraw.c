#include<stdio.h>
int main()
{
int a,b=0,c=0,d=0,e=0,f=0;
printf("Enter the amount to withdraw:");
scanf("%d",&a);
printf("Output expected:\n");
printf("Money dispensed as follow:\n");
if(a>=200)
{
b=a/2000;
a=a%2000;
}
if(a>=500)
{
c=a/500;
a=a%500;
}
if(a>=200)
{
d=a/200;
a=a%200;
}
if(a>=100)
{
e=a/100;
a=a%100;
}
if(a>=50)
{
f=a/50;
a=a%50;
}
else
{
printf("Invalid Amount\n");
}
printf("No of 2000/- notes:%d\n",b);
printf("No of 500/- notes:%d\n",c);
printf("No of 200/- notes:%d\n",d);
printf("No of 100/- notes:%d\n",e);
printf("No of 50/- notes:%d\n",f);
return 0;
}
