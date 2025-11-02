#include <stdio.h>
#include <ctype.h>

int main()
{
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	{
	if (x%2 == 0)
		printf("it is even number\n");
	else  
		printf("it is odd\n");
	}

}

