#include<stdio.h>
#include<stdlib.h>

char *s3;

void concade(char *s1,char *s2,int *in1,int *in2)
{
	int i;
	s3=(char *)calloc(20,sizeof(char));
	for(i=0;i<*(in1);i++)
	s3[i]=s1[i];
	for(int j=0;j<*in2;j++,i++)
	{
		s3[i]=s2[j];
	}
	s3[i]='\0';
}

int main()
{
	char *s1=(char *)calloc(20,sizeof(char));
	printf("Enter first string: ");
	scanf("%[^\n]s",s1);
	getchar();
	char *s2=(char *)calloc(20,sizeof(char));
	printf("Enter second string: ");
	scanf("%[^\n]s",s2);
	int *in1=(int *)malloc(sizeof(int));
	int *in2=(int *)malloc(sizeof(int));
	printf("Enter string-1 index: ");
	scanf("%d",in1);
	printf("Enter string-2 index: ");
	scanf("%d",in2);
	concade(s1,s2,in1,in2);
	printf("%s\n",s3);
	free(s1);free(s2);free(in1);free(in2);
	return 0;
}
