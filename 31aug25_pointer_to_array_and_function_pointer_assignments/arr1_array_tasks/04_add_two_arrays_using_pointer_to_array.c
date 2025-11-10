#include <stdio.h>
int main()
{
    int arr[5]={3,2,7,5,4};
    int arr1[5]={13,12,17,15,14};
    printf("Adding two arrays with use third ARRAY \n");
    int (*ptr0)[5]=&arr;
    int (*ptr1)[5]=&arr1;
    int (*ptr2)=(int*)ptr0;
    int (*ptr3)=(int*)ptr1;
    int i,j,arr2[0];
    for(i=0; i<5; i++,ptr2++)
    {
        arr2[i]=*ptr2;
    }
    for(j=5; j<10; j++,ptr3++)
    {
        arr2[j]=*ptr3;
    }
    for(i=0; i<10; i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");
}
