#include<stdio.h>
int main()
{
int n,a,b,c,d;
printf("Enter a nunmber:");
scanf("%d",&n);
a=n%10;
b=(n/10)%10;
c=(n/100)%10;
d=(n/1000)%10;
printf("OP1:\n");
printf("%d\n%d\n%d\n%d\n",a,b,c,d);
printf("OP2:\n");
printf("%d\n%d\n%d\n%d\n",d,c,b,a);
printf("OP3:\n");
printf("%d\b\b\b   \n%d\b\b  \n%d\b  \n%d\n\n",n,n,n,n);
printf("OP:4\n");
printf("%d\n%d\b \n%d\b\b  \n%d\b\b\b   \n\n",n,n,n,n);
printf("OP5:\n");
printf("%d%d%d%d\n\n",a,b,c,d);
printf("OP:6\n");
printf("   %d\n  %d\n %d\n%d\n",a,b,c,d);
return 0;
}
