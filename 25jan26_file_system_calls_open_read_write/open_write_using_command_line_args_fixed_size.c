#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main(int argc, char *argv[ ])
{
//	printf("%s\n",argv[1]);
	int fd;//file discripter
	int flags = O_CREAT | O_WRONLY;
        int modes = S_IRWXU | S_IRGRP | S_IWGRP | S_IROTH;
	fd = open(argv[1], flags, modes);
	if(fd == -1)
	{
		printf("Error opening a file\n");
	}
	else
		printf("File successfully opened\n");
	write(fd,argv[2],100);
}
