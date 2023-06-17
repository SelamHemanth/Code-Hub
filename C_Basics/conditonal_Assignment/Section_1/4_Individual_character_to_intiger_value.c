#include<stdio.h>
int main()
{
char c1,c2,c3;
int d;
printf("Enter 1st character:");
scanf("%c",&c1);
printf("Enter 2nd character:");
getchar();
scanf("%c",&c2);
printf("Enter 3rd character:");
getchar();
scanf("%c",&c3);
c1=48-c1;
c2=48-c2;
c3=48-c3;
d=c1;
d=(d*10)+c2;
d=(d*10)+c3;
d=-d;
printf("%d",d);
return 0;
}
