#include <stdio.h>
int main()
{
	int i,x,j,k=0;
	for (i=5 ; i>=1 ; i--)
	{
		for (j=i; j<=5 ; j++)
		{
			if (i==2||i==4)
				printf("0  ");
			else 
				printf("1  ");
		}
		printf("\n");
		printf("\n");
	}
}
