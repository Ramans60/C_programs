#include <stdio.h>
int main()
{
    int arr[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,3,9}
                  };
    int i=0,j=0,x=0,k;
    for (i=0,k=1; i<3; i++,k++)
    {
        int *ptr=(int*)arr[i];
        x=0;
        for(j=0; j<3; j++)
        {
            x=x+*ptr;
            ptr++;
        }
        printf("Sum of %d row %d\n",k,x);
    }
}
