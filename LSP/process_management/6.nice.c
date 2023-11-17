#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(int argc, char *argv[]) 
{

	if (argc != 3) 
	{
		printf("Invalid Argumnets\n");
		exit(1);
	}

	int nicevalue = atoi(argv[1]);

	if (nicevalue < -20 || nicevalue > 20) 
	{
		printf("Nice value must be between -20 and 20\n");
		exit(1);
	}

	pid_t pid = fork();
	if(pid<0)
	{
		printf("fork failed\n");
	}

	else if (pid == 0)
	{ 
		int ret=nice(nicevalue);
		if (ret == -1)
		{
			printf("nice failed");
			exit(1);
		}

		execlp(argv[2], argv[2], NULL);
		exit(1);
	}
	else 
		wait(NULL);

	return 0;
}

