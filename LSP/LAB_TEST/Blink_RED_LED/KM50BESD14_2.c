#include<stdio.h>
#include<sys/time.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<linux/input.h>

int main()
{
	int fd,fd1,val1,val2,val3,code=0,value=0,rd;
	struct input_event ev[2];
	
//export
	fd=open("/sys/class/gpio/export",O_WRONLY);
	write(fd,"10",2);	//RED LED
	close(fd);
	
//direction
	fd=open("/sys/class/gpio/gpio10/direction",O_WRONLY);
	write(fd,"out",3);	//RED LED output
	close(fd);
	fd=open("/sys/class/gpio/gpio26/direction",O_WRONLY);
	write(fd,"in",2);	//UP SWITCH input
	close(fd);
	fd=open("/sys/class/gpio/gpio27/direction",O_WRONLY);
	write(fd,"in",2);	//DOWN SWITCH input
	close(fd);
	
//value
	val1=open("/sys/class/gpio/gpio10/value",O_WRONLY);
	write(val1,"1",1);
	val2=open("/sys/class/gpio/gpio26/value",O_WRONLY);
	write(val2,"1",1);
	val3=open("/sys/class/gpio/gpio27/value",O_WRONLY);
	write(val3,"1",1);
	fd1=open("/dev/input/event0",O_RDONLY);	//input_event
	while(1)
	{
			rd=read(fd1,ev,sizeof(struct input_event)*2);
			for(int i=0;i<rd/sizeof(struct input_event);i++)
			{
			code=ev->code;
			value=ev->value;
			}
			if(code==114 && value)
				write(val1,"0",1);
			if(code==115 && value)
				write(val1,"1",1);
	}
close(val1);close(val2);close(val3);close(fd1); //closing all opened filepaths

//unexport
        fd=open("/sys/class/gpio/unexport",O_WRONLY);
        write(fd,"10",2);       //RED LED
        close(fd);
	return 0;
}

