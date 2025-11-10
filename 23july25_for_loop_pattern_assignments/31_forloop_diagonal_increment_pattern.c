#include <stdio.h>
int main()
{
	int i,x,j,k=0;
	for (i=1,x=5 ; i<=5 ; i++,x--)
	{
		for (j=i,k=x ; j<=5 ; j++,k++ )
		{
			printf("%d",k);
		}
		printf("\n");
	}
}








