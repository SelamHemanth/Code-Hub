#include<stdio.h>
int main()
{
int a,b,j,c;
printf("Enter from value:");
scanf("%d",&a);
printf("Enter to value:");
scanf("%d",&b);
for( ;a<=b;a++)
{
c=0;
for(j=1;j<=a;j++)
{
if(a%j==0)
c++;
}
if(c==2)
printf("%d,",a);
}
return 0;
}
