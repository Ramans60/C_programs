#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    int fd = open("file.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    char buf[50];
    int i, len;

    for (i = 1; i <= 50; i++) {
        len = sprintf(buf, "This is line %d\n", i);
        write(fd, buf, len);
    }

    close(fd);
    return 0;
}
