#include<stdio.h>
int main()
{
int a,b;
float area,perimeter;
printf("Ennter length value:");
scanf("%d",&a);
printf("\nEnter width value:");
scanf("%d",&b);
area=a*b;
perimeter=(a+b)*2;
printf("Area of rectangle: %f",area);
printf("\nPerimeter of rectangle: %f",perimeter);
return 0;
}

