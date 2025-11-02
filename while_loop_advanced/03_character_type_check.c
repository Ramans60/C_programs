#include <stdio.h>
#include <ctype.h>
int main()
{
	char x;
	printf("Enter:");
	scanf("%c",&x);
	if (isalpha(x))
	{
		if (islower(x))
		{
			printf("It is alphabet\n");
			printf("It is lowercase\n");
		}
		else if(isupper(x))
		{
			printf("It is alphabet\n");
			printf("It is uppercase\n");
		}

	}
	else if (isblank(x))
		printf("it is space/blank\n");
	else if (isdigit(x))
		printf("It is digit\n");
	else if (isxdigit(x))
		printf("It is hexa decimal\n");
}

