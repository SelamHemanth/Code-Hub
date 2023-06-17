#include<stdio.h>
int main()
{
int a,b;
float r;
printf("Enter number of calls:");
scanf("%d",&a);
if(a>100)
{
r=((a-100)*1.25)+250;
printf("bill:%.2f",r);
}
if(a<=100)
{
b=250;
printf("bill:%d",b);
}
return 0;
}

