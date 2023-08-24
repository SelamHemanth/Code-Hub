#include<stdio.h>

int calculation(int,int);
int *add1,*sub1,*mul1,*quat1,*rem1;

int main()
{
	int a,b;
	printf("Enter two values: ");
	scanf("%d%d",&a,&b);
	calculation(a,b);
	printf("\nAddition:%d\n",*add1);
	printf("\nSubtrcation:%d\n",*sub1);
	printf("\nMultiplication:%d\n",*mul1);
	printf("\nQuatient:%d\n",*quat1);
	printf("\nReminder:%d\n",*rem1);
}

int calculation(int a,int b)
{
	int add; 
	add1=&add;
	add=a+b;
	int sub; 
	sub1=&sub;
	sub=a-b;
	int mul;
	mul1=&mul;
	mul=a*b;
	int quat;
	quat1=&quat;
	quat=a/b;
	int rem;
	rem1=&rem;
	rem=a%b;
}
