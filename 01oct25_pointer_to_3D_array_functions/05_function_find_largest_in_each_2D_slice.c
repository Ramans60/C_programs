#include <stdio.h>
void fun(int (*ptr)[2],int a);
int main()
{
    int arr[3][2][2]={
                        {
                            {1,3},
                            {7,9}
                        },                        
                        {
                            {2,8},
                            {6,4}
                        },
                        {
                            {10,11},
                            {12,5}
                        }
                     };
    int i,x;
    x=arr[0][0][0];
    for (i=0; i<3; i++)
        fun(arr[i],x);
}
void fun(int (*ptr)[2],int a)
{
    int i,j,k,x=a;
    for (i=0; i<2; i++)
    {
        int *ptr1=(int *)ptr;
        for(j=0; j<2; j++)
        {
            if(a<*ptr1)
            {
                a=*ptr1;
            }
            ptr1++;
        }
        ptr++;
    }
    printf("Largest element in the array = %u\n",a);
}
