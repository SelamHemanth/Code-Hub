#include<stdio.h>
#include<stdlib.h>

void copy(char *str,char *str1);

int main()
{
int n;
printf("Enter size of string: ");
scanf("%d",&n);
char *p=(char *)calloc(n,sizeof(char));
char *q=(char *)calloc(n,sizeof(char));
printf("Enter first string: ");
scanf("%s",p);
printf("Enter second string: ");
scanf("%s",q);
copy(p,q);
printf("\nFirst string is %s \t\tit's memory location is %p\n",p,p);
printf("\nSecond string is %s \t\tit's memory location is %p\n",q,q);
free(p);
free(q);
return 0;
}

void copy(char *p,char *q)
{
int i;
for(i=0;p[i]!='\0';i++)
q[i]=p[i];
q[i]='\0';
}
