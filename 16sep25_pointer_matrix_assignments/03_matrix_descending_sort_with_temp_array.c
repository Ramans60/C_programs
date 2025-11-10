#include <stdio.h>
int main()
{
    int arr[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,9,3}
                  };
    int i,j,x;
    int arr1[10];
    int *ptr=&arr[0][0];
    printf("Decending Order \n");
    for(i=0; i<9; i++)
    {
        arr1[i]=*ptr;
        ptr++;
    }
    for(i=0; i<9; i++)
    {
        for(j=0; j<9; j++)
        {
            if(arr1[i]>arr1[j])
            {
                x=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=x;
            }
        }
    }
    for(i=0; i<9; i++)
    {
        printf("%d \n",arr1[i]);
    }
}
