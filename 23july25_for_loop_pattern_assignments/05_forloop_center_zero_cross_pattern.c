#include <stdio.h>
int main()
{
	int i,x,j;
	for (i=1;i<=5;i++)
	{
		for (x=1,j=0 ;  x<=5 ; x++,j++)
		{
			if (i==3&&x==3)
				printf("0");
			else
				printf("1");
		}
	
	printf("\n");
	printf("\n");
	}
}




