#include <stdio.h>
int main()
{
	int i=0,x,y=0,z=1;
	printf("Enter a number:");
	scanf("%d",&x);
	x=--x;
	while (i<=x)
	{
		printf("%d\n",++i);
		y=y+i;
		i++;
	}
	printf("sum of odd numbers:%d\n",y);
}

