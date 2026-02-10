#include <stdio.h>
#include <unistd.h>
#include <string.h>
#define BUF_SIZE 1024
int main()
{
	char buf[BUF_SIZE];
	ssize_t numRead ;
	numRead = read(STDIN_FILENO,buf,BUF_SIZE);
	write(STDOUT_FILENO, buf, numRead);
}
