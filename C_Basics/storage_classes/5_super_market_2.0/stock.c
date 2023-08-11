#include<stdio.h>

int currentstock(int s)
{
static int stock;
stock=s;
//printf("\n\t\tSTOCK\n\nCurrent Stock is %d\n\n",stock);
return stock;
}
