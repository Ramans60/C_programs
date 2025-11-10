#include <stdio.h>
void fun(int (*ptr)[3][3]);
int main()
{
    int arr[3][3]={
                   {8,4,1},
                   {7,2,6},
                   {5,3,9}
                  };
    fun(&arr);
}
void fun(int (*ptr)[3][3])
{
    int (*ptr1)[3]=(int (*)[ ])ptr;
    int i,j,a=0,b=0,c=0;
    for(i=0; i<3; i++)
    {
        int *p=(int*)ptr1;
        for(j=0; j<3; j++)
        {
            if(j==0)
            {
                a=a+*p;
            }
            if(j==1)
            {
                b=b+*p;
            }
            else if(j==2)
            {
                c=c+*p;
            }
            p++;
        }
        ptr1++;
    }
    printf("%d\n%d\n%d\n",a,b,c);
}
