#include<stdio.h>
void swap(int *p);

int main()
{
int arr[]={1,2},*p=arr;
printf("arr=%d\t%d\n",p[0],p[1]);
swap(p);
printf("swap=%d\t%d\n",p[0],p[1]);
}
