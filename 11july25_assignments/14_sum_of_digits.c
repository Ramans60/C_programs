#include <stdio.h>
int main()
{
        int i=0,x,y,a,b=0,c;
        printf("'Sum of the digit'\n Enter a number:");
        scanf("%d",&x);
        while (x!=0)
        {
                a=x%10;
		b=b+a;
                x=x/10;
        }
		printf("Sum of digits: %d\n",b);
}
 
