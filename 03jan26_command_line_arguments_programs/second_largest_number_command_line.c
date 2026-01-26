#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[ ])
{
	int i,j,a[45];
	for(i=1; i<argc; i++)
	{
		a[i] = atoi(argv[i]); 
	}
	int y,x=a[1];
	for(i=1; i<argc; i++)
	{
		for(j=1; j<argc; j++)
		{
			if (a[i] > x)
			{
				y = x;
				x = a[i];
			}
			else if (a[i] < x && a[i] >y)
			{
				y = a[i];
			}
		}
	}
	printf("Second largest number = %d\n", y);

}
