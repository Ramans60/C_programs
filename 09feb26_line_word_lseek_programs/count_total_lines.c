#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
    int fd = open("file.txt", O_RDONLY);
    char ch;
    int lines = 1;
    int n, i;
    for (i = 0; ; i++)
    {
        n = read(fd, &ch, 1);
        if (n == 0)
            break;
        if (ch == '\n')
            lines++;
    }
    printf("Total lines = %d\n", lines);
    close(fd);
}
