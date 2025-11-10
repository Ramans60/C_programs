#include <stdio.h>
int main()
{
    int arr[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,3,9}
                  };
    fun(&arr[0][0]);
}
fun(int arr1[ ][ ])
{
    int i,j,k=1,l,x,y;
    for(i=0; i<3; i++,k++)
    {
        x=0,y=0;
        for (j=0; j<3; j++)
        {
            x=x+*(arr1[i]+j);
            y=y+*(arr1[j]+i);
        }
        printf("Sum of %d row = %d\n",k,x);
        printf("Sum of %d column = %d\n",k,y);
    }
}
