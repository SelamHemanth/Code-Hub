#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc != 2) {
		printf("Invalid Arguments\n");
		exit(1);
	}

	int fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		exit(1);
	}

	int wordCount = 0,charcount=0;
	char buffer[1024];
	int bytes;

	while ((bytes = read(fd, buffer,1024)) > 0)
	{
		for (int i = 0; i < bytes; i++)
		{
			if(buffer[i]==' ' || buffer[i]=='\n' || buffer[i]==',')
				wordCount++;
			charcount++;
		}
	}
	lseek(fd,0,SEEK_SET);
	int i=0;
	  while ((bytes = read(fd, buffer, 1)) > 0)
        {
                if (buffer[0] == '\n')
                {
                        i++;
                }
        }
	printf("%d %d %d %s\n",i,wordCount,charcount,argv[1]);
	 close(fd);
	return 0;
}

