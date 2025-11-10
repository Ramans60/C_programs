#include <stdio.h>
int main()
{
    int arr[10]={3,2,7,5,4,3,2,7,5,4};
    printf("Frequency of the array\n");
    int (*ptr)[10]=&arr;
    int *ptr1=(int*)ptr;
    int i,a[0],j,x;
    for(i=0; i<10; i++)
    {
        a[i]=*ptr1;
        ptr1++;
    }
    for(i=0; i<10; i++)
    {
        int k=0;
        for (j=0; j<10; j++)
            if(a[i]==a[j])
                break;
        if(j!=i)
            continue;
        for (j=0; j<10; j++)
        {
            if(arr[i]==arr[j])
                ++k;
        }
        printf("number = %d Repeat = %d\n",a[i],k);
    }
    printf("\n");
}
