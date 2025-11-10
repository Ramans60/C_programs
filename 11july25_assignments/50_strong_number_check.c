#include <stdio.h>
int main()
{
    int x,y,i=0,a=0,r,c,j;
    printf("FINDING STRONG NUMBER\n Enter a number: ");
    scanf("%d",&x);
    y=x;
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
        printf("It is a strong number\n");
    else
        printf("It is not a strong number\n");
}

