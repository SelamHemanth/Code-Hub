#include"dates.h"

int DateCompare(int d1,int m1,int y1,int d2,int m2,int y2)
{
	if(y1<y2)
		return 1;
	else if(y1>y2)
		return 0;
	else if(y1==y2)
	{
		if(m2>m1)
			return 1;
		else if(m2<m1)
			return 0;
		else if(m2==m1)
		{
			if(d1<d2)
				return 1;
			else if(d1>d2)
				return 0;
		}
	}
}

