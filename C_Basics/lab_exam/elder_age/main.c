#include<stdio.h>
#include"dates.h"

int main()
{
	int v,n,d,m,y,i=1,D=0,M=0,Y=0,c;
	printf("Enter number of candidates:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("Date of birth of candidate #%d:",i);
		scanf("%d%*c%d%*c%d",&d,&m,&y);
		v=IsValidDate(d,m,y);
		if(v==1)
		{
			if(D==0 || M==0 || Y==0)
			{
			i++;
				D=d;
				M=m;
				Y=y;
			}
			else
			{			i++;
				c=DateCompare(d,m,y,D,M,Y);
				if(c==1)
				{
					D=d;M=m;Y=y;
				}
				else
					continue;
			}
		}
		else
			printf("Date is Invalid, Please enter valid date\n");
	}
	PrintDateinFormate(D,M,Y);
	return 0;
}

