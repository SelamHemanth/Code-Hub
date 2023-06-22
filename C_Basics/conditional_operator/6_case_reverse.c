#include<stdio.h>
int main()
{
char c,d;
printf("Enter a character:");
scanf("%c",&c);
(c>='A' && c<='Z')?printf("%c\n",d=c+32):((c>='a' && c<='z')?printf("%c\n",d=c-32):printf("%c is not a alphabet\n",c));
return 0;
}

