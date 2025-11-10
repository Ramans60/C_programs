#include <stdio.h>
int main()
{
	int x,y,d,w;
	scanf("%d",&x);
	y=x/365;
	d=x%365;
	w=d/7;
	d=d%7;
	printf("years:%d\n",y);
	printf("weeks:%d\n",w);
	printf("days:%d\n",d);
}
