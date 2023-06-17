#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter 3 numbers");
scanf("%d%d%d",&x,&y,&z);
x=x+ y;
y=x-y;
x=x-y;
y=y+z;
z=y-z;
y=y-z;
printf("x=%d\ty=%d\tz=%d",x,y,z);
return 0;
}
