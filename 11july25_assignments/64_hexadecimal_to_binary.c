#include <stdio.h>
int main()
{
	unsigned int x;
	int i=1,a;
	printf("HEXADECIMAL TO BINARY\nEnter a number: ");
	scanf("%x",&x);
	printf(" %d\n",x);
	while (x!=0)
	{
		a=x%2;
		x=x/2;
		printf("%d",a);
		i++;
	}

}


