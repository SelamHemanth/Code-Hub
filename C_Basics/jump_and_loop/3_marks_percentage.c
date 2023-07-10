#include<stdio.h>
int main()
{
int n,i;float temp=0.0;
printf("Enter number of students:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
int a=0,b=0,s,j;
float p;
printf("Enter number of subjects for student->%d:",i);
scanf("%d",&s);
for(j=1;j<=s;j++)
{
printf("Enter subject-%d marks:",j);
scanf("%d",&a);
b=b+a;
}
p=(float)b/s;
printf("Perncentage->%.2f%%\n",p);
if(p>temp)
temp=p;
}
printf("\nTopper is %.2f%% student,Congrats...\n",temp); 
}
