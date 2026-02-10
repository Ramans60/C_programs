#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
	int fd,i;
	int flags;
	char ch;
	int modes = O_RDONLY;
	fd= open("file.txt",modes);
	lseek(fd,0,SEEK_SET);
	for(i=0 ; ; i++)
	{
		read(fd, &ch, 1);
		if(ch == ' ')
			break;

		write(0, &ch, 1);
	}
	printf("\n");
	close(fd);
}
