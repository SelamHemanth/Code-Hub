#include"dates.h"
int IsValidDate(int d,int m,int y)
{
	int a;
	if(y>=1000 && y<=9999)
	{
		if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
		{
			if(d>0 && d<=31)
				return 1;
			else
				return 0;
		}
		else if(m==4 || m==6 || m==9 || m==11)
		{
			if(d>0 && d<=30)
				return 1;
			else
				return 0;
		}
		else if(m==2)
		{
			a=IsLeapYear(y);
			if(a==1)
			{
				if(d>0 && d<=29)
					return 1;
			}
			else if(a==0)
			{
				if(d>0 && d<=28)
					return 1;
			}
			else
			{
					return 0;
			}
		}
		else
			return 0;
	}
	else
		return 0;
}
