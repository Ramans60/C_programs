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
	if(a<0)
		return 0;
	else if(a>=120)
		return 120;
	else
		return a;
}
