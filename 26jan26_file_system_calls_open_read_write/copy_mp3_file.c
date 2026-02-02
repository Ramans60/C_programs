#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#define BUF_SIZE 512
int main(int argv, char *argc[ ])
{
        int flags, fd,i,j=0;
/*	for(i=0; argc[2][i] != '\0'; i++)
	{
		j++;
	}*/
        int modes = S_IRWXU | S_IRGRP | S_IROTH;
        ssize_t numRead;
        char buf[BUF_SIZE];

        flags = O_CREAT | O_RDWR;
	fd = open("/home/ram/Downloads/Aanandha-Yazhai.mp3", flags, modes);
        if(fd == -1)
        {
                printf("error opening file\n");
                exit(-1);
        }
        else
        {
                numRead = read(fd, buf, BUF_SIZE);
                for(i=0; i<numRead; i++)
                {
                        printf("%c",buf[i]);
                }
        }
	write(fd,buf,numRead);
        close(fd);
}
