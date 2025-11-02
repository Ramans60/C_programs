#include <stdio.h>
int main()
{
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	if (x==1)
		printf("sunday\n");
	else if (x==2)
		printf("monday\n");
	else if (x==3)
		printf("tuesday\n");
	else if (x==4)
		printf("wednesday\n");
	else if (x==5)
		printf("thursday\n");
	else if (x==6)
		printf("friday\n");
	else if (x==7)
		printf("saturday\n");
	else 
		printf("invalid char\n");
}
