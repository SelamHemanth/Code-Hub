#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void lower(char str[])
{
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
			str[i]=(char)(str[i]+32);
	}
}

void strcompare(char *arr[],int n)
{
	char temp[10];
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(arr[i],arr[j])>0)
			{
				strcpy(temp,arr[i]);
				strcpy(arr[i],arr[j]);
				strcpy(arr[j],temp);
			}
		}
	}
}
void stricompare(char *arr[],int n)
{
int j,k,l;
		static char str1[10],str2[10];
	char temp[10];
	for(int i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{


			strcpy(str1,arr[j]);
			strcpy(str2,arr[j+1]);
			lower(str1);
			lower(str2);
			if(strcmp(str1,str2)>0)
			{
				strcpy(temp,arr[j]);
				strcpy(arr[j],arr[j+1]);
				strcpy(arr[j+1],temp);
			}
		}
	}
}


void pointer(void (*p[2])(char *[],int),char *arr[],int c,int n)
{
	switch(c)
	{
		case 1:p[0](arr,n);break;
		case 2:p[1](arr,n);break;
		default:printf("Wrong Input\n");
	}
}

int main()
{
	int n, c,i;
	printf("Enter number of names: ");
	scanf("%d", &n);
	char *arr[n];
	printf("Enter names:\n");
	for (i = 0; i < n; i++) {
		arr[i] = (char *)malloc(10 * sizeof(char)); 
		scanf("%s", arr[i]);
	}
	printf("1 : sort with case sensitivity (strcmp)\n2 : sort without case sensitivity (stricmp)\n\nChoose an option:");
	scanf("%d", &c);
	void (*p[2])(char *[], int) = {strcompare, stricompare};
	pointer(p, arr, c, n);
	printf("Output:\n");
	for (i = 0; i < n; i++) {
		printf("%s\n", arr[i]);
		free(arr[i]);
	}
}

