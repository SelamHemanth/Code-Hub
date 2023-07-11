#include<stdio.h>

int valid_date(int d,int m,int y)
{
	if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
	{
		if(d<=31)
			return 1;
		else
			return 0;
	}
	else if(m==4 || m==6 || m==9 || m== 11)
	{
		if(d<=30)
			return 1;
		else
			return 0;
	}
	else if(m==2)
	{
		if(y%100!=0 && y%4==0 || y%400==0)
		{
			if(d<=29)
				return 1;
			else if(d<=28)
				return 1;
			else
				return 0;
		}
		else
			return 0;
	}
}

int main()
{
	int d,m,y,date;
	printf("Enter D-O-B :");
	scanf("%d%*c%d%*c%d",&d,&m,&y);
	date=valid_date(d,m,y);
	if(date==1)
		printf("Valid\n");
	else if(date==0)
		printf("Not Valid\n");
	return 0;
}
