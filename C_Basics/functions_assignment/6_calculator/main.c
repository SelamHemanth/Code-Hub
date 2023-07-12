#include<stdio.h>
int addsub(int a,int b,char c);
int muldivrem(int a,int b,char c);
int main()
{
int a,b;
char c;
do
{
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
getchar();
printf("Enter + or - or * or / or % ->");
scanf("%c",&c);
if(c=='+' || c=='-')
printf("Result -> %d\n",addsub(a,b,c));
else if(c=='*' || c=='/' || c=='%')
printf("Result -> %d\n",muldivrem(a,b,c));
}while(c=='+' || c=='-' || c=='*' || c=='/' || c=='%');
printf("Wrong input\n");
return 0;
}
