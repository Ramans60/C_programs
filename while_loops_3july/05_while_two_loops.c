#include <stdio.h>
int main()
{
	int i,j,x;
	i=1;
	j=1;
	printf("Enter a number:");
	scanf("%d",&x);
	{
	while (i<=x)
	{
		printf("%d\n",++i);
		++i;
	}
	while (j<=x)
	{
		printf("%d\n",j--);
		j--;
	}
	}
}
