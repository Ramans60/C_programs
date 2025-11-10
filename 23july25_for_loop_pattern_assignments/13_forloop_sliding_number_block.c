#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = i; j < i + 5; j++) {
            printf("%d", j);
        }
        printf("\n");  // Move to the next line after each group
    }
}
