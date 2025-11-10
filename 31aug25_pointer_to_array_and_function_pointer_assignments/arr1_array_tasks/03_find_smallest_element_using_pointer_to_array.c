#include <stdio.h>
int main()
{
    int arr[5]={3,2,7,5,4};
    printf("Finding smallest element in the array\n\n");
    int(*ptr)[5]=&arr;
    int (*ptr1)=(int*)ptr;
    int  i,x;
    x=*ptr1;
    for (i=0; i<5; i++,ptr1++)
    {
        if (*ptr1<x)
        {
            x=(*ptr1);
        }
    }
    printf("Smallest number in the array = %d\n",x);
}
