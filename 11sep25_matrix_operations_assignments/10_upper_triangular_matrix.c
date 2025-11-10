#include <stdio.h>
int main()
{
    int arr[10][10];
    int x,y,i,j;
    printf("Upper triangular matrix\n");
    printf("Enter the  row count :");
    scanf("%d",&x);
    printf("Enter the column count :");
    scanf("%d",&y);
    int k=1;
    printf("Enter the matrix elements :\n");
    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++,k++)
        {
            printf("%d -value =",k);
            scanf("%d",&arr[i][j]);
        }
    }
    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++)
        {
            if(i>j){
                printf("0 ");
            }
            else
                printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
