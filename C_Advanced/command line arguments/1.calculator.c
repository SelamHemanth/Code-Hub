#include<stdio.h>
#include<stdlib.h>

int main(int n,char *p[])
{
	int a=atoi(p[1]);
	char *o=p[2];
	int b=atoi(p[3]);
	if(n!=4)
	{
		printf("Invalid Arguments\n");
		printf("./a.out <operand1> < + , - , '*', % , / > <expression2>\n");
		return 0;
	}
	else
	{
		printf("Given Expression is %d %c %d\n",a,*o,b);
		printf("Result=");
		switch(*o)
		{
			case '+':printf("%d",a+b);break;
			case '-':printf("%d",a-b);break;
			case '*':printf("%d",a*b);break;
			case '/':printf("%d",a/b);break;
			case '%':printf("%d",a%b);break;
			default:printf("Invalid expression:");break;
		}
	}
	printf("\n");
}

