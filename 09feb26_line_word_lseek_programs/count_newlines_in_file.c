#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
	int i,j=0;
	ssize_t n;
	int fd = open("file.txt",O_RDONLY);
	char ch;
	lseek(fd,0,SEEK_SET);
	for(i=0; ; i++)
	{
		n = read(fd,&ch,1);
		if(ch == '\n')
			++j;
		printf("%c",ch);
		if(n == 0)
			break;
	}
	printf("%d\n",j);
	close(fd);
}
