#include <stdio.h>
int main()
{
	int i,x,j,k=0;
	for (i=1 ; i<=5 ; i++)
	{
		for (j=i,k=5 ; j<=5 ; j++,k-- )
		{
			printf("%d",j);
		}
		printf("\n");
	}
}





