#include <stdio.h>
int main()
{
	int i=1,x,y=0,z;
	printf("Enter how many numbers wants to add:");
	scanf("%d",&x);
	while(i<=x)
	{
		scanf("%d",&z);
		y=y+z;
		i++;
	}
	printf("sum:%d\n",y);
}
