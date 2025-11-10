#include <stdio.h>
int main()
{
    int arr[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,3,9}
                  };
    int i=0,j=0;
    for (i=0; i<3; i++)
    {
        int x=0;
        int *ptr=(int*)arr[i];
        for(j=0; j<3; j++)
        {
            x=x+*(ptr+j);
        }
        printf("Sum of the row ; %d \n",x);
    }
}
