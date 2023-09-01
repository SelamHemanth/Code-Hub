#include<stdio.h>
#define CHECK(a,p) a&(0x01<<p)

int ToDate(int,int,int);
int Month(int);
int Day(int);
int Year(int);

int main()
{
int d,m,y,a,g=1;
short int r,b;
printf("Enter MM-DD-YY: ");
scanf("%d%*c%d%*c%d",&m,&d,&y);
a=y%10;
g=g*a;
y=y/10;
a=y%10;
y=(a*10)+g;
//printf("%d\n",y);
r=ToDate(m,d,y);
printf("\nReturn Value[HEX]: %hx\n",r);
printf("Return Value[DEC]: %d\n",r);
printf("\nCompressed Output:\n");
for(int i=15;i>=0;i--)
{
b=CHECK(r,i)?1:0;
printf("%d",b);
}
printf("\n\nExtracted Output:\n");
printf("Month -> %d\n",Month(r));
printf("Day -> %d\n",Day(r));
printf("Year -> %d\n",Year(r));
return 0;
}

int ToDate(int m,int d,int y)
{
short int r=0;
m=m<<12;
d=d<<7;
r=r | m;
r=r | d;
r=r | y;
return r;
}

int Month(int r)
{
short int a;
for(int i=31;i>=16;i--)
{
r=r&(~(0x01<<i));
//printf("%x\n",r);
}
a=r>>12;
//printf("%x\n",a);
return a;
}

int Day(int r)
{
short int temp;
temp=r;
for(int i=15;i>=12;i--)
{
temp=temp&(~(0x01<<i));
}
r=temp>>7;
return r;
}


int Year(int r)
{

for(int i=31;i>=7;i--)
{
r=r&(~(0x01<<i));
//printf("%x\n",r);
}
return r;
}
