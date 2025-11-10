#include <stdio.h>
int main()
{
    int arr[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,3,9}
                  };
    int i,j;
    for(i=0; i<3; i++)
    {
        int (*ptr)[3]=(arr+i);
        int *ptr1=(int*)ptr;
        for(j=0; j<3; j++)
        {
            if(j==0)
            {
                printf("%d \n",*ptr1);
            }
            if(j==1)
            {
                printf("%d \n",*ptr1);
            }
            if(j==2)
            {
                printf("%d \n",*ptr1);
            }
            ptr1++;
        }
    }
}
