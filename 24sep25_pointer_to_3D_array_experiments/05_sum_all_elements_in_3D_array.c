#include <stdio.h>
void fun(int *a,int ,int ,int );
int main()
{
    int arr[3][2][2]={
                       {
                           {3,1},
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
    int i,j,k,x=0;
    for(i=0; i<b; i++){
        for(j=0; j<c; j++){
            for(k=0; k<d; k++){
                x=*a+x;
                a++;
            }
        }
    }
    printf("%d\n",x);
}
