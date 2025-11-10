#include <stdio.h>
int main()
{
    int arr[5]={-3,2,-7,5,-4};
    printf("Print all negative numbers in the array\n");
    int (*ptr)[5]=&arr;
    int (*ptr1)=(int*)ptr,i;
    for (i=0; i<5; i++,ptr1++)
    {
        if(*ptr1<0)
            printf("%d ",*(ptr1));
    }
    printf("\n");
}
