static int n;

int IsLeapYear(int);

int NoOfDaysinMonth(int m,int y)
{
	if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
		return 31;
	else if(m==4 || m==6 || m==9 || m==11)
		return 30;
	else if(m==2)
	{
		n=IsLeapYear(y);
		if(n==1)
			return 29;
		else if(n==2)
			return 28;
	}
return 0;
}

int IsLeapYear(int year)
{
	if((year%100!=0 && year%4==0) || year%400==0)
		return 1;
	else 
		return 2;
}
