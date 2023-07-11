#include<stdio.h>

void table(int n)
{
int i;
for(i=1;i<=10;i++)
printf("%d*%d=%d\n",n,i,n*i);
}

int main()
{
int n;
printf("Enter table number:");
scanf("%d",&n);
table(n);
}
