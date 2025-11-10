#include <stdio.h>
int main()
{
        int i=1,x=9,a=0,b,z=0;
        printf("## STAR pattern ##\n");
        while (i<=x)
        {
                z=z*10+1;
                a=a+z;
                printf("%d %d\n",z,a);
                i++;
        }
}

