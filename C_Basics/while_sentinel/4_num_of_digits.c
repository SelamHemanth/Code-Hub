#include<stdio.h>
int main()
{
int n,c=0,i=1;
printf("Enter a number:");
scanf("%d",&n);
while(i)
{
c++;
n=n/10;
if(n==0)
break;
}
printf("Output:%d\n",c);
}
