#include <stdio.h>
int main()
{
int n,i, c = 1;
printf("Enter a number: ");
scanf("%d", &n);
i = 2;
while (i <= n / 2)
{
if (n% i == 0)
{
c = 0;
break;
}
i++;
}
if(c)
{
printf("%d is a prime number.\n", n);
}
else
{
printf("%d is not a prime number.\n", n);
}
return 0;
}

