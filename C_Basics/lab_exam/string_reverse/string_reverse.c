#include<stdio.h>
#include<string.h>

void reverse(char str[],int);

int main()
{
	char str[100],temp;
	int i,l;
	static int s,e;
	printf("Enter an input string:\n");
	scanf("%[^\n]s",str);
	l=strlen(str);
	reverse(str,l);
	//	printf("%s\n",str);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9'))
		{
			if(str[i+1]<'0' || (str[i+1]>'9' && str[i+1]<'A') || (str[i+1]>'Z' && str[i+1]<'a') || str[i+1]>'z')
			{
				e=i;
				for(int j=e,k=s;k<j;j--,k++)
				{
					temp=str[k];
					str[k]=str[j];
					str[j]=temp;
				}
				s=e+2;
			}
		}
	}
	printf("%s\n",str);
}
void reverse(char str[],int size)
{
	char temp;
	int s=size-1;
	for(int i=0;i<size/2;i++)
	{
		temp=str[i];
		str[i]=str[s-i];
		str[s-i]=temp;
	}
}
