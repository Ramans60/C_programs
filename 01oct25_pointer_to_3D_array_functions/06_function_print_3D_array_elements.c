#include <stdio.h>
void fun(int (*ptr)[2]);
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
   int i;
   for(i=0; i<3; i++)
   {
       fun(arr[i]);
   }
}
void fun(int (*ptr)[2])
{
    int i,j;
    int *ptr1=(int*)ptr;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%u\n",*ptr1);
            ptr1++;
        }
        ptr++;
    }
}
