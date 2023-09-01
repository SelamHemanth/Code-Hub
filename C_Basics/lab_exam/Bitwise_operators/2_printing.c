#include<stdio.h>

int  main()
{
long int a=0xaabbccdd,b;
printf("%x\n",(a>>20));
for(int i=31;i>=20;i--)
{
a=a&~(0x01<<i);
}
printf("%x\n",a);
}
