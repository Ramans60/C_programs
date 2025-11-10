#include <stdio.h>
int main()
{
    int x,y,i=1,a,r,c,j,z;
    printf("FINDING STRONG NUMBERS FROM 1 TO 100:\n Enter a number: ");
    scanf("%d",&z);
    while (i<=z)
    {
        x=i;
        y=x;
        a=0;
        while (x!=0)
        {
            r=x%10;
            x=x/10;
            c=1;
            j=1;
            while (j<=r)
            {
                c=c*j;
                j++;
            }
            a=a+c;
        }
        if (y==a)
            printf("%d is a strong number\n",y);
        i++;
    }
}

