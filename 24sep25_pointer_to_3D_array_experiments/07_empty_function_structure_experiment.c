#include <stdio.h>
void fun(int *a,int b,int c,int d);
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
    int fun(&arr[0][0][0],3,2,2);
}
void fun(int *a,int b,int c,int d)
{
    int i,j,k,l,m,n;
}
