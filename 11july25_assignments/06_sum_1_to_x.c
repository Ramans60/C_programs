#include <stdio.h>
int main()
{
	int i=1,x,a=0;
	printf("Enter a number:");
	scanf("%d",&x);
	while (i<=x)
	{
		a=a+i;
		printf("%d \n ",i);
		i++;
	}
	printf("%d \n",a);
}
