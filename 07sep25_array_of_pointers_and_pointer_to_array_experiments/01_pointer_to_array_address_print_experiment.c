#include <stdio.h>
int main()
{
    int a[3]={10,11,12};
    int b[3]={21,22,23};
    int c[3]={31,32,33};
    int (*ptr[3])[3]={&a,&b,&c};
    int **ptr1=(int**)ptr;
    printf("%u %u %u\n",ptr1,*ptr1,*(*ptr1));
}
