#include<stdio.h>
int main()
{
int a;
unsigned int b;
short int c;
unsigned short int d;
long int e;
long unsigned int f;
char g;
unsigned char h;
float i;
double j;
long double k;
printf("Enter all values to all variables\n");
scanf("%d%u%hd%hu%ld%lu%c%c%f%lf%Lf",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k);
printf("int: %d",a);
printf("unsigned int: %u",b);
printf("short int: %hd",c);
printf("unsigned short int: %hu",d);
printf("long int: %ld",e);
printf("long unsigned int: %lu",f);
printf("char: %c",g);
printf("unsigned char: %c",h);
printf("float: %f",i);
printf("double: %lf",j);
printf("long double: %Lf",k);
return 0; 
}
