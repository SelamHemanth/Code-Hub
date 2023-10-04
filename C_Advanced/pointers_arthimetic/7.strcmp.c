#include<stdio.h>

int mystrcmp(char *a,char *b)
{
int i;
    for(i=0;*(a+i)!='\0' || *(b+i)!='\0';i++)
    {
        if(*(a+i)>*(b+i))
            return *(a+i)-*(b+i);
        else if(*(a+i)<*(b+i))
            return *(a+i)-*(b+i);
    }
return *(a+i)-*(b+i);

}

int main()
{
  int r;
char str1[10]="Hemanth";
char str2[10]="Hemu";
r=mystrcmp(str1,str2);
if(r>0)
printf("str 1 bigger than str2\n");
else if(r<0)
printf("str 1 smaller than str2\n");
else if(r==0)
printf("Both are equal\n");

}
