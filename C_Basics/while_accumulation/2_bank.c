#include<stdio.h>
int main()
{
int i=0,n,a,sum=0,s=0,dep,with;
printf("Enter number of customers:");
scanf("%d",&n);
while(i<n)
{
printf("Enter amount:");
scanf("%d",&a);
if(a>0)
{
sum = sum + a;
dep=sum;
}
else if(a<0)
{
s = dep + a;
with=s;
}
i++;
}
printf("Total deposited amount:%d\n",dep);
printf("Total withdraw amount:%d\n",with);
return 0;
}
