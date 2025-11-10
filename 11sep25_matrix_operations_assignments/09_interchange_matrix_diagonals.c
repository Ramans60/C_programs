#include <stdio.h>
int main()
{
    int x,y,i,j,k=1;
    int arr[10][10];
    printf("Enter row count of the matrix :");
    scanf("%d",&x);
    printf("Enter column count of the matrix :");
    scanf("%d",&y);
    printf("\nEnter the matrix elements :\n");
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++,k++)
        {
            printf("%d -value =",k);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\ninter change diagonals of matrix :\n");
    for(i=0; i<x; i++)
    {
        for(j=3,k=0; j>0,k<x; j--,k++)
        {
            if(i=1)
                printf("%d ",arr[i][k]);
            else
                printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
