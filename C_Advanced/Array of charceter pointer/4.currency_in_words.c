#include<stdio.h>

int main()
{
	long int n;
	int c=0,arr[10],s;
	char *p[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	char *q[9]={"ten","twenty","therty","fourty","fifty","sixty","seventy","eighty","ninty"};
	char *r[4]={"hundred","thousand","lack","crore"};
	printf("Enter number: ");
	scanf("%ld",&n);
	for(int i=0;n>0;i++)
	{
		arr[i]=n%10;
		n=n/10;
		c++;
	}
	for(int i=0,j=c-1;i<c/2;i++,j--)
	{
		s=arr[i];arr[i]=arr[j];arr[j]=s;
	}
	for(int i=0,count=c;i<c;i++,count--)
	{
	      /*if(count==7 || count==8)
		{
			s=arr[i];
			printf("%s %s ",p[s],r[3]);
		}
		if(count==5 || count==6)
		{
			s=arr[i];
			printf("%s %s ",p[s],r[2]);
		}*/
		if(count==4)
		{
			s=arr[i];
			printf("%s %s ",p[s],r[1]);
		}
		if(count==3)
		{
			s=arr[i];
			printf("%s %s ",p[s],r[0]);
		}
		if(count==2)
		{
			if(arr[i+1]==0)
			{
				s=arr[i];
				printf("%s ",q[s-1]);
				break;
			}
			if(arr[i+1]>0)
			{
				s=arr[i];
				printf("%s ",q[s-1]);
			}
		}
		if(count==1)
		{
			s=arr[i];
			printf("%s\n",p[s]);
		}
	}
	printf("\n");
}

