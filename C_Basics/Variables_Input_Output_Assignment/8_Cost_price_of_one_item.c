#include<stdio.h>
int main()
{
int n,sp,p,cp;
printf("Enter number of items:");
scanf("%d",&n);
printf("sale price of %d items:",n);
scanf("%d",&sp);
printf("Profit:");
scanf("%d",&p);
cp=(sp-p)/n;
printf("cost price of each item: %d",cp);
return 0;
}
