#include<stdio.h>

int rem(int a,int b)
{
int r;
r=a%b;
return r;
}

int main()
{
int a,b;
printf("Enter two values: ");
scanf("%d%d",&a,&b);
printf("Remainder= %d\n",rem(a,b));
return 0;
}
