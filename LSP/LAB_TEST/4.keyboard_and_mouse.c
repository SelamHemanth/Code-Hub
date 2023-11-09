#include<stdio.h>
#include<sys/time.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<linux/input.h>

int main()
{
	fd_set read_fileset;
	int fd1,fd2,ret;
	struct input_event ev;

	fd1=open("/dev/input/event4",O_RDONLY);
	if(fd1<0)
		printf("opening mouse failed\n");
	fd2=open("/dev/input/event2",O_RDONLY);
	if(fd2<0)
		printf("opening keyboard failed\n");
	
	FD_ZERO(&read_fileset);

	while(1){
		FD_SET(fd1,&read_fileset);
		FD_SET(fd2,&read_fileset);
		select(FD_SETSIZE,&read_fileset,NULL,NULL,0);
		if(FD_ISSET(fd1,&read_fileset)){
			printf("Mouse data\n");
			ret = read(fd1,&ev,sizeof(struct input_event));
        		printf("ret:%d ev.type:%d ev.code:%d ev.value:%d\n",ret,ev.type,ev.code,ev.value);
		}
		if(FD_ISSET(fd2,&read_fileset)){
			printf("Keyboard data\n");
			ret = read(fd2,&ev,sizeof(struct input_event));
        		printf("ret:%d ev.type:%d ev.code:%d ev.value:%d\n",ret,ev.type,ev.code,ev.value);
		}
	}
	return 0;
}


