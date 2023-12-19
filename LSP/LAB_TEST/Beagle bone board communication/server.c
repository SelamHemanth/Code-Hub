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
     int server_sockfd, client_sockfd;
     int server_len, client_len;
 struct sockaddr_in server_address;
    struct sockaddr_in client_address;
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

        fd=open("/sys/class/gpio/unexport",O_WRONLY);
        write(fd,"10",2);      //RED LED
        close(fd);
        while((fd=open("/sys/class/gpio/export",O_WRONLY))<0);
        write(fd,"10",2);      //RED LED
        close(fd);
        while((fd=open("/sys/class/gpio/gpio10/direction",O_WRONLY))<0);
        write(fd,"out",3);      //RED LED output
        close(fd);
        while((fd=open("/dev/input/event0",O_RDONLY))<0); //open switch input_event

int ret;
pthread_t buzzer,led;
void *retval;
   
    int len;
    struct sockaddr_in address;
    int result;
/*  Create a socket for the client.  */

    server_sockfd = socket(AF_INET, SOCK_STREAM, 0); 

/*  Name the socket.  */

    server_address.sin_family = AF_INET;
    server_address.sin_addr.s_addr = inet_addr("127.0.0.1");
    server_address.sin_port = 9734;
    server_len = sizeof(server_address);
    bind(server_sockfd, (struct sockaddr *)&server_address, server_len);

/*  Create a connection queue and wait for clients.  */

    listen(server_sockfd, 5); 
 client_len = sizeof(client_address);
        client_sockfd = accept(server_sockfd, 
            (struct sockaddr *)&client_address, &client_len);

printf("client_sockfd %d\n",client_sockfd );

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
    write(client_sockfd,"A",1);
printf("send A\n");
}
if(code == 114 && value == 1)
{
 write(client_sockfd,"B",1);
printf("send B\n");
}
}
pthread_exit("exit");
}





void *reciever(void *arg)
{
while(1)
{
read(client_sockfd, &ch, 1);
printf("\nRecieved message: %s\n",ch);
lseek(val1,0,SEEK_SET);
if(ch=='A')
{
write(val1,"1",1);
printf("recieve A\n");
}
else if(ch=='B')
{
write(val1,"0",1);
printf("recieve A\n");
}
}
pthread_exit("exit");
}

