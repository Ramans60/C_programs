#include <stdio.h>
int main()
{
	int i,j;
	i=3;
	while (i>0)
	{
		j=3;
		while (j>0)
		{
		printf("%d %d\n",i,j);
		j--;
		}
		i--;
	}
	printf("%d %d\n",i,j);
}
