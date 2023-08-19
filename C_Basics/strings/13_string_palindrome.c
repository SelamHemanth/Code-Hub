#include<stdio.h>

int palindrome(char str[]);

int main()
{
	int a;
	char str[10];
	printf("Enter a word: ");
	scanf("%s",str);
	a=palindrome(str);
	if(a==1)
		printf("Palindrome\n");
	else if(a==0)
		printf("Not Palindrome\n");
}

int palindrome(char str[])
{
	int length=0,s;
	char str1[50],temp;
	for(int i=0;str[i]!='\0';i++)
		length++;
	for(int i=0;i<length;i++)
		str1[i]=str[i];
	s=length-1;
	for(int i=0;i<length/2;i++)
	{
		temp=str1[i];
		str1[i]=str1[s-i];
		str1[s-i]=temp;
	}
	for(int i=0;i<length;i++)
	{
		if(str[i]!=str1[i])
			return 0;
	}
	return 1;
}
