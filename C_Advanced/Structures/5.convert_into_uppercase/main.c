#include<stdio.h>
#include<ctype.h>
#include<string.h>

struct names
{
	char str[10];
};

void uppercase(struct names *p,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;p[i].str[j];j++)
		{
			p[i].str[j]=toupper(p[i].str[j]);
		}
	}
}

int main()
{
	int n;
	printf("Enter number of names: ");
	scanf("%d",&n);
	struct names s[n];
	printf("Enter %d names: \n",n);
	for(int i=0;i<n;i++)
		scanf("%s",s[i].str);
	uppercase(s,n);
	printf("\nAfter convert: \n");
	for(int i=0;i<n;i++)
		printf("%s\n",s[i].str);
	printf("\n");
}
