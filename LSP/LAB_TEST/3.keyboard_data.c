#include<stdio.h>
#include<sys/time.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include <linux/input.h>

int main()
{
	int nread,fd;
	struct input_event ev[64];
	fd=open("/dev/input/event2",O_RDONLY);
	if(fd<0)
		printf("Keyborad not open\n");
	nread=read(fd, ev, sizeof(struct input_event) * 64);
        for (int i = 0; i < nread / sizeof(struct input_event); i++)
	printf("Event: time %ld.%06ld, type %d , code %d , value %d\n",ev[i].time.tv_sec, ev[i].time.tv_usec, ev[i].type,ev[i].code, ev[i].value);
close(fd);
	return 0;
}

