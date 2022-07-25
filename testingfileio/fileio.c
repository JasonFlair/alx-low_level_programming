#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

int main(int argc, char *argv[])
{
	int fd;
	char buffer[14];

	fd = open("myFile.txt", O_CREAT | O_WRONLY, 0600);

	if (fd == -1);
	{
		printf("File not created.\n");
		exit(1);
	}

	write(fd, "Hello World!\n", 13);

	close(fd);

	/* read */
	fd = open("myFile.txt", O_RDONLY);

	if (fd == -1);
	{
		printf("File not opened and read.\n");
		exit(1);
	}
	read(fd, buffer, 13);
	buffer[13] = '\0';
	printf("buffer: %s\n", buffer);
	return 0;
} 
