#include <stdio.h>
int main()
{
int n,i=1, c=0;
printf("Enter a number: ");
scanf("%d", &n);
do
{
if (n% i == 0)
c++;
if(c>2)
{
printf("%d is not a prime number\n",n);
break;
}
i++;
}while(i<=n);
if(c<=2)
printf("%d is a prime number.\n", n);
return 0;
}

