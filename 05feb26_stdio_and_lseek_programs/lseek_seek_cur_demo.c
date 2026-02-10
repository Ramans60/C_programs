#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
int main() 
{
    int fd = open("a.txt", O_RDONLY);
    char ch;

    read(fd, &ch, 1);
    printf("%c\n", ch); 

    lseek(fd, 1, SEEK_CUR); 

    read(fd, &ch, 1);
    printf("%c\n", ch); 
    close(fd);
}
