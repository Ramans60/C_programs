#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    int fd = open("a.txt", O_RDONLY);
    char ch;

    read(fd, &ch, 1);
    printf("%c\n", ch); 

    lseek(fd, 1, SEEK_SET);

    read(fd, &ch, 1);
    printf("%c\n", ch); 

    close(fd);
}
