#include<stdio.h>
int main()
{
int a,b,c=0;
printf("Enter two range values:");
scanf("%d%d",&a,&b);
printf("the following numbers are divisible with 10:");
while(a<=b)
{
if(a%10==0)
{
c++;
printf("%d ",a);
}
a++;
}
printf("\nTotal number of 10 divisible numbers:%d\n",c);
return 0;
}
