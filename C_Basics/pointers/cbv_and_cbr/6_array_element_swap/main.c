//Write two source files, main.c and swap.c. The main function initializes a two-element array of ints, and then calls the swap function to swap the pair.

#include<stdio.h>

void swap(int arr[]);

int main()
{
int arr[2];
printf("Enter two elements into array:\n");
for(int i=0;i<2;i++)
scanf("%d",&arr[i]);
swap(arr);
printf("\nAfter swap: ");
for(int i=0;i<2;i++)
printf("%d ",arr[i]);
}
