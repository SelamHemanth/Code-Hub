#include<stdio.h>
int main()
{
int a,b;
char c;
printf("Enter the two values:");
scanf("%d%d",&a,&b);
printf("Enter + or - or * or / :");
getchar();
scanf("%c",&c);
if(c=='+')
printf("Result=%d\n",a+b);
else if(c=='-')
printf("Result=%d\n",a-b);
else if(c=='*')
printf("Result=%d\n",a*b);
else if(c=='/')
printf("Result=%d\n",a/b);
return 0;
}
