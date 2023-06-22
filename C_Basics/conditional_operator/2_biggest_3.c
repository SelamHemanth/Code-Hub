#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter 3 numbers:");
scanf("%d%d%d",&a,&b,&c);
a>b ? (a>c ? printf("%d is big\n",a) : printf("%d is big\n",c)):(b>c ? printf("%d is big\n",b) : printf("%d is big\n",c));
return 0;
}
