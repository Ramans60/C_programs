#include <stdio.h>
int main()
{
	int i,x;
	i=1;
	printf("Enter a number:");
	scanf("%d",&x);
	while (i<=x)
	{
		printf("%d\n",i);
		i++;
	}
}
