#include<stdio.h>

int main()
{
int s,ar;
printf("Enter size of array:");
scanf("%d",&s);
int arr[s];
printf("\nEnter array elements:\n");
for(int i=0;i<s;i++)
scanf("%d",&arr[i]);
printf("\nArray have :");
for(int i=0;i<s;i++)
printf("%d ",arr[i]);
for(int i=0,j=4;i<s,j>0;i++,j--)
{
ar=arr[i];
arr[i]=arr[j];
arr[j]=ar;
}
printf("\nReverse order is:");
for(int i=0;i<s;i++)
printf("%d ",arr[i]);
printf("\n");
}
