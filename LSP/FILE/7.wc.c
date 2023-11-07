#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

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

	int wordCount = 0;
	char buffer[1024];
	int bytes;

	while ((bytes = read(fd, buffer,1024)) > 0)
	{
		for (int i = 0; i < bytes; i++)
		{
			if(buffer[i]==' ' || buffer[i]=='\n' || buffer[i]==',')
				wordCount++;
		}
	}

	close(fd);
	printf("Word count: %d\n", wordCount);
	return 0;
}

