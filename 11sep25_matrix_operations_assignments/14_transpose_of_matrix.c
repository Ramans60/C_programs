#include <stdio.h>
int main()
{
    int arr[10][10];
    int x,y,i,j,k=1,a=0;
    printf("transpose of The lower matrix\n");
    printf("Enter row count :");
    scanf("%d",&x);
    printf("Enter column count :");
    scanf("%d",&y);
    printf("Enter the matrix elements \n");
    for(i=0;i<x; i++)
    {
        for(j=0; j<y ; j++,k++)
        {
            printf("%d -value = ",k);
            scanf("%d",&arr[i][j]);
        }
    }
    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}

