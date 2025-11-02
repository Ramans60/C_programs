#include <stdio.h>
int main()
{
	char c;
	printf("ehter the character:");
	scanf("%c",&c);
	(c>=65 && c<=90) ? printf("it is a upper case:\n") : printf("character invalid\n");
}
