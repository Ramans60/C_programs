#include <stdio.h>
int main()
{
	int x,y,i=0,a=0;
	printf("FINDING PERFECT NUMBER \n Enter a number:");
	scanf("%d",&x);
	y=x;
	while (++i<=x)
	{
		if (x%i==0&&i<x)
		{
			printf("%d  ",i);
			a=a+i;
		}
	}
	if(y==a)
		printf("It is a perfect number \n%d",a);
	else
		printf("It is not perfect number \n%d",a);
}

