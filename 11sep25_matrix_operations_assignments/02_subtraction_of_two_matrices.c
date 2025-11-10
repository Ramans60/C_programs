#include <stdio.h>
int main()
{   
    int x,y; 
    printf("Subtract two matrices\n");
    printf("Enter 1st matrix row count: ");
    scanf("%d",&x);
    printf("Enter 1st matrix column count: ");
    scanf("%d",&y);
    int arr1[x][y];
    int arr2[x][y];
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
    for (i=0, k=1; i<x; i++) 
    {
        for (j=0; j<y; j++,k++) 
        {
            printf("%d-value: ",k);
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\nSubtraction of the two matrices:\n");
    for (i=0; i<x; i++) 
    {
        for (j=0; j<y; j++) 
        {
            printf("%d  ",(arr1[i][j]-arr2[i][j]));
        }
        printf("\n");
        printf("\n");
    }
}
