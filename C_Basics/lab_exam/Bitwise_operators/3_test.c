#include<stdio.h>
#define CHECK(a,p) a&(0x01<<p)
int test(int a,int b);
int main()
{
short int a,b,c;
printf("Enter a value: ");
scanf("%hd",&a);
printf("Enter b value: ");
scanf("%hd",&b);
c=test(a,b);
if(c==1)
printf("Test -> OK\n");
else if(c==0)
printf("Test -> NO\n");
}

int test(int a,int b)
{
int c;
c=CHECK(a,b)?1:0;
if(b>15)
{
return 0;
}
else if(c==1)
return 1;
else 
return 0;
}
