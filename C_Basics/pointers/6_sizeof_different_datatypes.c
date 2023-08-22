#include<stdio.h>
#include<stdlib.h>

int main()
{

int *a=NULL;
float *b=NULL;
char *c=NULL;
printf("size of intiger %ld\n",sizeof(a));
printf("size of float %ld\n",sizeof(b));
printf("size of character %ld\n",sizeof(c));
}

/*The pointer is one type of variable.It stores address of the another variable. In 32_bit architecture the size of pointer is 4 Bytes,For 64-bit architecture 8 Bytes.*/ 
