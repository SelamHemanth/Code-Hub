#include<stdio.h>
int main()
{
int n,i=1,sum=0;
printf("Enter a number:");
scanf("%d",&n);
while(i)
{
sum=sum+(n%10);
n=n/10;
if(n==0)
break;
}
printf("Sum of digits=%d\n",sum);
return 0;
}
