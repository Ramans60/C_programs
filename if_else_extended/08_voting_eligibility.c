#include <stdio.h>
int main()
{
	int x;
	printf("Enter your age:");
	scanf("%d",&x);
	if(x>=18&&x<102)
		printf("You are aligible for voting\n");
	else if(0<x&&x<18)
		printf("Not eligible voting\n");
	else
		printf("Invalid INPUT\n");
}
