#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
	int fd;//file discripter
	int flags = O_CREAT;
	int modes = S_IRUSR | S_IWUSR;
	fd = open("abc.txt",flags,modes); //rw-------
        if(fd == -1)
	{
		printf("Error opening a file\n");
	}
	else
		printf("file successfully opened\n");
}
