#include <stdio.h>
int main()
{
	int i=1,x,y=0;
	printf("Enter a number:");
	scanf("%d",&x);
	while (i<=x)
	{
		printf("%d\n",++i);
		y=y+i;
		i++;
	}
	printf("sum of even numbers:%d\n",y);
}
