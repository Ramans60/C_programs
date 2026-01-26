#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main(int argc, char *argv[ ])
{
	int fd1, fd2;
	int i,x=0,y=0;
	for(i=0; argv[3][i] != '\0'; i++)
		x++;
	for(i=0; argv[4][i] != '\0'; i++)
		y++;
	int flags = O_CREAT | O_WRONLY;
        int modes = S_IRWXU | S_IRGRP | S_IWGRP | S_IROTH;
	fd1 = open(argv[1], flags, modes);
	fd2 = open(argv[2], flags, modes);
	if(fd1 == -1)
	{
		printf("1.Error opening a file\n");
	}
	else
		printf("1.File successfully opened\n");
	if(fd2 == -1)
	{
		printf("2.Error opening a file\n");
	}
	else
		printf("2.File successfully opened\n");
	write(fd1,argv[3],x);
	read(fd2,argv[4],y);
}
