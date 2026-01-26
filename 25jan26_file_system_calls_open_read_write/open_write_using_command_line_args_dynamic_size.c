#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main(int argc, char *argv[ ])
{
	int fd;
	int i,x=0;
	for(i=0; argv[2][i] != '\0'; i++)
		x++;
	int flags = O_CREAT | O_WRONLY;
        int modes = S_IRWXU | S_IRGRP | S_IWGRP | S_IROTH;
	fd = open(argv[1], flags, modes);
	if(fd == -1)
	{
		printf("Error opening a file\n");
	}
	else
		printf("File successfully opened\n");
	write(fd,argv[2],x);
}
