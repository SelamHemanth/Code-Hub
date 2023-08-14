#include<stdio.h>

int currentstock(int s)
{
static int stock;
stock=s;
return stock;
}
