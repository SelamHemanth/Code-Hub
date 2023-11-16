#include<stdlib.h>
#include<stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include<unistd.h>

void shell(char command[])
{

	execl("/bin/sh", "sh", "-c",command,NULL);
	exit(0);
}

int main()
{
	char command[1024];
	pid_t pid;
	while(1)
	{
		printf("&:");
		scanf("%[^\n]s",command);
		getchar();	
		if(!(strcmp(command,"exit")))
		{
			return 0;
		}	
		pid=fork();
		if(pid==0)
		{
			shell(command);
		}
		else
		{
			wait(NULL);
		}
	}
}

