#include<stdio.h>
int main()
{
int i=1;
while(i==1)
{
char c;
printf("Enter a character:");
scanf("%c",&c);
getchar();
if(c>=65 && c<=90 || c>=97 && c<=122)
printf("%c is alphabet\n",c);
else
printf("%c is not alphabet\n",c);
}
return 0;
}
