#include <stdio.h>
#include <ctype.h>
int main()
{
	int x;
	printf("Enter a year:");
	scanf("%d",&x);
	if (x<2200&&x>1000&&x%4==0)
		printf("It is a leap year\n");
	else if (x>10&&x<3000)
		printf("It is not leap year\n");
	else
		printf("Invalid INPUT\n");
}

