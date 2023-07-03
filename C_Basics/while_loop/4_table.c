#include<stdio.h>
int main()
{
int n,i=10;
printf("Enter table number:");
scanf("%d",&n);
while(i>=1 && i<=10 )
{
printf("%d*%d=%d\n",n,i,i*n);
i--;
}
return 0;
}
