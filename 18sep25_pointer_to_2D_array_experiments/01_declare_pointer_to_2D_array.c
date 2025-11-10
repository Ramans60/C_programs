#include <stdio.h>
int main()
{
    int arr[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,3,9}
                  }
    //int i,j;
    int (*ptr)[3][3]=&arr;
}
