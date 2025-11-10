#include <stdio.h>
int main()
{
    int x=1,y,i,a,z;
    printf("FINDING PERFECT NUMBERS FROM 1 TO n\n Enter a number n:");
    scanf("%d",&z);
    while (x<=z)
    {
        y=x;
        i=0;
        a=0;
        while (++i<x)
        {
            if (x%i==0)
            {
                a=a+i;
            }
        }
        if (a==y)
        {
            printf("%d is a perfect number\n",x);
        }
        x++;
    }
}

