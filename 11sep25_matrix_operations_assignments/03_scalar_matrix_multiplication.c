#include <stdio.h>
int main()
{   
    int x,y; 
    printf("Scalar matrix multiplication\n");
    printf("Enter matrix row count: ");
    scanf("%d",&x);
    printf("Enter matrix column count: ");
    scanf("%d",&y);
    int arr1[x][y];
    int i,j,k,a;
    printf("\nEnter a scalar element :");
    scanf("%d",&a);
    printf("\nEnter elements of 1st matrix:\n");
    for (i=0, k=1; i<x; i++)
    {
        for (j=0; j<y; j++,k++) 
        {
            printf("%d-value: ",k);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nScalar matrix multiplication:\n");
    for (i=0; i<x; i++) 
    {
        for (j=0; j<y; j++) 
        {
            printf("%d  ",(arr1[i][j]*a));
        }
        printf("\n");
        printf("\n");
    }
}
