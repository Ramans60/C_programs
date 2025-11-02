#include <stdio.h>
int main()
{
	int i,x;
	printf("Enter a number:");
	scanf("%d",&x);
	i=1;
	while (i<=x)
	{
		printf("%d\n",++i);
		++i;
	}
}

