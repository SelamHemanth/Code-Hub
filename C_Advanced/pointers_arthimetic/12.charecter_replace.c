#include<stdio.h>
int character( char *str, char);

int main()
{
int a;
char str[50],ch,ch1;
printf("Enter a string: ");
scanf("%s",str);
getchar();
printf("Enter a character :");
scanf("%c",&ch);
a=character(str,ch);
printf("Enter replacing character: ");
getchar();
scanf("%c",&ch1);
str[a]=ch1;
printf("\n%s\n",str);
}

int character( char *str, char ch)
{
for(int i=0;*(str+i)!='\0';i++)
{
if(ch==(*(str+i)))
return i;
}
return -1;
}
