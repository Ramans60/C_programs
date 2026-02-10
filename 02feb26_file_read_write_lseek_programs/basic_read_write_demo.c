#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#define MAX_READ 20
int main()
{
	/*char buffer[MAX_READ];
	if (read(STDIN_FILENO, buffer, MAX_READ) == -1)
		errExit("read");
	printf("The input data was: %s\n", buffer);*/

	int flags = O_RDWR;
	int modes = S_IRWXU | S_IRGRP | S_IROTH;
	int fd = open("abc.txt", flags, modes);
	char buffer[MAX_READ + 1];
	ssize_t numRead;
	numRead = read(fd, buffer, MAX_READ);
	if (numRead == -1)
		exit(-1);
	buffer[numRead] = '\0';
	printf("The input data was: %s\n", buffer);
	write(fd, buffer, numRead);
}
