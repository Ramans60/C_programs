#include <stdio.h>
int main()
{
    int x,y,i,j,k,a=0;
    printf("\nSum of minor diagonal element \nOnly able to find square matrix\n");
    printf("Enter row count of the matix :");
    scanf("%d",&x);
    printf("Enter the matrix elements :\n");
    int arr[x][y];
    for (i=0,k=1; i<x; i++)
    {
        for (j=0; j<x; j++,k++)
        {
            printf("%d- value =",k);
            scanf("%d",&arr[i][j]);
        }
    }
    for (i=0; i<x; i++)
    {
        for (j=0; j<x; j++)
        {
            if (i==x||i==j||j==x)
                a=a+arr[i][j];
        }
    }
    printf("Sum of main diagonal elements is :%d\n",a);
}


