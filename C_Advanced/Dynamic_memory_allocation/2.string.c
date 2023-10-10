#include<stdio.h>
#include<stdlib.h>

int main()
{
char *p=NULL;
p=(char *)calloc(10,sizeof(char));
printf("Enter a string: ");
scanf("%s",p);
printf("Your entered string is %s\n",p);
free(p);
}

