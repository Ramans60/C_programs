#include <stdio.h>
void fun(int *,int );
int main()
{
    int i,j;
    int arr[5]={3,2,7,5,4};
    int (*ptr)[5]=&arr;
    int *ptr1=(int*)ptr;
    fun(ptr1,5);
}
void fun(int *ptr2,int n)
{
    int i;
    for(i=0; i<5; i++,ptr2++)
    {
        printf("%d ",*ptr2);
    }
}
