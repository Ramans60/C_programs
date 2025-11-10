#include <stdio.h>
int main()
{
    int arr[10][10];
    int x,y,i,j,k=1,a=0;
    printf("Sum of The lower matrix\n");
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
    if(i==j&&i==2)
    {
        printf("Determinent of matrix = %d \n",( arr[0][0]*arr[1][1]-arr[1][0]*arr[0][1] ));
    }
    else if(i==j&&i==3)
    {
        a=(arr[0][0]*((arr[1][1]*arr[2][2]-arr[1][2]*arr[2][1]))-arr[0][1]*(arr[1][0]*arr[2][2]-arr[1][2]*arr[2][0])+arr[0][2]*(arr[1][0]*arr[2][1]-arr[1][1]*arr[2][0]));
        printf("Determinent value is %d \n",a);
    }
}
