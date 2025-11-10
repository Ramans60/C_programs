#include <stdio.h>
int main()
{
	int i,x,j,k=0;
	for (i=5 ; i>=1 ; i--)
	{
		for (j=i ; j>=1 ; j-- )
		{
			printf("%d",j);
		}
		printf("\n");
	}
}

