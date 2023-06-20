#include<stdio.h>
int main()
{
int a,b=0,c=0,d=0,e=0,f=0;
printf("Enter the amount to withdraw:");
scanf("%d",&a);
if(a%50==0)
{
printf("Output expected:\n");
printf("Money dispensed as follow:\n");
if(a>=2000)
{
b=a/2000;
a=a%2000;
printf("No of 2000/- notes:%d\n",b);
}
if(a>=500)
{
c=a/500;
a=a%500;
printf("No of 500/- notes:%d\n",c);
}
if(a>=200)
{
d=a/200;
a=a%200;
printf("No of 200/- notes:%d\n",d);

}
if(a>=100)
{
e=a/100;
a=a%100;
printf("No of 100/- notes:%d\n",e);

}
if(a>=50)
{
f=a/50;
a=a%50;
printf("No of 50/- notes:%d\n",f);
}
}
else
{
printf("Invalid Amount\n");
}
return 0;
}
