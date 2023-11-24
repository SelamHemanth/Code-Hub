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

int main()
{
        int shmid;
        char *msg;
	prod_lock=sem_open("producer1",0,0666);
        if(prod_lock==NULL)
        {
                perror("semaphore1");
                exit(0);
        }
        cons_lock=sem_open("consumer1",0,0666);
        if(cons_lock==NULL)
        {
                perror("semaphore2");
                exit(1);
        }

        if((shmid=shmget(KEY,BUFSIZ,0))==-1)
        {
                perror("shmget");
                exit(1);
        }
	   msg=shmat(shmid,0,0);
	while(1)
	{
		sem_wait(cons_lock);
   		printf("Data written in the shared memory is:%s\n",msg);
		sem_post(prod_lock);
	}
   shmdt(msg);
}

