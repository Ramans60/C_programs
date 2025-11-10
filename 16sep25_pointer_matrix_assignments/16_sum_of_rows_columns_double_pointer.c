#include <stdio.h>
int main()
{
    int arr[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,3,9}
                  };
    int i=0,j=0,k,x=0,y=0;
    for(i=0,k=1; i<3; i++,k++)
    {
        x=0,y=0;
        for(j=0; j<3; j++)
        {
            x=x+*(*(arr+i)+j);
            y=y+*(*(arr+j)+i);
        }
        printf("Sum of %d row = %d\n",k,x);
        printf("Sum of %d column = %d\n",k,y);
    }
}
