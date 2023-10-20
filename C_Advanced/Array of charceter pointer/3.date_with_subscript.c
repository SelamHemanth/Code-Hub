#include<stdio.h>

int main()
{
	int d,m,y;
	char *p[4]={"th","st","nd","rd"};
	char *q[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	printf("Enter DD-MM-YYYY : ");
	scanf("%d%*c%d%*c%d",&d,&m,&y);
	if(d>=11 && d<=20)
	{
		printf("%d%s %s, %d\n",d,p[0],q[(m-1)],y);
	}
	else if((d>=1 && d<=10) || (d>=21 && d<=31))
	{
		if(d==1 || d==21 || d==31)
			printf("%d%s %s, %d\n",d,p[1],q[(m-1)],y);
		else if(d==2 || d==22)
			printf("%d%s %s, %d\n",d,p[2],q[(m-1)],y);
		else if(d==3 || d==23)
			printf("%d%s %s, %d\n",d,p[3],q[(m-1)],y);
		else
			printf("%d%s %s, %d\n",d,p[0],q[(m-1)],y);
	}
}
