#include <stdio.h>
int main()
{
    int arr1[5]={3,2,7,5,4};
    int arr2[4]={11,15,13,12};
    int *ptr=&arr1[0];
    int i;
    for (i=0; i<9; i++,ptr++)
    {
        printf(" %d \n",*ptr);
    }
}
