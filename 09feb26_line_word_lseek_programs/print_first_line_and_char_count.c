#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
	int i,j=0;
	int fd = open("file.txt",O_RDONLY);
	char ch;
	lseek(fd,0,SEEK_SET);
	for(i=0; ; i++)
	{
		++j;
		printf("%c",ch);
		if(ch=='\n')
			break;
		read(fd,&ch,1);
	}
	printf("first line char count = %d\n",j);
	close(fd);
}
