//Developed by:- S.Hemanth (KM50BESD14)

#include<stdio.h>
#include<stdlib.h>

char *s;

void itoa(int *p)
{
	int i,c=1;
	int temp=(*p);
	while(temp>9)
	{
		temp=temp/10;
		c++;					//count number of digits
	}
	s=(char *)calloc(c,sizeof(char));		//allocate memory with reference by count
	for(i=c-1;*p>0;i--)				
	{
		s[i]='0'+*p%10;				//assign numbers to it's perticular location
		*p=*p/10;
	}
}

int main()
{
	printf("Enter a number: ");
	int *p=(int *)malloc(sizeof(int));		//allocating memory to a integer variable
	scanf("%d",p);
	itoa(p);					//calling itoa function
	printf("string:- %s\n",s);
	free(p);					//de-allocating pointer 'p'
	free(s);					//de-allocating pointer 's'
	return 0;
}
