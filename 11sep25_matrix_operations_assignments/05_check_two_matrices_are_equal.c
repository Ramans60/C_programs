#include <stdio.h>
int main()
{
    int a,b,c,d,e=1;
    int arr1[10][10];
    int arr2[10][10];
    printf("Enter 1st matrix row count :");
    scanf("%d",&a);
    printf("Enter 1st matrix column count :");
    scanf("%d",&b);
    printf("Enter 2nd matrix row count :");
    scanf("%d",&c);
    printf("Enter 2nd matrix column count :");
    scanf("%d",&d);
    int i,j,k,l;
    l=a*b;
    for(i=0,k=1; i<a; i++)
    {
        for(j=0; j<b; j++,k++)
        {
            printf("%d -value :",k);
            scanf("%d",&arr1[i][j]);
        }
    }
    for (i=0,k=1; i<c; i++)
    {
        for(j=0; j<d; j++,k++)
        {
            printf("%d -value :",k);
            scanf("%d",&arr2[i][j]);
        }
    }
    if(a==c&&b==d)
    {
        for(i=0; i<a; i++)
        {
            for(j=0; j<b; j++)
            {
                if (arr1[i][j]==arr2[i][j])
                {
                    e++;
                }
            }
        }
        if(e==l)
            printf("matrix are equal\n");
    }
    else
        printf("Matrix are Not equal\n");
}
