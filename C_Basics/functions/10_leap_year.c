#include<stdio.h>

int year(int y)
{
if(y%100!=0 && y%4==0 || y%400==0)
return 1;
else
return 0;
}

int main()
{
int y,c;
printf("Enter year :");
scanf("%d",&y);
c=year(y);
if(c==1)
printf("Leap Year\n");
else
printf("Not a Leap Year\n");
}
