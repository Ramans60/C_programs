#include <stdio.h>
void fun(int *a,int ,int ,int );
int main()
{
    int arr[3][2][2]={
                        {
                            {3,1},
                            {1,9}
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
    int i,j,k,l,m,n;
    for(i=0; i<3; i++)
        for(j=0)
            for()
                for()
                    for()
}
