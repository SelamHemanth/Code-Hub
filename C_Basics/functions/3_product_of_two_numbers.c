#include<stdio.h>

int product(int a,int b)
{
int i=0,pro=0;
while(i<b)
{
pro=pro+a;
i++;
}
return pro;
}

int main()
{
int a,b;
printf("Enter two values: ");
scanf("%d%d",&a,&b);
printf("Product = %d\n",product(a,b));
return 0;
}
