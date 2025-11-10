#include <stdio.h>

int main()
{
    int i = 7, y, a;
    unsigned int x;

    printf("DECIMAL TO HEXADECIMAL\n Enter a number : ");
    scanf("%d", &x);

    printf("Decimal     : %u\n", x);
    printf("Hexadecimal : %o\n", x);

    printf("Binary      : ");
    while (i >= 0) {
        y = (x >> i) & 1;
        printf("%d", y);
        if (i % 3 == 0) printf(" ");
        i--;
    }
    printf("\n");

    return 0;
}

