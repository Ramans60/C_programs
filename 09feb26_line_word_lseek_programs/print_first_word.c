#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
	int i;
	int fd = open("file.txt",O_RDONLY);
	char ch;
	lseek(fd,0,SEEK_SET);
	for(i=0; ; i++)
	{
		printf("%c",ch);
		if(ch==' ')
			break;
		read(fd,&ch,1);
	}
	printf("\n");
	close(fd);
}


