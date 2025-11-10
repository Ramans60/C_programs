#include <stdio.h>
void fun(int *, int );
int main()
{
    int arr[10]={3,2,7,5,4,3,3,2,7,7};
    printf("Finding frequency of the number in the array\n");
    int (*ptr)[10]=&arr;
    int (*ptr1)=(int*)ptr;
    fun(ptr1,10);
}
void fun(int *ptr2,int n)
{
    int i,j,k,x,arr[0];
    for(i=0; i<10; i++,ptr2++)
    {
        arr[i]=*ptr2;
    }
    for(i=0; i<10; i++)
    {
        k=0;
        for (j=0; j<10; j++)
        {
            if(arr[i]==arr[j])
                break;
        }
        if (i!=j){
            continue;
        }
        for (j=0; j<10; j++)
        {
            if (arr[i]==arr[j])
            {
                ++k;
            }
        }
        printf("Number = %d Repeating = %d\n",arr[i],k);
    }
    printf("\n");
}
