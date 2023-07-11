#include<stdio.h>

int IsPrime(int n)
{
int i=1,c=0;
do
{
if (n% i == 0)
c++;
if(c>2)
{
return 0;
break;
}
i++;
}while(i<=n);
if(c<=2)
return 1;
}

int main()
{
int n,r;
printf("Enter a number: ");
scanf("%d",&n);
r=IsPrime(n);
if(r==1)
printf("%d is a prime number.\n", n);
else if(r==0)
printf("%d is not a prime number\n",n);
return 0;
}
