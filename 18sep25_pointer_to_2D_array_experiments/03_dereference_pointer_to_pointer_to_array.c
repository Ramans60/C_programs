#include <stdio.h>
int main()
{
    int arr[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,3,9}
                  };
    int i,j;
    int (*ptr1)[3][3]=&arr;
    int **ptr2=(int**)ptr1;
    for(i=0; i<9; i++)
    {
        printf("%d \n",*(*(ptr2)));
        ptr2++;
        printf("\n");
    }
}
