#include <stdio.h>
int main()
{
        int i=1,x=0,y=0,z,b=0;
	printf("10 NUMBERS ONLY \n");
        while (i<=10)
        {
		printf("Enter a number:");
		scanf("%d",&x);
		y=x+y;
		i++;
		++b;
        }
	z=y/b;
	printf("sum:%d",y);
	printf("Average:%d",z);
}

