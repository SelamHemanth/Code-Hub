#include<stdio.h>

int main(int argc, char *agrv[])
{
	if(argc<2)
		printf("Invalid Arguments\n");
	else
	{
		for(int i=1;i<argc;i++)
		{
			printf("%s",agrv[i]);
			if(i < argc-1)
				printf(" ");
		}
	}
	printf("\n");
		return 0;
}
