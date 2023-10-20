#include<stdio.h>

int main()
{
	long int n;
	int c=0,arr[10],s;
	char *p[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	printf("Enter number: ");
	scanf("%ld",&n);
	for(int i=0;n>0;i++)
	{
		arr[i]=n%10;
		n=n/10;
		c++;
	}
	for(int i=0,j=c-1;i<c/2;i++,j--)
	{
		s=arr[i];arr[i]=arr[j];arr[j]=s;
	}
	for(int i=0;i<c;i++)
	{
		s=arr[i];
		printf("%s ",p[s]);
	}
	printf("\n");
}
