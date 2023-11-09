#include<stdio.h>
#include<sys/time.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include <linux/input.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	int fd;
	char name[1024];

	fd=open(argv[1],O_RDONLY);
	if(fd<0)
	{
		perror("open Fails");
		exit(0);
	}
        ioctl(fd, EVIOCGNAME(sizeof(name)), name);
        printf("Input device name: \"%s\"\n", name);
	close(fd);
	return 0;
}
