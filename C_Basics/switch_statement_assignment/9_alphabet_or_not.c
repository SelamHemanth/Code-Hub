#include<stdio.h>
int main()
{
char a;
printf("Enter a character:");
scanf("%c",&a);
switch(a>='A'&&a<='Z'||a>='a'&&a<='z')
{
case 1:printf("%c is alphabet\n",a);
	break;
default:printf("%c is not alphabet\n",a);
	break;
}
return 0;
}
