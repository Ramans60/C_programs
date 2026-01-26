#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
	int fd; //file discripter
        fd = open("ram.txt",O_CREAT,0640);//rw-r-----
        if(fd == -1)
	{
		printf("Error openig a file\n");
	}		
	else 
		printf("File successfully opened\n");
}
