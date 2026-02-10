#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
int main() {
    int fd = open("file.txt", O_RDONLY);
    char ch;
    for (read(fd, &ch, 1) > 0) 
    {
        write(1, &ch, 1);
    }
    close(fd);
}
