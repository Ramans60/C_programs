#include <stdio.h>
int main()
{
	int x,y;
	printf("enter a year:");
	scanf("%d",&x);
	y= x%4 ;
	if (y==0)
		printf("leap year\n");
	else
		printf("not a leap year\n");
}

