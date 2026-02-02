#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
	int fd ; 
	mode_t mode = S_IRUSR | S_IWUSR;
	fd = open("ram1.abc", O_CREAT, mode);
	if(fd == -1 )
		printf("error opening the file \n");
	else
		printf("file successfully opened\n");
}
