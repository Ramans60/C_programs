#include <stdio.h>
int main()
{
    int arr[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,3,9}
                  };
    int i,j,k,l,x,y;
    for (i=0,k=1 ;i<3; i++,k++)
    {
        x=*(*(arr+i)+0);
        for (j=0; j<3; j++)
        {
            if( *(*(arr+i)+j) > x )
            {
                x=*(*(arr+i)+j);
            }
        }
        printf("largest element %d row =  %d\n",k,x);
    }
    printf("\n\n");
    for (i=0,k=1 ;i<3; i++,k++)
    {
        x=*(*(arr+i)+0);
        for (j=0; j<3; j++)
        {
            if( *(*(arr+i)+j) < x )
            {
                x=*(*(arr+i)+j);
            }
        }
        printf("Smallest element %d row =  %d\n",k,x);
    }
    printf("\n\n");
    for (i=0,k=1 ;i<3; i++,k++)
    {
        x=*(*(arr+0)+i);
        for (j=0; j<3; j++)
        {
            if( *(*(arr+j)+i) > x )
            {
                x=*(*(arr+j)+i);
            }
        }
        printf("largest element %d Column =  %d\n",k,x);
    }
    printf("\n\n");
    for (i=0,k=1 ;i<3; i++,k++)
    {
        x=*(*(arr+0)+i);
        for (j=0; j<3; j++)
        {
            if( *(*(arr+j)+i) < x )
            {
                x=*(*(arr+j)+i);
            }
        }
        printf("Smallest element %d Column =  %d\n",k,x);
    }
}
