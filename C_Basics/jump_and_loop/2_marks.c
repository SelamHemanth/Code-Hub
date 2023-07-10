#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,count=0,j,n,i=1;
	float p;
	printf("Enter number of student:");
	scanf("%d",&n);
	printf("Enter student marks:\n");
	do
	{
		for(j=1;j<=i;j++)
		{
			printf("Enter 6 subjects marks:");
			scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
			p=(a+b+c+d+e+f)/6;
			if(p>=80)
				count++;
			if(i==n)
				break;
			printf("%.2f%%\n",p);
		}
		i++;
	}while(i<n);
	printf("%d students got 80%% marks\n",count);
}
