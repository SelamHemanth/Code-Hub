#include<stdio.h>

int mystrlen(char *str);
void reverse(char str[],int);

int main()
{
int l;
char str[]="laptop";
//printf("Enter a string: ");
//scanf("%s",str);
l=mystrlen(str);
reverse(str,l);
printf("%s\n",str);
}

int mystrlen(char *str)
{
int i=0;
while(*(str+i)!='\0')
i++;
return i;
}



void reverse(char *str,int size)
{
    char temp;
    int s=size-1;
    for(int i=0;i<size/2;i++)
    {
        temp=(char)(*(str+i));
        (*(str+i))=(char)(*(str+(s-i)));
       (*(str+(s-i)))=temp;
    }
}
