#include <stdio.h>
int main()
{
	int x,y;
	printf("Enter number x:");
	scanf("%d",&x);
	printf("Enter number y:");
	scanf("%d",&y);
	if (x==y)
		printf("x&y value same\n");
	{
		if (x>y)
			printf("x is greter\n");
		{
			if (x<y) 
				printf("y is greater\n");
			{
				if (x<y)
					printf("x is lesser\n");
				{
					if(x>y)
						printf("y is lesser\n");
				}
			}
		}
	}
}
