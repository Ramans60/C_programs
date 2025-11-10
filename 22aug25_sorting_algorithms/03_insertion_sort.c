#include <stdio.h>
int main()
{
    int i, j, key;
    printf("INSERTION SORT\n");
    int a[5] = {3, 2, 7, 5, 4}; // INSERTION SORT
    for (i = 1; i < 5; i++)
    {
        key = a[i];
        for (j = i - 1; j >= 0 && a[j] > key; j--)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = key;
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
