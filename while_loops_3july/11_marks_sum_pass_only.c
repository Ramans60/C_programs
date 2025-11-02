#include <stdio.h>
int main()
{
	int i=1,x,y=0,z;
	printf("Enter number of subjects:");
	scanf("%d",&x);
	while (i<=x )
	{
		printf("Enter your mark:");
		scanf("%d",&z);
		{
		if (z>=0&&z<=100)
		{
			y=y+z;
			printf("sum:%d\n",y);
		}
		else 
			printf("invalid\n");
		}
		i++;

	}
	printf("Total marks:%d\n",y);
}
