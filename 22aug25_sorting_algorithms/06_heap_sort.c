#include <stdio.h>
int main()
{
    int a[8] = {10, 3, 2, 7, 5, 4, 8, 6}; // HEAP SORT
    int n = 8;
    printf("HEAP SORT\n");
    int i, j, k, largest, l, r, temp;
    for (i = n / 2 - 1; i >= 0; i--)
    {
        j = i;
        while (1)
        {
            largest = j;
            l = 2 * j + 1;
            r = 2 * j + 2;
            if (l < n && a[l] > a[largest])
                largest = l;
            if (r < n && a[r] > a[largest])
                largest = r;
            if (largest != j)
            {
                temp = a[j];
                a[j] = a[largest];
                a[largest] = temp;
                j = largest; // Continue heapifying down
            }
            else
                break;
        }
    }
    for (i = n - 1; i > 0; i--)
    {
        temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        j = 0;
        while (1)
        {
            largest = j;
            l = 2 * j + 1;
            r = 2 * j + 2;
            if (l < i && a[l] > a[largest])
                largest = l;
            if (r < i && a[r] > a[largest])
                largest = r;
            if (largest != j)
            {
                temp = a[j];
                a[j] = a[largest];
                a[largest] = temp;
                j = largest;
            }
            else
                break;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

