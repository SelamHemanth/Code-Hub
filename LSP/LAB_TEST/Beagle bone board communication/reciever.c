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

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <string.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <pthread.h>

void *sender(void *arg);
void *reciever(void *arg);
int sockfd;
char ch;
struct input_event ev[64];
int val1,val2,val3,fd,code,value,rd;

void unexport(int argv)
{
        close(fd);
        fd=open("/sys/class/gpio/unexport",O_WRONLY);
        write(fd,"10",2);      //RED LED
        close(fd);
        close(val1);close(val2);close(val3);
        exit(0);
}


int main()
{

        fd=open("/sys/class/gpio/export",O_WRONLY);
        write(fd,"10",2);      //RED LED
        close(fd);
        fd=open("/sys/class/gpio/gpio10/direction",O_WRONLY);
        write(fd,"out",3);      //RED LED output
        close(fd);
/*        fd=open("/sys/class/gpio/gpio26/direction",O_WRONLY);
        write(fd,"in",2);       //UP SWITCH input
        close(fd);
        fd=open("/sys/class/gpio/gpio27/direction",O_WRONLY);
        write(fd,"in",2);       //UP SWITCH input
        close(fd);
        val1=open("/sys/class/gpio/gpio10/value",O_WRONLY); //RED LED value
        write(val1,"0",1);
	close(val1);
        val2=open("/sys/class/gpio/gpio26/value",O_WRONLY); //UP SWITCH value
        write(val2,"1",1);
        val3=open("/sys/class/gpio/gpio27/value",O_WRONLY); //DOWN SWITCH value
        write(val3,"1",1);
  */      fd=open("/dev/input/event0",O_RDONLY); //open switch input_event

int ret;
pthread_t buzzer,led;
void *retval;
   
    int len;
    struct sockaddr_in address;
    int result;
/*  Create a socket for the client.  */

    sockfd = socket(AF_INET, SOCK_STREAM, 0); 

/*  Name the socket, as agreed with the server.  */

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = inet_addr("192.168.0.112");
    address.sin_port = 2222;
    len = sizeof(address);

/*  Now connect our socket to the server's socket.  */

    result = connect(sockfd, (struct sockaddr *)&address, len);

    if(result == -1) {
        perror("oops: client2");
        exit(1);
    }   
else printf("Connection Success\n");

ret = pthread_create(&led,NULL,sender,NULL);
if (ret < 0){
perror("pthread create fail:");
exit(0);
}
ret = pthread_create(&buzzer,NULL,reciever,NULL);
if (ret < 0){
perror("pthread create fail:");
exit(0);
}
ret = pthread_join(buzzer,&retval);
if (ret < 0){
perror("pthread join fail:");
exit(0);
}
ret = pthread_join(led,&retval);
if (ret < 0){
perror("pthread join fail:");
  close(sockfd);
exit(0);
}
return 0;
}




void *sender(void *arg)
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
    write(sockfd,"A",1);
printf("send A\n");
}
if(code == 114 && value == 1)
{
 write(sockfd,"B",1);
printf("send B\n");
}
}
pthread_exit("exit");
}





void *reciever(void *arg)
{
while(1)
{
read(sockfd, &ch,1);
printf("\nRecieved message: %s\n",ch);
if(ch=='A')
{
      val1=open("/sys/class/gpio/gpio10/value",O_WRONLY); //RED LED value
if(val1<0)
{
perror("led value : ");
}
write(val1,"1",1);
printf("recieve A\n");
close(val1);
}
else if(ch=='B')
{
      val1=open("/sys/class/gpio/gpio10/value",O_WRONLY); //RED LED value
if(val1<0)
{
perror("led value : ");
}
write(val1,"0",1);
printf("recieve B\n");
close(val1);
}
}
pthread_exit("exit");
}

