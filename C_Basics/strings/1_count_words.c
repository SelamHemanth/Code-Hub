/*Take a string as an input, and count the number of words in the string. Take space, comma,exclamation, question mark and fullstop as delimitters for word counting.*/

#include<stdio.h>

int main()
{
	int c=0;
	char str[50];
	printf("Enter a sentance:\n");
	scanf("%[^\n]s",str);
	for(int i=0;str[i];i++)
	{
		if(str[i]==' ' || str[i]==',' || str[i]=='!' || str[i]=='?' || str[i]=='.')
			c++;
	}
	printf("Number of word = %d\n",c);
}
