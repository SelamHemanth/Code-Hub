#include<stdio.h>
int main()
{
int n,o,i=1;
printf("Enter the range:");
scanf("%d",&n);
printf("1:ascending\n2:descending\n");
scanf("%d",&o);
switch(o)
{
case 1:while(i<=n)
	{
	printf("%d\n",i);
	i++;
	}
	break;
case 2:	while(n>0)
	{
	printf("%d\n",n);
	n--;
	}
	break;
default:printf("Invalid Enter\n");
}
return 0;
}
