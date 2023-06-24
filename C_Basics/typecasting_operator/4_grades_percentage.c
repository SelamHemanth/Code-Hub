#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	float g;
	printf("Enter 6 subjects marks:");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	g=(float)(a+b+c+d+e+f)/6;
	if(g>=80)
		printf("%f\nHonours\n",g);
	else if(g>=60)
	{
		if(g<=79)
			printf("%f\nFirst Division\n",g);
	}
	else if(g>=50)
	{
		if(g<=59)
			printf("%f\nSecond Division\n",g);
	}
	else if(g>=40)
	{
		if(g<=49)
			printf("%f\nThird Division\n",g);
	}
	else if(g<=39)
		printf("%f\nFail\n",g);
	return 0;
}

