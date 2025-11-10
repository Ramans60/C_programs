#include <stdio.h>
void fun(int *a,int*x);
int main()
{
    int arr[5]={3,2,7,5,4};
    int arr1[4]={11,15,13,12};
    int arr2[3]={6,9,1};
    int i;
    int *ptr=&arr[0];
    fun(&arr[0],)i;
    *ptr=&arr1[0];
    *ptr=&arr2[0];
}
void fun(int *a,int*x)
{
    for (i=0; i<x; i++,ptr++)
    {
        printf("%d %d \n",*ptr,*(&a[i]));
    }
}
