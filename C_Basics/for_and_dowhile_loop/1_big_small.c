#include<stdio.h>
int main()
{
int r,n,b=0,s=0,i;
printf("Enter a range:");
scanf("%d",&r);
for(i=0;i<r;i++)
{
printf("Enter a number:");
scanf("%d",&n);
if(n>b)
b=n;
else if(n<s)
s=n;
}
printf("Biggest Number is %d\n",b);
printf("Smallest Number is %d\n",s);
}
