#include<stdio.h>
int main()
{
int n,i=0,m;
printf("Enter a number:");
scanf("%d",&n);
do
{
i++;
n=n/10;
if(n==0)
break;
}
while(1);
printf("number of digits:%d\n",i);
}
