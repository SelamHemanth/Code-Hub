#include<stdio.h>
int count(int);

int main()
{
int a,b;
printf("Enter a number: ");
scanf("%d",&a);
b=count(a);
printf("Count -> %d\n",b);
}

int count(int a)
{
int c=0,b;
for(int i=31;i>=0;i--)
{
b=a&(0x01<<i)?1:0;
if(b==1)
c++;
}
return c;
}
