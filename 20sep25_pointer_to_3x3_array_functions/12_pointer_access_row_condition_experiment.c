#include <stdio.h>
int main()
{
    int arr[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,3,9}
                  };
    int i,j,a=0,b=0,c=0;
    int (*ptr)[3][3]=&arr;
    int (*ptr1)[3]=(int(*)[3])ptr;
    for (i=0; i<3; i++)
    {
        int *p=(int*)(ptr1);
        for(j=0; j<3; j++)
        {
            if(i==1&&j==0)
            {
                printf("%d\n",*p);
            }
            /*else if(j==1)
            {
                b=b+*p;
            }
            else if(j==2)
            {
                c=c+*p;
            }*/
            p++;
        }
        ptr1++;
    }
}
