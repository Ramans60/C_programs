#include <stdio.h>
int main()
{
    int arr[10][10];
    int x,y,i,j,k=1,a=0;
    printf("check it was a sparse matrix\n");
    printf("Enter row count :");
    scanf("%d",&x);
    printf("Enter column count :");
    scanf("%d",&y);
    printf("Enter the matrix elements \n");
    int z=x*y,l=0;
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
            if (arr[i][j]==arr[j][i])
            {
                l++;
            }
        }
    }
    if(l==z)
    {
        printf("Sparse matrix\n");
    }
    else
        printf("Not a Sparse  matrix\n");
}

