#include <stdio.h>
#include <stdlib.h>
       #include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>
 #include <unistd.h>

void myexit()
{
int * buffer;
    int fd = open("abc",O_RDWR,0644);
if(fd<0)
printf("not open\n");
    read(0,buffer,1);
getchar();
write(fd,buffer,1);
    close(fd);
    exit(0);
}

int main() 
{
    myexit();
    return 0;
}

