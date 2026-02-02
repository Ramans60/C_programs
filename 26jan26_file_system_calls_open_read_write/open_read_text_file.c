#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#define BUF_SIZE 512
int main()
{
	int openFlags, file_fd,i;
	mode_t filePerm;
	ssize_t numRead;
	char buf[BUF_SIZE];

	openFlags = O_CREAT;
	if(file_fd == -1)
	{
		printf("error opening file\n");
		exit(-1);
	}
	else
	{
		numRead = read(file_fd, buf, BUF_SIZE);
		for(i=0; i<numRead; i++)
		{
			printf("%c",buf[i]);
		}
	}
	close(file_fd);
}
