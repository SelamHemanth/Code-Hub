#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,h,i=1;
	float g;
	printf("Enter 6 subjects marks:");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	g=(float)(a+b+c+d+e+f)/6;
switch(i)
{
case 1:if(g>=80)
		h=1;
	else if(g>=60)
	{
		if(g<=79)
		h=2;
	}
	else if(g>=50)
	{
		if(g<=59)
		h=3;
	}
	else if(g>=40)
	{
		if(g<=49)
		h=4;
	}
	else if(g<=39)
		h=5;
	break;
}
switch(h)
{
case 1: printf("%.2f%%\nHonours\n",g);
	break;
case 2: printf("%.2f%%\nFirst Division\n",g);
	break;
case 3: printf("%.2f%%\nSecond Division\n",g);
	break;
case 4: printf("%.2f%%\nThird Division\n",g);
	break;
case 5: printf("%.2f%%\nFail\n",g);
	break;
}

	return 0;
}
