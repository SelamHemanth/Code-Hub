#include<stdio.h>
int main()
{
char c;
printf("Enter a character");
scanf("%c",&c);
if(c>='A')
{
if(c<='B')
printf("%c is alphabet\n",c);
else if(c>='a')
{
if(c<='z')
printf("%c is alphabet\n",c);
}
}
else
printf("%c is not a alphabet\n",c); 
return 0;
}
