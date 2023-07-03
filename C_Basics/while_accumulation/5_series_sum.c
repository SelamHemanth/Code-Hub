#include<stdio.h>
int main()
{
int i=2,n;
printf("Enter range of numbers:");
scanf("%d",&n);
printf("%d",1);
while(i<=n)
{
if(i%2==0)
printf("-1/%d",i);
else if(i%2!=0)
printf("+1/%d",i);
i++;
}
printf("\n");
return 0;
}
