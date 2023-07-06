#include<stdio.h>
int main()
{
int n,i,r,sum=0;
printf("Enter a number:");
scanf("%d",&n);
for(i=0; ;i++)
{
r=n%10;
sum=sum*10+r;
n=n/10;
if(n==0)
break;
}
printf("%d\n",sum);
}
