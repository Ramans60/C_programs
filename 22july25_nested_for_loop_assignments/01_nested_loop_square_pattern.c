#include <stdio.h>
int main()
{
	int i,x,a=0,j=1;
	printf("Fibanaocci series\n Enter a number :");
	scanf("%d",&x);
	for (i=1 ; ++i<=x ; a=a+j,j=a-j)
	{
		printf(" %d \n",a);

	}
}

