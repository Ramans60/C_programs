#include <stdio.h>
int main()
{
    int x,y,a=1;
    printf("Enter a number:");
    scanf("%d",&x);
    while (x!=0)
    {
        y=x%2;
        if (y==0)
            ++y;
        else
            --y;

        if (a==1)
        {
            if (y==1)
            {
                --y;
                a=1; 
            }
            else
            {
                ++y;
                --a; 
            }
        }
        x=x/2;
        printf("%d %d\n",y,x);
    }
}

