#include<stdio.h>
int main()
{
int a,b;
char c;
printf("CALCULATOR\n");
do
{
printf("Do you want to continue? [press any key otherwise n]-> ");
scanf("%c",&c);
if(c!='n')
{
printf("Enter value 1:");
scanf("%d",&a);
printf("Enter value 2:");
scanf("%d",&b);
getchar();
printf("Choose + or - or * or / or %% ->");
scanf("%c",&c);
if(c=='+')
printf("Addition= %d\n",a+b);
else if(c=='-')
printf("Subtraction= %d\n",a-b);
else if(c=='*')
printf("Multiplication= %d\n",a*b);
else if(c=='/')
printf("Division= %d\n",a/b);
else if(c=='%')
printf("Modulation= %d\n",a%b);
getchar();
}
else
break;
}
while(1);
}
