#include<stdio.h>
int main()
{
int n,p,i=1,pow=1;
printf("Enter number and power:");
scanf("%d%d",&n,&p);
while(i<=p)
{
pow=pow * n;
i++;
}
printf("%d to the power %d -> %d\n",n,p,pow);
return 0;
}
