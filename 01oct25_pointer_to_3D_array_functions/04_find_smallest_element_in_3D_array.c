#include <stdio.h>
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
                           {11,10},
                           {12,5}
                       }
                    };             
    int i,j,k,x;
    x=arr[0][0][0];
    for (i=0; i<3; i++)
    {
        int (*ptr)[2]=arr[i];
        int *ptr1 = (int*)ptr;
        for (j=0; j<2; j++)
        {
             for (k=0; k<2; k++)
             {
                 if(x>*ptr1)
                 {
                     x=*ptr1;
                 }
                 ptr1++;
             }
             ptr++;
        }
    }
    printf("Smallest element in the array = %d\n",x);
}
