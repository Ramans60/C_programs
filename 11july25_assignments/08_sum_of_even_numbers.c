#include <stdio.h>
int main()
{
	int i=1,x,a=0;
	printf("Sum of EVEN numbers     Enter a number:");
	scanf("%d",&x);
	while (i<=x)
	{
		++i;
		printf("%d\n",i);
		a=a+i;
		i++;
	}
	printf("%d",a);
}

