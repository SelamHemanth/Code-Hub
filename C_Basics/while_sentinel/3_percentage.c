#include<stdio.h>
int main()
{
int a,b,c,d,e,f,i=1,n,des=0,fir=0,sec=0,thi=0,fail=0;
float p;
printf("Enter number of students:");
scanf("%d",&n);
while(i<=n)
{
printf("Enter student %d marks:",i);
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
p=(float)(a+b+c+d+e+f)/6;
printf("Percentage of student %d=%.2f%%\n",i,p);
if(a>=35 && b>=35 && c>=35 && d>=35 && e>=35 && f>=35)
{
if(p>=75.0)
des++;
else if(p>=60.0)
fir++;
else if(p>=50.0)
sec++;
else if(p>=35.0)
thi++;
}
else
{
fail++;
}
i++;
}
printf("Distinction students-> %d\n",des);
printf("First class students-> %d\n",fir);
printf("Second class student-> %d\n",sec);
printf("Third class student -> %d\n",thi);
printf("Fail students       -> %d\n",fail);
return 0;
}
