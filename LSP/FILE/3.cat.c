#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc , char *argv[])
{
	char buff[100];
	int fd,nread;

	fd = open(argv[1],O_RDONLY);
	printf("fd:%d\n",fd);
	if (fd < 0){
		perror("open fail:");
		exit(0);
	}
	nread = read(fd,buff,2);	
	if (nread  < 0){
		perror("read fail:");
		exit(0);
	}
	while (0 != nread)
	{
		write(1,buff,nread);
		nread = read(fd,buff,2);	
	}		

	close(fd);
	return 0;
}


