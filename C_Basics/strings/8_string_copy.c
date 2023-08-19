#include<stdio.h>

void copy(char str[],char str1[]);

int main()
{
int l;
char str[50],str1[50];
printf("Enter a string: ");
scanf("%s",str);
copy(str,str1);
printf("copied string is %s\n",str1);
}

void copy(char str[],char str1[])
{
int i;
for(i=0;str[i]!='\0';i++)
str1[i]=str[i];
str1[i]='\0';
}
