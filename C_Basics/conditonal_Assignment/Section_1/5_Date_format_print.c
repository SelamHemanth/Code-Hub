#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter d-m-y:");
scanf("%d %*c %d %*c %d",&a,&b,&c);
printf("%d/%d/%d",a,b,c);
return 0;
}
