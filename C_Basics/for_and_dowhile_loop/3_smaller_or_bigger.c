#include<stdio.h>
int main()
{
int n,i,m,r=0,b,num,s=0;
printf("Enter a range:");
scanf("%d",&r);
printf("Enter a number:");
scanf("%d",&n);
b=n;
s=n;
for(i=1;i<r;i++)
{
printf("Enter a number:");
scanf("%d",&num);
if(b<num)
b=num;
else if(s>num)
s=num;
}
printf("Biggest number is %d\n",b);
printf("Smallest number is %d\n",s);
return 0;
}
