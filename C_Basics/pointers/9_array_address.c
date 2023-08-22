#include<stdio.h>

int main()
{
int arr[10],*p=0,i;
int l=sizeof(arr)/4;
printf("Enter values to array:\n");
for(i=0;i<l;i++)
scanf("%d",&arr[i]);
for(i=0;i<l;i++)
{
p=&arr[i];
printf("%d address is %p\n",arr[i],p);
}
}
