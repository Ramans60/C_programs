#include <stdio.h>
int main()
{
    int arr[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,3,9}
                  };
    int i,j,k=1,l,x,y;
    for(i=0; i<3; i++,k++)
    {
        x=*(arr[i]+0);
        for (j=0; j<3; j++)
        {
            if ((*(arr[i]+j))>x)
            {
                x=(*(arr[i]+j));
            }
        }
        printf("Largest element in %d row = %d\n",k,x);
    }
    for(i=0,k=1; i<3; i++,k++)
    {
        y=*(arr[0]+i);
        for (j=0; j<3; j++)
        {
            if ((*(arr[i]+j))>y)
            {
                y=(*(arr[j]+i));
            }
        }
        printf("Largest Element in %d column = %d\n",k,y);
    }
}
