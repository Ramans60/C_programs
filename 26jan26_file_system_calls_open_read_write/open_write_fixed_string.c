#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

int main(int argc, char* argv[ ] )
{
	int fd, flags;
	char *buf ="Linux programming Interface\n";
	ssize_t num_write;

	flags = O_CREAT | O_WRONLY;
	int modes = S_IRUSR | S_IWUSR | S_IRGRP | S_IWOTH ; /* rw-rw-r*/

	if(argc < 2)
	{
		printf("%s : missing operand <exe file name>",argv[0]);
		exit(-1);
	}
	fd = open(argv[1], flags, modes);
	if(fd == -1)
	{
		perror("open()");
		exit(-1);
	}

	if(num_write == -1)
	{
		perror("write()");
		exit(-2);
	}
	close(fd);
}
