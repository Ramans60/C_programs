#include <stdio.h>
int main()
{
	int i,x,j,k=0;
	for (i=5,x=1 ; i>=1 ; i--,x++)
	{
		for (j=i,k=x ; j<=5 ; j++,k++ )
		{
			printf("%d",k);
		}
		printf("\n");
	}
}







