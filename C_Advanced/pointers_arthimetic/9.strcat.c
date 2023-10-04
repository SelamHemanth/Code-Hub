#include<stdio.h>

void mystrcat(char *str,char *str1)
{
int i=0,j=0;
while(*(str+i)!='\0')
i++;
while(*(str1+j)!='\0')
{
  str[i]=(char)(str1[j]);
  i++;j++;
}
}

int main()
{
char str[15]="Hemanth",str1[5]="Hemu";
mystrcat(str,str1);
printf("%s\n",str);
}
