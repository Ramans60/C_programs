#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
	int fd;//file discripter
	int flags = O_CREAT;
	int modes = S_IRWXU | S_IRGRP | S_IWGRP | S_IROTH;
	fd = open("abcd.txt",flags,modes);
	if(fd == -1)		
	{
		printf("Error opening a file\n");
	}		
	else
		printf("File successfully opened\n");
}
