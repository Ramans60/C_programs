#include <stdio.h>
int main()
{
	int x,y=1,z,i=1;
	printf("Enter a  number:");
	scanf("%d",&x);
	while (i<=10)
	{
		y=i*x;
		printf("%dx%d=%d\n",i,x,y);
		i++;
	}
}
