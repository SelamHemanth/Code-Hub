#include<stdio.h>
int main()
{
int m,p,c,total,min;
printf("Enter maths,physics,chemistry marks:");
scanf("%d%d%d",&m,&p,&c);
total=m+p+c;
min=m+p;
if( m>=60 && p>=50 && c>==50)
{
  if(min>=150 || total>=200)
  printf("Eligible\n");
  else
  printf("Not eligible\n");
}
else
printf("Not Eligible\n");
return 0;
}
