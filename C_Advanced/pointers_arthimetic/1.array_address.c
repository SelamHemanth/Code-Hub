#include<stdio.h>

int main()
{
int arr[]={1,2,3,4,5,6,7,8,9},*p=arr;
for(int i=0;i<9;i++)
{
printf("value=%d\tAddress=%ld\n",p[i],(p+i));
}
}
