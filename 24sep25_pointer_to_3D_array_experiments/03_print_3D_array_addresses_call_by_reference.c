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
                           {10,11},
                           {12,5}
                       }
                     };
     int i,j,k;
     for (i=0; i<3; i++)
         for (j=0; j<2; j++)
             for (k=0; k<2; k++)
                 fun(&arr[i][j][k]);
}
fun(int *a)
{
    printf("%u  %u\n",a,*a);
}
