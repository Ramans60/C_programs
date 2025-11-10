#include <stdio.h>
void fun(int *a,int b,int c,int d);
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
    int (*ptr)[3][2][2]=&arr;
    int i,j,k;
    int (*ptr1)[3][2]=(int (*)[3][2])ptr;
    int (*ptr2)[3]=(int (*)[3])ptr1;
    for(i=0; i<3; i++)
        for(j=0; j<2; j++)
            for(k=0; k<2; k++)
            {
                printf("%u\n",**ptr2);
                *(ptr2++);
            }
}
