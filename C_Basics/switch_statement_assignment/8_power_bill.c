#include<stdio.h>
int main()
{
int a,d;
float b,c;
printf("Enter number of units:");
scanf("%d",&a);
switch(a>0)
{
case 1:if(a<=200)
	d=1;
	else if(a>=201 && a<=400)
	d=2;
	else if(a>=401 && a<=600)
	d=3;
	else if(a>=601)
	d=4;
        break;
case 0:printf("Invalid Units\n");
	break;
}
switch(d)
{
case 1:
	b=100;
	printf("Bill=%.2f\n",b);
	break;
case 2: 
	b=(a-200)*0.65+100;
	printf("Bill=%.2f\n",b);
	break;
case 3:
	b=(a-400)*0.80+230;
	printf("Bill=%.2f\n",b);
	break;
case 4:
	b=(a-600)*1.00+390;
	printf("Bill=%.2f\n",b);
	break;
}
return 0;
}

