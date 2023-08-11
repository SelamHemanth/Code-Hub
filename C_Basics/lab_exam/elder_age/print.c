#include"dates.h"
#include<stdio.h>

void PrintDateinFormate(int d,int m,int y)
{
	int a,b;
	printf("The candidate born on %d",d);
	a=PrintSubscript(d);
	if(a==1)
		printf("st ");
	else if(a==2)
		printf("nd ");
	else if(a==3)
		printf("rd ");
	else if(a==4)
		printf("th ");
	PrintMonthName(m);
	printf("-%d is elder of all\n",y);
}

int PrintSubscript(int d)
{
	if(d==1 || d==21 || d==31)
		return 1;
	else if(d==2 || d==22)
		return 2;
	else if(d==3 || d==23)
		return 3;
	else
		return 4;
}

void PrintMonthName(int m)
{
	if(m==1)
		printf("Janauary ");
	else if(m==2)
		printf("February ");
	else if(m==3)
		printf("March ");
	else if(m==4)
		printf("April ");
	else if(m==5)
		printf("May ");
	else if(m==6)
		printf("June ");
	else if(m==7)
		printf("July ");
	else if(m==8)
		printf("August ");
	else if(m==9)
		printf("September ");
	else if(m==10)
		printf("October ");
	else if(m==11)
		printf("November ");
	else if(m==12)
		printf("December ");
}
