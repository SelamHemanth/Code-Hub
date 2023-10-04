#include<stdio.h>

int mystrlen(char *str)
{
int i=0;
while(*(str+i)!='\0')
i++;
return i;
}

int main()
{
char str[]="Hemanth";
printf("string length=%d\n",mystrlen(str));
}
