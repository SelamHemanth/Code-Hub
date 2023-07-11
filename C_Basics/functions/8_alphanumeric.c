#include<stdio.h>

int fun_alpha_num(char c)
{
if(c>='a' && c<='z' || c>='A' && c<='Z' || c>='0' && c<='9')
{
return 1;
}
else
return 0;
}

int main()
{
int n;
char c;
printf("Enter a character: ");
scanf("%c",&c);
n=fun_alpha_num(c);
if(n==1)
printf("%c is alphanumaric\n",c);
else if(n==0)
printf("%c is not a alphanumaric\n",c);
return 0;
}
