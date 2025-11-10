#include <stdio.h>
int main()
{
    int a[3]={10,11,12};
    int b[3]={21,22,23};
    int c[3]={31,32,33};
    int *arr[3]={&a[0],&b[0],&c[0]};
    int **ptr;
    ptr=&arr[0];
    int i,j;
    int a1[0],b1[0],c1[0];
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            if (i==0)
            {
                a1[j]=**ptr;
            }
            else if(i==1)
            {
                b1[j]=**ptr;
            }
            else if(i==2)
            {
                c1[j]=**ptr;
            }
            (*ptr)++;
        }
        ptr++;
    }
    for (i=0; i<3; i++)
    {
        printf("a=%d b=%d c=%d\n",a1[i],b1[i],c1[i]);
    }
}
