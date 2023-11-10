#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <utime.h>

int main(int argc,char *argv[])
{
	int x;
	struct stat siz;
	stat(argv[1],&siz);
	x=siz.st_size;
	printf("%d\t",(((x/4096)+1)*getpagesize())/1000);
	printf("%s\n",argv[1]);
	return 0;
}
