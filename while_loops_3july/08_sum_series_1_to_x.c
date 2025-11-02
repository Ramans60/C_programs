#include <stdio.h>
int main()
{
	int i,x,y,z;
	i=0;
	printf("Enter a number:");
	scanf("%d",&x);
	while (i<x)
	{
		i++;
		y=(i*(i+1)/2);
		printf("%d\n",y);
	}
}
