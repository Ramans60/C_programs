#include <stdio.h>
int main()
{
    int n, i = 0, num, sum = 0;

    printf("How many numbers to add? ");
    scanf("%d", &n);

    while (i < n)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        sum = sum + num;
        i++;
    }

    printf("Total sum = %d\n", sum);
    return 0;
}
