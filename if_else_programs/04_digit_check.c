#include <stdio.h>
int main()
{
	char x;
	printf("enter the number:");
	scanf("%c",&x);
	if (x>=48 && x<=57) 
		printf("it is numerical value\n");
	else 
		printf("it is invalid\n");
}
