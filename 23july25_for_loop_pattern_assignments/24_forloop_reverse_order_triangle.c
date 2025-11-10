#include <stdio.h>
int main()
{
	int i,x,j,k=0;
	for (i=1 ; i<=5 ; i++)
	{
		for (j=i ; j>=1 ; j-- )
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
