#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int x = 10;
    int y = 20;
    int *ptr1, *ptr2;
    ptr1 = &x;
    ptr2 = &y;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(ptr1, ptr2);
    printf("After swap:  x = %d, y = %d\n", x, y);
}
void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
