#include <stdio.h>
int main()
{
	int i,x,j,a,k;
	for (i=1 ; i<=5 ; i++)
	{
		for (j=i ; j<=5 ; j++)
		{
			printf("%d ",j);
		}
		for(j=1,x=5;j<i;j++,x--)
		{
			printf("%d ",x);
		}
		printf("\n");
	}
}

