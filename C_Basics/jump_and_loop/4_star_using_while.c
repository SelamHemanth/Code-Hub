#include<stdio.h>
int main ()
{
int i=1,j,n;
printf("enter the number:");
scanf("%d",&n);
while(i<=n)
{
j=1;
while(j<=i)
{
printf("*");
j++;
}
printf("\n");
i++;
}
}



















