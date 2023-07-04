#include<stdio.h>
int main()
{
int a,sum=0,s=0,d=0,w=0,i=0;
printf("Bank Application\n");
while(i+1)
{
printf("Enter amount:");
scanf("%d",&a);
if(a>0)
{
d++;
sum = sum + a;
}
else if(a<0)
{
w++;
s = s - a;
}
else if(a==0)
break;
i++;
}
printf("Total deposited amount:%d\n",sum);
printf("Total withdraw amount:%d\n",s);
printf("Total deposits:%d\n",d);
printf("Total withdrawl:%d\n",w);
return 0;
}
