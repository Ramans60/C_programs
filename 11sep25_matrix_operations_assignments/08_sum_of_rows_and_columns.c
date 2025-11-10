#include <stdio.h>
int main()
{
    int x,y,i,j,k,a=0;
    printf("\nSum of main diagonal element \n");
    printf("Enter row count of the matix :");
    scanf("%d",&x);
    printf("Enter column count of the matix :");
    scanf("%d",&y);
    printf("Enter the matrix elements :\n");
    int arr[x][y];
    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++)
        {
                a=a+arr[i][j];
        }
        printf("Sum of row elements is :%d\n",a);
        printf("Sum of column elements is :%d\n",a);
    }
}
