/*Write a program that reads a string as ipalinput, and determines whether the string is a palindrome or not.*/

#include<stdio.h>
void reverse(char str1[],int);
int length(char str[]);
int compare(char str[],char str1[],int);
void copy(char str[],char str1[],int);

int main()
{
	int a,size;
	char str[10],str1[10];
	printf("Enter a word: ");
	scanf("%s",str);
	size=length(str);
	copy(str,str1,size);
	reverse(str1,size);
	a=compare(str,str1,size);
	if(a==1)
		printf("Palindrome\n");
	else if(a==0)
		printf("Not Palindrome\n");
}

void copy(char str[],char str1[],int size)
{
	for(int i=0;i<size;i++)
		str1[i]=str[i];
}


int compare(char str[],char str1[],int size)
{
	for(int i=0;i<size;i++)
	{
		if(str[i]!=str1[i])
			return 0;
	}
	return 1;
}


int length(char str[])
{
	int c=0;
	for(int i=0;str[i]!='\0';i++)
	{
		c++;
	}
	return c;
}


void reverse(char str[],int size)
{
	char temp;
	int s=size-1;
	for(int i=0;i<size/2;i++)
	{
		temp=str[i];
		str[i]=str[s-i];
		str[s-i]=temp;
	}
}
