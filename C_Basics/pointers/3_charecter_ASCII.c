#include<stdio.h>

int main()
{
char x,y;
char *a=0,*b=0;
printf("Enter 1st charecter: ");
scanf("%c",&x);
getchar();
printf("Enter 2nd character: ");
scanf("%c",&y);
a=&x;
b=&y;
if(*a>*b)
printf("%c is higher ASCII value\n",*a);
else if(*a<*b)
printf("%c is higher ASCII value\n",*b);
else
printf("Both are equal\n");
}
