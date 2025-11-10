#include <stdio.h>
int main()
{   
    int x,y,z; 
    printf("Matrix multiplication\n");
    printf("Enter 1st matrix row count: ");
    scanf("%d",&x);
    printf("Enter 1st matrix column count: ");
    scanf("%d",&y);
    printf("Enter 2st matrix column count: ");
    scanf("%d",&z);
    int arr1[x][y];
    int arr2[x][y];
    int arr3[x][y];
    int i,j,k;
    printf("\nEnter elements of 1st matrix:\n");
    for (i=0, k=1; i<x; i++)
    {
        for (j=0; j<y; j++,k++) 
        {
            printf("%d-value: ",k);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nEnter elements of 2nd matrix:\n");
    for (i=0, k=1; i<y; i++) 
    {
        for (j=0; j<z; j++,k++) 
        {
            printf("%d-value: ",k);
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0; i<x; i++)
    {
        for(j=0; j<z; j++)
        {
            arr3[i][j]=0;
        }
    }
    for(i=0; i<x; i++)
    {
        for(j=0; j<z; j++)
        {
            for(k=0; k<y; k++)
            {
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf("\nMultiplication of two matrices:\n");
    for (i=0; i<x; i++) 
    {
        for (j=0; j<z; j++) 
        {
            printf("%d   ",arr3[i][j]);
        }
        printf("\n");
        printf("\n");
    }
}
