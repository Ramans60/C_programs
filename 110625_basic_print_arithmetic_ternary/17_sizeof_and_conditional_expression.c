#include <stdio.h>
int main()
{
	int x,a=0;
	x=sizeof(a++)?printf("geeks for geeks\n"):0;
	printf("value of x:%d\n",x);
	printf("value of a:%d",a);
	return 0;
}
