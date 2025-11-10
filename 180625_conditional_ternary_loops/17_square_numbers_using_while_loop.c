#include <stdio.h>
int main()
{
    int i = 0, x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    while (i < x)
    {
        i++;
        y = i * i;
        printf("%d\n", y);
    }
}

