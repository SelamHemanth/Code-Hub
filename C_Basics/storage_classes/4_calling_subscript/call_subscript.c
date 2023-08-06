#include<stdio.h>

void call(void);

static int n,i;

int main()
{
	printf("Enter number of times you want to call? :- ");
	scanf("%d",&n);
	for(int j=1;j<=n;j++)
	{
		call();
	}
	return 0;
}

void call(void)
{
	i++;
	if(i==n)
	{
		if((n<10||n>20) && n%10==1)
			printf("Hello! I am called %dst time\n",n);
		else if((n<10||n>20) && n%10==2)
			printf("Hello! I am called %dnd time\n",n);
		else if((n<10||n>20) && n%10==3)
			printf("Hello! I am called %drd time\n",n);
		else if(n%10==0 || n%10>=4 || n/10==1)
			printf("Hello! I am called %dth time\n",n);
	}
	else if((i<10||i>20) && i%10==1)
		printf("I am called %dst time\n",i);
	else if((i<10||i>20) && i%10==2)
		printf("I am called %dnd time\n",i);
	else if((i<10||i>20) && i%10==3)
		printf("I am called %drd time\n",i);
	else if(i%10==0 || i%10>=4 || i/10==1)
		printf("I am called %dth time\n",i);

}
