#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = open("a.txt", O_CREAT | O_WRONLY, 0644);
    write(fd, "HELLO", 5);
    close(fd);
}
