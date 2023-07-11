#include<stdio.h>

int day(int m,int y)
{
if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
return 31;
else if(m==4 || m==6 || m==9 || m==11)
return 30;
if(m==2)
{
if(y%100!=0 && y%4==0 || y%400==0)
return 29;
else
return 28;
}
}
int main()
{
int m,y;
printf("Enter month and year :");
scanf("%d%*c%d",&m,&y);
printf("Days-> %d\n",day(m,y));
}
