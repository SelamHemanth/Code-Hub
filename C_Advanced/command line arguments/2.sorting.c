#include<stdio.h>
#include<string.h>
int stricmp(char *s,char *s1);
int main(int n,char *s1[])
{
	int i,j,x;
	char t[100];
	if((strcmp(s1[1],"-r")==0)&&(strcmp(s1[2],"-i")==0))
	{
		char s[n-3][200];
		for(i=1;i<n;i++)
		{
			printf("%s\n",s1[i]);
		}
		printf("%d",n);
		for(i=0,j=3;j<n;i++,j++)
		{
			strcpy(s[i],s1[j]);
		}
		printf("After sorting:\n");
		for(j=0;j<n-4;j++)
		{
			for(i=0;i<n-4;i++)
			{
				x=stricmp(s[i],s[i+1]);
				if(x<0)
				{
					strcpy(t,s[i]);
					strcpy(s[i],s[i+1]);
					strcpy(s[i+1],t);
				}
			}
		}
		for(i=0;i<n-3;i++)
		{
			printf("%s\n",s[i]);
		}
	}

	else if(strcmp(s1[1],"-i")==0)
	{
		char s[n-2][200];
		for(i=2;i<n;i++)
		{
			printf("%s\n",s1[i]);
		}
		printf("%d",n);
		for(i=0,j=2;j<n;i++,j++)
		{
			strcpy(s[i],s1[j]);
		}
		for(i=0;i<n-2;i++)
		{
			printf("%s\n",s[i]);
		}

		printf("After sorting:\n");
		for(j=0;j<n-3;j++)
		{
			for(i=0;i<n-3;i++)
			{
				x=stricmp(s[i],s[i+1]);
				if(x>0)
				{
					strcpy(t,s[i]);
					strcpy(s[i],s[i+1]);
					strcpy(s[i+1],t);
				}
			}
		}
		for(i=0;i<n-2;i++)
		{
			printf("%s\n",s[i]);
		}
	}

	else if(strcmp(s1[1],"-r")==0)
	{
		char s[n-2][200];
		for(i=2;i<n;i++)
		{
			printf("%s\n",s1[i]);
		}
		printf("%d",n);
		for(i=0,j=2;j<n;i++,j++)
		{
			strcpy(s[i],s1[j]);
		}
		printf("After sorting:\n");
		for(j=0;j<n-3;j++)
		{
			for(i=0;i<n-3;i++)
			{
				x=strcmp(s[i],s[i+1]);
				if(x<0)
				{
					strcpy(t,s[i]);
					strcpy(s[i],s[i+1]);
					strcpy(s[i+1],t);
				}
			}
		}
		for(i=0;i<n-2;i++)
		{
			printf("%s\n",s[i]);
		}
	}
	else
	{
		char s[n-1][200];
		for(i=1;i<n;i++)
		{
			printf("%s\n",s1[i]);
		}
		printf("%d",n);
		for(i=0,j=1;j<n;i++,j++)
		{
			strcpy(s[i],s1[j]);
		}
		printf("After sorting:\n");
		for(j=0;j<n-2;j++)
		{
			for(i=0;i<n-2;i++)
			{
				x=strcmp(s[i],s[i+1]);
				if(x>0)
				{
					strcpy(t,s[i]);
					strcpy(s[i],s[i+1]);
					strcpy(s[i+1],t);
				}
			}
		}
		for(i=0;i<n-1;i++)
		{
			printf("%s\n",s[i]);
		}

	}
	return 0;
}
int stricmp(char *s,char *s1)
{
	int i,x;
	char t1[100];
	char t2[100];
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			t1[i]=s[i]+32;
		}
		else
			t1[i]=s[i];
	}
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='A'&&s1[i]<='Z')
		{
			t2[i]=s1[i]+32;
		}
		else
			t2[i]=s1[i];
	}
	x=strcmp(t1,t2);
	return x;

}
