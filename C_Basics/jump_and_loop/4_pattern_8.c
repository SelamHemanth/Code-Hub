#include<stdio.h>
int main()
{
int i,n;
printf("Enter number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(int j=n,k=1;k<=i;k++,j--)
{
printf("%d",j);
}
printf("\n");
}
}
