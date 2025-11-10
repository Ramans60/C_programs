#include <stdio.h>
int main()
{
    int arr[10]={3,2,7,5,4,3,2,7,5,4};
    printf("Frequency of the array\n");
    int (*ptr)[10]=&arr;
    int *ptr1=(int*)ptr;
    int i,a[0],j=0,k=0,x;
    for(i=0; i<10; i++,ptr1++)
    {
        if((*ptr1)%2==0)
            j++;
        else
            k++;
    }
    printf("Even = %d Odd = %d\n",j,k);
}
