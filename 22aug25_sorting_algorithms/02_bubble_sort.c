#include <stdio.h>
int main()
{
	int i, j, x;
	printf("BUBBLE SORT\n");
	int a[5] = {3, 2, 7, 5, 4};
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 4 - i; j++) // BUBBLE SORT
		{
			if (a[j] > a[j + 1]) 
			{
				x = a[j];
				a[j] = a[j + 1];
				a[j + 1] = x;
			}
		}
	}
	for(i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
