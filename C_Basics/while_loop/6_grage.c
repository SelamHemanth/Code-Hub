#include<stdio.h>
int main()
{
int r,i=0;
float p;
printf("Enter number of students:");
scanf("%d",&r);
while(i<r)
{
int a,b,c,d,e,f;
printf("Enter 6 subjects marks:");
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
p=(float)(a+b+c+d+e+f)/6;
printf("%.2f%%\n",p);
if(p>=80.0 && p<=100.0)
printf("Honours\n");
else if(p>=60.0 && p<=79.0)
printf("First Division\n");
else if(p>=50.0 && p<=59.0)
printf("Second Division\n");
else if(p>=40.0 && p<=49.0)
printf("Third Division\n");
else if(p<=39.0)
printf("Fail\n");
i++;
}
return 0;
}
