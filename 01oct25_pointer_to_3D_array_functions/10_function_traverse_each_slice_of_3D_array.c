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
     int i;
     for(i=0; i<3; i++)
         fun(arr+i);
}
void fun(int (*ptr)[2][2])
{
    int i,j,k;
    int *ptr1=(int *)ptr;
    for (j=0; j<2; j++)
    {
        for (k=0; k<2; k++)
        {
            printf("%d\n",*ptr1);
            ptr1++;
        }
    }
}
