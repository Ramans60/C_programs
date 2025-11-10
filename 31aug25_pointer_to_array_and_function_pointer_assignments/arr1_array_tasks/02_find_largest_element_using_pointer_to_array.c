#include <stdio.h>
int main()
{
    int arr[5]={3,2,7,5,4};
    printf("Finding Largest element in the array\n\n");
    int (*ptr)[5]=&arr;
    int (*ptr1)=(int*)ptr;
    int i;
    int x=*ptr1;
    for (i=0; i<5; i++)
    {
        if(*ptr1>x)
        {
            x=*ptr1;
        }
        ptr1++;
    }
    printf("Largest element in the array = %d \n",x);
}
