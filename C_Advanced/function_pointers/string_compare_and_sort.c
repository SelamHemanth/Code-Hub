#include<stdio.h>
#include<string.h>
void lower(char str[])
{
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
			str[i]=(char)(str[i]+32);
	}
printf("%s\n",str);
}
void pointer(char arr[][10],int c,int n)
{
	char temp[10];
	switch(c)
	{
		case 1:
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
			break;

		case 2:
			for(int i=0;i<n;i++)
			{

				for(int j=0;j<n-i;j++)
				{   
					char str1[10],str2[10];

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
			break;
		default:printf("wrong option\n");
	}
}


int main()
{
	int n,c;
	printf("Enter number of names: ");
	scanf("%d",&n);
	char arr[n][10];
	printf("Enter names:\n");
	for(int i=0;i<n;i++)
		scanf("%s",arr[i]);
	printf("1 :  sort with case sensitivity (strcmp)\n2 : sort without case sensitivity (stricmp)\n\nChoose an option:");
	scanf("%d",&c);
	pointer(arr,c,n);
	printf("Output:\n");
	for(int i=0;i<=n;i++)
		printf("%s\n",arr[i]);
}

