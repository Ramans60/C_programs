#include <stdio.h>
int main()
{
    int arr[10][10];
    int x,y,a,b,c,i,j,k=1;
    printf("Lower triangular matrix\n");
    printf("Enter row count :");
    scanf("%d",&x);
    printf("Enter column count :");
    scanf("%d",&y);
    printf("\nEnter the matrix elements :\n");
    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++,k++)
        {
            printf("%d -value= ",k);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            if(j>i)
                printf("0 ");
            else
                printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
