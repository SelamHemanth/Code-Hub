#include<stdio.h>
//#include<string.h>

char *myItoA(int *);
int mystrlen(char *str);
void mystrrev(char *str,int size);



int main()
{
	int a=1923;
	printf("ItoA:%s",myItoA(&a));
	return 0;
}

char *myItoA(int *num)
{
	int rand,l;
	static char str[100]; 
	int i=0,c=0,temp;
	temp=*num;
	while(temp!=0){
		c++;
		temp/=10;
	}
	for(i=0;i<c;i++){
		rand = *num%10;
		*(str+i)=(rand+48);
		*num/=10;       
	}
	*(str+i)='\0';
l=mystrlen(str);
	mystrrev(str,l);
	return str;
}
int mystrlen(char *str)
{
int i=0;
while(*(str+i)!='\0')
i++;
return i;
}



void mystrrev(char *str,int size)
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
