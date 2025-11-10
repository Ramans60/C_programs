#include <stdio.h>
int main()
{
    int a[3]={10,11,12};
    int b[3]={21,12,23};
    int c[3]={12,11,10};
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
    int k;
    for (i=0; i<3; i++)
    {
        for(j=0; j<3;j++)
        {
            for(k=0; k<3; k++)
            {
                if (arr[i]==arr[j]&&arr[j]==arr[k])
                {
                    printf("same\n");
                }
                else
                    printf("Not same\n");
            }
        }
    }
}
