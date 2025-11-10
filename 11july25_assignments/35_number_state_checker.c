#include <stdio.h>
int main()
{
	int i=1,j=0,x,a;
	printf("State of the number\n Enter a number: ");
	while(1)
	{
		scanf("%d",&x);
		if (x==0)
		{
			printf("Zero\n");
			continue;
		}
		else if (x>0)
		{
			printf("Positive number\n");
			continue;
		}
		else if (x<0)
		{
			printf("Negative number\n");
			continue;
		}
		else
		{
			break;
		}
	}
}


