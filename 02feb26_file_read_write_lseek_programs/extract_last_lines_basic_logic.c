#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#define BUF_SIZE 1
int main(int argv, char *argc[ ])
{
        int flags, fd,fd1,i=0,j=6,k=0,l,m;
        int modes = S_IRWXU | S_IRGRP | S_IROTH;
        ssize_t numRead;
        char buf[BUF_SIZE];

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
			/*printf(" %d\n\n", k);
			m = k-5;
			for(l=m; l<k; l++)
			{
				write(fd, &buf[l], numRead);
			}*/
		}
		m = k-5;
		printf(" %d\n\n", k);
		for(numRead = read(fd1, buf, BUF_SIZE); numRead > 0; numRead = read(fd1, buf, BUF_SIZE))
		{
			for(i=0; i<numRead; i++)
			{
		/*	for(l=m; l<k; l++)*/
				if(i>m && i<k)
				{
					write(fd, &buf[i], numRead);
				}
			}
		}
	}
        close(fd);
        close(fd1);
}
