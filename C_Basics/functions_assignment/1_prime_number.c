#include<stdio.h>

void IsPrime(int a,int b)
{
	int i;
	for(i=a;i<=b;i++)
	{
	int c=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
				c++;
		}
			if(c==2)
				printf("%d,",i);
	}
}

int main()
{
	int a,b;
	printf("Enter from number: ");
	scanf("%d",&a);
	printf("Enter to number: ");
	scanf("%d",&b);
	IsPrime(a,b);
	return 0;
}

