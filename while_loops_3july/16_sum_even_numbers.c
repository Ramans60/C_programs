#include <stdio.h>
int main()
{
	int i=1,x,y=1,z;
	printf("Enter the number:");
	scanf("%d",&x);
	printf("Enter the power value:");
	scanf("%d",&z);
	while (i<=z)
	{
		y=y*x;
		i++;
	}

	printf("power of that value:%d\n",y);
}
