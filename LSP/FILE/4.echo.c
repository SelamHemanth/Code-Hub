#include<stdio.h>

int main(int argc, char *agrv[])
{
	if(argc<2)
		printf("Invalid Arguments\n");
	else
	{
		int i=1;
		while(i<argc)
		{
			 printf("%s",agrv[i]);
			if(i< argc-1)
				printf(" ");
			i++;
		}
	}
	printf("\n");
		return 0;
}
