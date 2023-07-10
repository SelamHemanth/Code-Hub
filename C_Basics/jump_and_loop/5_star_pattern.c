#include<stdio.h>
int main()
{
int i,n,temp=1;
printf("Enter number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(temp=n;temp>=i;temp--)
printf(" ");
for(int j=1;j<=i;j++)
{
printf("* ");
}
printf("\n");
}
}

