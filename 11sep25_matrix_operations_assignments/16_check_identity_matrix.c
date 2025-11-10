#include <stdio.h>
int main()
{
    int arr[10][10];
    int x,y,i,j,k=1,a=0;
    printf("check identity of the matrix\n");
    printf("Enter row count :");
    scanf("%d",&x);
    printf("Enter column count :");
    scanf("%d",&y);
    printf("Enter the matrix elements \n");
    int l=0;
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
            if (i==j&&arr[i][j]==1){
                l++;
            }
        }
    }
    if(l==x){
        printf("Identity matrix\n");
    }
    else
        printf("Not a identity matrix\n");
}
