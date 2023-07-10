#include<stdio.h>
int main()
{
int i,n;
printf("Enter number:");
scanf("%d",&n);
for(int m=n,i=1;i<=n;i++,m--)
{
for(int j=1,k=m;j<=i;j++)
{
printf("%d",k);
}
printf("\n");
}
}
