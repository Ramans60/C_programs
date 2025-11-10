#include <stdio.h>
int main()
{
    int arr[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,3,9}
                  };
    int i=0,j=0,x;
    for (i=0; i<3; i++)
    {
        x=0;
        int (*ptr)[3]=&arr[i];
        int *ptr1=(int*)ptr;
        for(j=0; j<3; j++)
        {
            x=x+*ptr1;
            ptr1++;
        }
        printf("Sum of = %d\n",x);
    }
}
