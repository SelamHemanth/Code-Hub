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
     int server_sockfd, client_sockfd;
     int server_len, client_len;
    struct sockaddr_in server_address;
    struct sockaddr_in client_address;
     char ch[BUFSIZ+1];

int main()
{
/*  Create an unnamed socket for the server.  */

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


int ret;
pthread_t from,to;
void *retval;

ret = pthread_create(&from,NULL,sender,NULL);
if (ret < 0){
perror("pthread create fail:");
exit(0);
}
ret = pthread_create(&to,NULL,reciever,NULL);
if (ret < 0){
perror("pthread create fail:");
exit(0);
}
ret = pthread_join(from,&retval);
if (ret < 0){
perror("pthread join fail:");
exit(0);
}
ret = pthread_join(to,&retval);
if (ret < 0){
perror("pthread join fail:");
 close(client_sockfd);
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
  write(client_sockfd, ch, BUFSIZ);
 memset(&buffer, '\0', sizeof(buffer));}
pthread_exit("exit");
}

void *reciever(void *arg)
{
while(1)
{
        read(client_sockfd, ch, BUFSIZ);
        printf("\nRecieved message: %s\n",ch);
 memset(&buffer, '\0', sizeof(buffer));}
pthread_exit("exit");
}

