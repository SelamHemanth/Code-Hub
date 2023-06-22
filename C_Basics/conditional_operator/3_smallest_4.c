#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("Enter 4 numbers:");
scanf("%d%d%d%d",&a,&b,&c,&d);
e=a;
(a<b && a<c && a<d) ? printf("%d is small\n",a) : (e=b);
(b<a && b<c && b<d) ? printf("%d is small\n",b) : (e=c);
(c<a && c<b && c<d) ? printf("%d is small\n",c) : (e=d);
(d<a && d<b && d<c) ? printf("%d is small\n",d) : (e=0);
return 0;
}
