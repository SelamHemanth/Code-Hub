#include <stdio.h>
int main()
{
int n,m;
printf("Enter a number: ");
scanf("%d", &n);
if(n<0)
{
m= -n;
}
else
{
m=n;
}
printf("%d\n",m);
return 0;
}
