#include <stdio.h>
int main()
{
	int x,a,b,c,d;
	a=x/365;
	b=x%365;
	c=b/7;
	d=b%7;
	scanf("%d",&x);
	printf("number of days:%d\n",x);
	printf("years:%d\n",a);
	printf("weeks:%d\n",c);
	printf("days:%d\n",d);
}

	


