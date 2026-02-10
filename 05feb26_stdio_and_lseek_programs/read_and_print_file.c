#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    int fd = open("file.txt", O_RDONLY);
    char ch;

    while (read(fd, &ch, 1) > 0) {
        write(1, &ch, 1);   // print to screen
    }

    close(fd);
    return 0;
}
