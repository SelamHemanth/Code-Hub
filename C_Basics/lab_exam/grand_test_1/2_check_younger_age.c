#include<stdio.h>
int main()
{
int i,n,d1,d2=0,m1,m2=0,y1,y2=0;
printf("Enter number of students:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter date of birth of student %d:",i);
scanf("%d%*c%d%*c%d",&d1,&m1,&y1);
if(y1>y2)
{
y2=y1;
m2=m1;
d2=d1;
}
else if(y1==y2)
{
if(m1>m2)
{
y2=y1;
m2=m1;
d2=d1;
}
}
else if(m1==m2)
{
if(d1>d2)
{
y2=y1;
m2=m1;
d2=d1;
}
}
}
printf("The youngest student was born on %d-%d-%d\n",d2,m2,y2);
}
