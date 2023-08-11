#include"dates.h"

int IsLeapYear(int y)
{
if((y%100!=0 && y%4==0) || y%400==0)
return 1;
else
return 0;
}
