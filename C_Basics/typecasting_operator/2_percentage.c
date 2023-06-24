#include<stdio.h>
int main()
{
int a,b,c,d,e,f;
float p;
printf("Enter 6 sunjects marks:");
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
p=(float)(a+b+c+d+e+f)/6;
printf("Percentage=%.2f%%",p);
return 0;
}
