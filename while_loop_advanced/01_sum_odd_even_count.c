#include <stdio.h>
int main()
{
        int i=0,x,y=0,z=0,a=0,b=0;
        printf("Enter a number:");
        scanf("%d",&x);
        {
		x=--x;
        while (i<=x)
        {
                printf("%d\n",++i);
                y=y+i;
                i++;
		a++;
        }
        printf("sum of odd numbers:%d\n",y);
	printf("Odd numbers count%d\n",a);
        }
        i=1;
        while (i<=x)
        {
                printf("%d\n",++i);
                z=z+i;
                ++i;
		b++;
        }
        printf("sum of even numbers:%d\n",z);
	printf("Even numbers count%d\n",b);

}

