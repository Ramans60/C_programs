#include <stdio.h>
int main()
{
    int *ptr[5];
    int a=10,b=20,c=30,d=40,e=50;
    ptr[0]=&a;
    ptr[1]=&b;
    ptr[2]=&c;
    ptr[3]=&d;
    ptr[4]=&e;
    int **ptr1=&ptr[0];
    int i;
    int (**ptr2)[5]=&ptr;
    int *ptr3=(int*)**ptr2;
    printf("%u \n",&a);
    printf("%u \n",*(&ptr3));
}
