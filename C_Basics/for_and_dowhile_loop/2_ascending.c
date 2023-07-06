#include<stdio.h>
int main()
{
int n,m=0,i,c=0,t;
printf("Enter a number:\n");
for(i=0; ;i++)
{
scanf("%d",&n);
if(n>0)
{
if(m<n)
{
c++;
m=n;
}
else
{
printf("%d - wrong input, please enter a number bigger than %d\n",n,m);
}
}
else
break;
}
printf("Output:%d\n",c);
}
