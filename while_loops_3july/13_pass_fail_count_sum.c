#include <stdio.h>
int main()
{
	int i=1,x,y=0,z,a;
	printf("Enter number of subjects:");
	scanf("%d",&x);
	while (i<=x )
	{
		printf("Enter your mark:");
		scanf("%d",&z);
		{
		if (z>=35&&z<=100)
		{
			printf("pass\n");
			y=y+z;
			printf("sum:%d\n",y);
		}
		else 
		{
			printf("fail\n");
			a=a+z;
			printf("sum:%d\n",a);
		}
		}
		i++;

	}
	printf("Total pass marks:%d\n",y);
	printf("Total fail marks:%d\n",a);
}
