#include<stdio.h>
#include<signal.h>
#include<sys/time.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<linux/input.h>
#include<stdlib.h>
#include<pthread.h>

struct input_event ev[64];
int val1,val2,val3,fd,code,value,rd;

void unexport(int argv)
{	
	close(fd);
        fd=open("/sys/class/gpio/unexport",O_WRONLY);
        write(fd,"9",1);
        close(fd);
        fd=open("/sys/class/gpio/unexport",O_WRONLY);
        write(fd,"10",2);      //RED LED
        close(fd);
	close(val1);close(val2);close(val3);
	exit(0);
}

void *led_fun(void *argv)
{
	while(1)
	{
		lseek(val1,0,SEEK_SET);
		write(val1,"0",1);
		sleep(1);
		lseek(val1,0,SEEK_SET);
		write(val1,"1",1);
		sleep(1);
	}
	pthread_exit("LED EXIT");
}

void *buzz_fun(void *argv)
{
	while(1)
	{
		rd=read(fd,ev,sizeof(struct input_event)*64);  //reading code from switch
		for(int i=0;i<rd/sizeof(struct input_event);i++)
		{
			code=ev->code;
			value=ev->value;
		}
		if(code == 115 && value == 1)
		{
		lseek(val3,0,SEEK_SET);
		write(val3,"1",1);
		sleep(2);
		lseek(val3,0,SEEK_SET);
		write(val3,"0",1);
		}
		
	}
	pthread_exit("BUZZER EXIT");
}


int main()
{
	(void)signal(SIGINT,unexport);
	pthread_t LED,BUZZ;
	void *returnval;
	fd=open("/sys/class/gpio/export",O_WRONLY);
	write(fd,"9",1);
	close(fd);
	fd=open("/sys/class/gpio/export",O_WRONLY);
	write(fd,"10",2);      //RED LED
	close(fd);
	//direction
	fd=open("/sys/class/gpio/gpio10/direction",O_WRONLY);
	write(fd,"out",3);      //RED LED output
	close(fd);
	fd=open("/sys/class/gpio/gpio26/direction",O_WRONLY);
	write(fd,"in",2);       //UP SWITCH input
	close(fd);
	fd=open("/sys/class/gpio/gpio9/direction",O_WRONLY);
	write(fd,"out",3);      //BUZZER output
	close(fd);
        val1=open("/sys/class/gpio/gpio10/value",O_WRONLY); //RED LED value
        write(val1,"1",1);
        val2=open("/sys/class/gpio/gpio26/value",O_WRONLY); //UP SWITCH value
        write(val2,"1",1);
        val3=open("/sys/class/gpio/gpio9/value",O_WRONLY);  //BUZZER value
        write(val3,"0",1);
        fd=open("/dev/input/event0",O_RDONLY); //open switch input_event
	pthread_create(&LED,NULL,led_fun,NULL);
	pthread_create(&BUZZ,NULL,buzz_fun,NULL);
	pthread_join(LED,&returnval);
	pthread_join(BUZZ,&returnval);
}
