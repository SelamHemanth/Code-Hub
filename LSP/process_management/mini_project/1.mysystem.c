#include<stdlib.h>
#include<stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include<unistd.h>
char *argv[]={"ls","-l",0};
int main()
{
	pid_t pid;
	pid=fork();
	if(pid==0)
	{
	//	execl("/bin/ls","ls","-l",NULL);
	//	execve("/bin/ls",(char *[]){"ls","-l",NULL},NULL);
	execve("/bin/ls",argv,NULL);		
	}
	else
	{
		wait(NULL);
		printf("Child completed\n");
		exit(0);
	}
}
