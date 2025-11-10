#include <stdio.h>
int main()
{
    int arr[10][10];
    int x,y,i,j,k=1;
    printf("Enter row count :");
    scanf("%d",&x);
    printf("Enter column count :");
    scanf("%d",&y);
    printf("\nEnter the matrix elements : \n");
    for(i=0; i<x; i++)
    {
        for (j=0; j<y; j++,k++)
        {
            printf("%d- value = ",k);
            scanf("%d",&arr[i][j]);
        }
    }
    int a=0;
    printf("\nThe sum of upper triangular matrix \n");
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            if(i>j)
                printf(" ");
            else
                a=a+arr[i][j];
        }
    }
    printf("Sum upper triangular matrix is= %d",a);
    printf("\n");
}
