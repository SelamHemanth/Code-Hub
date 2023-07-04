#include<stdio.h>
int main()
{
int a,sum=0,s=0;
printf("Bank Application\n");
while(1)
{
printf("Enter amount:");
scanf("%d",&a);
if(a>0)
sum = sum + a;
else if(a<0)
s = s - a;
else if(a==0)
break;
}
printf("Total deposited amount:%d\n",sum);
printf("Total withdraw amount:%d\n",s);
return 0;
}
