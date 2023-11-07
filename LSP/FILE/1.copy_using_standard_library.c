//COPY_BYTE
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
    char byte; 
    int in, out; 
    int nread;

    in = open("file.in", O_RDONLY); 
    out = open("file.out", O_WRONLY|O_CREAT, S_IRUSR|S_IWUSR);
    while((nread = read(in,&byte,1)) > 0)
        write(out,&byte,nread);

    exit(0);
}

/*
 In Copy Byte method the file is access by read only mode and copy into one new file. So,every bit is read with read system call and write into the file.
 For suppose the file size is 8MB, every read system call takes 8 mega system call and write system call also takes 8 mega system call. Total it need 16 mega system calls. 
 
-> The output time is increases.
-> The consumption CPU is more
 */
//**************************************************************************

//COPY_BLOCK
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
    char block[1024];
    int in, out;
    int nread;

    in = open("file.in", O_RDONLY);
    out = open("file.out", O_WRONLY|O_CREAT, S_IRUSR|S_IWUSR);
    while((nread = read(in,block,sizeof(block))) > 0)
        write(out,block,nread);

    exit(0);
}

/*
 In the Copy Block method the bytes is read by block-wise.So, compared to copy byte method the read and write system calls are decreases. So, the cpu performance is improved and also the execution speed also improved.
Ex:- 
File size is 8MB
Read -> 8 kilo system calls      (Every time reads 1024 bytes)
Write -> 8 kilo system calls	 (Every time writes 1024 bytes)
total -> 16 kilo system calls
 */
//**************************************************************************

//COPY_STDIO
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    FILE *in, *out;

    in = fopen("sample.txt","r");
    out = fopen("Copyfile.out","w");

    while((c = fgetc(in)) != EOF)
        fputc(c,out);

    exit(0);
}
/*
 In the copy stdio mode,we use standard input output libraries, So , system only fixes the buffer size and executes by 2 kilo system calls for read and write.
 */

//*************************************************************************
//DIFFERENCE BETWEEN SYSTEM CLASSS AND STANDARD LIBRARIES
/*
System Calls:-

System calls are low-level functions that provide a direct interface between a user-space application and the kernel of an operating system. They allow programs to access system resources and services, such as opening and closing files, managing memory, and interacting with hardware devices.

Standard Libraries:-

Standard libraries are collections of pre-written functions that provide a wide range of common functionalities, such as mathematical operations, string manipulation, memory management, and input/output operations. They are typically written in user space and are linked into programs during compilation.
*/
