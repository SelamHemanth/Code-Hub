#include<stdio.h>

int operators();

int a,b,o; 

int main()
{
	int c,result;
	printf("\t\tCALCULATOR\n");
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n\n");
	scanf("%d",&o);
	result=operators();
	printf("Result:%d\n",result);
	return 0;
}
