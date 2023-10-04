#include<stdio.h>

void mystrcpy(char *a,char *b)
{
  int i=0;
  for(;*(a+i)!='\0';i++)
*(a+i)=*(b+i);
*(a+i)='\0';
}

int main()
{
char str1[10]="Hemanth";
char str2[10]="Hemu";
mystrcpy(str1,str2);
printf("%s\n",str1);
}
