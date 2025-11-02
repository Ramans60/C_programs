#include <stdio.h>
int main()
{
    int x,y,z=0,a,b=0;
    printf("CHECK_Armstrong number or not\n");
    printf("Enter a number:");
    scanf("%d",&x);
    y=x;
    a=x;
    while (a!=0)
    {
        a=a/10;
        b++;
    }
    a=x;
    while (a!=0)
    {
        int d=a%10;
        int p=1;
        int i=0;
        while (i<b)
        {
            p=p*d;
            i++;
        }
        z=z+p;
        a=a/10;
    }
    if (z==y)
        printf("It is Armstrong: %d\n",z);
    else
        printf("It is not Armstrong: %d\n",z);
}

