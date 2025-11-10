#include <stdio.h>
void fun(int *a,int ,int ,int );
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
    fun(&arr[0][0][0],3,2,2);
}
void fun(int *a,int b,int c,int d)
{
    int i,j,k;
    for(i=0; i<b; i++)
    {
        for(j=0; j<c; j++)
        {
            for(k=0; k<d; k++)
            {
                printf("%u \n",*a);
                *a++;
            }
        }
    }
}
