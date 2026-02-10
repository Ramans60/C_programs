#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#define BUF_SIZE 1
int main(int argv, char *argc[ ])
{
        int flags, fd,fd1,i=0,j=6,k=0,m;
        int modes = S_IRWXU | S_IRGRP | S_IROTH;
        ssize_t numRead;
        char buf[BUF_SIZE];
	int current_line = 0;

        flags = O_CREAT | O_RDWR;
	fd = open(argc[1], flags, modes);
	fd1 = open("/home/ram/story.txt", flags, modes);
        if(fd == -1)
        {
                printf("error opening file\n");
                exit(-1);
        }
        else
        {
		for(numRead = read(fd1, buf, BUF_SIZE); numRead > 0; numRead = read(fd1, buf, BUF_SIZE))
		{
			for(i=0; i<numRead; i++)
			{
				if(buf[i] == '\n')
				{			
					k++;
				}
			}
		}
		m = k - 6;
	     	if (m < 0)
			m = 0;
		lseek(fd1, 0, SEEK_SET); 
		printf("%d\n %d\n",k,m);
		for(numRead = read(fd1, buf, BUF_SIZE); numRead > 0; numRead = read(fd1, buf, BUF_SIZE))
		{
		       	if (current_line >= m)
     
		     	{
		    		write(fd, buf, 1);
			}
			if (buf[0] == '\n')
		    		current_line++;
		}
	}
        close(fd);
        close(fd1);
}

