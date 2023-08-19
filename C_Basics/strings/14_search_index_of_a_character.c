#include<stdio.h>

int character( char str[], char);

int main()
{
int a;
char str[50],ch;
printf("Enter a string: ");
scanf("%s",str);
getchar();
printf("Enter a character :");
scanf("%c",&ch);
a=character(str,ch);
if(a==-1)
printf("\nCharacter not found\n");
else
printf("%c index is %d\n",ch,a);
}

int character( char str[], char ch)
{
for(int i=0;str[i]!='\0';i++)
{
if(ch==str[i])
return i;
}
return -1;
}
