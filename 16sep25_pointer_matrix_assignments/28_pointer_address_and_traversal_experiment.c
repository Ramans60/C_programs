#include <stdio.h>
int main()
{
    int arr[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,9,3}
                  };
    int i,j;
    int *ptr=&arr[0][0];
    int *ptr1=ptr;
    int *ptr2=ptr;
    printf(" %u \n",ptr);
    printf(" %u \n",ptr1);
    printf(" %u \n",ptr2);
    for (i=0; i<9 ;i++)
    {
        printf(" %u\n",*ptr);
        ptr++;
    }
    printf("\n");
    printf("\n");
    for (i=0; i<9 ;i++)
    {
        printf(" %u\n",*ptr1);
        ptr1++;
    }
    printf("\n");
    printf("\n");
    ptr1--;
    for (i=0; i<9 ;i++)
    {
        printf(" %u\n",*ptr1);
        ptr1--;
    }
    printf("\n");
    printf("\n");
}
