#include <stdio.h>
int main()
{
	int i,x,j;
	for (i=1;i<=5;i++)
	{
		for (x=1,j=0 ;  x<=5 ; x++,j++)
		{
			if (i==1||i==5)
				printf("1");
			else if (x==1||x==5)
				printf("1");
			else
				printf("0");
		}
	
	printf("\n");
	printf("\n");
	}
}



