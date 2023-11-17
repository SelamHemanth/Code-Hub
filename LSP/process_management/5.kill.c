#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <signal.h>

int main(int argc,char *argv[])
{
	if(argc<2)
		printf("Invalid Arguments\n");
	else if(argc == 2)
	{
		pid_t pid;
		pid=atoi(argv[1]);
		kill(pid,9);
	}
	else if(argc ==3)
	{
		pid_t pid,sig;
		pid=atoi(argv[2]);
		sig=atoi(argv[1]);
		kill(pid,sig);
	}
	return 0;
}
