#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define BUF_SIZE 512

int main(int argc, char *argv[ ])
{
	int i, open_fd, openFlags;
	mode_t filePerms;
	char *buf = "Learning programming interface\n";
	ssize_t num_write;

	openFlags = O_CREAT | O_WRONLY;
	filePerms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP  | S_IROTH ; /*rw-rw-r-- */

	if(argc < 2)
	{
		printf("%s : missing operand <exe file_name>",argv[0]);
		exit(-1);
	}

	open_fd = open(argv[1], openFlags ,filePerms);
	if(open_fd == -1)
	{
		perror("open()");
		exit(-1);
	}

	num_write = write(open_fd, buf, (strlen(buf)-1));
	if(num_write == -1)
	{
		perror("write()");
		exit(-2);
	}
	close(open_fd);
	for(i=0; i<buf; i++)
	{
	}
}
