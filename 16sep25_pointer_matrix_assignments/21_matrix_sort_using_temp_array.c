#include <stdio.h>
int main()
{
    int arr[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,3,9}
                  };
    int x,y,i,j,k,l;
    int arr1[10][10];
    for (i=0; i<3; i++)
    {
        int *ptr=(int*)arr[i];
        for(j=0; j<3; j++)
        {
            arr1[i][j]=*ptr;
            ptr++;
        }
    }
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            for (k=0; k<3; k++)
            {
                for (l=0; l<3; l++)
                {
                    if( arr1[i][j] > arr1[k][l] )
                    {
                        x = arr1[i][j];
                        arr1[i][j] = arr1[k][l];
                        arr1[k][l] = x;
                    }
                }
            }
        }
    }
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf(" %d\n",arr1[i][j]);
        }
    }
}
