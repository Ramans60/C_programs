#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[ ])
{
	int i,j=0,x[45];
	for(i=1; i<argc; i++)
	{
		x[i] = strtol(argv[i], NULL, 10);
	}
	for(i=1; i<argc; i++)
	{
		j=j+x[i];
	}
	printf("sum of the numbers = %d\n", j);
}
