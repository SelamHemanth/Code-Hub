#include<stdio.h>
#include<string.h>

int compare(char str[],char str1[]);

int main()
{
int r;
char str1[10],str2[10];
printf("Enter first string: ");
scanf("%s",str1);
getchar();
printf("Enter second string: ");
scanf("%s",str2);
r=compare(str1,str2);
if(r>0)
printf("str 1 bigger than str2\n");
else if(r<0)
printf("str 1 smaller than str2\n");
else if(r==0)
printf("Both are equal\n");
}

int compare(char str[],char str1[])
{
int i;
	for(i=0;str[i]!='\0' || str1[i]!='\0';i++)
	{
		if(str[i]>str1[i])
			return str[i]-str1[i];
		else if(str[i]<str1[i])
			return str[i]-str1[i];
	}
return str[i]-str1[i];
}
