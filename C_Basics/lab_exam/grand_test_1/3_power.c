#include<stdio.h>
int main()
{
int a,b,x,y,i,j;
printf("Enter two values: ");
scanf("%d%d",&a,&b);
for(i=1,y=a;i<b;i++)
{
for(j=1,x=0;j<=a;j++)
{
x+=y;
}
y=x;
}
printf("Result-> %d\n",y);
}
