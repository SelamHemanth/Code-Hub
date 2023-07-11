#include<stdio.h>

float intrest(int p,float r,int m)
{
float si;
si=p*r*m/100;
return si;
}

int main()
{
int p,n;
float r,m,s;
printf("Enter principle amount: ");
scanf("%d",&p);
printf("Enter rate of intrest: ");
scanf("%f",&r);
printf("Enter number of years: ");
scanf("%d",&n);
m=n%12;
printf("Sinple intrest is %.2f\n",intrest(p,r,m));
return 0;
}
