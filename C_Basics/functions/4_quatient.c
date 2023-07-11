#include<stdio.h>

int quatient(int a,int b)
{
int q;
q=a/b;
return q;
}

int main()
{
int a,b;
printf("Enter two values: ");
scanf("%d%d",&a,&b);
printf("Quatient= %d\n",quatient(a,b));
return 0;
}
