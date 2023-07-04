#include<stdio.h>
int main()
{
int a,b,temp=0,i=0;
printf("Enter division numbers:");
scanf("%d%d",&a,&b);
while(a>=b)
{
a=a-b;
i++;
}
printf("Quotient:%d\n",i);
printf("Remainder:%d\n",a);
return 0;
}
