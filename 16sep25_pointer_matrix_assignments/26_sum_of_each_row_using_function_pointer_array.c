#include <stdio.h>
void fun(int (*ptr)[3]);
int main()
{
    int arr[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,9,3}
                  };
    int i,j;
    for (i=0; i<3; i++)
        fun(&arr[i]);
}
void fun(int (*ptr)[3])
{
    int *ptr1=(int *)ptr;
    int j,x=0;
    for(j=0; j<3; j++)
    {
        x=x+*ptr1;
        ptr1++;
    }
    printf("Sum of row = %d\n",x);
}
