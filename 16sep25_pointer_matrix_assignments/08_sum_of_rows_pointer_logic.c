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
    x=0;
    for (i=0; i<9; i++)
    {
        x=x+*(ptr+i);
        if(i==2||i==5||i==8)
        {
            printf("Sum of the row = %d\n",x);
            x=0;
        }
    }
}
