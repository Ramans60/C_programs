#include <stdio.h>
void quickSort(int arr[], int l, int h);
int main()
{
    int a[8] = {10, 3, 2, 7, 5, 4, 8, 6};
    int n = 8;
    printf("QUICK SORT\n");
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
void quickSort(int arr[], int l, int h)
{
    if (l < h) {
        int pivot = arr[h], i = l - 1, temp;
        for (int j = l; j < h; j++) {
            if (arr[j] < pivot) {
                i++;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[i + 1];
        arr[i + 1] = arr[h];
        arr[h] = temp;
        int pi = i + 1;
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, h);
    }
}
