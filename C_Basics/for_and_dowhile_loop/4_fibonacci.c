#include<stdio.h>
int main()
{
int s,n,temp,i,fib=1;
printf("Enter range:");
scanf("%d",&n);
for(s=0,i=0;i<n;i++)
{
temp=fib+s;
fib=s;
s=temp;
printf("%d ",s);
}
}
