#include<stdio.h>

int older(int d1,int d2,int m1,int m2,int y1,int y2)
{
if(y1<y2)
return 1;
else if(y1>y2)
return 2;
else if(y1==y2)
{
	if(m2>m1)
	return 1;
	else if(m2<m1)
	return 2;
	else if(m2==m1)
	{
		if(d1<d2)
		return 1;
		else if(d1>d2)
		return 2;
	}
}
}

int main()
{
int d1,d2,m1,m2,y1,y2,old;
printf("Enter DOB-1:");
scanf("%d %*c %d %*c %d",&d1,&m1,&y1);
printf("Enter DOB-2:");
scanf("%d %*c %d %*c %d",&d2,&m2,&y2);
old=older(d1,d2,m1,m2,y1,y2);
if(old==1)
printf("Person born on %d - %d - %d is older\n",d1,m1,y1);
else if(old==2)
printf("Person born on %d - %d - %d is older\n",d2,m2,y2);
return 0;
}
