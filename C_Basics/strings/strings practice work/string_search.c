#include<stdio.h>
#include<string.h>

int main()
{
	int l1,l2,j,i,c;
	char str1[100],str2[100];
	printf("Enter string sentance: ");
	scanf("%[^\n]s",str1);
	printf("Enter string: ");
	scanf("%s",str2);
	l1=strlen(str1);
	l2=strlen(str2);
	for(i=0;i<l1-l2;i++)
	{
		for(j=0;j<l2;j++)
		{
			if(str1[i+j]!=str2[j])
			{
				break;
			}
		}
		if(j==l2)
		{
			printf("Index value is %d\n",i);
		//	printf("%d\n",l1);
			for(int g=i;g<l1;g++)
			{
				printf("%c",str1[g]);
			}
			break;
		}
	}
	if(i==l1)
		printf("Not found\n");
}
