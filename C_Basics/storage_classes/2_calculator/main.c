#include<stdio.h>

void operators(void);

int a,b,o;
extern int result;

int main()
{
	int c;
	printf("\t\tCALCULATOR\n");
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n\n");
	scanf("%d",&o);
	operators();
	printf("Result:%d\n",result);
	return 0;
}
