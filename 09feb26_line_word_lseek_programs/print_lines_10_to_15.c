#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
	int i,j=1;
	int fd = open("file.txt",O_RDONLY);
	char ch;
	lseek(fd,0,SEEK_SET);
	for(i=0; ; i++)
	{
		if(ch=='\n')
		{
			++j;
		}
		if(j>=10 && j<=15)
		{
			printf("%c",ch);
		}
		if(j==16)
		{
			break;
		}
		read(fd,&ch,1);
	}
	printf("\n");
	close(fd);
}
