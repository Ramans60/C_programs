#include <stdio.h>
int main()
{
    int arr[3][3]={ 
                    {8,4,1},
                    {7,2,6},
                    {5,3,9}
                  };
    int i,j,x;
    int (*ptr)[3][3]=&arr;
    int *ptr1=(int*)ptr;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d ",*(ptr1+i+j));
        }
    }
}
