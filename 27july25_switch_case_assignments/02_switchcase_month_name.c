#include <stdio.h>
int main()
{
	int x;
	printf("Enter a number : ");
	scanf("%d",&x);
	switch (x)
	{
		case 1:
			printf("jan\n");
			break;
		case 2:
			printf("feb\n");
			break;
		case 3:
			printf("mar\n");
			break;
		case 4:
			printf("april\n");
			break;
		case 5:
			printf("may\n");
			break;
		case 6:
			printf("june\n");
			break;
		case 7:
			printf("july\n");
			break;
		case 8:
			printf("auguest\n");
			break;
		case 9:
			printf("september\n");
			break;
		case 10:
			printf("october\n");
			break;
		case 11:
			printf("november\n");
			break;
		case 12:
			printf("december\n");
			break;
		default:
			printf("Invalid data\n");
			break;
	}
}
