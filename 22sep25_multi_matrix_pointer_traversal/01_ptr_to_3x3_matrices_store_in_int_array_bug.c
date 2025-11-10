#include <stdio.h>
int main()
{
    int arr1[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,3,9}
                  };
    int arr2[3][3]={
                    {8,7,5},
                    {4,2,3},
                    {1,6,9}
                   };
    int arr3[3][3]={ 
                    {5,7,3},
                    {9,2,8},
                    {1,6,4}
                   };
    int (*ptr1)[3][3]=&arr1;
    int (*ptr2)[3][3]=&arr2;
    int (*ptr3)[3][3]=&arr3;

    int arr4[3]={ptr1,ptr2,ptr3};
}
