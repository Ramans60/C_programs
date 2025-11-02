#include <stdio.h>
#include <ctype.h>
int main()
{
	char x;
	printf("Enter a char:");
	scanf("%c",&x);
	if (isalpha(x))
		printf("It is a alphabet\n");
	else
		printf("it is not alphabet\n");
}
	
