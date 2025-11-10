#include <stdio.h>
int main()
{
	int i,x,j,k=0;
	for (i=1 ; i<=10 ; i++)
	{
		for (j=i,k=5 ; j<=10 ; j++,k-- )
		{
			printf("%d ",j);
			j++;
		}
		printf("\n");
		++i;
	}
}
