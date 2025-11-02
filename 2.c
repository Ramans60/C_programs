#include <stdio.h>
int main()
{
	unsigned char y,a,b;
	y=14;
	int x;
	scanf("%d",&x);
	a=1<<x;
	printf("y:%d\n",y|a);

}
