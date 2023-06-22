#include<stdio.h>
int main()
{
char a;
printf("Enter a character:");
scanf("%c",&a);
((a>='A' && a<='Z')||(a>'a' && a<='z')) ? printf("%c is alphabet\n",a) : printf("%c is not alphabet\n",a);
return 0;
}

