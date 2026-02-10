#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main() 
{
    int fd;
    char ch;
    int i;
    fd = open("file.txt", O_RDONLY);
    lseek(fd, -1, SEEK_END);
    for (i = 0; i < 200; i++) 
    {
        read(fd, &ch, 1);
        if (ch == '\n')
            break;
        lseek(fd, -2, SEEK_CUR);
    }
    for (i = 0; i < 100; i++) 
    {
        read(fd, &ch, 1);
        if (ch == '\n' || ch == ' ')
            break;
        write(1, &ch, 1);
    }
    write(1, "\n", 1);
    close(fd);
}
