#include <stdio.h>
int main()
{
	int x;
	printf("Enter the Temperature:");
	scanf("%d",&x);
	if (x<0)
		printf("freezing temperature\n");
	else if (x<=10)
		printf("very cold\n");
	else if (x<=20)
		printf("cold Temprature\n");
	else if (x<=30)
		printf("Normal weather\n");
	else if (x<40)
		printf("It's hot\n");
	else if (x>=40)
		printf("It's very hot\n");
	else
		printf("Invalid INPUT\n");
}
