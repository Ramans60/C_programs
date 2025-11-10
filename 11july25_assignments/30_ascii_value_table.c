#include <stdio.h>
int main()
{
	char x=127,y,i=1;
	int j=1;
	printf("Ascii value with their characters");
	while (i<x)
	{
		printf("%d   %c\n",j,i);
		i++;
		j++;
	}
}
