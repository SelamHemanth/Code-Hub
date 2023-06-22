#include<stdio.h>
int main()
{
int a;
float b,c;
printf("Enter number of units:");
scanf("%d",&a);
if(a<=200)
b=100; 
else if(a>=201 && a<=400)
b=(a-200)*0.65+100;
else if(a>=401 && a<=600)
b=(a-400)*0.80+230;
else if(a>=601)
b=(a-600)*1.00+390;
printf("Bill=%.2f\n",b);
return 0;
}
