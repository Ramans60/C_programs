#include <stdio.h>
int main()
{
    int x,y,a,b,c;
    printf("FINDING # GCD # OF THE GIVEN NUMBERS\n");
    printf("Enter a number x: ");
    scanf("%d",&x);
    printf("Enter a number y: ");
    scanf("%d",&y);
    a=x;
    b=y;
    while (x!=y)
    {
        if (x>y)
        {
            x=x-y;
        }
        else
        {
            y=y-x;
        }
    }
    c=x;
    printf("GCD of %d and %d is %d\n",a,b,c);
}

