#include <stdio.h>
int main()
{
	char x;
	scanf("%c",&x);
	if (x>=65 && x<=90)
		printf("upper case\n");
	else 
		printf("invalid\n");
}
