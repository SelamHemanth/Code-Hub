#include<stdio.h>
int main()
{
int n,i=0;
printf("Enter range:");
scanf("%d",&n);
while(i<n)
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
i++;
}
return 0;
}
