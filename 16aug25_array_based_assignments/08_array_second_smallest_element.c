#include <stdio.h>
int main()
{
    int arr[5] = {3, 2, 7, 5, 4};
    fun(&arr[0]);
}

fun(int a[])
{
    int i, first = a[0], second = a[0];

    for (i = 1; i < 5; i++)
    {
        if (a[i] > first)
        {
            second = first;
            first = a[i];
        }
        else if (a[i] > second && a[i] < first)
        {
            second = a[i];
        }
    }

    printf("2nd largest element = %d\n", second);
}
