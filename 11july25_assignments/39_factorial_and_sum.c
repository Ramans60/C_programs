#include <stdio.h>
int main()
{
	int i=1,x,y=1,a=0;
	printf("Enter a number:");
	scanf("%d",&x);
	while (i<=x)
	{
		y=y*i;
		a=a+y;
		i++;
	}
	printf("Factorial:%d \n",y);
	printf("sum of fact:%d\n",a);
}

