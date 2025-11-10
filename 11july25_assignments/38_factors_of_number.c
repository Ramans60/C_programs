#include <stdio.h>
int main()
{
	int x,y,i=1;
	printf("FINDING FACTORS OF THE GIVEN NUMBER \n Enter a number:");
	scanf("%d",&x);
	while (i<=x)
	{
		if (x%i==0)
		{
			printf("%d  ",i);
		}
		i++;
	}
}
