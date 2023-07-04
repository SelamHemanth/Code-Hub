#include<stdio.h>
int main()
{
int a,b;
char c;
printf("Enter two values:");
scanf("%d%d",&a,&b);
while(1)
{
printf("choose + or - or * or / or %% :");
getchar();
scanf("%c",&c);
if(c=='+')
printf("Result:%d\n",a+b);
else if(c=='-')
printf("Result:%d\n",a-b);
else if(c=='*')
printf("Result:%d\n",a*b);
else if(c=='/')
printf("Result:%d\n",a/b);
else if(c=='%')
printf("Result:%d\n",a%b);
else
{
break;
}
}
return 0;
}
