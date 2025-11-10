#include <stdio.h>
int main()
{
    int arr[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,3,9}
                  };
    int i=0,j=0,x,k;
    for (i=0,k=1; i<3; i++,k++)
    {
        int *ptr=(int*)arr[i];
        x=*ptr;
        for(j=0; j<3; j++)
        {
            if (*ptr>x)
            {
                x=*ptr;
            }
            ptr++;
        }
        printf(" Largest element %d row %d\n",k,x);
    }
    for (i=0,k=1; i<3; i++,k++)
    {
        int *ptr=(int*)arr[i];
        x=*ptr;
        for(j=0; j<3; j++)
        {
            if (*ptr<x)
            {
                x=*ptr;
            }
            ptr++;
        }
        printf(" Smallest element %d row %d\n",k,x);
    }
}
