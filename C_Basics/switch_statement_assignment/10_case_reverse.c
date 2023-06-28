#include<stdio.h>
int main()
{
int b;
char a;
printf("Enter a character:");
scanf("%c",&a);
switch(a>='A'&&a<='Z'||a>='a'&&a<='z')
{
case 1:(a>='A' && a<='Z')? (b=a+32):(b=a-32);
	printf("%c\n",b);
	break;
default:printf("%c is not alphabet\n",a);
	break;
}
return 0;
}

