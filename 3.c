#include <stdio.h>
int main()
{
	unsigned char y,a,b;
	y=10;
	int x;
	scanf("%d",&x);
	a=1<<x;
	printf("%d\n",y^a);

}
