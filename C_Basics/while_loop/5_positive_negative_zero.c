#include<stdio.h>
int main()
{
int n,i=0,a;
printf("Enter range:");
scanf("%d",&a);
while(i<a)
{
printf("Enter a number:");
scanf("%d",&n);
if(n>0)
printf("%d is positive\n",n);
else if(n<0)
printf("%d is negative\n",n);
else if(n==0)
printf("%d is zero\n",n);
i++;
}
return 0;
}
