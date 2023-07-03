#include<stdio.h>
int main()
{
int n1,n2,i=0,a;
printf("Enter from value:");
scanf("%d",&n1);
printf("Enter to value:");
scanf("%d",&n2);
i=n1;
printf("Even:\n");
while(i<=n2)
{
if(i%2==0)
{
printf("%d\n",i);
}
i++;
}
i=n1;
printf("Odd:\n");
while(i<=n2)
{
if(i%2!=0)
{
printf("%d\n",i);
}
i++;
}
return 0;
}
