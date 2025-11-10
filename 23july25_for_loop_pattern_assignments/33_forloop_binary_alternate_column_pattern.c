#include <stdio.h>
int main()
{
	int i,x,j,k=0;
	for (i=5,x=1 ; i>=1 ; i--,x++)
	{
		for (j=i,k=1 ; j<=5 ; j++,k++ )
		{
			if (k==2||k==4)
				printf("0  ");
			else 
				printf("1  ");
		}
		printf("\n");
		printf("\n");
	}
}








