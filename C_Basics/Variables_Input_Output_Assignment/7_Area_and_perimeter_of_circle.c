#include<stdio.h>
int main()
{
int r,a,p;
const int pi=3.14;
printf("Enter radius value:");
scanf("%d",&r);
a=(pi*r)^2;
p=2*pi*r;
printf("Area of circle: %d",a);
printf("\nPerimeter of circle: %d",p);
return 0;
}
