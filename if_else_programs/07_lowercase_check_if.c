#include <stdio.h>
int main()
{
	char x;
	printf("enter the char:");
	scanf("%c",&x);
	if(x>=97 && x<=122)
		printf("lower case\n");
	else 
		printf("invalid\n");
}
