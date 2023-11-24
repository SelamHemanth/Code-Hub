#include<stdio.h>
#include<stdlib.h>
#include<semaphore.h>
#include<signal.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<signal.h>
#include<sys/mman.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<unistd.h>
#define KEY 555

sem_t *prod_lock,*cons_lock;
char *msg;
int a,b,n=0,m=0,ret;
pid_t child_pid;
char *const ps_argv[] ={"cons"};
void terminate(int sig)
{
	int shmid;

	if((shmid=shmget(555,0,0))==-1) {
		perror("shmid");
		exit(1);
	}

	if(shmctl(shmid,IPC_RMID,0)==-1) {
		perror("shmctl");
		exit(1);
	}


	printf("Shared memory successfully removed\n");

	printf("I got a signal for terminate, for terminate CTRL+C\n");
	sem_unlink("producer1");
	sem_unlink("consumer1");
	signal(SIGINT,SIG_DFL);
}

void main()
{
	signal(SIGINT,terminate);
	prod_lock=sem_open("producer1",O_CREAT,0666,1);
	if(prod_lock==NULL)
	{
		perror("semaphore1");
		exit(0);
	}
	cons_lock=sem_open("consumer1",O_CREAT,0666,0);
	if(cons_lock==NULL)
	{
		perror("semaphore2");
		exit(1);
	}
	sem_getvalue(prod_lock,&a);
	sem_getvalue(cons_lock,&b);
	printf("prod:%d   cons:%d\n",a,b);
	int shmid;
	char *msg;
	if((shmid=shmget(KEY,BUFSIZ,0666|IPC_CREAT))==-1)
	{
		perror("shmget");
		exit(1);
	}
	child_pid=fork();
	if(child_pid > 0)
	{
		while(1)
		{
			sem_wait(prod_lock);
			msg=shmat(shmid,0,0);
			printf("Enter the data you want to write into shared memory\n");
			fgets(msg,BUFSIZ,stdin);
			printf("Data successfully written\n");
			shmdt(msg);
			sem_post(cons_lock);
		}	
	}
	else if(child_pid==0)	//child
	{
				execl("cons","cons",0);
	}
}

