#include<stdio.h>
int main()
{
int d1,d2,m1,m2,y1,y2;
printf("Enter DOB-1:");
scanf("%d %*c %d %*c %d",&d1,&m1,&y1);
printf("Enter DOB-2:");
scanf("%d %*c %d %*c %d",&d2,&m2,&y2);
if(y1<y2)
printf("%d-%d-%d\n",d1,m1,y1);
else if(y1>y2)
printf("%d-%d-%d\n",d2,m2,y2);
else if(y1==y2)
{
	if(m2>m1)
	printf("%d - %d - %d\n",d1,m1,y1);
	else if(m2<m1)
	printf("%d - %d - %d\n",d2,m2,y2);
	else if(m2==m1)
	{
		if(d1<d2)
		printf("%d - %d - %d\n",d1,m1,y1);
		else if(d1>d2)
		printf("%d - %d - %d\n",d2,m2,y2);
		else if(d1==d2)
		printf("%d-%d-%d\n",d1,m1,y1);
	}
}
return 0;
}
