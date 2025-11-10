#include <stdio.h>
int main()
{
    int arr[5]={3,2,7,5,4};
    printf("Sum of the array elements\n");
    int (*ptr)[5]=&arr;
    int *ptr1=(int*)ptr;
    int i,x=0;
    for(i=0; i<5; i++)
    {
        x=x+(*ptr1);
        ptr1++;
    }
    printf("sum = %d\n",x);
}
