#include <stdio.h>
void fun(int (*ptr)[2][2]);
int main()
{
    int arr[3][2][2]={
                       {
                           {1,3},
                           {7,9}
                       },
                       {
                           {2,8},
                           {6,4}
                       },
                       {
                           {10,11},
                           {12,5}
                       }
                    };
     int i,j,k;
     int (*ptr3)[3][2][2]=&arr;
     int (*ptr)[2][2] = (int(*)ptr3);
   /* int *ptr1=(int *)ptr;
    for (j=0; j<2; j++)
    {
        for (k=0; k<2; k++)
        {
            printf("%d\n",*ptr1);
            ptr1++;
        }
    }*/
}
