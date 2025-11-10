#include <stdio.h>
int main()
{
        int i=0,x,y,a,b=1,c;
        printf("Product of digit of the number\n Enter a number:");
        scanf("%d",&x);
        while (x!=0)
        {
                a=x%10;
                ++i;
                x=x/10;
		b=b*a;
        }
        printf("product of the digits: %d\n",b);
}

