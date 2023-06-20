#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("Enter 4 numbers");
scanf("%d%d%d%d",&a,&b,&c,&d);
e=a;
if(b>e)
e=b;
if(c>e)
e=c;
if(d>e)
e=d;
printf("%d is big\n",e);
return 0;
}
