#include <stdio.h>
int main()
{
    int arr[5]={3,2,7,5,4};
    printf("Sorting array\n");
    int (*ptr)[5]=&arr;
    int *ptr1=(int*)ptr;
    int i,a[0],j,x;
    for(i=0; i<5; i++)
    {
        a[i]=*ptr1;
        ptr1++;
    }
    for(i=0; i<5; i++)
    {
        for (j=i+1; j<5; j++)
        {
            if(a[i]>a[j])
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
    }
    for (i=0; i<5; i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n");
}

