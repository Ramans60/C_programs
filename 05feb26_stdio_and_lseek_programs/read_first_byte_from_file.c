#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    int fd = open("a.txt", O_RDONLY);
    char ch[5];

    read(fd, ch,1);
    printf("%s\n", ch);

    close(fd);
}
