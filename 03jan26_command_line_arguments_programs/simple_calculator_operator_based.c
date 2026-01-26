#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[ ])
{
	printf("Welcome to simple calculator \n");
	printf("If you entered two values are doing the simple math operations...! \n");
	int i,j,b=argc,x[45];
	for(i=1; i<argc; i++)
	{
		x[i] = atoi(argv[i]); 
	}
	for(i=1,j=2; i<argc,j<b; i++,j++)
	{
		printf("Addition       = %d\n", x[i] + x[j]);
		printf("Subtraction    = %d\n", x[i] - x[j]);
		printf("Multiplication = %d\n", x[i] * x[j]);
		printf("Division       = %d\n", x[i] / x[j]);
		printf("Modulus        = %d\n", x[i] % x[j]);
		printf("\n\n");
	}
}
