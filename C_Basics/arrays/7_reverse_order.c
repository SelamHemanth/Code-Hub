#include<stdio.h>
int main()
{
int a;
printf("Enter array size:");
scanf("%d",&a);
int arr[a];
printf("\nEnter array elements:\n");
for(int i=0;i<a;i++)
scanf("%d",&arr[i]);
printf("\nReverse order of array is : ");
for(int i=4;i>=0;i--)
printf("%d ",arr[i]);
printf("\n");
}
