/*
   Zombie Process:-
   Whenever the parent is executing, if the fork() system call is occured, the parent is creates child process with different process ID. In such case the wait() system call keep on waiting for child process acknowlgment ,if the child process is completed or not. If the child process is completes its process but  not returns any acknolgement. This process is called Zombie Process.

   Orphans Processs:-
   Whenever the parent is executing, if the fork() system call is occured. the parent is creates child process with different process ID. But ihe parent is not wait for child process completion. Both are run parallely. So, the parent process will terminated without completion of child process, it is depends on grand parent process. so, the synchronising of execution is removed. child process is did its process.But the abnormal outputs will given, This process is called Orphans Process.
 */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
int main()
{
	pid_t pid;
	int buffer;
	printf("Parent is start\n");
	getchar();
	pid = fork();
	if(pid == 0)
	{ 
		printf("Children start\n");
		sleep(30); 
		printf("children end\n"); 
	}
	else
	{ 
		wait(&buffer); 
		printf("parent end\n");
	}
}



