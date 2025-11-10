#include <stdio.h>
void fun(int **);
int main()
{
    int a[3]={10,11,12};
    int b[3]={21,22,23};
    int c[3]={31,32,33};
    int *arr[3];
    int **ptr;
    arr[0]=&a[0];
    arr[1]=&b[0];
    arr[2]=&c[0];
    fun(&arr[0]);
}
void fun(int **ptr)
{
    int i,j;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d\n",*((*ptr)+j));
            //(*ptr)++;
        }
        ptr++;
    }
}
