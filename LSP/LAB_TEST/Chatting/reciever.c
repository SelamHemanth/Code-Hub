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
     char ch[BUFSIZ+1];

int main()
{
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
    address.sin_addr.s_addr = inet_addr("127.0.0.1");
    address.sin_port = 9734;
    len = sizeof(address);

/*  Now connect our socket to the server's socket.  */

    result = connect(sockfd, (struct sockaddr *)&address, len);

    if(result == -1) {
        perror("oops: client2");
        exit(1);
    }   


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
printf("\nEnter a message: ");
//scanf(" %[^\n]s",ch);
fgets(ch,BUFSIZ,stdin);
    write(sockfd, ch, BUFSIZ);
 memset(buffer, '\0', sizeof(buffer));
 
}
pthread_exit("exit");

}
void *reciever(void *arg)
{
while(1)
{
        read(sockfd, ch, BUFSIZ);
	printf("\nRecieved message: %s\n",ch);
 memset(buffer, '\0', sizeof(buffer));
}
pthread_exit("exit");

}

