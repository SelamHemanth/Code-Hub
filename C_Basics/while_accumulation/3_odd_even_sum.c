#include<stdio.h>
int main()
{
int n,i=0,sum=0,odd=0,even=0;
printf("Enter range:");
scanf("%d",&n);
while(i<=n)
{
sum = sum + i;
if(i%2==0)
even=even+i;
else if(i%2!=0)
odd=odd+i;
i++;
}
printf("Sum of n numbers=%d\n",sum);
printf("Sum of even numbers=%d\n",even);
printf("Sum of odd numbers=%d\n",odd);
return 0;
}
