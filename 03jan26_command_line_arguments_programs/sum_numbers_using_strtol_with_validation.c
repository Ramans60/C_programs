#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int i,sum=0;
    char *end;
    for (i=1; i<argc; i++) {
        long val=strtol(argv[i], &end, 10);
        if (*end != '\0') {
            printf("Invalid input detected: %s\n", argv[i]);
        }
        sum += val;
    }
    printf("sum of the numbers = %d\n", sum);
}
