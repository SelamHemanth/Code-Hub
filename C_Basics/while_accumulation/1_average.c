#include<stdio.h>
int main()
{
int i=1,n,avg,sum=0;
printf("Enter number of students:");
scanf("%d",&n);
while(i<=n)
{
int a,b,c,d,e,f;
float p;
printf("Enter student %d marks:",i);
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
p=(float)(a+b+c+d+e+f)/6;
printf("%.2f%%\n",p);
sum = sum+ p;
i++;
}
avg=sum/n;
printf("Class average marks=%d\n",avg);
return 0;
}
