#include<stdio.h>
int main()
{
int s;
char a[]={'H','E','M','A','N','T','H'};
s=sizeof(a);
for(int i=0;i<s;i++)
printf("%c",a[i]);
printf("\n");
}
