#include<stdio.h>
int main()
{
char c,d;
printf("Enter a character");
scanf("%c",&c);
if(c>='A' && c<='Z')
{
d=c+32;
printf("%c\n",d);
}
else if(c>='a' && c<='z')
{
d=c-32;
printf("%c\n",d);
}
else
printf("%c is not a alphabet\n",c); 
return 0;
}
