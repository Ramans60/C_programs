#include <stdio.h>
int main()
{
	int i=1,x,y,a=1;
	printf("CUBE of the number\nEnter a number: ");
	scanf("%d",&x);
	while (i<=3)
	{
		a=x*a;
		i++;
	}
	printf("Cube of the number:%d\n",a);
}
