#include<stdio.h>
int main()
{
int i,n;
printf("Enter number:");
scanf("%d",&n);
for(int m=1,i=1;i<=n;i++)
{
for(int j=1;j<=i;j++,m++)
{
printf("%d ",m);
}
printf("\n");
}
}
