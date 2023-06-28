#include<stdio.h>
int main()
{
char c;
printf("Enter a character:");
scanf("%c",&c);
switch(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
{
case 1:printf("%c is vowel\n",c);
	break;
default:printf("%c is consonant\n",c);
}
return 0;
}
