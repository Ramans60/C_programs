#include <stdio.h>
int main()
{
	int x;
	printf("enter your age:");
	scanf("%d",&x);
	if (18<=x && x<101)
		printf("you are eligible for voting\n");
	else
		printf("you are not eligible for voting\n");
}
