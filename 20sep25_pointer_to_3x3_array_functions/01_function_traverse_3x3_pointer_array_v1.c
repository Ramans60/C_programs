#include <stdio.h>
void fun(int (*ptr)[3][3]);
int main()
{
    int arr[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,3,9}
                  };
    fun(&arr);
}
void fun(int (*ptr)[3][3])
{
    int i,j;
    int (*ptr1)[3]=(int (*)[ ])ptr;
    for (i=0; i<3; i++)
    {
        int *p=(int*)ptr1;
        for(j=0; j<3; j++)
        {
            printf("%u\n",*p);
            p++;
        }
        ptr1++;
    }
}
