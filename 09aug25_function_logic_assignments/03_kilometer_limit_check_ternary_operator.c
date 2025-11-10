#include <stdio.h>
int km(int a);
int main()
{
	int x;
	scanf("%d",&x);
	int b=km(x);
	printf("km=%d\n",b);
}
int km(int a)
{
	return (a<0) ? 0:(a>=120) ? 120 : a ;
}

