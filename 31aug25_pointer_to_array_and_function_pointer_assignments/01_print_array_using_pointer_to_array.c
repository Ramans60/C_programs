#include <stdio.h>
int main()
{
    int i,j;
    int arr[5]={3,2,7,5,4};
    int (*ptr)[5]=&arr;
    int *ptr1=(int*)ptr;
    //printf("%u %u %u %u\n",&arr[0],&arr,ptr,ptr1);
    for(i=0; i<5; i++)
    {
        printf("%d ",*ptr1);
        ptr1++;
    }
}
