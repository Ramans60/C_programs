#include <stdio.h>
int main()
{
	unsigned int x;
	int i=1,a;
	printf("OCTAL TO BINARY\nEnter a number: ");
	scanf("%o",&x);
	printf(" %d\n",x);
	while (x!=0)
	{
		a=x%2;
		x=x/2;
		printf("%d",a);
		i++;
	}

}



