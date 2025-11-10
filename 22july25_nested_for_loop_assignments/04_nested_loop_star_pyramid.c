#include <stdio.h>
int main()
{
	int i,x;
	for (i=1;i<=5;i++)
	{
		int k;
		for(k=i;k>=1;k--)
		{
			printf("  %d ",k);
		}
		printf("\n");
	}
}



