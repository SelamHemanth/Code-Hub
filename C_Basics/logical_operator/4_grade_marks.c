#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	int g;
	printf("Enter 6 subjects marks:");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	g=(a+b+c+d+e+f)/6;
	if(g>=80)
	printf("Honours\n");
	else if(g>=60 && g<=79)
	printf("First Division\n");
	else if(g>=50 && g<=59)
	printf("Second Division\n");
	else if(g>=40 && g<=49)
	printf("Third Division\n");
	else if(g<=39)
	printf("Fail\n");
	return 0;
}
