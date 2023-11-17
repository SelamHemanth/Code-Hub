#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
       #include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>

void mywait()
{
char buffer[1024];
int data;

	while (1)
	{
    int fd = open("abc",O_RDONLY);
		data=read(fd,buffer,1);
		printf("abc contains %c\n",(*buffer));
		if (*buffer == '1') {
			break;
		}
close(fd);
	}


}

int main() 
{
	mywait();

	return 0;
}

