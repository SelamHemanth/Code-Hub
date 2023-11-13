#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<linux/input.h>

int main()
{
	int fd;
	fd=open("/sys/class/gpio/export/",O_WRONLY);
	write(fd,"10",2);
	close(fd);
	fd=open("/sys/class/gpio/gpio10/direction/",O_WRONLY);
	write(fd,"out",3);
	close(fd);
	fd=open("/sys/class/gpio/gpio10/value/",O_WRONLY);
	while(1)
	{
		write(fd,"0",1);
		sleep(1);
		write(fd,"1",1);
		sleep(1);
	}
	close(fd);
	fd=open("/sys/class/gpio/unexport/",O_WRONLY);
	write(fd,"10",2);
	close(fd);
}
