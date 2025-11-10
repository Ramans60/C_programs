#include <stdio.h>
int main()
{
    int arr[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,3,9}
                  };
    int i,j,x;
    int *ptr=&arr[0][0];
    for(i=0; i<3; i++)
    {
        x=0;
        for(j=0; j<3; j++)
        {
            x=x+*(ptr);
            ptr++;
        }
        printf("Sum of row = %d\n",x);
    }
}
