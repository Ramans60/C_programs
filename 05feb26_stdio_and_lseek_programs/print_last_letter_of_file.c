#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
	int fd;
	int flags;
	char ch;
	int modes = O_RDONLY;
	fd= open("file.txt",modes);
	lseek(fd,-2,SEEK_END);
	read(fd, &ch, 1);
	write(0, &ch, 1);
	printf("\n");
	close(fd);
}
