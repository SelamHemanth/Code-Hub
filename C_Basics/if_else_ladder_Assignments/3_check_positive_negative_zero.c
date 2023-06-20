#include<stdio.h>
int main()
{
int c;
printf("Enter a numbers");
scanf("%d",&c);
if(c==0)
printf("Number is zero\n");
else if(c<0)
printf("Number is negative\n");
else
printf("Number is positive\n"); 
return 0;
}
