#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
	int i,j=0;
	int fd=open("file.txt",O_RDONLY);
	char ch;
	lseek(fd,-12,SEEK_END);
	for(i=0; ;i++)
	{
		++j;
		printf("%c",ch);
		if(/*j=2 && */ch=='\n')
		{
			break;
		}
		read(fd,&ch,1);
	}
}
