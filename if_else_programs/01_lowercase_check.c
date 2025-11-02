#include <stdio.h>
int main()
{
	char c;
	printf("enter the character:");
	scanf("%c",&c);
	c>=97 && c<=122 ? printf("Lower case\n"): printf("Invalid char\n");
}


