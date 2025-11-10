#include <stdio.h>
void fun(int *ptr);
int main()
{
    int arr[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,3,9}
                  };
    fun(&arr[0][0]);
}
void fun(int *ptr)
{
    int i,j,x;
    for (i=0; i<3; i++)
    {
        x=0;
        for (j=0; j<3; j++)
        {
                x=x+*(ptr);
                ptr++;
        }
        printf("Sum of the row = %d\n",x);
    }
}
