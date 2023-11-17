#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <signal.h>

int main(int argc,char *argv[])
{
if(argc<2)
printf("Invalid Arguments\n");
else
{
pid_t pid;
pid=atoi(argv[1]);
kill(pid,9);
}
return 0;
}
