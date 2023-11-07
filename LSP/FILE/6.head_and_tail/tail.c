#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char buff[100];
	int fd, nread, i = 1;

	if (argc != 3)
	{
		printf("Usage: %s <filename> <number_of_lines>\n", argv[0]);
		exit(1);
	}

	int l= atoi(argv[2]);

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		perror("open fail:");
		exit(1);
	}

	while (nread = read(fd, buff, 1) > 0)
	{
		if (buff[0] == '\n')
			i++;
	}
	int j=0,c=i-l-1;
	lseek(fd,0,SEEK_SET);
	while ((nread=read(fd, buff, 1)) > 0)
	{
		 if (buff[0] == '\n')
		j++;
		if(j==c)
		{
			while (c<i && (nread = read(fd, buff, 1)) > 0)
			{
				write(1, buff, 1);
				if (buff[0] == '\n')
				{
					c++;
				}
			}
		}
	
	}

	close(fd);
	return 0;
}
