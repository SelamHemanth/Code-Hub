#include<stdio.h>
int main()
{
int a,b,mul=0,i=1;
printf("Enter two values:");
scanf("%d%d",&a,&b);
while(i<=b)
{
mul=mul+a;
i++;
}
printf("Result=%d\n",mul);
return 0;
}
