#include <stdio.h>
int main()
{
    int i,j,k;
    int arr1[3][3]={
                    {8,4,1},
                    {7,2,6},
                    {5,3,9}
                   };
    int arr2[3][3]={
                    {10,11,12},
                    {20,22,24},
                    {31,33,35}
                   };
    int arr3[3][3]={
                    {15,16,17},
                    {27,28,29},
                    {34,36,38}
                   };

    int (*ptr1)[3][3]=&arr1;
    int (*ptr2)[3][3]=&arr2;
    int (*ptr3)[3][3]=&arr3;


    int (*ptr[3])[3][3]={ptr1,ptr2,ptr3};
    int (**ptr4)[3][3]=(int (**)[3][3])ptr;

    for(i=0; i<3; i++)
    {
        int (*ptr5)[3]=(int(*)[ ])*ptr4;
        for(j=0; j<3; j++)
        {
            int *p=(int*)ptr5;
            for(k=0; k<3; k++)
            {
                printf("%u\n",*p);
                p++;
            }
            printf("\n");
            ptr5++;
        }
        ptr4++;
        printf("\n\n\n\n");
    }
}
