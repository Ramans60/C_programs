#include <stdio.h>
int main()
{
    int i,j;
    int arr[5]={3,2,7,5,4};
    int (*ptr)[5]=&arr;
    int *ptr1=(int*)ptr;
    fun( *ptr1);
}
fun(int *b)
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("%d ",*b);
    }
}
