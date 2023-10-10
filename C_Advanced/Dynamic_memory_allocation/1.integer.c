#include<stdio.h>
#include<stdlib.h>

int main()
{
int *p=NULL;
p=(int *)malloc(sizeof(int));
printf("Enter a value: ");
scanf("%d",p);
printf("Your entered value is %d\n",*p);
free(p);
}
