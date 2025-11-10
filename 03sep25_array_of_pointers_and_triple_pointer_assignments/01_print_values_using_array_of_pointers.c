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
    for(i=0; i<5; i++)
    {
        printf("%d\n",**ptr1);
        **ptr1++;
    }
}
