#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
	int i;
	int fd=open("file.txt",O_RDONLY);
	char ch;
	lseek(fd,20,SEEK_CUR);
	for(i=0; ;i++)
	{
		printf("%c",ch);
		if(ch=='\n')
			break;
		read(fd,&ch,1);
	}
}
