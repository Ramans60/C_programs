#include <stdio.h>
int main()
{
	int i=1,x,a=1,y;
	printf("Multiplicatiohn table       Enter a number: ");
	scanf("%d",&x);
	y=x;
	while (i<=15)
	{
		a=x*i;
		printf("%dx%d=%d\n",i,y,a);
		i++;
	}
}

