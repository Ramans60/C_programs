#include <stdio.h>
int main()
{
    int x,y,c;
    printf("FINDING # LCM # OF THE GIVEN NUMBERS\n");
    printf("Enter a number x: ");
    scanf("%d",&x);
    printf("Enter a number y: ");
    scanf("%d",&y);
    if (x>y)
        c=x;
    else
        c=y;
    while (1)
    {
        if (c%x==0&&c%y==0)
        {
            printf("LCM of %d and %d is %d\n",x,y,c);
            break;
        }
        c++;
    }
}

