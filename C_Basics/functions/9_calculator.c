#include<stdio.h>

int add(int a,int b)
{
int c;
c=a+b;
return c;
}

int sub(int a,int b)
{
int c;
c=a-b;
return c;
}

int mul(int a,int b)
{
int c;
c=a*b;
return c;
}

int quotient(int a,int b)
{
int c;
c=a/b;
return c;
}

int remainder(int a,int b)
{
int c;
c=a%b;
return c;
}

int main()
{
int a,b;
char c;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
printf("Enter + or - or * or / or %% :");
getchar();
scanf("%c",&c);
if(c=='+')
printf("Result = %d\n",add(a,b));
else if(c=='-')
printf("Result = %d\n",sub(a,b));
else if(c=='*')
printf("Result = %d\n",mul(a,b));
else if(c=='/')
printf("Result = %d\n",quotient(a,b));
else if(c=='%')
printf("Result = %d\n",remainder(a,b));
else
printf("Wrong operator\n");
return 0;
}
